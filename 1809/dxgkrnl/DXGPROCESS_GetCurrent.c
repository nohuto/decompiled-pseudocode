/*
 * XREFs of DXGPROCESS_GetCurrent @ 0x1C0011BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

struct DXGPROCESS *DXGPROCESS_GetCurrent()
{
  return DXGPROCESS::GetCurrent();
}
