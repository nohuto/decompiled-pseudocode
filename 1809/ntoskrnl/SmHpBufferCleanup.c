/*
 * XREFs of SmHpBufferCleanup @ 0x1403068C4
 * Callers:
 *     SmHpChunkHeapCleanup @ 0x14011E01C (SmHpChunkHeapCleanup.c)
 *     SmHpChunkFree @ 0x140147C70 (SmHpChunkFree.c)
 * Callees:
 *     SmHpBufferUpdateFullness @ 0x14014A5FC (SmHpBufferUpdateFullness.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SmHpBufferCleanup(ULONG_PTR a1, _WORD *a2)
{
  int v4; // ebx
  __int64 result; // rax

  SmHpBufferUpdateFullness(a1, (__int64)a2, -a2[5]);
  v4 = *(_DWORD *)(*(_QWORD *)a2 + 16LL);
  ExFreePoolWithTag(*(PVOID *)a2, 0);
  *(_QWORD *)a2 = 0LL;
  result = *(unsigned int *)(a1 + 544);
  *((_DWORD *)a2 + 2) = result;
  *(_DWORD *)(a1 + 544) = v4;
  return result;
}
