/*
 * XREFs of ?HitTest@CMultitaskingViewElementBase@@UEAA_NAEBUCPoint@Geometry@@@Z @ 0x180364C90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CMultitaskingViewElementBase::HitTest(CMultitaskingViewElementBase *this, const struct tagPOINT *a2)
{
  return Geometry::CRect::Contains((CMultitaskingViewElementBase *)((char *)this + 56), a2);
}
