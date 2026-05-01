/*
 * XREFs of ??1_ContextCallback@details@Concurrency@@QEAA@XZ @ 0x1801E3FC4
 * Callers:
 *     _Concurrency::details::_ContextCallback::_CaptureCurrent_::_1_::dtor$0 @ 0x1801EBC6A (_Concurrency--details--_ContextCallback--_CaptureCurrent_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall Concurrency::details::_ContextCallback::~_ContextCallback(Concurrency::details::_ContextCallback *this)
{
  Concurrency::details::_ContextCallback::_Reset(this);
}
