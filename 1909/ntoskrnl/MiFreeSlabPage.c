/*
 * XREFs of MiFreeSlabPage @ 0x1402DBD54
 * Callers:
 *     MiInsertPageInFreeOrZeroedList @ 0x14002B2E0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiWalkEntireImage @ 0x140053AF0 (MiWalkEntireImage.c)
 * Callees:
 *     MiEnumerateSlabAllocators @ 0x1402DB63C (MiEnumerateSlabAllocators.c)
 */

__int64 __fastcall MiFreeSlabPage(__int64 a1)
{
  return MiEnumerateSlabAllocators(
           *(_QWORD *)(qword_140465E88 + 8 * ((*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL)),
           (unsigned int (__fastcall *)(__int64, unsigned __int64, __int64))MiFreePageToSlabAllocator,
           a1);
}
