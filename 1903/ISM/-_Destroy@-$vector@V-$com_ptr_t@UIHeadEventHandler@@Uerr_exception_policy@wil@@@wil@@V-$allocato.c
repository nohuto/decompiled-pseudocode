/*
 * XREFs of ?_Destroy@?$vector@V?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXPEAV?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@0@Z @ 0x180086B84
 * Callers:
 *     _std::vector_wil::com_ptr_t_IHeadEventHandler_wil::err_exception_policy__std::allocator_wil::com_ptr_t_IHeadEventHandler_wil::err_exception_policy_____::_Emplace_reallocate_wil::com_ptr_t_IHeadEventHandler_wil::err_exception_policy__&__::_1_::catch$38 @ 0x18008520F (_std--vector_wil--com_ptr_t_IHeadEventHandler_wil--err_exception_policy__std--allocator_wil--com.c)
 *     _std::vector_wil::com_ptr_t_IMPCInputProviderBase_wil::err_exception_policy__std::allocator_wil::com_ptr_t_IMPCInputProviderBase_wil::err_exception_policy_____::_Emplace_reallocate_wil::com_ptr_t_IMPCInputProviderBase_wil::err_exception_policy__const_&__::_1_::catch$38 @ 0x18008CBDF (_std--vector_wil--com_ptr_t_IMPCInputProviderBase_wil--err_exception_policy__std--allocator_wil-.c)
 * Callees:
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180022274 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 __fastcall std::vector<wil::com_ptr_t<IHeadEventHandler,wil::err_exception_policy>>::_Destroy(
        __int64 a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 *v4; // rbx
  __int64 result; // rax

  if ( a2 != a3 )
  {
    v4 = a2;
    do
      result = wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(v4++);
    while ( v4 != a3 );
  }
  return result;
}
