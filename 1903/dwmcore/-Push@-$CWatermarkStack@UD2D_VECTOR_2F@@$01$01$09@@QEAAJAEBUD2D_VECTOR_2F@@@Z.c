/*
 * XREFs of ?Push@?$CWatermarkStack@UD2D_VECTOR_2F@@$01$01$09@@QEAAJAEBUD2D_VECTOR_2F@@@Z @ 0x180054AC8
 * Callers:
 *     ?PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z @ 0x180053E00 (-PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180061D00 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x18007F954 (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcpy_0 @ 0x1800EC54B (memcpy_0.c)
 */

__int64 __fastcall CWatermarkStack<D2D_VECTOR_2F,2,2,10>::Push(unsigned int *a1, _QWORD *a2)
{
  unsigned int v2; // eax
  void *v3; // rbx
  unsigned int v6; // eax
  unsigned int v7; // ecx
  unsigned int v8; // esi
  unsigned __int64 v10; // rbp
  int v11; // eax
  unsigned int v12; // ecx
  unsigned __int64 v13; // rax
  void *v14; // rbx
  HANDLE ProcessHeap; // rax
  void *v16; // [rsp+50h] [rbp+8h] BYREF

  v2 = *a1;
  v3 = 0LL;
  v16 = 0LL;
  if ( v2 != a1[1] )
    goto LABEL_2;
  v10 = 2LL * a1[1];
  if ( v10 > 0xFFFFFFFF )
  {
    v8 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)a1, 0LL, 0, -2147024362, 0x4Cu, 0LL);
    return v8;
  }
  if ( (unsigned int)v10 <= 2 )
    LODWORD(v10) = 2;
  v11 = HrMalloc(8uLL, (unsigned int)v10, &v16);
  v8 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x53u, 0LL);
  }
  else
  {
    v13 = 8LL * *a1;
    if ( v13 <= 0xFFFFFFFF )
    {
      v14 = v16;
      memcpy_0(v16, *((const void **)a1 + 2), (unsigned int)v13);
      operator delete(*((void **)a1 + 2));
      v2 = *a1;
      *((_QWORD *)a1 + 2) = v14;
      v3 = 0LL;
      a1[1] = v10;
LABEL_2:
      *(_QWORD *)(*((_QWORD *)a1 + 2) + 8LL * v2) = *a2;
      v6 = a1[6];
      v7 = *a1 + 1;
      *a1 = v7;
      if ( v6 <= v7 )
        v6 = v7;
      v8 = 0;
      a1[6] = v6;
      goto LABEL_5;
    }
    v8 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2147024362, 0x55u, 0LL);
  }
  v3 = v16;
LABEL_5:
  if ( v3 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v3);
  }
  return v8;
}
