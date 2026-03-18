/*
 * XREFs of ?OfferAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER_FLAGS@@@Z @ 0x1C0075C68
 * Callers:
 *     ?VidMmOfferAllocation@@YAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER_FLAGS@@@Z @ 0x1C0002BF0 (-VidMmOfferAllocation@@YAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_.c)
 * Callees:
 *     ?OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER_FLAGS@@@Z @ 0x1C0075CA0 (-OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER.c)
 */

int __fastcall VIDMM_GLOBAL::OfferAllocation(
        VIDMM_GLOBAL *this,
        struct _VIDMM_MULTI_ALLOC *a2,
        enum _D3DKMT_OFFER_PRIORITY a3,
        struct _D3DKMT_OFFER_FLAGS a4)
{
  int v4; // eax

  v4 = dword_1C004E3FC;
  if ( dword_1C004E3FC == -1 )
  {
    if ( *((_DWORD *)this + 8) >= 0x5022u )
      return VIDMM_GLOBAL::OfferOneAllocation(this, a2, a3, a4);
    v4 = 0;
  }
  if ( v4 )
    return VIDMM_GLOBAL::OfferOneAllocation(this, a2, a3, a4);
  return 0;
}
