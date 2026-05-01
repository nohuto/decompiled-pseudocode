/*
 * XREFs of CrmRegistrationFindActivity @ 0x180034634
 * Callers:
 *     CrmSrvActivityFree @ 0x1800066F8 (CrmSrvActivityFree.c)
 *     CrmSrvActivityWindowClosedReasonUnsubscribe @ 0x180006D88 (CrmSrvActivityWindowClosedReasonUnsubscribe.c)
 *     CrmSrvActivityStop @ 0x180033718 (CrmSrvActivityStop.c)
 *     CrmSrvActivityQueryWindowClosedReasons @ 0x1800343CC (CrmSrvActivityQueryWindowClosedReasons.c)
 *     CrmSrvActivityStart @ 0x18003465C (CrmSrvActivityStart.c)
 *     CrmSrvActivityWindowClosedReasonSubscribe @ 0x180034E4C (CrmSrvActivityWindowClosedReasonSubscribe.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CrmRegistrationFindActivity(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  _QWORD *v3; // rcx
  _QWORD *i; // rax

  v2 = 0LL;
  v3 = (_QWORD *)(a1 + 56);
  for ( i = (_QWORD *)*v3; i != v3; i = (_QWORD *)*i )
  {
    if ( i[5] == a2 )
      return i;
  }
  return (_QWORD *)v2;
}
