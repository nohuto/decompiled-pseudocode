/*
 * XREFs of NtUserRemoteRedrawRectangle @ 0x1C0233420
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     RemoteRedrawRectangle @ 0x1C020CEE8 (RemoteRedrawRectangle.c)
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
  __int64 v15; // rcx
  unsigned int v16; // ebx
  unsigned __int64 v18; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v19; // [rsp+28h] [rbp-40h]

  v18 = 0LL;
  v19 = 0LL;
  EnterCrit(0LL, 1LL);
  CurrentProcess = PsGetCurrentProcess(v9, v8, v10, v11);
  v15 = gpepCSRSS;
  if ( CurrentProcess == gpepCSRSS )
  {
    v18 = __PAIR64__(a2, a1);
    v19 = __PAIR64__(a4, a3);
    RemoteRedrawRectangle((__int64)&v18, v13, v14);
    v16 = 0;
  }
  else
  {
    v16 = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v15);
  return v16;
}
