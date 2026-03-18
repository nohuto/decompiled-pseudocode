/*
 * XREFs of NtUserCompositionInputSinkViewInstanceIdFromPoint @ 0x1C0005590
 * Callers:
 *     <none>
 * Callees:
 *     RequestInputSinkInfoFromPoint @ 0x1C0005670 (RequestInputSinkInfoFromPoint.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall NtUserCompositionInputSinkViewInstanceIdFromPoint(_QWORD *a1, _DWORD *a2)
{
  __int64 CurrentProcess; // rax
  int v5; // ebx
  _DWORD v7[30]; // [rsp+50h] [rbp-78h] BYREF

  ExEnterCriticalRegionAndAcquireResourceExclusive(gpresDitCompositionInputSinkQuery);
  EnterCrit(0LL, 1LL);
  memset(v7, 0, 0x70uLL);
  CurrentProcess = PsGetCurrentProcess();
  if ( (unsigned int)IsProcessDwm(CurrentProcess) )
  {
    v5 = 0;
    UserSetLastError(5LL);
  }
  else
  {
    if ( a1 + 1 < a1 || (unsigned __int64)(a1 + 1) > MmUserProbeAddress )
      a1 = (_QWORD *)MmUserProbeAddress;
    *(_QWORD *)&v7[1] = *a1;
    v7[0] = 8;
    v7[3] = 0;
    v5 = RequestInputSinkInfoFromPoint(v7);
    if ( v5 )
    {
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (_DWORD *)MmUserProbeAddress;
      *a2 = v7[26];
    }
  }
  UserSessionSwitchLeaveCrit();
  ExReleaseResourceAndLeaveCriticalRegion(gpresDitCompositionInputSinkQuery);
  return v5;
}
