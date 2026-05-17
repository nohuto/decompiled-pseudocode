/*
 * XREFs of RtlDestroyMemoryZone @ 0x1800839B0
 * Callers:
 *     RtlCreateMemoryBlockLookaside @ 0x18006EEB0 (RtlCreateMemoryBlockLookaside.c)
 *     RtlDestroyMemoryBlockLookaside @ 0x180083950 (RtlDestroyMemoryBlockLookaside.c)
 *     sub_180102AD8 @ 0x180102AD8 (sub_180102AD8.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     sub_180073890 @ 0x180073890 (sub_180073890.c)
 *     ZwFreeVirtualMemory @ 0x18009CAA0 (ZwFreeVirtualMemory.c)
 */

__int64 __fastcall RtlDestroyMemoryZone(__int64 a1)
{
  _QWORD *v2; // rbx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v5; // [rsp+38h] [rbp+10h] BYREF

  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 32));
  if ( *(_DWORD *)(a1 + 40) )
    sub_180073890();
  v2 = *(_QWORD **)(a1 + 48);
  while ( v2 )
  {
    v5 = v2;
    v4 = v2[1];
    v2 = (_QWORD *)*v2;
    ZwFreeVirtualMemory(-1LL, &v5, &v4, 0x8000LL);
  }
  return 0LL;
}
