/*
 * XREFs of ?GetBounds@CCachedVisualImage@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18008D080
 * Callers:
 *     ?GetCurrentSize@CCachedVisualImage@@QEBAXPEAI0@Z @ 0x18008CFC0 (-GetCurrentSize@CCachedVisualImage@@QEBAXPEAI0@Z.c)
 *     ?Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z @ 0x18008FCAC (-Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?GetBounds@CCachedVisualImage@@W7EBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800F09A0 (-GetBounds@CCachedVisualImage@@W7EBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilR.c)
 * Callees:
 *     ?EnsureVisualTree@CCachedVisualImage@@AEAAJXZ @ 0x18008FA28 (-EnsureVisualTree@CCachedVisualImage@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?GetBounds@CVisualTree@@QEAAXPEAV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800EE398 (-GetBounds@CVisualTree@@QEAAXPEAV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z @ 0x1801B695C (-GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z.c)
 */

__int64 __fastcall CCachedVisualImage::GetBounds(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // esi
  int v7; // eax
  unsigned int v8; // ecx
  float v9; // xmm3_4
  float v10; // xmm0_4
  float v11; // xmm2_4
  int v12; // r9d
  double *v13; // rsi
  double v14; // xmm0_8
  double v15; // xmm1_8
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  __int64 v18; // rsi
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  unsigned int v22; // [rsp+20h] [rbp-40h]
  float v23; // [rsp+30h] [rbp-30h] BYREF
  float v24; // [rsp+34h] [rbp-2Ch] BYREF
  float v25; // [rsp+38h] [rbp-28h] BYREF
  float v26[6]; // [rsp+40h] [rbp-20h] BYREF

  v4 = 0;
  if ( *(_BYTE *)(a1 + 370) )
  {
    *(_OWORD *)a4 = *(_OWORD *)(a1 + 392);
    return v4;
  }
  if ( !*(_BYTE *)(a1 + 371) )
  {
    v13 = *(double **)(a1 + 176);
    v14 = *(double *)(a1 + 160);
    v15 = *(double *)(a1 + 168);
    if ( v13 )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v13 + 48LL))(*(_QWORD *)(a1 + 176), 137LL) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, -2147024809, 0x32u);
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, -2147024809, 0x68u);
        v22 = 452;
LABEL_21:
        v4 = -2147024809;
        v12 = -2147024809;
        goto LABEL_10;
      }
      v14 = v13[7];
      v15 = v13[8];
    }
    if ( v14 == 0.0 && v15 == 0.0 )
    {
      v18 = *(_QWORD *)(a1 + 152);
      *(_OWORD *)v26 = *(_OWORD *)(a1 + 136);
      if ( v18 )
      {
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 48LL))(v18, 121LL) )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, -2147024809, 0x32u);
          MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, -2147024809, 0x68u);
          v22 = 463;
          goto LABEL_21;
        }
        *(_OWORD *)v26 = *(_OWORD *)(v18 + 56);
      }
      v14 = (float)(v26[2] - v26[0]);
      v15 = (float)(v26[3] - v26[1]);
    }
    *(_DWORD *)a4 = 0;
    *(_DWORD *)(a4 + 4) = 0;
    v4 = 0;
    *(float *)(a4 + 8) = v14;
    *(float *)(a4 + 12) = v15;
    return v4;
  }
  if ( !*(_QWORD *)(a1 + 184) )
  {
    *(_DWORD *)(a4 + 12) = 0;
    *(_DWORD *)(a4 + 8) = 0;
    *(_DWORD *)(a4 + 4) = 0;
    *(_DWORD *)a4 = 0;
    return v4;
  }
  v7 = CCachedVisualImage::EnsureVisualTree((CCachedVisualImage *)(a1 - 8));
  v4 = v7;
  if ( v7 < 0 )
  {
    v22 = 422;
    v12 = v7;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v12, v22);
    return v4;
  }
  CVisualTree::GetBounds(*(_QWORD *)(a1 + 224), v26);
  *(_OWORD *)a4 = *(_OWORD *)v26;
  if ( *(_BYTE *)(a1 + 369) && CVisual::GetEffectiveOffset(*(CVisual **)(a1 + 184), &v24, &v23, &v25) )
  {
    v9 = COERCE_FLOAT(LODWORD(v23) ^ _xmm) + *(float *)(a4 + 12);
    v10 = COERCE_FLOAT(LODWORD(v24) ^ _xmm) + *(float *)a4;
    v11 = COERCE_FLOAT(LODWORD(v24) ^ _xmm) + *(float *)(a4 + 8);
    *(float *)(a4 + 4) = COERCE_FLOAT(LODWORD(v23) ^ _xmm) + *(float *)(a4 + 4);
    *(float *)(a4 + 12) = v9;
    *(float *)a4 = v10;
    *(float *)(a4 + 8) = v11;
  }
  return v4;
}
