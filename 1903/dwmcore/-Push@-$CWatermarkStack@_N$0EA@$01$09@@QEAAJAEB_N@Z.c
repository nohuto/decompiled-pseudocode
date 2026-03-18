/*
 * XREFs of ?Push@?$CWatermarkStack@_N$0EA@$01$09@@QEAAJAEB_N@Z @ 0x1801703B4
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18006AA20 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushOffsetInternal@CDrawingContext@@AEAAJPEBVCVisual@@MMM@Z @ 0x180170A38 (-PushOffsetInternal@CDrawingContext@@AEAAJPEBVCVisual@@MMM@Z.c)
 *     ?PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@PEBVCVisualTree@@@Z @ 0x180254E44 (-PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@PEBVCVisualTree@@@Z.c)
 *     ?PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@PEBVCVisualTree@@@Z @ 0x180255040 (-PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@PEBVCVisualTree@@@Z.c)
 * Callees:
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x18007F954 (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcpy_0 @ 0x1800EC54B (memcpy_0.c)
 */

__int64 __fastcall CWatermarkStack<bool,64,2,10>::Push(unsigned int *a1, _BYTE *a2)
{
  unsigned int v2; // eax
  void *v3; // rbp
  unsigned __int64 v6; // rsi
  signed int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  void *v10; // rbx
  unsigned int v11; // eax
  unsigned int v12; // edx
  void *v14; // [rsp+50h] [rbp+8h] BYREF

  v2 = *a1;
  v3 = 0LL;
  v14 = 0LL;
  if ( v2 == a1[1] )
  {
    v6 = 2LL * a1[1];
    if ( v6 > 0xFFFFFFFF )
    {
      v9 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, 0LL, 0, 0x80070216, 0x4Cu, 0LL);
      goto LABEL_10;
    }
    if ( (unsigned int)v6 <= 0x40 )
      LODWORD(v6) = 64;
    v7 = HrMalloc(1uLL, (unsigned int)v6, &v14);
    v9 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x53u, 0LL);
      v3 = v14;
      goto LABEL_10;
    }
    v10 = v14;
    memcpy_0(v14, *((const void **)a1 + 2), *a1);
    operator delete(*((void **)a1 + 2));
    v2 = *a1;
    *((_QWORD *)a1 + 2) = v10;
    a1[1] = v6;
  }
  *(_BYTE *)(v2 + *((_QWORD *)a1 + 2)) = *a2;
  v11 = a1[6];
  v12 = *a1 + 1;
  *a1 = v12;
  if ( v11 <= v12 )
    v11 = v12;
  v9 = 0;
  a1[6] = v11;
LABEL_10:
  operator delete(v3);
  return v9;
}
