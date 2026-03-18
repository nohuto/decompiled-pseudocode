/*
 * XREFs of UserGetMiniWinInfo @ 0x1C01B1A1C
 * Callers:
 *     GreTransferSpriteStateToDwmState @ 0x1C0110A0C (GreTransferSpriteStateToDwmState.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     ?InitializeMiniWinInfo@@YAXQEAUtagWND@@PEAUtagMINIWINDOWINFO@@@Z @ 0x1C007B35C (-InitializeMiniWinInfo@@YAXQEAUtagWND@@PEAUtagMINIWINDOWINFO@@@Z.c)
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
  v6 = (struct tagWND *)HMValidateHandleNoSecure(a1, a2);
  v7 = v6;
  if ( v6 )
  {
    InitializeMiniWinInfo(v6, v3);
    v5 = 1;
    *a3 = *((_DWORD *)v7 + 60);
  }
  return v5;
}
