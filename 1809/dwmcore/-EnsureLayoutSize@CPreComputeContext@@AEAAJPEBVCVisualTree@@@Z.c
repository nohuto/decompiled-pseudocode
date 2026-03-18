/*
 * XREFs of ?EnsureLayoutSize@CPreComputeContext@@AEAAJPEBVCVisualTree@@@Z @ 0x18004BF14
 * Callers:
 *     ?PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z @ 0x18004B1E0 (-PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z.c)
 * Callees:
 *     ?Push@?$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAJAEBQEAVCVisual@@@Z @ 0x18006520C (-Push@-$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAJAEBQEAVCVisual@@@Z.c)
 *     ?GetTopByReference@?$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEBAPEBQEAVCBspNode@@XZ @ 0x180076330 (-GetTopByReference@-$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEBAPEBQEAVCBspNode@@XZ.c)
 *     ?Pop@?$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAA_NPEAPEAVCVisual@@@Z @ 0x1800767C0 (-Pop@-$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAA_NPEAPEAVCVisual@@@Z.c)
 *     ?ComputeLayoutSize@CVisual@@QEAA_NXZ @ 0x18009F3A0 (-ComputeLayoutSize@CVisual@@QEAA_NXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CPreComputeContext::EnsureLayoutSize(CPreComputeContext *this, const struct CVisualTree *a2)
{
  unsigned int v2; // edi
  CVisual *v3; // rbx
  int v5; // eax
  __int64 v6; // rdx
  unsigned int v7; // ecx
  __int64 v8; // r8
  __int64 v9; // r9
  bool i; // al
  _DWORD v11[4]; // [rsp+30h] [rbp-20h] BYREF
  void *v12; // [rsp+40h] [rbp-10h]
  int v13; // [rsp+48h] [rbp-8h]
  CVisual *v14; // [rsp+60h] [rbp+10h] BYREF

  v14 = this;
  v2 = 0;
  v3 = *(CVisual **)(*((_QWORD *)a2 + 3) + 80LL);
  if ( v3 )
  {
    v11[0] = 0;
    v11[1] = 0;
    v12 = 0LL;
    v11[2] = 0;
    v13 = 0;
    v14 = v3;
    do
    {
      v5 = CWatermarkStack<CVisual *,64,2,10>::Push(v11, &v14);
      v2 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v5, 0x4CBu);
        goto LABEL_11;
      }
      v3 = (CVisual *)*((_QWORD *)v3 + 10);
      v14 = v3;
    }
    while ( v3 );
    for ( i = 0;
          v11[0]
       && (i
        || (*(_BYTE *)(*(_QWORD *)CWatermarkStack<CBspNode *,64,2,10>::GetTopByReference(v11, v6, v8, v9) + 88LL) & 0x7F) != 0);
          i = CVisual::ComputeLayoutSize(v14) )
    {
      CWatermarkStack<CVisual *,64,2,10>::Pop(v11, &v14);
    }
LABEL_11:
    WPF::ProcessHeapImpl::Free(v12);
  }
  return v2;
}
