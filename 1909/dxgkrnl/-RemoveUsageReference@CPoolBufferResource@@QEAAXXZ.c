/*
 * XREFs of ?RemoveUsageReference@CPoolBufferResource@@QEAAXXZ @ 0x1C00637DC
 * Callers:
 *     ?ConsumerAdjustUsageReference@FlipManagerObject@@QEAAJ_K_N@Z @ 0x1C005E624 (-ConsumerAdjustUsageReference@FlipManagerObject@@QEAAJ_K_N@Z.c)
 *     ?ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z @ 0x1C0061BD4 (-ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z.c)
 *     ?SetBoundBuffer@CContentResourceState@@QEAAXPEAVCPoolBufferResource@@@Z @ 0x1C006412C (-SetBoundBuffer@CContentResourceState@@QEAAXPEAVCPoolBufferResource@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CPoolBufferResource::RemoveUsageReference(CPoolBufferResource *this)
{
  int v1; // eax
  int v2; // eax

  v1 = *((_DWORD *)this + 18);
  if ( v1 )
  {
    v2 = v1 - 1;
    *((_DWORD *)this + 18) = v2;
    if ( !v2 )
      KeSetEvent(*((PRKEVENT *)this + 7), 1, 0);
  }
}
