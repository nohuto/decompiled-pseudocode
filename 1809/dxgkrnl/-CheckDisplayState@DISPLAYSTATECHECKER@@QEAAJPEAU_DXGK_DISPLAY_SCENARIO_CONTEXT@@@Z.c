/*
 * XREFs of ?CheckDisplayState@DISPLAYSTATECHECKER@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C025EDC0
 * Callers:
 *     DxgkCheckDisplayState @ 0x1C025FE70 (DxgkCheckDisplayState.c)
 * Callees:
 *     ?CheckPrimaryContent@VIDPNSOURCEINFO@@QEAAJXZ @ 0x1C025EE38 (-CheckPrimaryContent@VIDPNSOURCEINFO@@QEAAJXZ.c)
 *     ?LogDisplayState@DISPLAYSTATECHECKER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C025F9C8 (-LogDisplayState@DISPLAYSTATECHECKER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 */

__int64 __fastcall DISPLAYSTATECHECKER::CheckDisplayState(
        DISPLAYSTATECHECKER **this,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  unsigned int v2; // ebx
  DISPLAYSTATECHECKER *v3; // rsi

  v2 = 0;
  v3 = (DISPLAYSTATECHECKER *)this;
  if ( this[56] )
    v3 = this[56];
  if ( *((_DWORD *)this + 116) )
  {
    do
      VIDPNSOURCEINFO::CheckPrimaryContent((DISPLAYSTATECHECKER *)((char *)v3 + 56 * v2++));
    while ( v2 < *((_DWORD *)this + 116) );
  }
  DISPLAYSTATECHECKER::LogDisplayState((DISPLAYSTATECHECKER *)this, a2);
  return 0LL;
}
