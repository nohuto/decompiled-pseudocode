/*
 * XREFs of ?InitializeShadowEffect@CTreeEffectLayer@@IEAAJPEAUID2D1Effect@@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x18017C13C
 * Callers:
 *     ?RenderShadow@CTreeEffectLayer@@IEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PEAVCDropShadow@@PEAVIRenderTargetBitmap@@@Z @ 0x18017C3E4 (-RenderShadow@CTreeEffectLayer@@IEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTreeEffectLayer::InitializeShadowEffect(
        CTreeEffectLayer *this,
        struct ID2D1Effect *a2,
        const struct D2D_MATRIX_3X2_F *a3)
{
  __int64 v6; // rax
  signed int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // rax
  signed int v11; // eax
  __int64 v12; // rcx
  signed int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rax
  signed int v16; // eax
  __int64 v17; // rcx
  CTreeEffectLayer *v18; // [rsp+40h] [rbp+8h] BYREF

  v18 = this;
  if ( !a2 )
    return 2147942487LL;
  v6 = *(_QWORD *)a2;
  LODWORD(v18) = 1;
  v7 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, CTreeEffectLayer **, int))(v6 + 72))(
         a2,
         0LL,
         0LL,
         &v18,
         4);
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x513u, 0LL);
  }
  else
  {
    v10 = *(_QWORD *)a2;
    LODWORD(v18) = 0;
    v11 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, CTreeEffectLayer **, int))(v10 + 72))(
            a2,
            1LL,
            0LL,
            &v18,
            4);
    v9 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x515u, 0LL);
    }
    else
    {
      v13 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, const struct D2D_MATRIX_3X2_F *, int))(*(_QWORD *)a2 + 72LL))(
              a2,
              2LL,
              0LL,
              a3,
              24);
      v9 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x517u, 0LL);
      }
      else
      {
        v15 = *(_QWORD *)a2;
        *(float *)&v18 = FLOAT_0_5;
        v16 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, CTreeEffectLayer **, int))(v15 + 72))(
                a2,
                3LL,
                0LL,
                &v18,
                4);
        v9 = v16;
        if ( v16 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x518u, 0LL);
      }
    }
  }
  return v9;
}
