/*
 * XREFs of InbvEnableBootDriver @ 0x14027D530
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 (*InbvEnableBootDriver())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_14043D7B8;
  if ( qword_14043D7B8 )
  {
    result = *(__int64 (**)(void))(qword_14043D7B8 + 48);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
