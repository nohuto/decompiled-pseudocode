/*
 * XREFs of PfSnCheckLogSequenceNumber @ 0x1400D4DA4
 * Callers:
 *     PfSnLogPageFaultCommon @ 0x1400D4C84 (PfSnLogPageFaultCommon.c)
 * Callees:
 *     PfSnTraceGetLogEntry @ 0x1400D5240 (PfSnTraceGetLogEntry.c)
 */

__int64 __fastcall PfSnCheckLogSequenceNumber(__int64 a1)
{
  int v2; // edi
  __int64 result; // rax
  unsigned __int64 *v4; // rcx
  unsigned __int64 *v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = dword_1404D8610;
  if ( dword_1404D8610 == *(_DWORD *)(a1 + 404) )
    return 1075380276LL;
  result = PfSnTraceGetLogEntry(a1, 1LL, &v5);
  if ( (int)result >= 0 )
  {
    v4 = v5;
    *v5 = *v5 & 0xFFFFFFFFFFFFFFF8uLL | 2;
    *((_DWORD *)v4 + 2) = v2;
    *(_DWORD *)(a1 + 404) = v2;
    *(_QWORD *)(a1 + 408) = a1 + 416;
    return 0LL;
  }
  return result;
}
