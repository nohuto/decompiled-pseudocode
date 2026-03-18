/*
 * XREFs of MmObtainChargesToLockPagedPool @ 0x1407466F0
 * Callers:
 *     PopPreallocateHibernateMemory @ 0x1407464EC (PopPreallocateHibernateMemory.c)
 * Callees:
 *     MiChargeResident @ 0x14002DF50 (MiChargeResident.c)
 */

_BOOL8 __fastcall MmObtainChargesToLockPagedPool(__int16 a1, __int64 a2)
{
  return (unsigned int)MiChargeResident(&MiSystemPartition, ((unsigned __int64)(a1 & 0xFFF) + a2 + 4095) >> 12, 1024LL) != 0;
}
