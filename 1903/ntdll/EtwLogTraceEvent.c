/*
 * XREFs of EtwLogTraceEvent @ 0x180086C00
 * Callers:
 *     <none>
 * Callees:
 *     RtlNtStatusToDosError @ 0x180053C10 (RtlNtStatusToDosError.c)
 *     sub_18008567C @ 0x18008567C (sub_18008567C.c)
 *     ZwTraceEvent @ 0x18009D290 (ZwTraceEvent.c)
 */

__int64 __fastcall EtwLogTraceEvent(int a1, unsigned __int16 *a2)
{
  unsigned int v2; // ebx
  NTSTATUS v3; // eax

  v2 = 0;
  if ( a2 )
  {
    if ( (a1 & 0x1000000) != 0 )
    {
      return (unsigned int)sub_18008567C(a1, a2, 0x30u, -1072431104);
    }
    else
    {
      v3 = ZwTraceEvent((HANDLE)(unsigned __int16)a1, 0x100u, 0x30u, a2);
      if ( !v3 )
        return v2;
      return RtlNtStatusToDosError(v3);
    }
  }
  return 87LL;
}
