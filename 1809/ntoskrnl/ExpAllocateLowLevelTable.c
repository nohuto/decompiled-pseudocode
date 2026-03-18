/*
 * XREFs of ExpAllocateLowLevelTable @ 0x140696D88
 * Callers:
 *     ExpAllocateMidLevelTable @ 0x1406964F0 (ExpAllocateMidLevelTable.c)
 *     ExpAllocateHandleTable @ 0x140696A84 (ExpAllocateHandleTable.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x140696B94 (ExpAllocateHandleTableEntrySlow.c)
 * Callees:
 *     ExpAllocateTablePagedPoolNoZero @ 0x140696DBC (ExpAllocateTablePagedPoolNoZero.c)
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
