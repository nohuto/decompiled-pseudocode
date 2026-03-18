/*
 * XREFs of InbvNotifyDisplayOwnershipLost @ 0x140291BB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

__int64 (*InbvNotifyDisplayOwnershipLost())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_140467F68;
  if ( qword_140467F68 )
  {
    result = *(__int64 (**)(void))qword_140467F68;
    if ( *(_QWORD *)qword_140467F68 )
      return (__int64 (*)(void))result();
  }
  return result;
}
