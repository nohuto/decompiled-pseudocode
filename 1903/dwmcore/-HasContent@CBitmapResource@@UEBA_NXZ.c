/*
 * XREFs of ?HasContent@CBitmapResource@@UEBA_NXZ @ 0x1800BB090
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CBitmapResource::HasContent(CBitmapResource *this)
{
  return *((_QWORD *)this + 9) != 0LL;
}
