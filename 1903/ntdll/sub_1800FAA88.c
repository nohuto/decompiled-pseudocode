/*
 * XREFs of sub_1800FAA88 @ 0x1800FAA88
 * Callers:
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 *     RtlSetProcessDebugInformation @ 0x1800D7B10 (RtlSetProcessDebugInformation.c)
 * Callees:
 *     sub_1800FAF50 @ 0x1800FAF50 (sub_1800FAF50.c)
 */

__int64 __fastcall sub_1800FAA88(unsigned int a1, int a2, _QWORD *a3)
{
  if ( a1 >= 3 )
    return 3221225711LL;
  if ( a1 )
    return 3221225474LL;
  if ( a2 != 24 )
    return 3221225712LL;
  if ( a3 )
    return sub_1800FAF50(*a3, a3[1], a3[2]);
  return 3221225713LL;
}
