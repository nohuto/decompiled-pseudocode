/*
 * XREFs of ?_CaptureCurrent@_ContextCallback@details@Concurrency@@SA?AV123@XZ @ 0x1801EBC34
 * Callers:
 *     _lambda_713ee8bbd6b08550d59c52695cab5ce3_::operator() @ 0x1801E4674 (_lambda_713ee8bbd6b08550d59c52695cab5ce3_--operator().c)
 * Callees:
 *     <none>
 */

// Hidden C++ exception states: #wind=1
Concurrency::details::_ContextCallback *__fastcall Concurrency::details::_ContextCallback::_CaptureCurrent(
        Concurrency::details::_ContextCallback *a1)
{
  *(_QWORD *)a1 = 0LL;
  Concurrency::details::_ContextCallback::_Capture(a1);
  return a1;
}
