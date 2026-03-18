/*
 * XREFs of ?InsertCompletedToken@CCompositionSurface@@IEAAJ_K0PEAUtagCloneableFlipTokenData@@PEAPEAVCToken@@@Z @ 0x1C005C484
 * Callers:
 *     ?InsertCompletedToken@CompositionSurfaceObject@@UEAAJ_K0PEAUtagCloneableFlipTokenData@@@Z @ 0x1C005C130 (-InsertCompletedToken@CompositionSurfaceObject@@UEAAJ_K0PEAUtagCloneableFlipTokenData@@@Z.c)
 * Callees:
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C0011C10 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     ?CreateClonedFlipToken@CToken@@SAJ_K0PEAVCompositionSurfaceObject@@PEBUtagCloneableFlipTokenData@@PEAPEAV1@@Z @ 0x1C005A7CC (-CreateClonedFlipToken@CToken@@SAJ_K0PEAVCompositionSurfaceObject@@PEBUtagCloneableFlipTokenData.c)
 *     ?FromBuffer@CFlipExBuffer@@SAPEAV1@PEAVCCompositionBuffer@@@Z @ 0x1C005C44C (-FromBuffer@CFlipExBuffer@@SAPEAV1@PEAVCCompositionBuffer@@@Z.c)
 */

__int64 __fastcall CCompositionSurface::InsertCompletedToken(
        CCompositionSurface *this,
        __int64 a2,
        unsigned __int64 a3,
        struct tagCloneableFlipTokenData *a4,
        struct CToken **a5)
{
  int Buffer; // edi
  unsigned __int64 v9; // r11
  struct CFlipExBuffer *v10; // rax
  struct CToken *v12; // [rsp+30h] [rbp-18h] BYREF
  struct CCompositionBuffer *v13; // [rsp+38h] [rbp-10h] BYREF

  v12 = 0LL;
  Buffer = CCompositionSurface::FindBuffer(this, a2, &v13);
  if ( Buffer >= 0 )
  {
    Buffer = CToken::CreateClonedFlipToken(v9, a3, (CCompositionSurface *)((char *)this - 40), a4, &v12);
    if ( Buffer >= 0 )
    {
      v10 = CFlipExBuffer::FromBuffer(v13);
      if ( a3 )
        *((_QWORD *)v10 + 40) = a3;
      *a5 = v12;
    }
  }
  return (unsigned int)Buffer;
}
