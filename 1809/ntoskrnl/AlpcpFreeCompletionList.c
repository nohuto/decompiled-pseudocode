/*
 * XREFs of AlpcpFreeCompletionList @ 0x1406D69E0
 * Callers:
 *     AlpcpDoPortCleanup @ 0x140619108 (AlpcpDoPortCleanup.c)
 *     NtAlpcSetInformation @ 0x1406B1070 (NtAlpcSetInformation.c)
 * Callees:
 *     MmUnlockPages @ 0x140033580 (MmUnlockPages.c)
 *     IoFreeMdl @ 0x1400E0B40 (IoFreeMdl.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     AlpcpUnregisterCompletionListDatabase @ 0x1406D6A3C (AlpcpUnregisterCompletionListDatabase.c)
 */

void __fastcall AlpcpFreeCompletionList(__int64 a1)
{
  PMDL *v1; // rbx

  v1 = *(PMDL **)(a1 + 360);
  MmUnlockPages(v1[4]);
  IoFreeMdl(v1[4]);
  AlpcpUnregisterCompletionListDatabase(v1);
  ExFreePoolWithTag(v1, 0);
  *(_QWORD *)(a1 + 360) = 0LL;
  *(_DWORD *)(a1 + 416) &= ~0x4000u;
}
