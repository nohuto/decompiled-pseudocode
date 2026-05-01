/*
 * XREFs of ?ContainsPt@CPlaceModeButtonAcc@@UEAA_NUtagPOINT@@@Z @ 0x1803796C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z @ 0x180301D98 (-Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z.c)
 */

bool __fastcall CPlaceModeButtonAcc::ContainsPt(CPlaceModeButtonAcc *this, struct tagPOINT a2)
{
  struct tagPOINT v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  return Geometry::CRect::Contains((CPlaceModeButtonAcc *)((char *)this + 24), &v3);
}
