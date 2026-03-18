/*
 * XREFs of ?Push@?$CWatermarkStack@UCFrame@?$CGraphWalker@VCVectorShape@@@@$0EA@$01$09@@QEAAJAEBUCFrame@?$CGraphWalker@VCVectorShape@@@@@Z @ 0x180253AFC
 * Callers:
 *     ?GotoFirstChild@?$CGraphWalker@VCVectorShape@@@@QEAAJPEAPEAVCVectorShape@@PEAV?$vector@PEAVCVectorShape@@V?$allocator@PEAVCVectorShape@@@std@@@std@@@Z @ 0x1802534E0 (-GotoFirstChild@-$CGraphWalker@VCVectorShape@@@@QEAAJPEAPEAVCVectorShape@@PEAV-$vector@PEAVCVect.c)
 *     ?GotoPostChild@?$CGraphWalker@VCBspNode@@@@QEAAJPEAPEAVCBspNode@@@Z @ 0x1802561A8 (-GotoPostChild@-$CGraphWalker@VCBspNode@@@@QEAAJPEAPEAVCBspNode@@@Z.c)
 *     ?GotoPreChild@?$CGraphWalker@VCBspNode@@@@QEAAJPEAPEAVCBspNode@@@Z @ 0x180256254 (-GotoPreChild@-$CGraphWalker@VCBspNode@@@@QEAAJPEAPEAVCBspNode@@@Z.c)
 * Callees:
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x18007F954 (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcpy_0 @ 0x1800EC54B (memcpy_0.c)
 */

__int64 __fastcall CWatermarkStack<CGraphWalker<CVectorShape>::CFrame,64,2,10>::Push(unsigned int *a1, _OWORD *a2)
{
  unsigned int v2; // eax
  void *v3; // rsi
  unsigned __int64 v6; // rbp
  signed int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  unsigned __int64 v10; // rax
  void *v11; // rbx
  unsigned int v12; // eax
  unsigned int v13; // edx
  void *v15; // [rsp+50h] [rbp+8h] BYREF

  v2 = *a1;
  v3 = 0LL;
  v15 = 0LL;
  if ( v2 != a1[1] )
    goto LABEL_8;
  v6 = 2LL * a1[1];
  if ( v6 > 0xFFFFFFFF )
  {
    v9 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, 0LL, 0, 0x80070216, 0x4Cu, 0LL);
    goto LABEL_11;
  }
  if ( (unsigned int)v6 <= 0x40 )
    LODWORD(v6) = 64;
  v7 = HrMalloc(0x10uLL, (unsigned int)v6, &v15);
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x53u, 0LL);
    goto LABEL_14;
  }
  v10 = 16LL * *a1;
  if ( v10 > 0xFFFFFFFF )
  {
    v9 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, 0x80070216, 0x55u, 0LL);
LABEL_14:
    v3 = v15;
    goto LABEL_11;
  }
  v11 = v15;
  memcpy_0(v15, *((const void **)a1 + 2), (unsigned int)v10);
  operator delete(*((void **)a1 + 2));
  v2 = *a1;
  *((_QWORD *)a1 + 2) = v11;
  a1[1] = v6;
LABEL_8:
  *(_OWORD *)(*((_QWORD *)a1 + 2) + 16LL * v2) = *a2;
  v12 = a1[6];
  v13 = *a1 + 1;
  *a1 = v13;
  if ( v12 <= v13 )
    v12 = v13;
  v9 = 0;
  a1[6] = v12;
LABEL_11:
  operator delete(v3);
  return v9;
}
