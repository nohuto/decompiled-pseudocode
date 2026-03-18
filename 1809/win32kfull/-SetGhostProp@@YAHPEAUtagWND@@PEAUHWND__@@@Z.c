/*
 * XREFs of ?SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C01E25E8
 * Callers:
 *     ?_GhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C01E2810 (-_GhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxRegisterGhostWindow @ 0x1C01E3C90 (xxxRegisterGhostWindow.c)
 * Callees:
 *     _GetProp @ 0x1C0072450 (_GetProp.c)
 *     InternalSetProp @ 0x1C00B3498 (InternalSetProp.c)
 */

__int64 __fastcall SetGhostProp(struct tagWND *a1, HWND a2)
{
  unsigned int v3; // ebx
  __int64 Prop; // rdx

  v3 = 0;
  Prop = GetProp((__int64)a1, *(unsigned __int16 *)(gpsi + 900LL), 1LL);
  if ( ((Prop + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 && (Prop != -1 || a2 != (HWND)-1LL) )
    return (unsigned int)InternalSetProp((__int64)a1, *(unsigned __int16 *)(gpsi + 900LL), (__int64)a2, 5u);
  return v3;
}
