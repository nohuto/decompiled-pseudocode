/*
 * XREFs of ??1?$unique_ptr@U_TaskProcHandle@details@Concurrency@@U?$default_delete@U_TaskProcHandle@details@Concurrency@@@std@@@std@@QEAA@XZ @ 0x1801E3D68
 * Callers:
 *     _Concurrency::details::_TaskProcHandle::_RunChoreBridge_::_1_::dtor$0 @ 0x1801EC79F (_Concurrency--details--_TaskProcHandle--_RunChoreBridge_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::unique_ptr<Concurrency::details::_TaskProcHandle>::~unique_ptr<Concurrency::details::_TaskProcHandle>(
        __int64 (__fastcall ****a1)(_QWORD, __int64))
{
  __int64 (__fastcall ***v1)(_QWORD, __int64); // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (**v1)(v1, 1LL);
  return result;
}
