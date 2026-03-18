/*
 * XREFs of ?ComputeShadowPath@CProjectedShadow@@AEBA?AW4Enum@ShadowPath@@PEAVCDrawingContext@@@Z @ 0x1801EEA9C
 * Callers:
 *     ?Draw@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801EEC40 (-Draw@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRect.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?CanUseFastShadow@CProjectedShadow@@AEBA_NXZ @ 0x1801EE994 (-CanUseFastShadow@CProjectedShadow@@AEBA_NXZ.c)
 *     ?GetBlurForBoundary@CProjectedShadow@@AEBAMW4Enum@ApproxBlurStageBoundary@@@Z @ 0x1801F0198 (-GetBlurForBoundary@CProjectedShadow@@AEBAMW4Enum@ApproxBlurStageBoundary@@@Z.c)
 *     ?IsShadowAxisAlignedRectToReceiver@CProjectedShadow@@AEBA_NXZ @ 0x1801F0858 (-IsShadowAxisAlignedRectToReceiver@CProjectedShadow@@AEBA_NXZ.c)
 */

__int64 __fastcall CProjectedShadow::ComputeShadowPath(__int64 a1, __int64 a2)
{
  int v4; // ebx
  float v6; // xmm1_4
  __int64 v7; // rcx
  __int64 v8; // rcx

  v4 = 0;
  if ( CProjectedShadow::CanUseFastShadow((CProjectedShadowCaster **)a1) )
    return 1LL;
  if ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 56) + 88LL) + 224LL))(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 88LL)) != 1
    || !CProjectedShadow::IsShadowAxisAlignedRectToReceiver((CProjectedShadow *)a1) )
  {
    return 0LL;
  }
  v6 = *(float *)(a1 + 80);
  if ( v6 >= CProjectedShadow::GetBlurForBoundary(a1, 3LL) )
    return 5LL;
  if ( !*(_BYTE *)(a2 + 6351) )
    return 0LL;
  if ( v6 >= CProjectedShadow::GetBlurForBoundary(v7, 2LL) )
    return 4LL;
  LOBYTE(v4) = v6 >= CProjectedShadow::GetBlurForBoundary(v8, 1LL);
  return (unsigned int)(v4 + 2);
}
