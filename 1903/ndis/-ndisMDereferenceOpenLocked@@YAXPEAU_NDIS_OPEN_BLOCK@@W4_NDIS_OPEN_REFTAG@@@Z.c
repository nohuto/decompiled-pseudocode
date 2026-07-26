/*
 * XREFs of ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001C118
 * Callers:
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001C08C (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     NdisClOpenAddressFamilyEx @ 0x1C00829C0 (NdisClOpenAddressFamilyEx.c)
 *     NdisCmCloseAddressFamilyComplete @ 0x1C0083210 (NdisCmCloseAddressFamilyComplete.c)
 *     NdisCmOpenAddressFamilyComplete @ 0x1C0083BC0 (NdisCmOpenAddressFamilyComplete.c)
 *     NdisCmRegisterAddressFamilyEx @ 0x1C0083DF0 (NdisCmRegisterAddressFamilyEx.c)
 *     ndisMReset @ 0x1C009B750 (ndisMReset.c)
 *     ndisMResetCompleteStage2 @ 0x1C009BB24 (ndisMResetCompleteStage2.c)
 *     ndisMKillOpen @ 0x1C01379FC (ndisMKillOpen.c)
 *     ndisCreateNotifyQueue @ 0x1C01380B8 (ndisCreateNotifyQueue.c)
 * Callees:
 *     NdisDereferenceWithTag @ 0x1C0002EB0 (NdisDereferenceWithTag.c)
 *     ndisMFinishClose @ 0x1C0137820 (ndisMFinishClose.c)
 */

void __fastcall ndisMDereferenceOpenLocked(__int64 a1, unsigned __int8 a2)
{
  KSPIN_LOCK *v2; // rdi
  int v5; // ebx

  v2 = (KSPIN_LOCK *)(a1 + 600);
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 600));
  NdisDereferenceWithTag(*(_QWORD *)(a1 + 592), a2);
  v5 = --*(_DWORD *)(a1 + 228);
  KeReleaseSpinLockFromDpcLevel(v2);
  if ( !v5 )
    ndisMFinishClose(a1);
}
