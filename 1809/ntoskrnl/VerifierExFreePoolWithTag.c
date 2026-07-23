/*
 * XREFs of VerifierExFreePoolWithTag @ 0x1409267D0
 * Callers:
 *     VerifierExFreePool @ 0x140926780 (VerifierExFreePool.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     VfFreePoolNotification @ 0x140938E9C (VfFreePoolNotification.c)
 *     VfIrpDatabaseCheckExFreePool @ 0x14093F18C (VfIrpDatabaseCheckExFreePool.c)
 *     ExFreePoolSanityChecks @ 0x14094BD7C (ExFreePoolSanityChecks.c)
 */

void __fastcall VerifierExFreePoolWithTag(PVOID P, ULONG Tag)
{
  VfFreePoolNotification(P, 0LL);
  VfIrpDatabaseCheckExFreePool((ULONG_PTR)P);
  if ( (MiFlags & 2) != 0 )
  {
    ExFreePoolWithTag(P, Tag);
  }
  else
  {
    if ( (MmVerifierData & 1) != 0 )
      ExFreePoolSanityChecks((ULONG_PTR)P);
    ((void (__fastcall *)(PVOID, _QWORD))pXdvExFreePoolWithTag)(P, Tag);
  }
}
