/*
 * XREFs of _Concurrency::details::_ContextCallback::_CaptureCurrent_::_1_::dtor$0 @ 0x1801EBC6A
 * Callers:
 *     <none>
 * Callees:
 *     ??1_ContextCallback@details@Concurrency@@QEAA@XZ @ 0x1801E3FC4 (--1_ContextCallback@details@Concurrency@@QEAA@XZ.c)
 */

void __fastcall Concurrency::details::_ContextCallback::_CaptureCurrent_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    Concurrency::details::_ContextCallback::~_ContextCallback(*(Concurrency::details::_ContextCallback **)(a2 + 64));
  }
}
