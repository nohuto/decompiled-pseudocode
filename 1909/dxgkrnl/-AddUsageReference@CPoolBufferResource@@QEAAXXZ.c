/*
 * XREFs of ?AddUsageReference@CPoolBufferResource@@QEAAXXZ @ 0x1C0063504
 * Callers:
 *     ?ConsumerAdjustUsageReference@FlipManagerObject@@QEAAJ_K_N@Z @ 0x1C005E624 (-ConsumerAdjustUsageReference@FlipManagerObject@@QEAAJ_K_N@Z.c)
 *     ?PrepareIncrementalUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@PEA_N@Z @ 0x1C00627F0 (-PrepareIncrementalUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpd.c)
 *     ?SetBoundBuffer@CContentResourceState@@QEAAXPEAVCPoolBufferResource@@@Z @ 0x1C006412C (-SetBoundBuffer@CContentResourceState@@QEAAXPEAVCPoolBufferResource@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CPoolBufferResource::AddUsageReference(CPoolBufferResource *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 18);
  if ( !v1 )
  {
    KeResetEvent(*((PRKEVENT *)this + 7));
    v1 = *((_DWORD *)this + 18);
  }
  *((_DWORD *)this + 18) = v1 + 1;
}
