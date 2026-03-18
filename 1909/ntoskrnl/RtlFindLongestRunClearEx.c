/*
 * XREFs of RtlFindLongestRunClearEx @ 0x140178254
 * Callers:
 *     RtlpHpFixedVsAllocate @ 0x14013C750 (RtlpHpFixedVsAllocate.c)
 *     MiGetSystemPteStatistics @ 0x140898228 (MiGetSystemPteStatistics.c)
 * Callees:
 *     RtlFindClearRunsEx @ 0x14017828C (RtlFindClearRunsEx.c)
 */

__int64 __fastcall RtlFindLongestRunClearEx(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // [rsp+40h] [rbp+18h] BYREF
  unsigned int v5; // [rsp+44h] [rbp+1Ch]

  if ( (unsigned int)RtlFindClearRunsEx(a1, &v4) == 1 )
  {
    *a2 = v4;
    return v5;
  }
  else
  {
    *a2 = 0LL;
    return 0LL;
  }
}
