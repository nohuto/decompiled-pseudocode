/*
 * XREFs of InbvNotifyDisplayOwnershipLost @ 0x14027D5C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 (*InbvNotifyDisplayOwnershipLost())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_14043D7B8;
  if ( qword_14043D7B8 )
  {
    result = *(__int64 (**)(void))qword_14043D7B8;
    if ( *(_QWORD *)qword_14043D7B8 )
      return (__int64 (*)(void))result();
  }
  return result;
}
