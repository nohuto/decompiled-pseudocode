/*
 * XREFs of ??0_variant_t@@QEAA@PEBG@Z @ 0x1801383CC
 * Callers:
 *     ?RuntimeClassInitialize@TaskbarLayoutPolicyManager@@QEAAJXZ @ 0x18013B5B4 (-RuntimeClassInitialize@TaskbarLayoutPolicyManager@@QEAAJXZ.c)
 *     ?RuntimeClassInitialize@PWSLayoutPolicyManager@@QEAAJXZ @ 0x1801A0094 (-RuntimeClassInitialize@PWSLayoutPolicyManager@@QEAAJXZ.c)
 * Callees:
 *     ?_com_issue_error@@YAXJ@Z @ 0x1800E2538 (-_com_issue_error@@YAXJ@Z.c)
 */

_variant_t *__fastcall _variant_t::_variant_t(_variant_t *this, const unsigned __int16 *a2)
{
  BSTR v3; // rax

  v3 = SysAllocString(
         L"xmlns:d='http://schemas.microsoft.com/Start/2014/FullDefaultLayout' xmlns:l='http://schemas.microsoft.com/Start"
          "/2014/LayoutModification' xmlns:t='http://schemas.microsoft.com/Start/2014/TaskbarLayout'");
  if ( !v3 )
    _com_issue_error((char *)0x8007000ELL);
  *((_QWORD *)this + 1) = v3;
  *(_WORD *)this = 8;
  return this;
}
