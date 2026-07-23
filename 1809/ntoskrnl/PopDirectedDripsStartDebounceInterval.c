/*
 * XREFs of PopDirectedDripsStartDebounceInterval @ 0x14086997C
 * Callers:
 *     PopDirectedDripsProcessWork @ 0x140869698 (PopDirectedDripsProcessWork.c)
 * Callees:
 *     KeSetTimer2 @ 0x1400FC1F0 (KeSetTimer2.c)
 */

char __fastcall PopDirectedDripsStartDebounceInterval(signed __int32 *a1)
{
  signed __int32 v1; // eax
  signed __int32 v2; // ett
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF

  _m_prefetchw(a1);
  v1 = *a1;
  do
  {
    v2 = v1;
    v1 = _InterlockedCompareExchange(a1, v1, v1);
  }
  while ( v2 != v1 );
  if ( (byte_14041A1B0 & 2) != 0 )
  {
    LOBYTE(v1) = v1 & 0x24;
    if ( (_BYTE)v1 == 32 )
    {
      _InterlockedOr(a1, 4u);
      _InterlockedAnd(a1, 0xFFFFFFDF);
      v4[1] = -1LL;
      v4[0] = 0LL;
      LOBYTE(v1) = KeSetTimer2(
                     (__int64)(a1 + 14),
                     -10000000LL * (unsigned int)PopDirectedDripsDebounceInterval,
                     0LL,
                     (__int64)v4);
    }
  }
  return v1;
}
