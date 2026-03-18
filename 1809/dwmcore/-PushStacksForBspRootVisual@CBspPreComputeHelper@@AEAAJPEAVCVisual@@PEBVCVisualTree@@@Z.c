/*
 * XREFs of ?PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@PEBVCVisualTree@@@Z @ 0x180224EC4
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180041660 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?Push@?$CWatermarkStack@_N$0EA@$01$09@@QEAAJAEB_N@Z @ 0x18003287C (-Push@-$CWatermarkStack@_N$0EA@$01$09@@QEAAJAEB_N@Z.c)
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@PEBVCVisualTree@@3@Z @ 0x180044D00 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@PEBVCVi.c)
 *     ?Push@?$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmapInterpolationMode@@@Z @ 0x18004C3B8 (-Push@-$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmap.c)
 *     ?Push@?$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAJAEBQEAVCVisual@@@Z @ 0x18006520C (-Push@-$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAJAEBQEAVCVisual@@@Z.c)
 *     ?Push@?$CWatermarkStack@W4StackStateType@COcclusionContext@@$0EA@$01$09@@QEAAJAEBW4StackStateType@COcclusionContext@@@Z @ 0x18006B740 (-Push@-$CWatermarkStack@W4StackStateType@COcclusionContext@@$0EA@$01$09@@QEAAJAEBW4StackStateTyp.c)
 *     ?Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z @ 0x18006CBF4 (-Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Push@?$CWatermarkStack@W4Enum@MilCompositingMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilCompositingMode@@@Z @ 0x180224A1C (-Push@-$CWatermarkStack@W4Enum@MilCompositingMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilCompositingMod.c)
 *     ?Push@?$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAAJAEBQEAVCBspNode@@@Z @ 0x180224B88 (-Push@-$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAAJAEBQEAVCBspNode@@@Z.c)
 */

__int64 __fastcall CBspPreComputeHelper::PushStacksForBspRootVisual(
        CBspPreComputeHelper *this,
        struct CVisual *a2,
        const struct CVisualTree *a3)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v10; // [rsp+28h] [rbp-19h]
  _BYTE v11[64]; // [rsp+48h] [rbp+7h] BYREF
  int v12; // [rsp+88h] [rbp+47h]
  __int64 v13; // [rsp+A8h] [rbp+67h] BYREF
  struct CVisual *v14; // [rsp+B0h] [rbp+6Fh] BYREF

  v14 = a2;
  v12 = 0;
  CVisual::CalcEffectiveTransform((__int64)a2, 5, 0LL, &v13, (CMILMatrix *)v11, (__int64)a3, 0LL);
  v4 = CMatrixStack::Push((CBspPreComputeHelper *)((char *)this + 64), (const struct CMILMatrix *)v11, 0);
  v6 = v4;
  if ( v4 < 0 )
  {
    v10 = 107;
    goto LABEL_23;
  }
  v13 = 0LL;
  v4 = CWatermarkStack<CBspNode *,64,2,10>::Push((unsigned int *)this, &v13);
  v6 = v4;
  if ( v4 < 0 )
  {
    v10 = 112;
    goto LABEL_23;
  }
  v7 = CWatermarkStack<CVisual *,64,2,10>::Push((unsigned int *)this + 8, &v14);
  v6 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x73u);
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
      v10 = 118;
      goto LABEL_23;
    }
    LODWORD(v14) = -1;
    v4 = CWatermarkStack<enum COcclusionContext::StackStateType,64,2,10>::Push((unsigned int *)this + 32, &v14);
    v6 = v4;
    if ( v4 < 0 )
    {
      v10 = 121;
      goto LABEL_23;
    }
    LODWORD(v14) = -1;
    v4 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((unsigned int *)this + 40, &v14);
    v6 = v4;
    if ( v4 < 0 )
    {
      v10 = 124;
      goto LABEL_23;
    }
    LODWORD(v14) = -1;
    v4 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((unsigned int *)this + 48, &v14);
    v6 = v4;
    if ( v4 < 0 )
    {
      v10 = 127;
      goto LABEL_23;
    }
    LODWORD(v14) = 5;
    v4 = CWatermarkStack<enum MilCompositingMode::Enum,64,2,10>::Push((unsigned int *)this + 56, &v14);
    v6 = v4;
    if ( v4 < 0 )
    {
      v10 = 130;
      goto LABEL_23;
    }
    *(float *)&v14 = FLOAT_1_0;
    v4 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((unsigned int *)this + 64, &v14);
    v6 = v4;
    if ( v4 < 0 )
    {
      v10 = 133;
      goto LABEL_23;
    }
    LOBYTE(v14) = 0;
    v4 = CWatermarkStack<bool,64,2,10>::Push((unsigned int *)this + 72, &v14);
    v6 = v4;
    if ( v4 < 0 )
    {
      v10 = 136;
      goto LABEL_23;
    }
    v4 = CWatermarkStack<enum MilCompositingMode::Enum,64,2,10>::Push((unsigned int *)this + 80, (_DWORD *)this + 88);
    v6 = v4;
    if ( v4 < 0 )
    {
      v10 = 139;
LABEL_23:
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, v10);
    }
  }
  return v6;
}
