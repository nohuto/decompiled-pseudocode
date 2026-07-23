/*
 * XREFs of MiDeletePartition @ 0x1402B4730
 * Callers:
 *     MmCreatePartition @ 0x140190AB0 (MmCreatePartition.c)
 *     PspTeardownPartition @ 0x14088E690 (PspTeardownPartition.c)
 * Callees:
 *     MiDeletePartitionResources @ 0x1402D119C (MiDeletePartitionResources.c)
 *     MiDrainCrossPartitionUsage @ 0x1402D1914 (MiDrainCrossPartitionUsage.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MiFreePartitionId @ 0x140853018 (MiFreePartitionId.c)
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
