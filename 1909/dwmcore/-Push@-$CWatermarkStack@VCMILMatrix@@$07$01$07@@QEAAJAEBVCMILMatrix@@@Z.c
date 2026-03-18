/*
 * XREFs of ?Push@?$CWatermarkStack@VCMILMatrix@@$07$01$07@@QEAAJAEBVCMILMatrix@@@Z @ 0x18007DF68
 * Callers:
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18007E0B0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z @ 0x1800AF024 (-Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z.c)
 *     ?PushOffset@CMatrixStack@@QEAAJMMM@Z @ 0x18021C128 (-PushOffset@CMatrixStack@@QEAAJMMM@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x1800AF4EC (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     memcpy_0 @ 0x1800F020B (memcpy_0.c)
 */

__int64 __fastcall CWatermarkStack<CMILMatrix,8,2,8>::Push(unsigned int *a1, __int64 a2)
{
  void *v2; // rbp
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned int v8; // eax
  unsigned int v9; // edx
  unsigned int v10; // ebx
  unsigned __int64 v12; // rsi
  signed int v13; // eax
  __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  void *v16; // rbx
  void *v17; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0LL;
  v17 = 0LL;
  v5 = *a1;
  if ( (_DWORD)v5 != a1[1] )
    goto LABEL_2;
  v12 = 2LL * a1[1];
  if ( v12 > 0xFFFFFFFF )
  {
    v10 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, 0LL, 0, 0x80070216, 0x4Cu, 0LL);
    goto LABEL_5;
  }
  if ( (unsigned int)v12 <= 8 )
    LODWORD(v12) = 8;
  v13 = HrMalloc(0x44uLL, (unsigned int)v12, &v17);
  v10 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x53u, 0LL);
    goto LABEL_14;
  }
  v15 = 68LL * *a1;
  if ( v15 > 0xFFFFFFFF )
  {
    v10 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, 0x80070216, 0x55u, 0LL);
LABEL_14:
    v2 = v17;
    goto LABEL_5;
  }
  v16 = v17;
  memcpy_0(v17, *((const void **)a1 + 2), (unsigned int)v15);
  operator delete(*((void **)a1 + 2));
  v5 = *a1;
  *((_QWORD *)a1 + 2) = v16;
  a1[1] = v12;
LABEL_2:
  v6 = *((_QWORD *)a1 + 2);
  v7 = 68 * v5;
  *(_OWORD *)(v7 + v6) = *(_OWORD *)a2;
  *(_OWORD *)(v7 + v6 + 16) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(v7 + v6 + 32) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(v7 + v6 + 48) = *(_OWORD *)(a2 + 48);
  *(_DWORD *)(v7 + v6 + 64) = *(_DWORD *)(a2 + 64);
  v8 = a1[6];
  v9 = *a1 + 1;
  *a1 = v9;
  if ( v8 <= v9 )
    v8 = v9;
  v10 = 0;
  a1[6] = v8;
LABEL_5:
  operator delete(v2);
  return v10;
}
