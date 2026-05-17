/*
 * XREFs of RtlDestroyMemoryBlockLookaside @ 0x180083950
 * Callers:
 *     sub_180102AD8 @ 0x180102AD8 (sub_180102AD8.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     sub_1800738D0 @ 0x1800738D0 (sub_1800738D0.c)
 *     RtlDestroyMemoryZone @ 0x1800839B0 (RtlDestroyMemoryZone.c)
 */

__int64 __fastcall RtlDestroyMemoryBlockLookaside(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rsi
  int v4; // ebx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 16);
  v3 = *(_QWORD *)(a1 + 8);
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)a1);
  if ( *(_DWORD *)(a1 + 44) )
    sub_1800738D0();
  v4 = RtlDestroyMemoryZone(v1);
  result = RtlDestroyMemoryZone(v3);
  if ( v4 < 0 )
    return (unsigned int)v4;
  return result;
}
