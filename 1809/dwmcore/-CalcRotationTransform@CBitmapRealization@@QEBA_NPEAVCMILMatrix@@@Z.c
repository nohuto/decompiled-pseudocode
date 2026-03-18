/*
 * XREFs of ?CalcRotationTransform@CBitmapRealization@@QEBA_NPEAVCMILMatrix@@@Z @ 0x1802288B4
 * Callers:
 *     ?GetTransform@CDxHandleYUVBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180228FC0 (-GetTransform@CDxHandleYUVBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@U.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?CalcRotationTransform@CBitmapRealization@@QEBA_NMMPEAVCMILMatrix@@@Z @ 0x180180C70 (-CalcRotationTransform@CBitmapRealization@@QEBA_NMMPEAVCMILMatrix@@@Z.c)
 */

char __fastcall CBitmapRealization::CalcRotationTransform(CBitmapRealization *this, struct CMILMatrix *a2)
{
  int v5; // [rsp+30h] [rbp+8h] BYREF
  int v6; // [rsp+40h] [rbp+18h] BYREF

  (*(void (__fastcall **)(char *, int *, int *))(*((_QWORD *)this + 18) + 32LL))((char *)this + 144, &v6, &v5);
  return CBitmapRealization::CalcRotationTransform(this, (float)v6, (float)v5, a2);
}
