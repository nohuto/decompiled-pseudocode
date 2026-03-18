/*
 * XREFs of NtUserRemoteRedrawRectangle @ 0x1C021B930
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     RemoteRedrawRectangle @ 0x1C01F6EDC (RemoteRedrawRectangle.c)
 */

__int64 __fastcall NtUserRemoteRedrawRectangle(int a1, int a2, int a3, int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 CurrentProcess; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  unsigned int v17; // ebx
  _DWORD v19[4]; // [rsp+20h] [rbp-48h] BYREF

  EnterCrit(0LL, 1LL);
  CurrentProcess = PsGetCurrentProcess(v9, v8, v10, v11);
  v16 = gpepCSRSS;
  if ( CurrentProcess == gpepCSRSS )
  {
    v19[0] = a1;
    v19[1] = a2;
    v19[2] = a3;
    v19[3] = a4;
    RemoteRedrawRectangle((__int64)v19, v13);
    v17 = 0;
  }
  else
  {
    v17 = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v16, v13, v14, v15);
  return v17;
}
