/*
 * XREFs of UserGetMiniWinInfo @ 0x1C01E96A8
 * Callers:
 *     GreTransferSpriteStateToDwmState @ 0x1C0010634 (GreTransferSpriteStateToDwmState.c)
 * Callees:
 *     ?InitializeMiniWinInfo@@YAXQEAUtagWND@@PEAUtagMINIWINDOWINFO@@@Z @ 0x1C0031408 (-InitializeMiniWinInfo@@YAXQEAUtagWND@@PEAUtagMINIWINDOWINFO@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall UserGetMiniWinInfo(unsigned __int64 a1, __int64 a2, _DWORD *a3)
{
  struct tagMINIWINDOWINFO *v3; // rbp
  unsigned int v5; // ebx
  struct tagWND *v6; // rax
  struct tagWND *v7; // rdi

  v3 = (struct tagMINIWINDOWINFO *)a2;
  LOBYTE(a2) = 1;
  v5 = 0;
  v6 = (struct tagWND *)HMValidateHandleNoSecure(a1, a2, (__int64)a3);
  v7 = v6;
  if ( v6 )
  {
    InitializeMiniWinInfo(v6, v3);
    v5 = 1;
    *a3 = *((_DWORD *)v7 + 64);
  }
  return v5;
}
