/*
 * XREFs of ?DxgkVidMmAllowFailOnOfferReclaimErrors@@YAHXZ @ 0x1C00B3830
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

bool DxgkVidMmAllowFailOnOfferReclaimErrors(void)
{
  struct DXGPROCESS *Current; // rcx

  Current = DXGPROCESS::GetCurrent();
  return !Current || *((_BYTE *)Current + 322) == 0;
}
