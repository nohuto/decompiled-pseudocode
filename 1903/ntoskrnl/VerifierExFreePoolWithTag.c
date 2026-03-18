/*
 * XREFs of VerifierExFreePoolWithTag @ 0x140972840
 * Callers:
 *     VerifierExFreePool @ 0x1409727F0 (VerifierExFreePool.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     MmKernelVerifierEnabled @ 0x1402BF4D4 (MmKernelVerifierEnabled.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     VfFreePoolNotification @ 0x14097D3B0 (VfFreePoolNotification.c)
 *     VfIrpDatabaseCheckExFreePool @ 0x14097DA20 (VfIrpDatabaseCheckExFreePool.c)
 *     ExFreePoolSanityChecks @ 0x14098A778 (ExFreePoolSanityChecks.c)
 */

void __fastcall VerifierExFreePoolWithTag(PVOID P, ULONG Tag)
{
  VfFreePoolNotification(P, 0LL);
  VfIrpDatabaseCheckExFreePool((ULONG_PTR)P);
  if ( (unsigned int)MmKernelVerifierEnabled() )
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
