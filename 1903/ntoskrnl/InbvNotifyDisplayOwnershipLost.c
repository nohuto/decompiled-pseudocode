/*
 * XREFs of InbvNotifyDisplayOwnershipLost @ 0x140291E50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

__int64 (*InbvNotifyDisplayOwnershipLost())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_140468228;
  if ( qword_140468228 )
  {
    result = *(__int64 (**)(void))qword_140468228;
    if ( *(_QWORD *)qword_140468228 )
      return (__int64 (*)(void))result();
  }
  return result;
}
