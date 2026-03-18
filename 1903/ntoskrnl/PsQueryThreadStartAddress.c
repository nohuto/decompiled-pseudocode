/*
 * XREFs of PsQueryThreadStartAddress @ 0x14011C614
 * Callers:
 *     NtQueryInformationThread @ 0x1405E5490 (NtQueryInformationThread.c)
 *     PspAllocateThread @ 0x14060DC44 (PspAllocateThread.c)
 *     EtwpPsProvTraceThread @ 0x1406C4DCC (EtwpPsProvTraceThread.c)
 *     sub_1409ECFD0 @ 0x1409ECFD0 (sub_1409ECFD0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsQueryThreadStartAddress(__int64 a1, int a2)
{
  __int64 v3; // r8
  __int64 v4; // rcx
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  if ( (*(_DWORD *)(a1 + 116) & 0x400) != 0 )
    return *(_QWORD *)(a1 + 1696);
  v3 = 0LL;
  if ( !a2 )
    return *(_QWORD *)(a1 + 1696);
  if ( (*(_DWORD *)(a1 + 1768) & 8) == 0 )
  {
    v4 = *(_QWORD *)(a1 + 1568);
    _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
    if ( (*(_DWORD *)(a1 + 1768) & 8) == 0 )
      return v4;
  }
  return v3;
}
