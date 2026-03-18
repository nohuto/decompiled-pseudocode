/*
 * XREFs of MiFreeSlabPage @ 0x1402DBFF4
 * Callers:
 *     MiInsertPageInFreeOrZeroedList @ 0x14002AEF0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiWalkEntireImage @ 0x140053A50 (MiWalkEntireImage.c)
 * Callees:
 *     MiEnumerateSlabAllocators @ 0x1402DB8DC (MiEnumerateSlabAllocators.c)
 */

__int64 __fastcall MiFreeSlabPage(__int64 a1)
{
  return MiEnumerateSlabAllocators(
           *(_QWORD *)(qword_140466188 + 8 * ((*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL)),
           (unsigned int (__fastcall *)(__int64, unsigned __int64, __int64))MiFreePageToSlabAllocator,
           a1);
}
