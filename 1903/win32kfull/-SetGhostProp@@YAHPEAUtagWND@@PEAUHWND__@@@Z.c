/*
 * XREFs of ?SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C0150C18
 * Callers:
 *     ?_GhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C01507E8 (-_GhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxRegisterGhostWindow @ 0x1C01509A0 (xxxRegisterGhostWindow.c)
 * Callees:
 *     InternalSetProp @ 0x1C008C438 (InternalSetProp.c)
 *     _GetProp @ 0x1C00C7C1C (_GetProp.c)
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
