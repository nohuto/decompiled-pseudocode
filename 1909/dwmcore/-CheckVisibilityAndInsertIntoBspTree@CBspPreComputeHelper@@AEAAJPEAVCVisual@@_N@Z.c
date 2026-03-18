/*
 * XREFs of ?CheckVisibilityAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N@Z @ 0x180252F64
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180083B20 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18007DB04 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?GetTopByReference@?$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@MilBackfaceVisibility@@XZ @ 0x18007E400 (-GetTopByReference@-$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@Mi.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x18007F5CC (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?IsFacingUser@CMILMatrix@@QEBA_NXZ @ 0x18021B2B0 (-IsFacingUser@CMILMatrix@@QEBA_NXZ.c)
 *     ?CreatePolygonAndPushToBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N11@Z @ 0x18025307C (-CreatePolygonAndPushToBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N11@Z.c)
 */

__int64 __fastcall CBspPreComputeHelper::CheckVisibilityAndInsertIntoBspTree(
        CBspPreComputeHelper *this,
        struct CVisual *a2,
        bool a3)
{
  unsigned int v6; // ebx
  const struct CMILMatrix *TopByReference; // rax
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  const struct CMILMatrix *v11; // rax
  const struct Windows::Foundation::Numerics::float4x4 *v12; // rdx
  _DWORD *v13; // rax
  bool v14; // r8
  bool v15; // cl
  signed int PolygonAndPushToBspTree; // eax
  __int64 v17; // rcx
  _OWORD v19[4]; // [rsp+30h] [rbp-58h] BYREF
  int v20; // [rsp+70h] [rbp-18h]

  v6 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(struct CVisual *))(*(_QWORD *)a2 + 256LL))(a2) || a3 )
  {
    TopByReference = CMatrixStack::GetTopByReference((CBspPreComputeHelper *)((char *)this + 64));
    v8 = *((_OWORD *)TopByReference + 1);
    v19[0] = *(_OWORD *)TopByReference;
    v9 = *((_OWORD *)TopByReference + 2);
    v19[1] = v8;
    v10 = *((_OWORD *)TopByReference + 3);
    LODWORD(TopByReference) = *((_DWORD *)TopByReference + 16);
    v19[2] = v9;
    v19[3] = v10;
    v20 = (int)TopByReference;
    v11 = CMatrixStack::GetTopByReference((CBspPreComputeHelper *)((char *)this + 96));
    CMILMatrix::Multiply(v11, (const struct CMILMatrix *)v19, (struct CMILMatrix *)v19);
    CMILMatrix::IsFacingUser((CMILMatrix *)v19, v12);
    v13 = (_DWORD *)CWatermarkStack<enum MilBackfaceVisibility::Enum,64,2,10>::GetTopByReference((__int64)this + 128);
    v15 = 1;
    if ( !v14 )
    {
      if ( *v13 == 1 && !a3 )
        return v6;
      if ( *v13 )
        v15 = 0;
    }
    PolygonAndPushToBspTree = CBspPreComputeHelper::CreatePolygonAndPushToBspTree(this, a2, v14, v15, a3);
    v6 = PolygonAndPushToBspTree;
    if ( PolygonAndPushToBspTree < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, PolygonAndPushToBspTree, 0x11Du, 0LL);
  }
  return v6;
}
