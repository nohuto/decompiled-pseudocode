/*
 * XREFs of MiDeletePartition @ 0x1402B4540
 * Callers:
 *     MmCreatePartition @ 0x140190970 (MmCreatePartition.c)
 *     PspTeardownPartition @ 0x14088D430 (PspTeardownPartition.c)
 * Callees:
 *     MiDeletePartitionResources @ 0x1402D0FAC (MiDeletePartitionResources.c)
 *     MiDrainCrossPartitionUsage @ 0x1402D1724 (MiDrainCrossPartitionUsage.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     MiFreePartitionId @ 0x140851DB8 (MiFreePartitionId.c)
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
