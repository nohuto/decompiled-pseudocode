/*
 * XREFs of DXGPROCESS_GetCurrent @ 0x1C000B9B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

struct DXGPROCESS *DXGPROCESS_GetCurrent()
{
  return DXGPROCESS::GetCurrent();
}
