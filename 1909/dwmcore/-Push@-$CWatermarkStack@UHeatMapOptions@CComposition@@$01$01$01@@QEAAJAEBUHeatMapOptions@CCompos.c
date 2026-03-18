/*
 * XREFs of ?Push@?$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@QEAAJAEBUHeatMapOptions@CComposition@@@Z @ 0x18016EB8C
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005DCD0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x1800AF4EC (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     memcpy_0 @ 0x1800F020B (memcpy_0.c)
 */

__int64 __fastcall CWatermarkStack<CComposition::HeatMapOptions,2,2,2>::Push(unsigned int *a1, __int64 a2)
{
  __int64 v2; // rax
  void *v3; // rbp
  unsigned __int64 v6; // rsi
  signed int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  unsigned __int64 v10; // rcx
  void *v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned int v14; // eax
  unsigned int v15; // edx
  void *v17; // [rsp+50h] [rbp+8h] BYREF

  v2 = *a1;
  v3 = 0LL;
  v17 = 0LL;
  if ( (_DWORD)v2 != a1[1] )
    goto LABEL_8;
  v6 = 2LL * a1[1];
  if ( v6 > 0xFFFFFFFF )
  {
    v9 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, 0LL, 0, 0x80070216, 0x4Cu, 0LL);
    goto LABEL_11;
  }
  if ( (unsigned int)v6 <= 2 )
    LODWORD(v6) = 2;
  v7 = HrMalloc(0x18uLL, (unsigned int)v6, &v17);
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x53u, 0LL);
    goto LABEL_14;
  }
  v10 = 24LL * *a1;
  if ( v10 > 0xFFFFFFFF )
  {
    v9 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, 0x80070216, 0x55u, 0LL);
LABEL_14:
    v3 = v17;
    goto LABEL_11;
  }
  v11 = v17;
  memcpy_0(v17, *((const void **)a1 + 2), (unsigned int)v10);
  operator delete(*((void **)a1 + 2));
  v2 = *a1;
  *((_QWORD *)a1 + 2) = v11;
  a1[1] = v6;
LABEL_8:
  v12 = 3 * v2;
  v13 = *((_QWORD *)a1 + 2);
  *(_OWORD *)(v13 + 8 * v12) = *(_OWORD *)a2;
  *(_QWORD *)(v13 + 8 * v12 + 16) = *(_QWORD *)(a2 + 16);
  v14 = a1[6];
  v15 = *a1 + 1;
  *a1 = v15;
  if ( v14 <= v15 )
    v14 = v15;
  v9 = 0;
  a1[6] = v14;
LABEL_11:
  operator delete(v3);
  return v9;
}
