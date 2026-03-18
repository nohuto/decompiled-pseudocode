/*
 * XREFs of ?PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@PEBVCVisualTree@@@Z @ 0x180254E44
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180061D00 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?Push@?$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180054C84 (-Push@-$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmap.c)
 *     ?GetOpacityInternal@CVisual@@QEBAMXZ @ 0x18007E9BC (-GetOpacityInternal@CVisual@@QEBAMXZ.c)
 *     ?GetTopByReference@?$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@MilBackfaceVisibility@@XZ @ 0x180087E30 (-GetTopByReference@-$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@Mi.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Push@?$CWatermarkStack@W4StackStateType@COcclusionContext@@$0EA@$01$09@@QEAAJAEBW4StackStateType@COcclusionContext@@@Z @ 0x1800C8290 (-Push@-$CWatermarkStack@W4StackStateType@COcclusionContext@@$0EA@$01$09@@QEAAJAEBW4StackStateTyp.c)
 *     ?Push@?$CWatermarkStack@_N$0EA@$01$09@@QEAAJAEB_N@Z @ 0x1801703B4 (-Push@-$CWatermarkStack@_N$0EA@$01$09@@QEAAJAEB_N@Z.c)
 *     ?Push@?$CWatermarkStack@W4Enum@MilCompositingMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilCompositingMode@@@Z @ 0x180254BD8 (-Push@-$CWatermarkStack@W4Enum@MilCompositingMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilCompositingMod.c)
 *     ?PushTransformForChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@PEBVCVisualTree@@@Z @ 0x180255298 (-PushTransformForChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@PEBVCVisualTree@@@Z.c)
 */

__int64 __fastcall CBspPreComputeHelper::PushStacksForBspChildVisual(
        CBspPreComputeHelper *this,
        struct CVisual *a2,
        const struct CVisualTree *a3)
{
  signed int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  int v8; // eax
  signed int v9; // eax
  __int64 v10; // rcx
  signed int v11; // eax
  __int64 v12; // rcx
  signed int v13; // eax
  __int64 v14; // rcx
  float OpacityInternal; // xmm0_4
  float v16; // xmm2_4
  unsigned int *v17; // rcx
  signed int v18; // eax
  __int64 v19; // rcx
  signed int v20; // eax
  __int64 v21; // rcx
  signed int v22; // eax
  __int64 v23; // rcx
  int v25; // [rsp+48h] [rbp+18h] BYREF

  CBspPreComputeHelper::PushTransformForChildVisual(this, a2, a3);
  if ( (*((_BYTE *)a2 + 96) & 0x40) != 0
    && (v25 = *((int *)a2 + 50),
        v5 = CWatermarkStack<enum COcclusionContext::StackStateType,64,2,10>::Push((unsigned int *)this + 32, &v25),
        v7 = v5,
        v5 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x9Cu, 0LL);
  }
  else
  {
    v8 = *((_DWORD *)a2 + 24);
    if ( (v8 & 2) != 0
      && (v25 = v8 << 18 >> 28,
          v9 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((unsigned int *)this + 40, &v25),
          v7 = v9,
          v9 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xA2u, 0LL);
    }
    else if ( (*((_BYTE *)a2 + 96) & 8) != 0
           && (v25 = *((int *)a2 + 47),
               v11 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push(
                       (unsigned int *)this + 48,
                       &v25),
               v7 = v11,
               v11 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0xA8u, 0LL);
    }
    else if ( (*((_BYTE *)a2 + 96) & 0x10) != 0
           && (v25 = *((int *)a2 + 48),
               v13 = CWatermarkStack<enum MilCompositingMode::Enum,64,2,10>::Push((unsigned int *)this + 56, &v25),
               v7 = v13,
               v13 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0xAEu, 0LL);
    }
    else
    {
      OpacityInternal = CVisual::GetOpacityInternal(a2);
      v16 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(OpacityInternal - 1.0)) & _xmm);
      if ( v16 < 0.0000011920929
        || (*(float *)&v25 = fminf(1.0, fmaxf(OpacityInternal, 0.0))
                           * *(float *)CWatermarkStack<enum MilBackfaceVisibility::Enum,64,2,10>::GetTopByReference((__int64)this + 256),
            v18 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push(v17, &v25),
            v7 = v18,
            v18 >= 0) )
      {
        if ( (*((_BYTE *)a2 + 94) & 1) != 0
          && (LOBYTE(v25) = 1,
              v20 = CWatermarkStack<bool,64,2,10>::Push((unsigned int *)this + 72, &v25),
              v7 = v20,
              v20 < 0) )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0xBDu, 0LL);
        }
        else
        {
          v22 = CWatermarkStack<enum MilCompositingMode::Enum,64,2,10>::Push(
                  (unsigned int *)this + 80,
                  (_DWORD *)this + 88);
          v7 = v22;
          if ( v22 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0xC1u, 0LL);
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0xB7u, 0LL);
      }
    }
  }
  return v7;
}
