/*
 * XREFs of ??$_Insert@AEBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@?$list@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@U_Iterator_base0@2@@1@AEBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Z @ 0x1803BAA8C
 * Callers:
 *     ?GetSortedConnectedMonitors@UwpPrimaryAppProxy@@AEAA?AV?$list@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@PEAUIImmersiveMonitorManager@@@Z @ 0x1803BC3A4 (-GetSortedConnectedMonitors@UwpPrimaryAppProxy@@AEAA-AV-$list@V-$com_ptr_t@UIImmersiveMonitor@@U.c)
 * Callees:
 *     ??$_Buynode@AEBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@?$_List_buy@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAPEAU?$_List_node@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@PEAX@1@PEAU21@0AEBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Z @ 0x1803BA840 (--$_Buynode@AEBV-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@-$_List_buy@V-$com_ptr_t@UIImmersi.c)
 */

__int64 __fastcall std::list<wil::com_ptr_t<IImmersiveMonitor,wil::err_exception_policy>>::_Insert<Microsoft::WRL::ComPtr<IImmersiveMonitor> const &>(
        __int64 a1,
        _QWORD *a2,
        _QWORD **a3)
{
  _QWORD *v3; // rsi
  _QWORD *v6; // r8
  __int64 v7; // rax
  __int64 result; // rax

  v3 = (_QWORD *)a2[1];
  v6 = std::_List_buy<wil::com_ptr_t<IImmersiveMonitor,wil::err_exception_policy>>::_Buynode<Microsoft::WRL::ComPtr<IImmersiveMonitor> const &>(
         a1,
         a2,
         v3,
         a3);
  v7 = *(_QWORD *)(a1 + 8);
  if ( v7 == 0xAAAAAAAAAAAAAA9LL )
    std::_Xlength_error("list<T> too long");
  result = v7 + 1;
  *(_QWORD *)(a1 + 8) = result;
  a2[1] = v6;
  *v3 = v6;
  return result;
}
