/*
 * XREFs of NtUserRemoteRedrawRectangle @ 0x1C0233A40
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     RemoteRedrawRectangle @ 0x1C020D198 (RemoteRedrawRectangle.c)
 */

__int64 __fastcall NtUserRemoteRedrawRectangle(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
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
  unsigned __int64 v19; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v20; // [rsp+28h] [rbp-40h]

  v19 = 0LL;
  v20 = 0LL;
  EnterCrit(0LL, 1LL);
  CurrentProcess = PsGetCurrentProcess(v9, v8, v10, v11);
  v16 = gpepCSRSS;
  if ( CurrentProcess == gpepCSRSS )
  {
    v19 = __PAIR64__(a2, a1);
    v20 = __PAIR64__(a4, a3);
    RemoteRedrawRectangle((__int64)&v19, v13, v14, v15);
    v17 = 0;
  }
  else
  {
    v17 = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v16);
  return v17;
}
