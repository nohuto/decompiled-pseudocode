/*
 * XREFs of ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0017490
 * Callers:
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C00173F4 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     NdisClOpenAddressFamilyEx @ 0x1C0052C10 (NdisClOpenAddressFamilyEx.c)
 *     NdisCmRegisterAddressFamilyEx @ 0x1C0053340 (NdisCmRegisterAddressFamilyEx.c)
 *     ndisMReset @ 0x1C0063990 (ndisMReset.c)
 *     ndisMResetCompleteStage2 @ 0x1C0063DD4 (ndisMResetCompleteStage2.c)
 *     ndisMKillOpen @ 0x1C0116A68 (ndisMKillOpen.c)
 *     ndisCreateNotifyQueue @ 0x1C01170F8 (ndisCreateNotifyQueue.c)
 *     NdisCmCloseAddressFamilyComplete @ 0x1C011B880 (NdisCmCloseAddressFamilyComplete.c)
 *     NdisCmOpenAddressFamilyComplete @ 0x1C011C030 (NdisCmOpenAddressFamilyComplete.c)
 * Callees:
 *     NdisDereferenceWithTag @ 0x1C000AB90 (NdisDereferenceWithTag.c)
 *     ndisMFinishClose @ 0x1C01168D0 (ndisMFinishClose.c)
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
