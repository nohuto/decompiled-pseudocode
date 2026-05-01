/*
 * XREFs of ?IsExternalDrag@ElementDragData@@AEAA_NXZ @ 0x18031F388
 * Callers:
 *     ?DragOver@ElementDragData@@AEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x18031ED4C (-DragOver@ElementDragData@@AEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z @ 0x180301D98 (-Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z.c)
 *     ?ApplyMargins@RelativeMargins@@QEAA?AUCRect@Geometry@@AEBU23@@Z @ 0x18030A480 (-ApplyMargins@RelativeMargins@@QEAA-AUCRect@Geometry@@AEBU23@@Z.c)
 *     ?GetExternalDragProgress@ElementDragData@@AEAAMXZ @ 0x18031F304 (-GetExternalDragProgress@ElementDragData@@AEAAMXZ.c)
 */

bool __fastcall ElementDragData::IsExternalDrag(ElementDragData *this)
{
  _DWORD *v2; // rax
  bool result; // al
  _BYTE v4[16]; // [rsp+20h] [rbp-38h] BYREF
  struct tagPOINT v5; // [rsp+30h] [rbp-28h] BYREF

  result = 1;
  if ( ElementDragData::GetExternalDragProgress(this) <= 1.0 )
  {
    v2 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD, struct tagPOINT *))(**((_QWORD **)this + 5) + 88LL))(
                     *((_QWORD *)this + 5),
                     &v5);
    RelativeMargins::ApplyMargins((double *)this + 16, (__int64)v4, v2);
    v5 = *(struct tagPOINT *)((char *)this + 92);
    if ( Geometry::CRect::Contains((Geometry::CRect *)v4, &v5) )
      return 0;
  }
  return result;
}
