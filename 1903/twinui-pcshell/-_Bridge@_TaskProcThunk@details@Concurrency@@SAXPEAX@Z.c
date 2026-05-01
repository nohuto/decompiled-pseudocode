/*
 * XREFs of ?_Bridge@_TaskProcThunk@details@Concurrency@@SAXPEAX@Z @ 0x1801CC740
 * Callers:
 *     ?_RunTask@_TaskCollectionBaseImpl@details@Concurrency@@SAXP6AXPEAX@Z0W4_TaskInliningMode@23@@Z @ 0x1801CD7B0 (-_RunTask@_TaskCollectionBaseImpl@details@Concurrency@@SAXP6AXPEAX@Z0W4_TaskInliningMode@23@@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008755C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x1801AAFE4 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ??R?$_Func_class@X$$V@std@@QEBAXXZ @ 0x1801C5BAC (--R-$_Func_class@X$$V@std@@QEBAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Concurrency::details::_TaskProcThunk::_Bridge(void *a1)
{
  __int64 v2; // rdx

  std::_Func_class<void,>::operator()((__int64)a1);
  if ( a1 )
  {
    std::_Func_class<void,>::_Tidy((__int64)a1, v2);
    operator delete(a1, (const struct std::nothrow_t *)0x40);
  }
}
