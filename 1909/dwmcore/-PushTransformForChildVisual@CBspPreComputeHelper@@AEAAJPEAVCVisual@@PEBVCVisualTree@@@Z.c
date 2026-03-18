/*
 * XREFs of ?PushTransformForChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@PEBVCVisualTree@@@Z @ 0x180253B28
 * Callers:
 *     ?PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@PEBVCVisualTree@@@Z @ 0x1802536D4 (-PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@PEBVCVisualTree@@@Z.c)
 * Callees:
 *     ?GetTransformParentNoRef@CVisual@@QEBAPEAV1@XZ @ 0x180011D3C (-GetTransformParentNoRef@CVisual@@QEBAPEAV1@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@PEBVCVisualTree@@3@Z @ 0x18008B720 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@PEBVCVi.c)
 *     ?Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z @ 0x1800AF024 (-Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z.c)
 *     ?GetTopByReference@?$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEBAPEBQEAVCBspNode@@XZ @ 0x1800D41F0 (-GetTopByReference@-$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEBAPEBQEAVCBspNode@@XZ.c)
 */

__int64 __fastcall CBspPreComputeHelper::PushTransformForChildVisual(
        CBspPreComputeHelper *this,
        struct CVisual *a2,
        const struct CVisualTree *a3)
{
  int v4; // ebx
  struct CVisual *TransformParentNoRef; // rax
  __int64 v8; // rcx
  __int64 v9; // r9
  __int64 v10; // r10
  __int64 v11; // r8
  int v12; // eax
  __int64 v13; // rax
  signed int v14; // eax
  __int64 v15; // rcx
  unsigned int v16; // ebx
  _BYTE v18[64]; // [rsp+40h] [rbp-B8h] BYREF
  int v19; // [rsp+80h] [rbp-78h]
  _BYTE v20[64]; // [rsp+90h] [rbp-68h] BYREF
  int v21; // [rsp+D0h] [rbp-28h]
  char v22; // [rsp+100h] [rbp+8h] BYREF

  v4 = 0;
  TransformParentNoRef = CVisual::GetTransformParentNoRef(a2);
  if ( TransformParentNoRef && TransformParentNoRef != *((struct CVisual **)a2 + 10) )
  {
    v8 = *(_QWORD *)CWatermarkStack<CBspNode *,64,2,10>::GetTopByReference((__int64)this + 32);
    while ( v9 )
    {
      if ( v9 == v10 )
        goto LABEL_10;
      if ( v9 == v8 )
        break;
      v9 = *(_QWORD *)(v9 + 80);
      ++v4;
    }
    if ( v9 != v10 )
      v4 = 0;
  }
LABEL_10:
  v21 = 0;
  v11 = 0LL;
  v12 = *((_DWORD *)this + 24) - v4;
  v19 = 0;
  v13 = (unsigned int)(v12 - 1);
  if ( *((_DWORD *)this + 24) && (unsigned int)v13 < *((_DWORD *)this + 24) )
    v11 = *((_QWORD *)this + 14) + 68 * v13;
  CVisual::CalcEffectiveTransform((__int64)a2, 5, v11, &v22, (CMILMatrix *)v20, (__int64)a3, (__int64)v18);
  v14 = CMatrixStack::Push((CBspPreComputeHelper *)((char *)this + 96), (const struct CMILMatrix *)v18, 0);
  v16 = v14;
  if ( v14 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0xF3u, 0LL);
  return v16;
}
