/*
 * XREFs of MiValidateZeroBits @ 0x14060A148
 * Callers:
 *     NtMapViewOfSection @ 0x140609CA0 (NtMapViewOfSection.c)
 *     MiAllocateVirtualMemoryPrepare @ 0x14067D240 (MiAllocateVirtualMemoryPrepare.c)
 *     NtCreateEnclave @ 0x1408947D0 (NtCreateEnclave.c)
 * Callees:
 *     RtlFindMostSignificantBit @ 0x140122AB0 (RtlFindMostSignificantBit.c)
 */

__int64 __fastcall MiValidateZeroBits(ULONGLONG *a1)
{
  ULONGLONG v1; // rax
  unsigned __int64 v4; // rax

  v1 = *a1;
  if ( *a1 && (v1 < 0x20 ? (v4 = v1 + 32) : (v4 = 63 - RtlFindMostSignificantBit(*a1)), *a1 = v4, v4 > 0x35) )
    return 3221225485LL;
  else
    return 0LL;
}
