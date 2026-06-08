/*
 * XREFs of GetCpcDifferentialFeedback @ 0x1C000A200
 * Callers:
 *     <none>
 * Callees:
 *     ReadGenAddr @ 0x1C00021B8 (ReadGenAddr.c)
 */

unsigned __int64 __fastcall GetCpcDifferentialFeedback(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  unsigned __int64 v4; // rbx
  __int64 v8; // rcx
  unsigned __int64 result; // rax

  v4 = 0LL;
  v8 = a1 + 140;
  if ( v8 )
    result = ReadGenAddr(v8);
  else
    result = 0LL;
  *a3 = result;
  if ( a1 != -152 )
  {
    result = ReadGenAddr(a1 + 152);
    v4 = result;
  }
  *a4 = v4;
  return result;
}
