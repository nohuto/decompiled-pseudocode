/*
 * XREFs of ?HasContent@CVisual@@UEAA_NXZ @ 0x18005AB50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CVisual::HasContent(CVisual *this)
{
  return *((_QWORD *)this + 32) != 0LL;
}
