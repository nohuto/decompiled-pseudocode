/*
 * XREFs of ?DxgkVidMmAllowFailOnOfferReclaimErrors@@YAHXZ @ 0x1C00C5080
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

bool DxgkVidMmAllowFailOnOfferReclaimErrors(void)
{
  struct DXGPROCESS *Current; // rcx

  Current = DXGPROCESS::GetCurrent();
  return !Current || *((_BYTE *)Current + 298) == 0;
}
