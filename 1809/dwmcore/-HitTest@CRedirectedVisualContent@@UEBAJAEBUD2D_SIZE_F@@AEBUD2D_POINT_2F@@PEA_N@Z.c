/*
 * XREFs of ?HitTest@CRedirectedVisualContent@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x1801D9D00
 * Callers:
 *     <none>
 * Callees:
 *     ?HitTestPointHelper@CHitTestContext@@QEAAJPEAVCVisualTree@@MM@Z @ 0x18002C7B4 (-HitTestPointHelper@CHitTestContext@@QEAAJPEAVCVisualTree@@MM@Z.c)
 *     ??0CHitTestContext@@QEAA@PEAVCComposition@@@Z @ 0x180062BBC (--0CHitTestContext@@QEAA@PEAVCComposition@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??1CHitTestContext@@QEAA@XZ @ 0x1801D9AF4 (--1CHitTestContext@@QEAA@XZ.c)
 */

__int64 __fastcall CRedirectedVisualContent::HitTest(
        struct CComposition **this,
        const struct D2D_SIZE_F *a2,
        const struct D2D_POINT_2F *a3,
        bool *a4)
{
  float *v5; // r8
  __int64 v6; // r10
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  void *v11[25]; // [rsp+30h] [rbp-C8h] BYREF

  *a4 = 0;
  CHitTestContext::CHitTestContext((CHitTestContext *)v11, this[2]);
  v7 = CHitTestContext::HitTestPointHelper((CHitTestContext *)v11, *(struct CVisualTree **)(v6 + 64), *v5, v5[1]);
  v9 = v7;
  if ( v7 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x4Au);
  else
    *a4 = v11[14] != 0LL;
  CHitTestContext::~CHitTestContext(v11);
  return v9;
}
