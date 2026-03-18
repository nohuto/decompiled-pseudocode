/*
 * XREFs of RtlControlStackTraceDataBase @ 0x14030B7E8
 * Callers:
 *     InitBootProcessor @ 0x140A0816C (InitBootProcessor.c)
 * Callees:
 *     RtlpInitializeStackTraceDatabase @ 0x1408D01B0 (RtlpInitializeStackTraceDatabase.c)
 */

__int64 __fastcall RtlControlStackTraceDataBase(__int64 a1, __int64 a2, _QWORD *a3)
{
  if ( a3 )
    return RtlpInitializeStackTraceDatabase(*a3, a3[1], a3[2]);
  else
    return 3221225713LL;
}
