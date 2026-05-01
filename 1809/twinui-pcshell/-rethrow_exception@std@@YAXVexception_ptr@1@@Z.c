/*
 * XREFs of ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x18025DB90
 * Callers:
 *     std::call_once__lambda_9127ed4c7f0b883365da4a18d16712eb___ @ 0x18025BCA4 (std--call_once__lambda_9127ed4c7f0b883365da4a18d16712eb___.c)
 *     std::call_once__lambda_e13c9660f56a8071ad8948355737f92d___ @ 0x18025BD4C (std--call_once__lambda_e13c9660f56a8071ad8948355737f92d___.c)
 *     ??0task_options@Concurrency@@QEAA@XZ @ 0x180293680 (--0task_options@Concurrency@@QEAA@XZ.c)
 *     ?_RethrowUserException@_ExceptionHolder@details@Concurrency@@QEAAXXZ @ 0x180296918 (-_RethrowUserException@_ExceptionHolder@details@Concurrency@@QEAAXXZ.c)
 *     ?_RunTask@_TaskCollectionBaseImpl@details@Concurrency@@SAXP6AXPEAX@Z0W4_TaskInliningMode@23@@Z @ 0x180296A70 (-_RunTask@_TaskCollectionBaseImpl@details@Concurrency@@SAXP6AXPEAX@Z0W4_TaskInliningMode@23@@Z.c)
 *     std::call_once__lambda_e8a8a3830e8b700b3909ca267e5ddf52___ @ 0x1802D54D0 (std--call_once__lambda_e8a8a3830e8b700b3909ca267e5ddf52___.c)
 * Callees:
 *     <none>
 */

// Hidden C++ exception states: #wind=1
void __fastcall __noreturn std::rethrow_exception(const void *a1)
{
  __ExceptionPtrRethrow(a1);
  JUMPOUT(0x18025DBA8LL);
}
