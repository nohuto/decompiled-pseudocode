/*
 * XREFs of ?SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C00E708C
 * Callers:
 *     ?_GhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C00E6CC8 (-_GhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxRegisterGhostWindow @ 0x1C00E6E60 (xxxRegisterGhostWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SetGhostProp(struct tagWND *a1, HWND a2)
{
  char *v2; // rsi
  unsigned int v4; // ebx
  __int64 Prop; // rcx

  v2 = (char *)a1 + 120;
  v4 = 0;
  Prop = RealGetProp(*((_QWORD *)a1 + 15), *(unsigned __int16 *)(gpsi + 900LL), 1LL);
  if ( ((Prop + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 && (Prop != -1 || a2 != (HWND)-1LL) )
    return (unsigned int)RealInternalSetProp(v2, *(unsigned __int16 *)(gpsi + 900LL), a2, 5LL);
  return v4;
}
