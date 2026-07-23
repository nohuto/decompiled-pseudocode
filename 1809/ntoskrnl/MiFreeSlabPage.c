/*
 * XREFs of MiFreeSlabPage @ 0x1402C27BC
 * Callers:
 *     MiWalkEntireImage @ 0x14002F290 (MiWalkEntireImage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400387F0 (MiInsertPageInFreeOrZeroedList.c)
 * Callees:
 *     MiFreePageToSlabAllocator @ 0x1402C2170 (MiFreePageToSlabAllocator.c)
 */

__int64 __fastcall MiFreeSlabPage(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  __int64 result; // rax

  v2 = 0LL;
  v3 = *(_QWORD *)(qword_14043B808 + 8 * ((*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL));
  do
  {
    result = MiFreePageToSlabAllocator(a1, v3 + 8 * ((unsigned int)v2 + 767LL + 8 * v2));
    if ( (_DWORD)result )
      break;
    v2 = (unsigned int)(v2 + 1);
  }
  while ( (unsigned int)v2 < 3 );
  return result;
}
