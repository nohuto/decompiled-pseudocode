/*
 * XREFs of ?GetEdidsFromCache@DXGGLOBAL@@QEAAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@@Z @ 0x1C0041E1C
 * Callers:
 *     DxgkEscape @ 0x1C01012F0 (DxgkEscape.c)
 * Callees:
 *     ?GetEdids@EDIDCACHE@@QEAAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@@Z @ 0x1C0250198 (-GetEdids@EDIDCACHE@@QEAAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@@Z.c)
 */

__int64 __fastcall DXGGLOBAL::GetEdidsFromCache(DXGGLOBAL *this, struct _D3DKMT_DXGK_DIAGNOSTICS *a2)
{
  EDIDCACHE *v2; // rcx

  v2 = (EDIDCACHE *)*((_QWORD *)this + 95);
  if ( v2 )
    return EDIDCACHE::GetEdids(v2, a2);
  else
    return 3221225495LL;
}
