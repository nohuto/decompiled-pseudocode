/*
 * XREFs of ??$_Buynode@AEBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@?$_List_buy@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAPEAU?$_List_node@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@PEAX@1@PEAU21@0AEBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Z @ 0x1803BA840
 * Callers:
 *     ??$_Insert@AEBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@?$list@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@U_Iterator_base0@2@@1@AEBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Z @ 0x1803BAA8C (--$_Insert@AEBV-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@-$list@V-$com_ptr_t@UIImmersiveMoni.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@QEAAPEAU?$_List_node@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@PEAX@2@PEAU32@0@Z @ 0x180348A24 (-_Buynode0@-$_List_alloc@U-$_List_base_types@V-$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_pol.c)
 */

_QWORD *__fastcall std::_List_buy<wil::com_ptr_t<IImmersiveMonitor,wil::err_exception_policy>>::_Buynode<Microsoft::WRL::ComPtr<IImmersiveMonitor> const &>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD **a4)
{
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  _QWORD *v7; // rcx
  _QWORD *result; // rax
  void *v9; // [rsp+40h] [rbp+8h]

  v5 = std::_List_alloc<std::_List_base_types<wil::com_ptr_t<IImmersiveMonitor,wil::err_exception_policy>>>::_Buynode0(
         a1,
         a2,
         a3);
  try
  {
    v6 = v5;
    v9 = v5;
    v7 = *a4;
    v5[2] = *a4;
    if ( v7 )
      (*(void (__fastcall **)(_QWORD *, _QWORD))(*v7 + 8LL))(v7, *v7);
    result = v6;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v9, (const struct std::nothrow_t *)0x18);
    throw;
  }
  return result;
}
