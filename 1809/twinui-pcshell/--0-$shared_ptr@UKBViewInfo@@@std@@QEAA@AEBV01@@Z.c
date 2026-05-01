/*
 * XREFs of ??0?$shared_ptr@UKBViewInfo@@@std@@QEAA@AEBV01@@Z @ 0x1802B451C
 * Callers:
 *     _lambda_a6e83045e007bd3aeabbed1653bdb15e_::operator() @ 0x18009322C (_lambda_a6e83045e007bd3aeabbed1653bdb15e_--operator().c)
 *     _lambda_ab0326ecea74eabee98d06838221c40f_::operator() @ 0x18009358C (_lambda_ab0326ecea74eabee98d06838221c40f_--operator().c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::shared_ptr<KBViewInfo>::shared_ptr<KBViewInfo>(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = a2[1];
  if ( v2 )
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
  *a1 = *a2;
  a1[1] = a2[1];
  return a1;
}
