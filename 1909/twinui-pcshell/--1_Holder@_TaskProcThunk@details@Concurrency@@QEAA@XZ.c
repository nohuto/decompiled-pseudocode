/*
 * XREFs of ??1_Holder@_TaskProcThunk@details@Concurrency@@QEAA@XZ @ 0x1801E4028
 * Callers:
 *     _Concurrency::details::_TaskProcThunk::_Bridge_::_1_::dtor$0 @ 0x1801EB7FD (_Concurrency--details--_TaskProcThunk--_Bridge_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x1801C9F14 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 */

void __fastcall Concurrency::details::_TaskProcThunk::_Holder::~_Holder(
        Concurrency::details::_TaskProcThunk::_Holder *this,
        __int64 a2)
{
  void *v2; // rbx

  v2 = *(void **)this;
  if ( *(_QWORD *)this )
  {
    std::_Func_class<void,>::_Tidy(*(_QWORD *)this, a2);
    operator delete(v2, (const struct std::nothrow_t *)0x40);
  }
}
