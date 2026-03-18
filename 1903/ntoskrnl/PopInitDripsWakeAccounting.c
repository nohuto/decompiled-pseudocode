/*
 * XREFs of PopInitDripsWakeAccounting @ 0x140A1D0D0
 * Callers:
 *     PoInitSystem @ 0x140A06340 (PoInitSystem.c)
 * Callees:
 *     PpmConvertTime @ 0x140004E24 (PpmConvertTime.c)
 */

__int64 PopInitDripsWakeAccounting()
{
  __int64 v0; // rbx
  __int64 v1; // rdi
  __int64 v2; // rsi
  __int64 v3; // rcx
  unsigned __int128 v4; // rax

  v0 = 0LL;
  v1 = 0LL;
  v2 = 9LL;
  do
  {
    PopDripsWakeIdleAccountingBucketLimitsQpc[v1] = PpmConvertTime(
                                                      *(_QWORD *)((char *)&PopDripsWakeIdleAccountingBucketLimitsMs
                                                                + v1 * 8),
                                                      0x3E8uLL,
                                                      PopQpcFrequency);
    ++v1;
    --v2;
  }
  while ( v2 );
  v3 = 11LL;
  qword_140572D08 = -1LL;
  do
  {
    v4 = (unsigned __int64)PopDripsWakePeriodAccountingBucketLimitsHns[v0++] * (unsigned __int128)0x346DC5D63886594BuLL;
    *(_QWORD *)((char *)&unk_140573618 + v0 * 8) = *((_QWORD *)&v4 + 1) >> 11;
    --v3;
  }
  while ( v3 );
  qword_140573678 = -1LL;
  return v4;
}
