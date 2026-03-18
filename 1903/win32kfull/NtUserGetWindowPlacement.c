/*
 * XREFs of NtUserGetWindowPlacement @ 0x1C00907E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     _GetWindowPlacement @ 0x1C0090900 (_GetWindowPlacement.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserGetWindowPlacement(__int64 a1, ULONG64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // r9
  unsigned int WindowPlacement; // ebx
  _OWORD v8[3]; // [rsp+48h] [rbp-40h] BYREF

  memset(v8, 0, 0x2CuLL);
  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  v5 = ValidateHwnd(a1);
  if ( v5 )
  {
    if ( a2 >= MmUserProbeAddress )
      *(_DWORD *)MmUserProbeAddress = 0;
    *(_OWORD *)a2 = *(_OWORD *)a2;
    *(_OWORD *)(a2 + 16) = *(_OWORD *)(a2 + 16);
    *(_QWORD *)(a2 + 32) = *(_QWORD *)(a2 + 32);
    *(_DWORD *)(a2 + 40) = *(_DWORD *)(a2 + 40);
    LODWORD(v8[0]) = *(_DWORD *)a2;
    WindowPlacement = GetWindowPlacement(v5, v8, 1LL);
    if ( WindowPlacement )
    {
      *(_OWORD *)a2 = v8[0];
      *(_OWORD *)(a2 + 16) = v8[1];
      *(_QWORD *)(a2 + 32) = *(_QWORD *)&v8[2];
      *(_DWORD *)(a2 + 40) = DWORD2(v8[2]);
    }
  }
  else
  {
    WindowPlacement = 0;
  }
  UserSessionSwitchLeaveCrit(v4);
  return WindowPlacement;
}
