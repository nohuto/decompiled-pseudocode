/*
 * XREFs of ?Push@?$CWatermarkStack@UD2D_VECTOR_2F@@$01$01$09@@QEAAJAEBUD2D_VECTOR_2F@@@Z @ 0x18004C120
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180041660 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z @ 0x18004B1E0 (-PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x1800F007B (memcpy_0.c)
 */

__int64 __fastcall CWatermarkStack<D2D_VECTOR_2F,2,2,10>::Push(unsigned int *a1, _QWORD *a2)
{
  unsigned int v2; // eax
  int v3; // ebx
  void *v4; // rsi
  unsigned int v7; // ecx
  unsigned int v8; // eax
  unsigned __int64 v10; // rax
  unsigned int v11; // ebp
  SIZE_T v12; // r8
  unsigned int v13; // ecx
  unsigned __int64 v14; // rax

  v2 = *a1;
  v3 = 0;
  v4 = 0LL;
  if ( *a1 != a1[1] )
    goto LABEL_2;
  v10 = 2LL * a1[1];
  v11 = -1;
  if ( v10 <= 0xFFFFFFFF )
    v11 = 2 * a1[1];
  v3 = v10 > 0xFFFFFFFF ? 0x80070216 : 0;
  if ( v10 > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)a1, 0LL, 0, v3, 0x4Cu);
    return (unsigned int)v3;
  }
  if ( v11 <= 2 )
    v11 = 2;
  v3 = 0;
  if ( 0xFFFFFFFFFFFFFFFFuLL / v11 <= 8 )
  {
    v3 = -2147024809;
  }
  else
  {
    v12 = 8LL * v11;
    if ( !v12 )
      v12 = 1LL;
    v4 = HeapAlloc(WPF::g_processHeap, 0, v12);
    if ( !v4 )
      v3 = -2147024882;
  }
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)a1, 0LL, 0, v3, 0x54u);
  }
  else
  {
    v13 = -1;
    v14 = 8LL * *a1;
    if ( v14 <= 0xFFFFFFFF )
      v13 = 8 * *a1;
    v3 = v14 > 0xFFFFFFFF ? 0x80070216 : 0;
    if ( v14 <= 0xFFFFFFFF )
    {
      memcpy_0(v4, *((const void **)a1 + 2), v13);
      WPF::ProcessHeapImpl::Free(*((void **)a1 + 2));
      v2 = *a1;
      *((_QWORD *)a1 + 2) = v4;
      v4 = 0LL;
      a1[1] = v11;
LABEL_2:
      *(_QWORD *)(*((_QWORD *)a1 + 2) + 8LL * v2) = *a2;
      v7 = a1[6];
      v8 = *a1 + 1;
      *a1 = v8;
      if ( v7 <= v8 )
        v7 = v8;
      a1[6] = v7;
      goto LABEL_5;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v3, 0x56u);
  }
LABEL_5:
  if ( v4 )
    HeapFree(WPF::g_processHeap, 0, v4);
  return (unsigned int)v3;
}
