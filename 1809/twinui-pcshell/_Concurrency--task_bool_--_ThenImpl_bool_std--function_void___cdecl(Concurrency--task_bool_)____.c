/*
 * XREFs of _Concurrency::task_bool_::_ThenImpl_bool_std::function_void___cdecl(Concurrency::task_bool_)____::_1_::dtor$0 @ 0x1802929A5
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAA@XZ @ 0x1801384AC (--1-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAA@XZ.c)
 */

void __fastcall Concurrency::task_bool_::_ThenImpl_bool_std::function_void___cdecl_Concurrency::task_bool______::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 48) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    std::shared_ptr<PeoplePaneViewInfo>::~shared_ptr<PeoplePaneViewInfo>(*(_QWORD *)(a2 + 168));
  }
}
