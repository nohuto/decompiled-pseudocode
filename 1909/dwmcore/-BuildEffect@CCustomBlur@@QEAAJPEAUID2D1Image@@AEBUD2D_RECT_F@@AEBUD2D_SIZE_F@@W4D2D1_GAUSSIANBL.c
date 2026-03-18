/*
 * XREFs of ?BuildEffect@CCustomBlur@@QEAAJPEAUID2D1Image@@AEBUD2D_RECT_F@@AEBUD2D_SIZE_F@@W4D2D1_GAUSSIANBLUR_OPTIMIZATION@@AEBUD2D_VECTOR_2F@@PEAU6@@Z @ 0x180050A00
 * Callers:
 *     ?RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18005042C (-RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage.c)
 * Callees:
 *     ?SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z @ 0x180050DFC (-SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCustomBlur::BuildEffect(
        CCustomBlur *this,
        struct ID2D1Image *a2,
        const struct D2D_RECT_F *a3,
        const struct D2D_SIZE_F *a4,
        enum D2D1_GAUSSIANBLUR_OPTIMIZATION a5,
        const struct D2D_VECTOR_2F *a6,
        struct D2D_VECTOR_2F *a7)
{
  __int64 v8; // xmm1_8
  __int64 v11; // xmm0_8
  float v12; // xmm1_4
  float v13; // xmm0_4
  int v14; // esi
  int v15; // r9d
  int v16; // eax
  unsigned int v17; // ecx
  unsigned int v18; // ebx
  float v19; // xmm0_4
  int v20; // eax
  unsigned int v21; // ecx
  int v22; // eax
  unsigned int v23; // ecx
  float *v24; // r14
  __int64 v25; // rcx
  int v26; // eax
  unsigned int v27; // ecx
  int v28; // eax
  unsigned int v29; // ecx
  __int64 v30; // rcx
  int v32; // r9d
  unsigned int v33; // [rsp+20h] [rbp-60h]
  __int64 v34; // [rsp+30h] [rbp-50h] BYREF
  __int64 v35; // [rsp+38h] [rbp-48h] BYREF
  BOOL v36; // [rsp+40h] [rbp-40h] BYREF
  __int128 v37; // [rsp+48h] [rbp-38h] BYREF

  v8 = (__int64)*a4;
  v37 = (__int128)*a3;
  v11 = (__int64)*a6;
  a7->x = 0.0;
  a7->y = 0.0;
  v34 = v11;
  *(FLOAT *)&v11 = a6->x;
  v35 = v8;
  if ( *(float *)&v11 == 1.0 || *(float *)&v35 <= CCustomBlur::k_optimizations[5 * a5 + 2] )
  {
    v12 = *(float *)&v34;
  }
  else
  {
    v12 = *(float *)&v34;
    if ( *(float *)&v34 <= 0.5 )
    {
      v12 = *(float *)&v34 * 2.0;
      a7->x = 0.25;
      *(float *)&v34 = v12;
    }
  }
  if ( a6->y == 1.0 || *((float *)&v35 + 1) <= CCustomBlur::k_optimizations[5 * a5 + 2] )
  {
    v13 = *((float *)&v34 + 1);
  }
  else
  {
    v13 = *((float *)&v34 + 1);
    if ( *((float *)&v34 + 1) <= 0.5 )
    {
      v13 = *((float *)&v34 + 1) * 2.0;
      a7->y = 0.25;
      *((float *)&v34 + 1) = v13;
    }
  }
  if ( v12 == 1.0 && v13 == 1.0 )
  {
    v14 = 1;
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(**((_QWORD **)this + 5) + 112LL))(
      *((_QWORD *)this + 5),
      0LL,
      0LL,
      1LL);
    ID2D1Effect::SetInputEffect(*((ID2D1Effect **)this + 3), 0, 0LL, v32);
    (*(void (__fastcall **)(_QWORD, _QWORD, struct ID2D1Image *, __int64))(**((_QWORD **)this + 3) + 112LL))(
      *((_QWORD *)this + 3),
      0LL,
      a2,
      1LL);
  }
  else
  {
    v14 = 1;
    (*(void (__fastcall **)(_QWORD, _QWORD, struct ID2D1Image *, __int64))(**((_QWORD **)this + 5) + 112LL))(
      *((_QWORD *)this + 5),
      0LL,
      a2,
      1LL);
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(**((_QWORD **)this + 3) + 112LL))(
      *((_QWORD *)this + 3),
      0LL,
      0LL,
      1LL);
    ID2D1Effect::SetInputEffect(*((ID2D1Effect **)this + 3), 0, *((struct ID2D1Effect **)this + 5), v15);
    v16 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, float *, int))(**((_QWORD **)this + 5) + 72LL))(
            *((_QWORD *)this + 5),
            2LL,
            0LL,
            &CCustomBlur::k_optimizations[5 * a5 + 4],
            4);
    v18 = v16;
    if ( v16 < 0 )
    {
      v33 = 134;
      goto LABEL_39;
    }
    v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 *, int))(**((_QWORD **)this + 5) + 72LL))(
            *((_QWORD *)this + 5),
            0LL,
            0LL,
            &v34,
            8);
    v18 = v16;
    if ( v16 < 0 )
    {
      v33 = 135;
      goto LABEL_39;
    }
    *(float *)&v35 = *(float *)&v35 * *(float *)&v34;
    *((float *)&v35 + 1) = *((float *)&v35 + 1) * *((float *)&v34 + 1);
    *((float *)&v37 + 2) = (float)(*((float *)&v37 + 2) * *(float *)&v34) - 1.0;
    *((float *)&v37 + 3) = (float)(*((float *)&v37 + 3) * *((float *)&v34 + 1)) - 1.0;
    v19 = *((float *)&v37 + 2) - (float)((float)(*(float *)&v37 * *(float *)&v34) + 1.0);
    *(float *)&v37 = (float)(*(float *)&v37 * *(float *)&v34) + 1.0;
    *((float *)&v37 + 1) = (float)(*((float *)&v37 + 1) * *((float *)&v34 + 1)) + 1.0;
    if ( v19 < 1.0 )
    {
      *(float *)&v37 = (float)((float)((float)(a3->right + a3->left) * 0.5) * *(float *)&v34) - 0.5;
      *((float *)&v37 + 2) = *(float *)&v37 + 1.0;
    }
    if ( (float)(*((float *)&v37 + 3) - *((float *)&v37 + 1)) < 1.0 )
    {
      *((float *)&v37 + 1) = (float)((float)((float)(a3->bottom + a3->top) * 0.5) * *((float *)&v34 + 1)) - 0.5;
      *((float *)&v37 + 3) = *((float *)&v37 + 1) + 1.0;
    }
  }
  v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int128 *, int))(**((_QWORD **)this + 3) + 72LL))(
          *((_QWORD *)this + 3),
          0LL,
          0LL,
          &v37,
          16);
  v18 = v20;
  if ( v20 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0xB3u, 0LL);
    return v18;
  }
  v22 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 *, int))(**((_QWORD **)this + 6) + 72LL))(
          *((_QWORD *)this + 6),
          0LL,
          0LL,
          &v35,
          4);
  v18 = v22;
  if ( v22 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0xB5u, 0LL);
    return v18;
  }
  v24 = &CCustomBlur::k_optimizations[5 * a5];
  v16 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, float *, int))(**((_QWORD **)this + 6) + 72LL))(
          *((_QWORD *)this + 6),
          2LL,
          0LL,
          v24 + 3,
          4);
  v18 = v16;
  if ( v16 < 0 )
  {
    v33 = 182;
    goto LABEL_39;
  }
  v25 = *((_QWORD *)this + 6);
  v36 = a6->x != *(float *)&v34;
  v26 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, BOOL *, int))(*(_QWORD *)v25 + 72LL))(
          v25,
          3LL,
          0LL,
          &v36,
          4);
  v18 = v26;
  if ( v26 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0xB9u, 0LL);
    return v18;
  }
  v28 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, char *, int))(**((_QWORD **)this + 7) + 72LL))(
          *((_QWORD *)this + 7),
          0LL,
          0LL,
          (char *)&v35 + 4,
          4);
  v18 = v28;
  if ( v28 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, 0xBBu, 0LL);
    return v18;
  }
  v16 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, float *, int))(**((_QWORD **)this + 7) + 72LL))(
          *((_QWORD *)this + 7),
          2LL,
          0LL,
          v24 + 3,
          4);
  v18 = v16;
  if ( v16 < 0 )
  {
    v33 = 188;
    goto LABEL_39;
  }
  v30 = *((_QWORD *)this + 7);
  if ( a6->y == *((float *)&v34 + 1) )
    v14 = 0;
  v36 = v14;
  v16 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, BOOL *, int))(*(_QWORD *)v30 + 72LL))(
          v30,
          3LL,
          0LL,
          &v36,
          4);
  v18 = v16;
  if ( v16 < 0 )
  {
    v33 = 191;
LABEL_39:
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, v33, 0LL);
  }
  return v18;
}
