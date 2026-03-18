/*
 * XREFs of ?Push@?$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAJAEBQEAVCVisual@@@Z @ 0x18006520C
 * Callers:
 *     ?BuildTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEAVCComposition@@PEBVCVisualTree@@PEAVCVisual@@_K@Z @ 0x180006BA0 (-BuildTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEAVCComposition@@PEBVCVisualT.c)
 *     ?EnsureLayoutSize@CPreComputeContext@@AEAAJPEBVCVisualTree@@@Z @ 0x18004BF14 (-EnsureLayoutSize@CPreComputeContext@@AEAAJPEBVCVisualTree@@@Z.c)
 *     ?PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@PEBVCVisualTree@@@Z @ 0x180224EC4 (-PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@PEBVCVisualTree@@@Z.c)
 *     ?BuildTransformParentStack@CLightPreComputeHelper@@EEAAJPEAVCComposition@@PEBVCVisualTree@@PEAVCVisual@@_K@Z @ 0x1802258A0 (-BuildTransformParentStack@CLightPreComputeHelper@@EEAAJPEAVCComposition@@PEBVCVisualTree@@PEAVC.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x1800F007B (memcpy_0.c)
 */

__int64 __fastcall CWatermarkStack<CVisual *,64,2,10>::Push(unsigned int *a1, _QWORD *a2)
{
  unsigned int v2; // eax
  int v3; // ebx
  void *v4; // r14
  unsigned int v7; // ecx
  unsigned int v8; // eax
  void *v9; // rsi
  unsigned __int64 v11; // rax
  unsigned int v12; // ebp
  SIZE_T v13; // r8
  unsigned int v14; // ecx
  unsigned __int64 v15; // rax

  v2 = *a1;
  v3 = 0;
  v4 = 0LL;
  if ( *a1 != a1[1] )
    goto LABEL_2;
  v11 = 2LL * a1[1];
  v12 = -1;
  if ( v11 <= 0xFFFFFFFF )
    v12 = 2 * a1[1];
  v3 = v11 > 0xFFFFFFFF ? 0x80070216 : 0;
  if ( v11 > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)a1, 0LL, 0, v3, 0x4Cu);
    return (unsigned int)v3;
  }
  if ( v12 <= 0x40 )
    v12 = 64;
  v3 = 0;
  if ( 0xFFFFFFFFFFFFFFFFuLL / v12 <= 8 )
  {
    v3 = -2147024809;
    goto LABEL_24;
  }
  v13 = 8LL * v12;
  if ( !v13 )
    v13 = 1LL;
  v4 = HeapAlloc(WPF::g_processHeap, 0, v13);
  v9 = v4;
  if ( !v4 )
  {
    v3 = -2147024882;
LABEL_24:
    v9 = 0LL;
  }
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)a1, 0LL, 0, v3, 0x54u);
  }
  else
  {
    v14 = -1;
    v15 = 8LL * *a1;
    if ( v15 <= 0xFFFFFFFF )
      v14 = 8 * *a1;
    v3 = v15 > 0xFFFFFFFF ? 0x80070216 : 0;
    if ( v15 <= 0xFFFFFFFF )
    {
      memcpy_0(v4, *((const void **)a1 + 2), v14);
      WPF::ProcessHeapImpl::Free(*((void **)a1 + 2));
      v2 = *a1;
      *((_QWORD *)a1 + 2) = v4;
      a1[1] = v12;
LABEL_2:
      *(_QWORD *)(*((_QWORD *)a1 + 2) + 8LL * v2) = *a2;
      v7 = a1[6];
      v8 = *a1 + 1;
      *a1 = v8;
      if ( v7 <= v8 )
        v7 = v8;
      v9 = 0LL;
      a1[6] = v7;
      goto LABEL_5;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v3, 0x56u);
  }
LABEL_5:
  if ( v9 )
    HeapFree(WPF::g_processHeap, 0, v9);
  return (unsigned int)v3;
}
