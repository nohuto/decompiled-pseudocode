/*
 * XREFs of ndisNDKCheckIfEnabledOnMiniport @ 0x1C010095C
 * Callers:
 *     ?ndisQueryGuidData@@YAJPEAEKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_GUID@@1@Z @ 0x1C0018A1C (-ndisQueryGuidData@@YAJPEAEKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_NDIS_CO_VC_PTR_BLOCK@.c)
 * Callees:
 *     ?ndisGetNDKBlock@@YAPEAU_NDIS_NDK_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0012380 (-ndisGetNDKBlock@@YAPEAU_NDIS_NDK_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

char __fastcall ndisNDKCheckIfEnabledOnMiniport(struct _NDIS_MINIPORT_BLOCK *a1)
{
  struct _NDIS_NDK_BLOCK *NDKBlock; // rax

  NDKBlock = ndisGetNDKBlock(a1);
  if ( NDKBlock )
    LOBYTE(NDKBlock) = *((_BYTE *)NDKBlock + 24);
  return (char)NDKBlock;
}
