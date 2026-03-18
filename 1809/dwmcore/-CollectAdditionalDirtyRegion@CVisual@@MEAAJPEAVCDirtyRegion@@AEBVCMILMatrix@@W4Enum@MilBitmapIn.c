/*
 * XREFs of ?CollectAdditionalDirtyRegion@CVisual@@MEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x18002F720
 * Callers:
 *     ?CollectAdditionalDirtyRegion@CWindowNode@@UEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x18002EF10 (-CollectAdditionalDirtyRegion@CWindowNode@@UEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitm.c)
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800288A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002CE38 (-Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?AdjustWorldBounds@CVisual@@AEAAXPEAV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x18002D0C0 (-AdjustWorldBounds@CVisual@@AEAAXPEAV-$CRectF@UPageInPixels@CoordinateSpace@@@@@Z.c)
 *     ?GetRects@?$CMergedRectBase@$03@@QEAA_NPEAIPEAPEBUMilRectF@@@Z @ 0x1800A98DC (-GetRects@-$CMergedRectBase@$03@@QEAA_NPEAIPEAPEBUMilRectF@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800DBCB0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

__int64 __fastcall CVisual::CollectAdditionalDirtyRegion(
        __int64 a1,
        CDirtyRegion *a2,
        __int64 a3,
        __int64 a4,
        FLOAT *a5)
{
  _DWORD *v5; // r9
  unsigned int v6; // r14d
  __int64 v10; // rcx
  _BYTE *v11; // rdx
  unsigned int i; // eax
  __int64 *v13; // rcx
  __int64 v14; // rcx
  unsigned int v15; // edi
  __int64 v16; // r12
  FLOAT v17; // xmm1_4
  float left; // xmm0_4
  float v19; // xmm1_4
  float top; // xmm2_4
  float v21; // xmm1_4
  float right; // xmm3_4
  float v23; // xmm4_4
  float bottom; // xmm1_4
  __int64 v25; // r8
  int v26; // eax
  unsigned int v27; // ecx
  unsigned int v28; // [rsp+30h] [rbp-40h] BYREF
  __int64 v29; // [rsp+38h] [rbp-38h]
  struct D2D_RECT_F v30; // [rsp+40h] [rbp-30h] BYREF
  __int128 v31; // [rsp+50h] [rbp-20h] BYREF

  v5 = *(_DWORD **)(a1 + 224);
  v6 = 0;
  v29 = a3;
  if ( (*v5 & 0x20000000) != 0 )
  {
    v10 = (unsigned int)v5[1];
    v11 = v5 + 2;
    for ( i = 0; i < (unsigned int)v10; ++v11 )
    {
      if ( *v11 == 3 )
        break;
      ++i;
    }
    v13 = i >= (unsigned int)v10 ? 0LL : (__int64 *)((char *)v5 + v10 + 8LL * i - (((_BYTE)v10 + 15) & 7) + 15);
    v14 = *v13;
    if ( v14 )
    {
      if ( *(_DWORD *)(v14 + 72) )
      {
        CMergedRectBase<4>::GetRects(v14, &v28, &v30);
        v15 = 0;
        if ( v28 )
        {
          v16 = *(_QWORD *)&v30.left;
          while ( 1 )
          {
            v31 = *(_OWORD *)(v16 + 16LL * v15);
            CMILMatrix::Transform2DBoundsHelper<1>(v29, &v31, &v30);
            CVisual::AdjustWorldBounds(a1, &v30);
            if ( !IsEmpty(&v30) )
            {
              if ( a5 )
              {
                v17 = *a5;
                left = v30.left;
                if ( *a5 > v30.left )
                {
                  v30.left = *a5;
                  left = v17;
                }
                v19 = a5[1];
                top = v30.top;
                if ( v19 > v30.top )
                {
                  v30.top = a5[1];
                  top = v19;
                }
                v21 = a5[2];
                right = v30.right;
                if ( v30.right > v21 )
                {
                  v30.right = a5[2];
                  right = v21;
                }
                v23 = a5[3];
                bottom = v30.bottom;
                if ( v30.bottom > v23 )
                {
                  v30.bottom = a5[3];
                  bottom = v23;
                }
                if ( right <= left || bottom <= top )
                {
                  v30.bottom = 0.0;
                  v30.right = 0.0;
                  v30.top = 0.0;
                  v30.left = 0.0;
                }
              }
              if ( !IsEmpty(&v30) )
              {
                LOBYTE(v25) = 1;
                v26 = CDirtyRegion::Add(a2, a1, v25, (__int64)&v30);
                v6 = v26;
                if ( v26 < 0 )
                  break;
              }
            }
            if ( ++v15 >= v28 )
              goto LABEL_26;
          }
          MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0xECBu);
        }
        else
        {
LABEL_26:
          *(_QWORD *)(a1 + 232) = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 368LL);
        }
        *(_BYTE *)(a1 + 93) |= 0x80u;
      }
    }
  }
  return v6;
}
