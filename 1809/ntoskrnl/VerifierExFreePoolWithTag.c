/*
 * XREFs of VerifierExFreePoolWithTag @ 0x1409257D0
 * Callers:
 *     VerifierExFreePool @ 0x140925780 (VerifierExFreePool.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     VfFreePoolNotification @ 0x140937E9C (VfFreePoolNotification.c)
 *     VfIrpDatabaseCheckExFreePool @ 0x14093E18C (VfIrpDatabaseCheckExFreePool.c)
 *     ExFreePoolSanityChecks @ 0x14094AD7C (ExFreePoolSanityChecks.c)
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
