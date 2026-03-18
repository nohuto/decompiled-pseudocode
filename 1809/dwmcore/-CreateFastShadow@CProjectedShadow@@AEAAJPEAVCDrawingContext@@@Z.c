/*
 * XREFs of ?CreateFastShadow@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x1801C8848
 * Callers:
 *     ?PrepareForDrawing@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801CBDC0 (-PrepareForDrawing@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18004F094 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ??0CProjectedShadow@@QEAA@PEAVCComposition@@@Z @ 0x1801C8224 (--0CProjectedShadow@@QEAA@PEAVCComposition@@@Z.c)
 *     ?InitializeFastShadow@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x1801CB520 (-InitializeFastShadow@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 */

__int64 __fastcall CProjectedShadow::CreateFastShadow(struct CComposition **this, struct CDrawingContext *a2)
{
  unsigned int v4; // ebx
  CProjectedShadow *v5; // rax
  __int64 v6; // rcx
  CProjectedShadow *v7; // rcx

  v4 = 0;
  v5 = (CProjectedShadow *)WPF::ProcessHeapImpl::AllocClear(0x198uLL);
  if ( v5 )
    v5 = CProjectedShadow::CProjectedShadow(v5, this[2]);
  CProjectedShadow::s_pFastShadow = v5;
  if ( v5 )
  {
    v7 = this[9];
    *((_QWORD *)v5 + 9) = v7;
    CProjectedShadow::InitializeFastShadow(v7, a2);
    *((_QWORD *)CProjectedShadow::s_pFastShadow + 9) = 0LL;
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024882, 0x51Eu);
    if ( CProjectedShadow::s_pFastShadow )
    {
      (*(void (__fastcall **)(CProjectedShadow *))(*(_QWORD *)CProjectedShadow::s_pFastShadow + 16LL))(CProjectedShadow::s_pFastShadow);
      CProjectedShadow::s_pFastShadow = 0LL;
    }
  }
  return v4;
}
