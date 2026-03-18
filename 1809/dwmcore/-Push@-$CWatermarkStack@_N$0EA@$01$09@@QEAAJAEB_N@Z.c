/*
 * XREFs of ?Push@?$CWatermarkStack@_N$0EA@$01$09@@QEAAJAEB_N@Z @ 0x18003287C
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180033750 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushOffsetInternal@CDrawingContext@@AEAAJPEBVCVisual@@MMM@Z @ 0x180166408 (-PushOffsetInternal@CDrawingContext@@AEAAJPEBVCVisual@@MMM@Z.c)
 *     ?PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@PEBVCVisualTree@@@Z @ 0x180224CF4 (-PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@PEBVCVisualTree@@@Z.c)
 *     ?PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@PEBVCVisualTree@@@Z @ 0x180224EC4 (-PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@PEBVCVisualTree@@@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x1800F007B (memcpy_0.c)
 */

__int64 __fastcall CWatermarkStack<bool,64,2,10>::Push(unsigned int *a1, _BYTE *a2)
{
  unsigned int v2; // eax
  void *v3; // r14
  unsigned int v6; // eax
  unsigned int v7; // ecx
  void *v8; // rsi
  int v9; // ebx
  __int64 v11; // rax
  unsigned int v12; // ecx
  unsigned __int64 v13; // rax
  unsigned int v14; // ebp

  v2 = *a1;
  v3 = 0LL;
  if ( *a1 != a1[1] )
    goto LABEL_2;
  v11 = a1[1];
  v12 = -1;
  v13 = 2 * v11;
  v14 = -1;
  if ( v13 <= 0xFFFFFFFF )
    v14 = v13;
  v9 = v13 > 0xFFFFFFFF ? 0x80070216 : 0;
  if ( v13 > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFF, 0LL, 0, v9, 0x4Cu);
    return (unsigned int)v9;
  }
  if ( v14 <= 0x40 )
    v14 = 64;
  v9 = 0;
  if ( 0xFFFFFFFFFFFFFFFFuLL / v14 <= 1 )
  {
    v9 = -2147024809;
  }
  else
  {
    v3 = HeapAlloc(WPF::g_processHeap, 0, v14);
    v8 = v3;
    if ( v3 )
      goto LABEL_18;
    v9 = -2147024882;
  }
  v8 = 0LL;
LABEL_18:
  if ( v9 >= 0 )
  {
    memcpy_0(v3, *((const void **)a1 + 2), *a1);
    WPF::ProcessHeapImpl::Free(*((void **)a1 + 2));
    v2 = *a1;
    *((_QWORD *)a1 + 2) = v3;
    a1[1] = v14;
LABEL_2:
    *(_BYTE *)(v2 + *((_QWORD *)a1 + 2)) = *a2;
    v6 = a1[6];
    v7 = *a1 + 1;
    *a1 = v7;
    if ( v6 <= v7 )
      v6 = v7;
    v8 = 0LL;
    v9 = 0;
    a1[6] = v6;
    goto LABEL_5;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v9, 0x54u);
LABEL_5:
  if ( v8 )
    HeapFree(WPF::g_processHeap, 0, v8);
  return (unsigned int)v9;
}
