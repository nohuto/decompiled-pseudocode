/*
 * XREFs of ?GetBounds@CCachedVisualImage@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18004FA40
 * Callers:
 *     ?GetCurrentSize@CCachedVisualImage@@QEBAXPEAI0@Z @ 0x18004F984 (-GetCurrentSize@CCachedVisualImage@@QEBAXPEAI0@Z.c)
 *     ?Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z @ 0x1800AE340 (-Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?GetBounds@CCachedVisualImage@@W7EBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800F1180 (-GetBounds@CCachedVisualImage@@W7EBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilR.c)
 * Callees:
 *     ?EnsureVisualTree@CCachedVisualImage@@AEAAJXZ @ 0x180023BD8 (-EnsureVisualTree@CCachedVisualImage@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCachedVisualImage::GetBounds(__int64 a1, __int64 a2, bool a3, __int64 a4)
{
  unsigned int v6; // esi
  int v7; // eax
  unsigned int v8; // ecx
  int v9; // r9d
  double *v10; // rsi
  double v11; // xmm0_8
  double v12; // xmm1_8
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  __int64 v15; // rsi
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned int v19; // [rsp+20h] [rbp-48h]
  __int128 v20; // [rsp+30h] [rbp-38h]

  v6 = 0;
  if ( !*(_BYTE *)(a1 + 370) )
  {
    if ( *(_BYTE *)(a1 + 371) )
    {
      if ( !*(_QWORD *)(a1 + 184) )
      {
        *(_QWORD *)(a4 + 8) = 0LL;
        *(_QWORD *)a4 = 0LL;
        return v6;
      }
      v7 = CCachedVisualImage::EnsureVisualTree((CCachedVisualImage *)(a1 - 8), a2, a3);
      v6 = v7;
      if ( v7 >= 0 )
      {
        *(_OWORD *)a4 = *(_OWORD *)(*(_QWORD *)(a1 + 224) + 36LL);
        return v6;
      }
      v9 = v7;
      v19 = 325;
LABEL_8:
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v9, v19, 0LL);
      return v6;
    }
    v10 = *(double **)(a1 + 176);
    v11 = *(double *)(a1 + 160);
    v12 = *(double *)(a1 + 168);
    if ( v10 )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v10 + 48LL))(*(_QWORD *)(a1 + 176), 169LL) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2147024809, 0x32u, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2147024809, 0x68u, 0LL);
        v19 = 339;
LABEL_19:
        v6 = -2147024809;
        v9 = -2147024809;
        goto LABEL_8;
      }
      v11 = v10[7];
      v12 = v10[8];
    }
    if ( v11 == 0.0 && v12 == 0.0 )
    {
      v15 = *(_QWORD *)(a1 + 152);
      v20 = *(_OWORD *)(a1 + 136);
      if ( v15 )
      {
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 48LL))(v15, 138LL) )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, -2147024809, 0x32u, 0LL);
          MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, -2147024809, 0x68u, 0LL);
          v19 = 349;
          goto LABEL_19;
        }
        v20 = *(_OWORD *)(v15 + 56);
      }
      v11 = (float)(*((float *)&v20 + 2) - *(float *)&v20);
      v12 = (float)(*((float *)&v20 + 3) - *((float *)&v20 + 1));
    }
    *(_QWORD *)a4 = 0LL;
    v6 = 0;
    *(float *)(a4 + 8) = v11;
    *(float *)(a4 + 12) = v12;
    return v6;
  }
  *(_OWORD *)a4 = *(_OWORD *)(a1 + 392);
  return v6;
}
