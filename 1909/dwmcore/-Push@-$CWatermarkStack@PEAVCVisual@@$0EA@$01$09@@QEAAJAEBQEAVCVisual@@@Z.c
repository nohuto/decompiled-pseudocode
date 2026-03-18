/*
 * XREFs of ?Push@?$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAJAEBQEAVCVisual@@@Z @ 0x1800AEE44
 * Callers:
 *     ?BuildTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEAVCComposition@@PEBVCVisualTree@@PEAVCVisual@@_K@Z @ 0x18000B700 (-BuildTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEAVCComposition@@PEBVCVisualT.c)
 *     ?EnsureLayoutSize@CPreComputeContext@@AEAAJPEBVCVisualTree@@@Z @ 0x180081D68 (-EnsureLayoutSize@CPreComputeContext@@AEAAJPEBVCVisualTree@@@Z.c)
 *     ?PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@PEBVCVisualTree@@@Z @ 0x1802538D0 (-PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@PEBVCVisualTree@@@Z.c)
 *     ?BuildTransformParentStack@CLightPreComputeHelper@@EEAAJPEAVCComposition@@PEBVCVisualTree@@PEAVCVisual@@_K@Z @ 0x1802542F0 (-BuildTransformParentStack@CLightPreComputeHelper@@EEAAJPEAVCComposition@@PEBVCVisualTree@@PEAVC.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x1800AF4EC (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     memcpy_0 @ 0x1800F020B (memcpy_0.c)
 */

__int64 __fastcall CWatermarkStack<CVisual *,64,2,10>::Push(unsigned int *a1, _QWORD *a2)
{
  unsigned int v2; // eax
  void *v3; // rbx
  unsigned int v6; // eax
  unsigned int v7; // ecx
  unsigned int v8; // esi
  unsigned __int64 v10; // rbp
  signed int v11; // eax
  __int64 v12; // rcx
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
    MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, 0LL, 0, 0x80070216, 0x4Cu, 0LL);
    return v8;
  }
  if ( (unsigned int)v10 <= 0x40 )
    LODWORD(v10) = 64;
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
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, 0x80070216, 0x55u, 0LL);
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
