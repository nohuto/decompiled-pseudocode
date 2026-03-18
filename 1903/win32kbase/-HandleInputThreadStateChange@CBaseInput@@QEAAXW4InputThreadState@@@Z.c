/*
 * XREFs of ?HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z @ 0x1C009D6D4
 * Callers:
 *     UserActivateMITInputProcessing @ 0x1C009D3C8 (UserActivateMITInputProcessing.c)
 *     UserDeactivateMITInputProcessing @ 0x1C009D510 (UserDeactivateMITInputProcessing.c)
 * Callees:
 *     RimInputTypeToDeviceInputType @ 0x1C0068DFC (RimInputTypeToDeviceInputType.c)
 *     ?ForwardPnpNotificationToISM@CBaseInput@@CAXW4_KnownRIMDeviceKind@@PEBUDEVICEINFO@@QEAXK@Z @ 0x1C009D87C (-ForwardPnpNotificationToISM@CBaseInput@@CAXW4_KnownRIMDeviceKind@@PEBUDEVICEINFO@@QEAXK@Z.c)
 *     GetKnownRIMDeviceKind @ 0x1C009DAC4 (GetKnownRIMDeviceKind.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CBaseInput::HandleInputThreadStateChange(int *a1, int a2)
{
  CInputThread *v2; // rsi
  unsigned int CurrentThreadId; // eax
  int v6; // ebx
  unsigned int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // eax
  struct RIMDEV *v12; // rbx
  int v13; // edi
  __int64 result; // rax
  unsigned int KnownRIMDeviceKind; // eax

  v2 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v2, 0LL);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v6 = *((_DWORD *)v2 + 10);
  v7 = CurrentThreadId;
  ExReleasePushLockSharedEx(v2, 0LL);
  KeLeaveCriticalRegion();
  if ( v7 != v6 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
  if ( a2 )
  {
    if ( a2 != 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
    result = (*(__int64 (__fastcall **)(int *))(*(_QWORD *)a1 + 8LL))(a1);
    if ( result )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
  }
  else
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(&CBaseInput::_sLock, 0LL);
    v11 = RimInputTypeToDeviceInputType(a1[36]);
    v12 = CBaseInput::_spDevList;
    v13 = v11;
    while ( v12 )
    {
      if ( *((unsigned __int8 *)v12 + 48) == v13 && (*((_QWORD *)v12 + 29) || (*((_DWORD *)v12 + 46) & 0x2000) != 0) )
      {
        KnownRIMDeviceKind = GetKnownRIMDeviceKind(v12);
        if ( KnownRIMDeviceKind )
          CBaseInput::ForwardPnpNotificationToISM(KnownRIMDeviceKind, v12, *(_QWORD *)v12, 2LL);
      }
      v12 = (struct RIMDEV *)*((_QWORD *)v12 + 7);
    }
    ExReleasePushLockSharedEx(&CBaseInput::_sLock, 0LL);
    KeLeaveCriticalRegion();
    result = (*(__int64 (__fastcall **)(int *))(*(_QWORD *)a1 + 8LL))(a1);
    if ( result )
      return (**(__int64 (__fastcall ***)(__int64))result)(result);
  }
  return result;
}
