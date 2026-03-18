/*
 * XREFs of ExpAllocateLowLevelTable @ 0x1406B7C50
 * Callers:
 *     ExpAllocateMidLevelTable @ 0x1406B7310 (ExpAllocateMidLevelTable.c)
 *     ExpAllocateHandleTable @ 0x1406B78C0 (ExpAllocateHandleTable.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x1406B79C8 (ExpAllocateHandleTableEntrySlow.c)
 * Callees:
 *     ExpAllocateTablePagedPoolNoZero @ 0x1406B7C84 (ExpAllocateTablePagedPoolNoZero.c)
 */

_QWORD *__fastcall ExpAllocateLowLevelTable(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax

  result = (_QWORD *)ExpAllocateTablePagedPoolNoZero(*(_QWORD *)(a1 + 16), 4096LL);
  if ( result )
  {
    *result = 0LL;
    result[1] = a2;
  }
  return result;
}
