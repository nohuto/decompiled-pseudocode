/*
 * XREFs of MiDecrementCloneHeaderCount @ 0x1402C9768
 * Callers:
 *     MiDeleteCloneDescriptor @ 0x1402C979C (MiDeleteCloneDescriptor.c)
 *     MiDrainCrossPartitionUsage @ 0x1402D1724 (MiDrainCrossPartitionUsage.c)
 *     MiFreeCloneDescriptor @ 0x14085E658 (MiFreeCloneDescriptor.c)
 * Callees:
 *     KeSetEvent @ 0x1400C2B00 (KeSetEvent.c)
 */

int __fastcall MiDecrementCloneHeaderCount(__int64 a1)
{
  signed __int64 v1; // rax

  v1 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1304), 0xFFFFFFFFFFFFFFFFuLL);
  if ( v1 == 1 )
    LODWORD(v1) = KeSetEvent(*(PRKEVENT *)(a1 + 2072), 0, 0);
  return v1;
}
