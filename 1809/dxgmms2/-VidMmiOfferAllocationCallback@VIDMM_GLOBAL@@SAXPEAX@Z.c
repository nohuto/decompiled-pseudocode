/*
 * XREFs of ?VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z @ 0x1C00018C0
 * Callers:
 *     VidSchSubmitDeviceCommand @ 0x1C0001E6C (VidSchSubmitDeviceCommand.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x1C00070E0 (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchCancelDeviceCommand @ 0x1C0031D90 (VidSchCancelDeviceCommand.c)
 *     ?OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER_FLAGS@@@Z @ 0x1C0061CF0 (-OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER.c)
 * Callees:
 *     McTemplateK0p @ 0x1C0026308 (McTemplateK0p.c)
 */

void __fastcall VIDMM_GLOBAL::VidMmiOfferAllocationCallback(_QWORD *a1)
{
  __int64 v2; // rcx

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1[12] + 8LL), 0xFFFFFFFF) == 1 )
  {
    v2 = a1[12];
    if ( _InterlockedCompareExchange16((volatile signed __int16 *)(v2 + 4), 2, 1) == 1 )
    {
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0p(v2, &EventCompleteOfferAllocation, 1LL, a1);
      }
    }
  }
}
