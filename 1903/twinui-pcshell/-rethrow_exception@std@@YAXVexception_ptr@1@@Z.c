/*
 * XREFs of ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x1801CDE64
 * Callers:
 *     ??0task_options@Concurrency@@QEAA@XZ @ 0x1801C4950 (--0task_options@Concurrency@@QEAA@XZ.c)
 *     ?_RunTask@_TaskCollectionBaseImpl@details@Concurrency@@SAXP6AXPEAX@Z0W4_TaskInliningMode@23@@Z @ 0x1801CD7B0 (-_RunTask@_TaskCollectionBaseImpl@details@Concurrency@@SAXP6AXPEAX@Z0W4_TaskInliningMode@23@@Z.c)
 *     std::call_once__lambda_66ce9afb50b67cbc7485265ee56e16fa___ @ 0x1802B3F8C (std--call_once__lambda_66ce9afb50b67cbc7485265ee56e16fa___.c)
 *     std::call_once__lambda_9127ed4c7f0b883365da4a18d16712eb___ @ 0x1802B4034 (std--call_once__lambda_9127ed4c7f0b883365da4a18d16712eb___.c)
 *     ?_RethrowUserException@_ExceptionHolder@details@Concurrency@@QEAAXXZ @ 0x1802EEB74 (-_RethrowUserException@_ExceptionHolder@details@Concurrency@@QEAAXXZ.c)
 *     std::call_once__lambda_e8a8a3830e8b700b3909ca267e5ddf52___ @ 0x180336454 (std--call_once__lambda_e8a8a3830e8b700b3909ca267e5ddf52___.c)
 * Callees:
 *     <none>
 */

// Hidden C++ exception states: #wind=1
void __fastcall __noreturn std::rethrow_exception(const void *a1)
{
  __ExceptionPtrRethrow(a1);
  JUMPOUT(0x1801CDE7CLL);
}
