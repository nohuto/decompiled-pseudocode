/*
 * XREFs of ?Create@CGlobalComposition@@SAJPEAVCTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCDebugFrameCounter@@PEAPEAVCComposition@@@Z @ 0x1800DF510
 * Callers:
 *     ?Initialize@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x1800DE7B0 (-Initialize@CPartitionVerticalBlankScheduler@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x18004E7B0 (-Release@CDirtyRegion@@UEAAKXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180089A74 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CComposition@@IEAA@PEAVCTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCDebugFrameCounter@@@Z @ 0x1800DFB04 (--0CComposition@@IEAA@PEAVCTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCDebugFrame.c)
 *     ?Initialize@CGlobalComposition@@AEAAJXZ @ 0x1800E0840 (-Initialize@CGlobalComposition@@AEAAJXZ.c)
 */

__int64 __fastcall CGlobalComposition::Create(
        struct CTransport *a1,
        struct ICompositorScheduler *a2,
        struct CConnection *a3,
        struct CDebugFrameCounter *a4,
        struct CComposition **a5)
{
  CComposition *v9; // rax
  __int64 v10; // rcx
  CGlobalComposition *v11; // rbx
  signed int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // edi

  v9 = (CComposition *)DefaultHeap::AllocClear(0x540uLL);
  v11 = v9;
  if ( v9 )
  {
    CComposition::CComposition(v9, a1, a2, a3, a4);
    *(_QWORD *)v11 = &CGlobalComposition::`vftable';
  }
  else
  {
    v11 = 0LL;
  }
  if ( v11 )
  {
    v12 = CGlobalComposition::Initialize(v11);
    v14 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x2Cu, 0LL);
      CDirtyRegion::Release(v11);
    }
    else
    {
      g_pComposition = v11;
      *a5 = v11;
    }
  }
  else
  {
    v14 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, 0x8007000E, 0x2Au, 0LL);
  }
  return v14;
}
