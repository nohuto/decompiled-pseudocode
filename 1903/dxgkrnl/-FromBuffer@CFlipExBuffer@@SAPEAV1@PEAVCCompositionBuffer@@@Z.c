/*
 * XREFs of ?FromBuffer@CFlipExBuffer@@SAPEAV1@PEAVCCompositionBuffer@@@Z @ 0x1C005C44C
 * Callers:
 *     ?NotifyTokenCompleted@CCompositionSurface@@IEAAJAEBVCFlipToken@@@Z @ 0x1C000A85C (-NotifyTokenCompleted@CCompositionSurface@@IEAAJAEBVCFlipToken@@@Z.c)
 *     ?UnBind@CCompositionSurface@@QEAAJ_N@Z @ 0x1C0012814 (-UnBind@CCompositionSurface@@QEAAJ_N@Z.c)
 *     ?ReleaseAllBuffers@CCompositionSurface@@IEAA_NXZ @ 0x1C001301C (-ReleaseAllBuffers@CCompositionSurface@@IEAA_NXZ.c)
 *     ?UpdateDirtyRegions@CCompositionToken@@QEAAJXZ @ 0x1C005A914 (-UpdateDirtyRegions@CCompositionToken@@QEAAJXZ.c)
 *     ?InsertCompletedToken@CCompositionSurface@@IEAAJ_K0PEAUtagCloneableFlipTokenData@@PEAPEAVCToken@@@Z @ 0x1C005C484 (-InsertCompletedToken@CCompositionSurface@@IEAAJ_K0PEAUtagCloneableFlipTokenData@@PEAPEAVCToken@.c)
 *     ?Pair@CCompositionSurface@@QEAAJPEAUIPairedSurfaceObject@@@Z @ 0x1C005C58C (-Pair@CCompositionSurface@@QEAAJPEAUIPairedSurfaceObject@@@Z.c)
 *     ?UnPair@CCompositionSurface@@QEAAJ_N@Z @ 0x1C005C818 (-UnPair@CCompositionSurface@@QEAAJ_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 */

struct CFlipExBuffer *__fastcall CFlipExBuffer::FromBuffer(struct CCompositionBuffer *a1)
{
  __int64 v2; // rdi

  v2 = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(struct CCompositionBuffer *))(*(_QWORD *)a1 + 80LL))(a1) )
    return a1;
  return (struct CFlipExBuffer *)v2;
}
