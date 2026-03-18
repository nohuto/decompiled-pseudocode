/*
 * XREFs of AlpcpFreeCompletionList @ 0x1406F94F8
 * Callers:
 *     AlpcpDoPortCleanup @ 0x14065DF68 (AlpcpDoPortCleanup.c)
 *     NtAlpcSetInformation @ 0x1406C2940 (NtAlpcSetInformation.c)
 * Callees:
 *     MmUnlockPages @ 0x14006A600 (MmUnlockPages.c)
 *     IoFreeMdl @ 0x1400FEF60 (IoFreeMdl.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     AlpcpUnregisterCompletionListDatabase @ 0x1406F9554 (AlpcpUnregisterCompletionListDatabase.c)
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
