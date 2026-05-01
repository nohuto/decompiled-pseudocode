/*
 * XREFs of wil::details::ScopeExitFn__lambda_8f7c4272537cd39965ba6040b29ee2e3___::_ScopeExitFn__lambda_8f7c4272537cd39965ba6040b29ee2e3___ @ 0x1802C4068
 * Callers:
 *     _MonitorFrame::Initialize_::_1_::dtor$1 @ 0x1802CA3A1 (_MonitorFrame--Initialize_--_1_--dtor$1.c)
 * Callees:
 *     ?DestroyInternal@MonitorFrame@@AEAAXXZ @ 0x1802C8664 (-DestroyInternal@MonitorFrame@@AEAAXXZ.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_8f7c4272537cd39965ba6040b29ee2e3___::_ScopeExitFn__lambda_8f7c4272537cd39965ba6040b29ee2e3___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    MonitorFrame::DestroyInternal(*(MonitorFrame **)a1);
  }
}
