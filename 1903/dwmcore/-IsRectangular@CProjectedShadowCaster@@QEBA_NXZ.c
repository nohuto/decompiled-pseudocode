/*
 * XREFs of ?IsRectangular@CProjectedShadowCaster@@QEBA_NXZ @ 0x1801F2798
 * Callers:
 *     ?CanUseFastShadow@CProjectedShadow@@AEBA_NXZ @ 0x1801F0104 (-CanUseFastShadow@CProjectedShadow@@AEBA_NXZ.c)
 *     ?IsShadowAxisAlignedRectToReceiver@CProjectedShadow@@AEBA_NXZ @ 0x1801F1FE8 (-IsShadowAxisAlignedRectToReceiver@CProjectedShadow@@AEBA_NXZ.c)
 * Callees:
 *     ?TryGetAxisAlignedRectangle@CGeometry@@QEAA_NPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800046EC (-TryGetAxisAlignedRectangle@CGeometry@@QEAA_NPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CProjectedShadowCaster::IsRectangular(CProjectedShadowCaster *this)
{
  __int64 v1; // rdx
  CGeometry *v3; // rcx
  bool result; // al
  __int64 v5; // rcx
  __int64 v6; // [rsp+20h] [rbp-28h] BYREF

  v1 = *((_QWORD *)this + 7);
  v3 = *(CGeometry **)(v1 + 248);
  if ( !v3 || (result = CGeometry::TryGetAxisAlignedRectangle(v3, (const struct D2D_SIZE_F *)(v1 + 132), &v6)) )
  {
    v5 = *((_QWORD *)this + 15);
    if ( !v5 )
      v5 = *(_QWORD *)(*((_QWORD *)this + 2) + 152LL);
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 48LL))(v5, 19LL);
  }
  return result;
}
