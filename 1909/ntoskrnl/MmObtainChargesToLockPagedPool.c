/*
 * XREFs of MmObtainChargesToLockPagedPool @ 0x14075A3F0
 * Callers:
 *     PopPreallocateHibernateMemory @ 0x14075A1F0 (PopPreallocateHibernateMemory.c)
 * Callees:
 *     MiChargeResident @ 0x1400CACB0 (MiChargeResident.c)
 */

_BOOL8 __fastcall MmObtainChargesToLockPagedPool(__int16 a1, __int64 a2)
{
  return (unsigned int)MiChargeResident(&MiSystemPartition, ((unsigned __int64)(a1 & 0xFFF) + a2 + 4095) >> 12, 1024LL) != 0;
}
