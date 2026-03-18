/*
 * XREFs of ?DxgkEngRefPresentHistoryToken@@YAHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0075AB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall DxgkEngRefPresentHistoryToken(struct _D3DKMT_PRESENTHISTORYTOKEN *a1)
{
  return a1->Model == D3DKMT_PM_REDIRECTED_GDI
      || a1->Model == D3DKMT_PM_REDIRECTED_FLIP
      || a1->Model == D3DKMT_PM_REDIRECTED_BLT
      || a1->Model == D3DKMT_PM_REDIRECTED_VISTABLT
      || a1->Model == D3DKMT_PM_SCREENCAPTUREFENCE
      || a1->Model == D3DKMT_PM_REDIRECTED_COMPOSITION
      || (unsigned int)(a1->Model - 8) < 2;
}
