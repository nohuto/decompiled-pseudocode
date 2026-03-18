/*
 * XREFs of ?PopLayerTransformFromExplicitSurfaceInput@CTreeEffectLayer@@IEAAXXZ @ 0x18001016C
 * Callers:
 *     ?RenderLayer@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@@Z @ 0x18000F2A4 (-RenderLayer@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUMilRe.c)
 * Callees:
 *     ?IsAutomaticBoundsToLocalSpaceEnabled@CLayerVisual@@QEBA_NXZ @ 0x1800102B0 (-IsAutomaticBoundsToLocalSpaceEnabled@CLayerVisual@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1800EF1C0 (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180143514 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall CTreeEffectLayer::PopLayerTransformFromExplicitSurfaceInput(CTreeEffectLayer *this)
{
  CLayerVisual *v2; // rcx
  __int64 v3; // rcx
  unsigned int v4; // ebx
  unsigned int v5; // r14d
  __int64 v6; // rdi
  __int64 v7; // rsi
  const char *v8; // r9
  __int64 v9; // rax
  __int64 v10; // rsi
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = (CLayerVisual *)*((_QWORD *)this + 31);
  if ( v2 )
  {
    if ( CLayerVisual::IsAutomaticBoundsToLocalSpaceEnabled(v2) )
    {
      v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 30) + 80LL) + 72LL) + 48LL);
      v4 = 0;
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3);
      if ( v5 )
      {
        v6 = 0LL;
        do
        {
          v7 = *((_QWORD *)this + 30);
          if ( (unsigned int)EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_634173755_57814423_FeatureDescriptorDetails)
            && v4 >= *(_DWORD *)(v7 + 128) )
          {
            wil::details::in1diag3::_FailFast_Unexpected(
              retaddr,
              (void *)0x1F5,
              (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\effectbrush.cpp",
              v8);
            JUMPOUT(0x180010284LL);
          }
          v9 = *(_QWORD *)(v7 + 104);
          v10 = *(_QWORD *)(v6 + v9);
          if ( v10 )
          {
            if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v10 + 48LL))(
                   *(_QWORD *)(v6 + v9),
                   145LL) )
            {
              *(_OWORD *)(v10 + 112) = _xmm;
              *(_QWORD *)(v10 + 128) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
            }
          }
          ++v4;
          v6 += 8LL;
        }
        while ( v4 < v5 );
      }
    }
  }
}
