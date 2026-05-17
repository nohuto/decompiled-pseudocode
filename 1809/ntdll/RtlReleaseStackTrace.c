/*
 * XREFs of RtlReleaseStackTrace @ 0x1800FD940
 * Callers:
 *     <none>
 * Callees:
 *     RtlStdReleaseStackTrace @ 0x1800FDC40 (RtlStdReleaseStackTrace.c)
 */

__int64 __fastcall RtlReleaseStackTrace(__int64 a1)
{
  __int64 result; // rax

  if ( RtlpStackTraceDatabase )
    return RtlStdReleaseStackTrace(RtlpStackTraceDatabase, a1);
  return result;
}
