/*
 * XREFs of ?Push@?$CWatermarkStack@VCMILMatrix@@$07$01$07@@QEAAJAEBVCMILMatrix@@@Z @ 0x18002E66C
 * Callers:
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18002E720 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z @ 0x18006CBF4 (-Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z.c)
 *     ?PushOffset@CMatrixStack@@QEAAJMMM@Z @ 0x1801E3C38 (-PushOffset@CMatrixStack@@QEAAJMMM@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x1800F007B (memcpy_0.c)
 */

__int64 __fastcall CWatermarkStack<CMILMatrix,8,2,8>::Push(unsigned int *a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // ebx
  void *v4; // rbp
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned int v9; // edx
  unsigned int v10; // r8d
  unsigned __int64 v12; // rax
  unsigned int v13; // esi
  unsigned int v14; // ecx
  SIZE_T v15; // r8
  unsigned __int64 v16; // rcx
  unsigned int v17; // eax

  v2 = *a1;
  v3 = 0;
  v4 = 0LL;
  if ( (_DWORD)v2 == a1[1] )
  {
    v12 = 2LL * a1[1];
    v13 = -1;
    if ( v12 <= 0xFFFFFFFF )
      v13 = 2 * a1[1];
    v3 = v12 > 0xFFFFFFFF ? 0x80070216 : 0;
    if ( v12 > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)a1, 0LL, 0, v3, 0x4Cu);
      goto LABEL_5;
    }
    if ( v13 <= 8 )
      v13 = 8;
    v3 = 0;
    v14 = v13;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v13 <= 0x44 )
    {
      v3 = -2147024809;
    }
    else
    {
      v15 = 68LL * v13;
      if ( !v15 )
        v15 = 1LL;
      v4 = HeapAlloc(WPF::g_processHeap, 0, v15);
      if ( !v4 )
        v3 = -2147024882;
    }
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v3, 0x54u);
      goto LABEL_5;
    }
    v16 = 68LL * *a1;
    v17 = -1;
    if ( v16 <= 0xFFFFFFFF )
      v17 = 68 * *a1;
    v3 = v16 > 0xFFFFFFFF ? 0x80070216 : 0;
    if ( v16 > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v3, 0x56u);
      goto LABEL_5;
    }
    memcpy_0(v4, *((const void **)a1 + 2), v17);
    WPF::ProcessHeapImpl::Free(*((void **)a1 + 2));
    v2 = *a1;
    *((_QWORD *)a1 + 2) = v4;
    v4 = 0LL;
    a1[1] = v13;
  }
  v7 = *((_QWORD *)a1 + 2);
  v8 = 68 * v2;
  *(_OWORD *)(v8 + v7) = *(_OWORD *)a2;
  *(_OWORD *)(v8 + v7 + 16) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(v8 + v7 + 32) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(v8 + v7 + 48) = *(_OWORD *)(a2 + 48);
  *(_DWORD *)(v8 + v7 + 64) = *(_DWORD *)(a2 + 64);
  v9 = a1[6];
  v10 = *a1 + 1;
  *a1 = v10;
  if ( v9 <= v10 )
    v9 = v10;
  a1[6] = v9;
LABEL_5:
  WPF::ProcessHeapImpl::Free(v4);
  return (unsigned int)v3;
}
