/*
 * XREFs of PfSnCheckLogSequenceNumber @ 0x140094D14
 * Callers:
 *     PfSnLogPageFaultCommon @ 0x140094BF4 (PfSnLogPageFaultCommon.c)
 * Callees:
 *     PfSnTraceGetLogEntry @ 0x14009511C (PfSnTraceGetLogEntry.c)
 */

__int64 __fastcall PfSnCheckLogSequenceNumber(__int64 a1)
{
  int v1; // edi
  __int64 result; // rax
  unsigned __int64 *v4; // rcx
  unsigned __int64 *v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = dword_140503A10;
  if ( dword_140503A10 == *(_DWORD *)(a1 + 404) )
    return 1075380276LL;
  result = PfSnTraceGetLogEntry(a1, 1LL, &v5);
  if ( (int)result >= 0 )
  {
    v4 = v5;
    *v5 = *v5 & 0xFFFFFFFFFFFFFFF8uLL | 2;
    *((_DWORD *)v4 + 2) = v1;
    *(_DWORD *)(a1 + 404) = v1;
    *(_QWORD *)(a1 + 408) = a1 + 416;
    return 0LL;
  }
  return result;
}
