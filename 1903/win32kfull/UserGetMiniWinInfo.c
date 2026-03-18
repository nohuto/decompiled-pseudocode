/*
 * XREFs of UserGetMiniWinInfo @ 0x1C01E9828
 * Callers:
 *     GreTransferSpriteStateToDwmState @ 0x1C013E734 (GreTransferSpriteStateToDwmState.c)
 * Callees:
 *     ?InitializeMiniWinInfo@@YAXQEAUtagWND@@PEAUtagMINIWINDOWINFO@@@Z @ 0x1C002AF98 (-InitializeMiniWinInfo@@YAXQEAUtagWND@@PEAUtagMINIWINDOWINFO@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall UserGetMiniWinInfo(unsigned __int64 a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  struct tagMINIWINDOWINFO *v4; // rbp
  unsigned int v6; // ebx
  struct tagWND *v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  struct tagWND *v10; // rdi

  v4 = (struct tagMINIWINDOWINFO *)a2;
  LOBYTE(a2) = 1;
  v6 = 0;
  v7 = (struct tagWND *)HMValidateHandleNoSecure(a1, a2, (__int64)a3, a4);
  v10 = v7;
  if ( v7 )
  {
    InitializeMiniWinInfo(v7, v4, v8, v9);
    v6 = 1;
    *a3 = *((_DWORD *)v10 + 64);
  }
  return v6;
}
