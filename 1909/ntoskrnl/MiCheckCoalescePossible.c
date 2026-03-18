/*
 * XREFs of MiCheckCoalescePossible @ 0x1400C4E60
 * Callers:
 *     MiInsertLargePageInNodeList @ 0x14002F220 (MiInsertLargePageInNodeList.c)
 *     MiLargePageFreeToZero @ 0x1400C4B30 (MiLargePageFreeToZero.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiCheckCoalescePossible(__int64 a1, int a2)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // r10
  __int64 v4; // r9
  __int64 v5; // rbx
  unsigned __int64 v6; // r10
  unsigned int v7; // r8d
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  unsigned int v10; // eax
  __int64 v11; // rdx

  v2 = MiLargePageSizes[a2];
  v3 = MiLargePageSizes[a2 - 1];
  v4 = MiLargePageContainingFrames[a2];
  v5 = a1 & ~(v3 - 1);
  if ( v2 == 16 )
    v6 = v3 >> 4;
  else
    v6 = v3 / v2;
  v7 = (unsigned int)v6 >> 4;
  if ( a2 == 2 )
    v7 *= 6;
  if ( !v7 )
    return 1LL;
  while ( 1 )
  {
    v8 = __rdtsc();
    v9 = (((unsigned __int64)HIDWORD(v8) << 32) | (unsigned int)v8) >> 4;
    v10 = (_DWORD)v6 == 32 ? v9 & 0x1F : (unsigned int)v9 % (unsigned int)v6;
    v11 = 48 * (v5 + v2 * v10) - 0x58000000000LL;
    if ( (*(_QWORD *)(v11 + 40) & 0xFFFFFFFFFLL) != v4 || (*(_BYTE *)(v11 + 34) & 7u) > 1 )
      break;
    if ( !--v7 )
      return 1LL;
  }
  return 0LL;
}
