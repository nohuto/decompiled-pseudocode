/*
 * XREFs of _Concurrency::task_long_::task_long___lambda_921a5a526b2b3e27a0030faf56813293____::_1_::dtor$5 @ 0x1801E068D
 * Callers:
 *     <none>
 * Callees:
 *     ??1_TaskCreationCallstack@details@Concurrency@@QEAA@XZ @ 0x1801E4068 (--1_TaskCreationCallstack@details@Concurrency@@QEAA@XZ.c)
 */

void __fastcall Concurrency::task_long_::task_long___lambda_921a5a526b2b3e27a0030faf56813293____::_1_::dtor_5(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~2u;
    Concurrency::details::_TaskCreationCallstack::~_TaskCreationCallstack((Concurrency::details::_TaskCreationCallstack *)(a2 + 72));
  }
}
