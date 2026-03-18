/*
 * XREFs of ?EnsureLayoutSize@CPreComputeContext@@AEAAJPEBVCVisualTree@@@Z @ 0x18005492C
 * Callers:
 *     ?PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z @ 0x180053E00 (-PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Push@?$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAJAEBQEAVCVisual@@@Z @ 0x1800C104C (-Push@-$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAJAEBQEAVCVisual@@@Z.c)
 *     ?ComputeLayoutSize@CVisual@@QEAA_NXZ @ 0x1800C9DC8 (-ComputeLayoutSize@CVisual@@QEAA_NXZ.c)
 *     ?GetTopByReference@?$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEBAPEBQEAVCBspNode@@XZ @ 0x1800D4170 (-GetTopByReference@-$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEBAPEBQEAVCBspNode@@XZ.c)
 *     ?Pop@?$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAA_NPEAPEAVCVisual@@@Z @ 0x1800D4A68 (-Pop@-$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAA_NPEAPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CPreComputeContext::EnsureLayoutSize(CPreComputeContext *this, const struct CVisualTree *a2)
{
  unsigned int v2; // edi
  CVisual *v3; // rbx
  int v5; // eax
  unsigned int v6; // ecx
  bool i; // al
  _DWORD v8[4]; // [rsp+30h] [rbp-20h] BYREF
  void *lpMem; // [rsp+40h] [rbp-10h]
  int v10; // [rsp+48h] [rbp-8h]
  CVisual *v11; // [rsp+60h] [rbp+10h] BYREF

  v11 = this;
  v2 = 0;
  v3 = *(CVisual **)(*((_QWORD *)a2 + 3) + 80LL);
  if ( v3 )
  {
    v8[0] = 0;
    v8[1] = 0;
    lpMem = 0LL;
    v8[2] = 0;
    v10 = 0;
    v11 = v3;
    do
    {
      v5 = CWatermarkStack<CVisual *,64,2,10>::Push(v8, &v11);
      v2 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x4CBu, 0LL);
        goto LABEL_11;
      }
      v3 = (CVisual *)*((_QWORD *)v3 + 10);
      v11 = v3;
    }
    while ( v3 );
    for ( i = 0;
          v8[0]
       && (i || (*(_BYTE *)(*(_QWORD *)CWatermarkStack<CBspNode *,64,2,10>::GetTopByReference(v8) + 88LL) & 0x7F) != 0);
          i = CVisual::ComputeLayoutSize(v11) )
    {
      CWatermarkStack<CVisual *,64,2,10>::Pop(v8, &v11);
    }
LABEL_11:
    operator delete(lpMem);
  }
  return v2;
}
