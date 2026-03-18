/*
 * XREFs of InbvSetScrollRegion @ 0x140291C40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

__int64 (*InbvSetScrollRegion())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_140467F68;
  if ( qword_140467F68 )
  {
    result = *(__int64 (**)(void))(qword_140467F68 + 72);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
