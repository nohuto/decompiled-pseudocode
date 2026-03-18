/*
 * XREFs of ?DxgkCddGetCurrentDxgProcess@@YAPEAXXZ @ 0x1C0150460
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

struct DXGPROCESS *__fastcall DxgkCddGetCurrentDxgProcess(__int64 a1, __int64 a2)
{
  return DXGPROCESS::GetCurrent(a1, a2);
}
