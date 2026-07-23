/*
 * XREFs of PsQueryThreadStartAddress @ 0x1400A38B0
 * Callers:
 *     PspAllocateThread @ 0x1405F8E84 (PspAllocateThread.c)
 *     EtwpPsProvTraceThread @ 0x140624B70 (EtwpPsProvTraceThread.c)
 *     NtQueryInformationThread @ 0x14064B720 (NtQueryInformationThread.c)
 *     sub_1409AB900 @ 0x1409AB900 (sub_1409AB900.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsQueryThreadStartAddress(__int64 a1, int a2)
{
  __int64 v3; // r8
  __int64 v4; // rcx
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  if ( (*(_DWORD *)(a1 + 116) & 0x400) != 0 )
    return *(_QWORD *)(a1 + 1680);
  v3 = 0LL;
  if ( !a2 )
    return *(_QWORD *)(a1 + 1680);
  if ( (*(_DWORD *)(a1 + 1752) & 8) == 0 )
  {
    v4 = *(_QWORD *)(a1 + 1552);
    _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
    if ( (*(_DWORD *)(a1 + 1752) & 8) == 0 )
      return v4;
  }
  return v3;
}
