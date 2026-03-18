/*
 * XREFs of ?CollectAdditionalDirtyRegion@CVisual@@MEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x18008B4D0
 * Callers:
 *     ?CollectAdditionalDirtyRegion@CWindowNode@@UEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x18008B2B0 (-CollectAdditionalDirtyRegion@CWindowNode@@UEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitm.c)
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x180052C10 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180070580 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?AdjustContentWorldBounds@CVisual@@AEBA_NPEAV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x18007FC1C (-AdjustContentWorldBounds@CVisual@@AEBA_NPEAV-$CRectF@UPageInPixels@CoordinateSpace@@@@@Z.c)
 *     ?Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180085B28 (-Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetRects@?$CMergedRectBase@$03@@QEAA_NPEAIPEAPEBUMilRectF@@@Z @ 0x1800C9BE4 (-GetRects@-$CMergedRectBase@$03@@QEAA_NPEAIPEAPEBUMilRectF@@@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 */

__int64 __fastcall CVisual::CollectAdditionalDirtyRegion(
        CVisual *this,
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
  int v25; // eax
  unsigned int v26; // ecx
  unsigned int v27; // [rsp+30h] [rbp-40h] BYREF
  __int64 v28; // [rsp+38h] [rbp-38h]
  struct D2D_RECT_F v29; // [rsp+40h] [rbp-30h] BYREF
  __int128 v30; // [rsp+50h] [rbp-20h] BYREF

  v5 = (_DWORD *)*((_QWORD *)this + 28);
  v6 = 0;
  v28 = a3;
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
    v13 = i >= (unsigned int)v10 ? 0LL : (__int64 *)((char *)v5 + 8LL * i - (((_BYTE)v10 + 15) & 7) + v10 + 15);
    v14 = *v13;
    if ( v14 )
    {
      if ( *(_DWORD *)(v14 + 72) )
      {
        CMergedRectBase<4>::GetRects(v14, &v27, &v29);
        v15 = 0;
        if ( v27 )
        {
          v16 = *(_QWORD *)&v29.left;
          while ( 1 )
          {
            v30 = *(_OWORD *)(v16 + 16LL * v15);
            CMILMatrix::Transform2DBoundsHelper<1>(v28, (float *)&v30, &v29.left);
            if ( CVisual::AdjustContentWorldBounds(this, &v29) )
            {
              if ( a5 )
              {
                v17 = *a5;
                left = v29.left;
                if ( *a5 > v29.left )
                {
                  v29.left = *a5;
                  left = v17;
                }
                v19 = a5[1];
                top = v29.top;
                if ( v19 > v29.top )
                {
                  v29.top = a5[1];
                  top = v19;
                }
                v21 = a5[2];
                right = v29.right;
                if ( v29.right > v21 )
                {
                  v29.right = a5[2];
                  right = v21;
                }
                v23 = a5[3];
                bottom = v29.bottom;
                if ( v29.bottom > v23 )
                {
                  v29.bottom = a5[3];
                  bottom = v23;
                }
                if ( right <= left || bottom <= top )
                {
                  v29.bottom = 0.0;
                  v29.right = 0.0;
                  v29.top = 0.0;
                  v29.left = 0.0;
                }
              }
              if ( !IsEmpty(&v29) )
              {
                v25 = CDirtyRegion::Add(a2, (__int64)this, 1, &v29);
                v6 = v25;
                if ( v25 < 0 )
                  break;
              }
            }
            if ( ++v15 >= v27 )
              goto LABEL_26;
          }
          MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0xF3Bu, 0LL);
        }
        else
        {
LABEL_26:
          *((_QWORD *)this + 29) = *(_QWORD *)(*((_QWORD *)this + 2) + 384LL);
        }
        *((_BYTE *)this + 93) |= 0x80u;
      }
    }
  }
  return v6;
}
