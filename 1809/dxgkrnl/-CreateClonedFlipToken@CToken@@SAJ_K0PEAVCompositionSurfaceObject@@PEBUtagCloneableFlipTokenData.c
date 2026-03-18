/*
 * XREFs of ?CreateClonedFlipToken@CToken@@SAJ_K0PEAVCompositionSurfaceObject@@PEBUtagCloneableFlipTokenData@@PEAPEAV1@@Z @ 0x1C0053D84
 * Callers:
 *     ?InsertCompletedToken@CCompositionSurface@@IEAAJ_K0PEAUtagCloneableFlipTokenData@@PEAPEAVCToken@@@Z @ 0x1C00555F8 (-InsertCompletedToken@CCompositionSurface@@IEAAJ_K0PEAUtagCloneableFlipTokenData@@PEAPEAVCToken@.c)
 * Callees:
 *     ?SignalGpuFence@CompositionSurfaceObject@@QEAAJ_K0_N@Z @ 0x1C0007C2C (-SignalGpuFence@CompositionSurfaceObject@@QEAAJ_K0_N@Z.c)
 *     ?CreateCloned@CFlipToken@@SAJ_K0PEAVCompositionSurfaceObject@@PEBUtagCloneableFlipTokenData@@PEAPEAV1@@Z @ 0x1C00544C0 (-CreateCloned@CFlipToken@@SAJ_K0PEAVCompositionSurfaceObject@@PEBUtagCloneableFlipTokenData@@PEA.c)
 */

__int64 __fastcall CToken::CreateClonedFlipToken(
        unsigned __int64 a1,
        unsigned __int64 a2,
        struct CompositionSurfaceObject *this,
        const struct tagCloneableFlipTokenData *a4,
        struct CToken **a5)
{
  struct CToken **v5; // rdi
  int Cloned; // ebx

  v5 = a5;
  *a5 = 0LL;
  Cloned = CFlipToken::CreateCloned(a1, a2, this, a4, (struct CFlipToken **)&a5);
  if ( Cloned < 0 )
    CompositionSurfaceObject::SignalGpuFence(this, a1, a2, 1);
  else
    *v5 = (struct CToken *)a5;
  return (unsigned int)Cloned;
}
