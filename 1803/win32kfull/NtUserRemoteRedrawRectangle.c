/*
 * XREFs of NtUserRemoteRedrawRectangle @ 0x1C01F41A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     RemoteRedrawRectangle @ 0x1C01D255C (RemoteRedrawRectangle.c)
 */

__int64 __fastcall NtUserRemoteRedrawRectangle(int a1, int a2, int a3, int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 CurrentProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  unsigned int v15; // ebx
  _DWORD v17[4]; // [rsp+20h] [rbp-48h] BYREF

  EnterCrit(0LL, 1LL);
  CurrentProcess = PsGetCurrentProcess(v9, v8);
  v14 = gpepCSRSS;
  if ( CurrentProcess == gpepCSRSS )
  {
    v17[0] = a1;
    v17[1] = a2;
    v17[2] = a3;
    v17[3] = a4;
    RemoteRedrawRectangle((__int64)v17, v11);
    v15 = 0;
  }
  else
  {
    v15 = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v14, v11, v12, v13);
  return v15;
}
