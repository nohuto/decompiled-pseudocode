/*
 * XREFs of ?CanScroll@CSwitchItemGrid@@UEAA_NXZ @ 0x1800859F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CSwitchItemGrid::CanScroll(CSwitchItemGrid *this)
{
  return *((_BYTE *)this + 540);
}
