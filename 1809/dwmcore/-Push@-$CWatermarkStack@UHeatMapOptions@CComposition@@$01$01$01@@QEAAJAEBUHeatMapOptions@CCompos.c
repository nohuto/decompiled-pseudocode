/*
 * XREFs of ?Push@?$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@QEAAJAEBUHeatMapOptions@CComposition@@@Z @ 0x180165D40
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180033750 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x1800F007B (memcpy_0.c)
 */

__int64 __fastcall CWatermarkStack<CComposition::HeatMapOptions,2,2,2>::Push(unsigned int *a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // ebx
  void *v4; // rbp
  unsigned __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rcx
  SIZE_T v10; // r8
  unsigned int v11; // eax
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  unsigned int v15; // edx
  unsigned int v16; // r8d

  v2 = *a1;
  v3 = 0;
  v4 = 0LL;
  if ( (_DWORD)v2 == a1[1] )
  {
    v7 = 2LL * a1[1];
    v8 = 0xFFFFFFFFLL;
    if ( v7 <= 0xFFFFFFFF )
      v8 = (unsigned int)v7;
    v3 = v7 > 0xFFFFFFFF ? 0x80070216 : 0;
    if ( v7 > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, 0LL, 0, v3, 0x4Cu);
      goto LABEL_22;
    }
    if ( (unsigned int)v8 <= 2 )
      v8 = 2LL;
    v3 = 0;
    v9 = (unsigned int)v8;
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v8 <= 0x18 )
    {
      v3 = -2147024809;
    }
    else
    {
      v10 = 24 * v8;
      if ( !(24 * v8) )
        v10 = 1LL;
      v4 = HeapAlloc(WPF::g_processHeap, 0, v10);
      if ( !v4 )
        v3 = -2147024882;
    }
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v3, 0x54u);
      goto LABEL_22;
    }
    v11 = -1;
    v12 = 24LL * *a1;
    if ( v12 <= 0xFFFFFFFF )
      v11 = 24 * *a1;
    v3 = v12 > 0xFFFFFFFF ? 0x80070216 : 0;
    if ( v12 > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v3, 0x56u);
      goto LABEL_22;
    }
    memcpy_0(v4, *((const void **)a1 + 2), v11);
    WPF::ProcessHeapImpl::Free(*((void **)a1 + 2));
    v2 = *a1;
    *((_QWORD *)a1 + 2) = v4;
    v4 = 0LL;
    a1[1] = v8;
  }
  v13 = 3 * v2;
  v14 = *((_QWORD *)a1 + 2);
  *(_OWORD *)(v14 + 8 * v13) = *(_OWORD *)a2;
  *(_QWORD *)(v14 + 8 * v13 + 16) = *(_QWORD *)(a2 + 16);
  v15 = a1[6];
  v16 = *a1 + 1;
  *a1 = v16;
  if ( v15 <= v16 )
    v15 = v16;
  a1[6] = v15;
LABEL_22:
  WPF::ProcessHeapImpl::Free(v4);
  return (unsigned int)v3;
}
