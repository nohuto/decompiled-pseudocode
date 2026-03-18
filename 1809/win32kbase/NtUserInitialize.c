/*
 * XREFs of NtUserInitialize @ 0x1C006B340
 * Callers:
 *     <none>
 * Callees:
 *     InitializeGreCSRSS @ 0x1C00614F8 (InitializeGreCSRSS.c)
 *     ?UserInitialize@@YAJXZ @ 0x1C006B700 (-UserInitialize@@YAJXZ.c)
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1C00A84A4 (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 *     InitializePowerRequestList @ 0x1C021C6AC (InitializePowerRequestList.c)
 */

__int64 __fastcall NtUserInitialize(HANDLE Handle, __int64 a2)
{
  __int64 BugCheckParameter4; // rbx
  __int64 result; // rax
  __int64 ProcessWin32Process; // rax
  __int64 v7; // rax
  unsigned int v8; // ebx

  if ( gpepCSRSS )
    return 3221225473LL;
  BugCheckParameter4 = PsGetCurrentProcess(Handle);
  if ( (int)IsVerifyTcbPrivilegesSupported() >= 0 && !(unsigned __int8)VerifyTcbPrivileges() )
    KeBugCheckEx(0x91u, 0LL, 0LL, 0LL, BugCheckParameter4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&gpepCSRSS, BugCheckParameter4, 0LL) )
    return 3221225473LL;
  ObfReferenceObject(gpepCSRSS);
  result = InitializePowerRequestList(Handle);
  if ( (int)result >= 0 )
  {
    if ( (int)IsInitializeMediaChangeSupported() < 0 || (result = InitializeMediaChange(a2), (int)result >= 0) )
    {
      LOBYTE(WPP_MAIN_CB.DeviceQueue.Type) = 0;
      if ( InitializeGreCSRSS() )
      {
        ProcessWin32Process = PsGetProcessWin32Process(gpepCSRSS);
        *(_DWORD *)(ProcessWin32Process + 12) |= 0x40010u;
        v7 = PsGetProcessWin32Process(gpepCSRSS);
        *(_DWORD *)(v7 + 820) |= 0x200000u;
        *(_DWORD *)(PsGetProcessWin32Process(gpepCSRSS) + 280) = 18;
        v8 = UserInitialize();
        wil_details_FeaturePropertyCache_ReportUsageToService(
          (unsigned int)&Feature_InputVirtualization__private_propertyCache,
          16291462,
          (unsigned int)&unk_1C01933C8,
          0,
          3);
        return v8;
      }
      return 3221225473LL;
    }
  }
  return result;
}
