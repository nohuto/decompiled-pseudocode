/*
 * XREFs of ?xxxWrapSBWndProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C01E5630
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckProcessIdentity@@YAHPEAUtagWND@@I_K_J@Z @ 0x1C0137298 (-CheckProcessIdentity@@YAHPEAUtagWND@@I_K_J@Z.c)
 *     xxxSBWndProc @ 0x1C0242BA0 (xxxSBWndProc.c)
 */

__int64 __fastcall xxxWrapSBWndProc(struct tagWND *a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned int v5; // edi
  unsigned int v6; // esi

  v5 = a3;
  v6 = a2;
  if ( (unsigned int)CheckProcessIdentity(a1, a2, a3, a4) )
    return xxxSBWndProc(a1, v6, v5, a4);
  else
    return 0LL;
}
