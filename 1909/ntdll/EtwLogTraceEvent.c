/*
 * XREFs of EtwLogTraceEvent @ 0x1800872A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlNtStatusToDosError @ 0x180053CB0 (RtlNtStatusToDosError.c)
 *     EtwpTraceUmEvent @ 0x180085D1C (EtwpTraceUmEvent.c)
 *     NtTraceEvent @ 0x18009DA40 (NtTraceEvent.c)
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
      return (unsigned int)EtwpTraceUmEvent(a1, a2, 0x30u, -1072431104);
    }
    else
    {
      v3 = NtTraceEvent((HANDLE)(unsigned __int16)a1, 0x100u, 0x30u, a2);
      if ( !v3 )
        return v2;
      return RtlNtStatusToDosError(v3);
    }
  }
  return 87LL;
}
