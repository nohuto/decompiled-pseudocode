/*
 * XREFs of CsrGetProcessId @ 0x1800CBF10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 CsrGetProcessId()
{
  __int64 result; // rax

  result = qword_180165B30;
  if ( byte_180165430 )
    return 0LL;
  return result;
}
