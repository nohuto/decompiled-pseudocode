/*
 * XREFs of RtlReleaseStackTrace @ 0x1800FAC00
 * Callers:
 *     <none>
 * Callees:
 *     RtlStdReleaseStackTrace @ 0x1800FAF00 (RtlStdReleaseStackTrace.c)
 */

__int64 __fastcall RtlReleaseStackTrace(__int64 a1)
{
  __int64 result; // rax

  if ( RtlpStackTraceDatabase )
    return RtlStdReleaseStackTrace(RtlpStackTraceDatabase, a1);
  return result;
}
