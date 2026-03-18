/*
 * XREFs of ?xxxWrapSwitchWndProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C01AD7A0
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckProcessIdentity@@YAHPEAUtagWND@@I_K_J@Z @ 0x1C010ADA8 (-CheckProcessIdentity@@YAHPEAUtagWND@@I_K_J@Z.c)
 *     xxxSwitchWndProc @ 0x1C01BD650 (xxxSwitchWndProc.c)
 */

__int64 __fastcall xxxWrapSwitchWndProc(struct tagWND *a1, __int64 a2, HWND a3, unsigned __int64 a4)
{
  unsigned int v6; // esi

  v6 = a2;
  if ( (unsigned int)CheckProcessIdentity(a1, a2, (unsigned __int64)a3, a4) )
    return xxxSwitchWndProc(a1, v6, a3, a4);
  else
    return 0LL;
}
