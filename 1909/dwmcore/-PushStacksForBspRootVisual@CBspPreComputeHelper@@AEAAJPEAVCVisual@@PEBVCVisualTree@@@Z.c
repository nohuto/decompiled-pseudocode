/*
 * XREFs of ?PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@PEBVCVisualTree@@@Z @ 0x1802538D0
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180087420 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Push@?$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800819F0 (-Push@-$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmap.c)
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@PEBVCVisualTree@@3@Z @ 0x18008B720 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@PEBVCVi.c)
 *     ?Push@?$CWatermarkStack@W4StackStateType@COcclusionContext@@$0EA@$01$09@@QEAAJAEBW4StackStateType@COcclusionContext@@@Z @ 0x1800AEC78 (-Push@-$CWatermarkStack@W4StackStateType@COcclusionContext@@$0EA@$01$09@@QEAAJAEBW4StackStateTyp.c)
 *     ?Push@?$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAJAEBQEAVCVisual@@@Z @ 0x1800AEE44 (-Push@-$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAJAEBQEAVCVisual@@@Z.c)
 *     ?Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z @ 0x1800AF024 (-Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z.c)
 *     ?Push@?$CWatermarkStack@_N$0EA@$01$09@@QEAAJAEB_N@Z @ 0x18016ECD4 (-Push@-$CWatermarkStack@_N$0EA@$01$09@@QEAAJAEB_N@Z.c)
 *     ?Push@?$CWatermarkStack@W4Enum@MilCompositingMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilCompositingMode@@@Z @ 0x180253468 (-Push@-$CWatermarkStack@W4Enum@MilCompositingMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilCompositingMod.c)
 *     ?Push@?$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAAJAEBQEAVCBspNode@@@Z @ 0x18025359C (-Push@-$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAAJAEBQEAVCBspNode@@@Z.c)
 */

__int64 __fastcall CBspPreComputeHelper::PushStacksForBspRootVisual(
        CBspPreComputeHelper *this,
        struct CVisual *a2,
        const struct CVisualTree *a3)
{
  signed int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  signed int v7; // eax
  __int64 v8; // rcx
  unsigned int v10; // [rsp+28h] [rbp-29h]
  _BYTE v11[64]; // [rsp+48h] [rbp-9h] BYREF
  int v12; // [rsp+88h] [rbp+37h]
  __int64 v13; // [rsp+B8h] [rbp+67h] BYREF
  struct CVisual *v14; // [rsp+C0h] [rbp+6Fh] BYREF

  v14 = a2;
  v12 = 0;
  CVisual::CalcEffectiveTransform((__int64)a2, 5, 0LL, &v13, (CMILMatrix *)v11, (__int64)a3, 0LL);
  v4 = CMatrixStack::Push((CBspPreComputeHelper *)((char *)this + 64), (const struct CMILMatrix *)v11, 0);
  v6 = v4;
  if ( v4 < 0 )
  {
    v10 = 105;
    goto LABEL_23;
  }
  v13 = 0LL;
  v4 = CWatermarkStack<CBspNode *,64,2,10>::Push((unsigned int *)this, &v13);
  v6 = v4;
  if ( v4 < 0 )
  {
    v10 = 110;
    goto LABEL_23;
  }
  v7 = CWatermarkStack<CVisual *,64,2,10>::Push((unsigned int *)this + 8, &v14);
  v6 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x71u, 0LL);
  }
  else
  {
    v4 = CMatrixStack::Push(
           (CBspPreComputeHelper *)((char *)this + 96),
           (const struct CMILMatrix *)&CMILMatrix::Identity,
           0);
    v6 = v4;
    if ( v4 < 0 )
    {
      v10 = 116;
      goto LABEL_23;
    }
    LODWORD(v14) = -1;
    v4 = CWatermarkStack<enum COcclusionContext::StackStateType,64,2,10>::Push((unsigned int *)this + 32, &v14);
    v6 = v4;
    if ( v4 < 0 )
    {
      v10 = 119;
      goto LABEL_23;
    }
    LODWORD(v14) = -1;
    v4 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((unsigned int *)this + 40, &v14);
    v6 = v4;
    if ( v4 < 0 )
    {
      v10 = 122;
      goto LABEL_23;
    }
    LODWORD(v14) = -1;
    v4 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((unsigned int *)this + 48, &v14);
    v6 = v4;
    if ( v4 < 0 )
    {
      v10 = 125;
      goto LABEL_23;
    }
    LODWORD(v14) = 5;
    v4 = CWatermarkStack<enum MilCompositingMode::Enum,64,2,10>::Push((unsigned int *)this + 56, &v14);
    v6 = v4;
    if ( v4 < 0 )
    {
      v10 = 128;
      goto LABEL_23;
    }
    LODWORD(v14) = (_DWORD)FLOAT_1_0;
    v4 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((unsigned int *)this + 64, &v14);
    v6 = v4;
    if ( v4 < 0 )
    {
      v10 = 131;
      goto LABEL_23;
    }
    LOBYTE(v14) = 0;
    v4 = CWatermarkStack<bool,64,2,10>::Push((unsigned int *)this + 72, &v14);
    v6 = v4;
    if ( v4 < 0 )
    {
      v10 = 134;
      goto LABEL_23;
    }
    v4 = CWatermarkStack<enum MilCompositingMode::Enum,64,2,10>::Push((unsigned int *)this + 80, (_DWORD *)this + 88);
    v6 = v4;
    if ( v4 < 0 )
    {
      v10 = 137;
LABEL_23:
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, v10, 0LL);
    }
  }
  return v6;
}
