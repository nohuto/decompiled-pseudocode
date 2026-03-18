/*
 * XREFs of ?xxxWrapDesktopWndProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C0137240
 * Callers:
 *     <none>
 * Callees:
 *     xxxDesktopWndProc @ 0x1C00B3810 (xxxDesktopWndProc.c)
 *     ?CheckProcessIdentity@@YAHPEAUtagWND@@I_K_J@Z @ 0x1C0137298 (-CheckProcessIdentity@@YAHPEAUtagWND@@I_K_J@Z.c)
 */

__int64 __fastcall xxxWrapDesktopWndProc(struct tagWND *a1, unsigned int a2, unsigned __int64 a3, __int64 a4)
{
  if ( (unsigned int)CheckProcessIdentity(a1, a2, a3, a4) )
    return xxxDesktopWndProc((__int64)a1, a2, a3, a4);
  else
    return 0LL;
}
