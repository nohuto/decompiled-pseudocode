/*
 * XREFs of MiDeletePartition @ 0x1402C9C34
 * Callers:
 *     MmCreatePartition @ 0x14019A610 (MmCreatePartition.c)
 *     PspTeardownPartition @ 0x1408CB9C0 (PspTeardownPartition.c)
 * Callees:
 *     MiDeletePartitionResources @ 0x1402E9F58 (MiDeletePartitionResources.c)
 *     MiDrainCrossPartitionUsage @ 0x1402EA498 (MiDrainCrossPartitionUsage.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiFreePartitionId @ 0x14088B82C (MiFreePartitionId.c)
 */

void __fastcall MiDeletePartition(unsigned __int16 *P)
{
  unsigned __int16 v1; // bx

  v1 = *P;
  MiDrainCrossPartitionUsage();
  MiDeletePartitionResources(P);
  MiFreePartitionId(v1);
  ExFreePoolWithTag(P, 0);
}
