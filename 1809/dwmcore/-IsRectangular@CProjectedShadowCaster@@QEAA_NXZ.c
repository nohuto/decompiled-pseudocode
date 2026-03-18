/*
 * XREFs of ?IsRectangular@CProjectedShadowCaster@@QEAA_NXZ @ 0x1801ADA80
 * Callers:
 *     ?GetShadowPath@CProjectedShadow@@AEBA?AW4Enum@ShadowPath@@PEAVCDrawingContext@@@Z @ 0x1801CB0F0 (-GetShadowPath@CProjectedShadow@@AEBA-AW4Enum@ShadowPath@@PEAVCDrawingContext@@@Z.c)
 *     ?IsShadowAxisAlignedRectToReceiver@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEA_N@Z @ 0x1801CB9B8 (-IsShadowAxisAlignedRectToReceiver@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?TryGetAxisAlignedRectangle@CGeometry@@QEAA_NPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180199D8C (-TryGetAxisAlignedRectangle@CGeometry@@QEAA_NPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?GetEffectiveMaskBrush@CProjectedShadowCaster@@QEAAPEAVCSpriteVisualContent@@XZ @ 0x1801AD988 (-GetEffectiveMaskBrush@CProjectedShadowCaster@@QEAAPEAVCSpriteVisualContent@@XZ.c)
 */

char __fastcall CProjectedShadowCaster::IsRectangular(CProjectedShadowCaster *this)
{
  __int64 v1; // rdx
  char v3; // bl
  CGeometry *v4; // rcx
  char result; // al
  struct CSpriteVisualContent *EffectiveMaskBrush; // rax
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF

  v1 = *((_QWORD *)this + 7);
  v3 = 0;
  v4 = *(CGeometry **)(v1 + 248);
  if ( !v4 || (result = CGeometry::TryGetAxisAlignedRectangle(v4, (const struct D2D_SIZE_F *)(v1 + 132), &v7)) != 0 )
  {
    EffectiveMaskBrush = CProjectedShadowCaster::GetEffectiveMaskBrush(this);
    if ( !EffectiveMaskBrush
      || (*(unsigned __int8 (__fastcall **)(struct CSpriteVisualContent *, __int64))(*(_QWORD *)EffectiveMaskBrush + 48LL))(
           EffectiveMaskBrush,
           19LL) )
    {
      return 1;
    }
    return v3;
  }
  return result;
}
