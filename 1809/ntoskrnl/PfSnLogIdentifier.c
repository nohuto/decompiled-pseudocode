/*
 * XREFs of PfSnLogIdentifier @ 0x140669960
 * Callers:
 *     PfSnBeginScenario @ 0x140668444 (PfSnBeginScenario.c)
 * Callees:
 *     PfSnTraceGetLogEntry @ 0x1400D5240 (PfSnTraceGetLogEntry.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall PfSnLogIdentifier(__int64 a1, const void **a2)
{
  unsigned int v3; // edi
  __int64 result; // rax
  _QWORD *v5; // rbx
  void *v6; // [rsp+38h] [rbp+10h] BYREF

  v3 = ((unsigned int)*(unsigned __int16 *)a2 + 35) >> 4;
  result = PfSnTraceGetLogEntry(a1, v3, &v6);
  if ( (int)result >= 0 )
  {
    v5 = v6;
    memset(v6, 0, 16LL * v3);
    *v5 = (8LL * (v3 - 1)) | 6;
    memmove(v5 + 2, a2[1], *(unsigned __int16 *)a2);
    return 0LL;
  }
  return result;
}
