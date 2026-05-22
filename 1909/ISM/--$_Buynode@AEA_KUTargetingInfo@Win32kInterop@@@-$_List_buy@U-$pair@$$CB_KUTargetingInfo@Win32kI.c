/*
 * XREFs of ??$_Buynode@AEA_KUTargetingInfo@Win32kInterop@@@?$_List_buy@U?$pair@$$CB_KUTargetingInfo@Win32kInterop@@@std@@V?$allocator@U?$pair@$$CB_KUTargetingInfo@Win32kInterop@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CB_KUTargetingInfo@Win32kInterop@@@std@@PEAX@1@PEAU21@0AEA_K$$QEAUTargetingInfo@Win32kInterop@@@Z @ 0x1800B9A70
 * Callers:
 *     ??$emplace@AEA_KUTargetingInfo@Win32kInterop@@@?$_Hash@V?$_Umap_traits@_KUTargetingInfo@Win32kInterop@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUTargetingInfo@Win32kInterop@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUTargetingInfo@Win32kInterop@@@std@@@std@@@std@@@std@@_N@1@AEA_K$$QEAUTargetingInfo@Win32kInterop@@@Z @ 0x1800BA374 (--$emplace@AEA_KUTargetingInfo@Win32kInterop@@@-$_Hash@V-$_Umap_traits@_KUTargetingInfo@Win32kIn.c)
 * Callees:
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CB_KUTargetingInfo@Win32kInterop@@@std@@V?$allocator@U?$pair@$$CB_KUTargetingInfo@Win32kInterop@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CB_KUTargetingInfo@Win32kInterop@@@std@@PEAX@2@PEAU32@0@Z @ 0x18002A3A4 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CB_KUTargetingInfo@Win32kInterop@@@std@@V.c)
 *     ??0TargetingInfo@Win32kInterop@@QEAA@$$QEAU01@@Z @ 0x1800BA820 (--0TargetingInfo@Win32kInterop@@QEAA@$$QEAU01@@Z.c)
 */

_QWORD *__fastcall std::_List_buy<std::pair<unsigned __int64 const,Win32kInterop::TargetingInfo>>::_Buynode<unsigned __int64 &,Win32kInterop::TargetingInfo>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        __int64 a5)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  _QWORD *result; // rax
  void *v9; // [rsp+40h] [rbp+8h]

  v6 = std::_List_alloc<std::_List_base_types<std::pair<unsigned __int64 const,Win32kInterop::TargetingInfo>>>::_Buynode0(
         a1,
         a2,
         a3);
  v7 = v6;
  v9 = v6;
  v6[2] = *a4;
  try
  {
    Win32kInterop::TargetingInfo::TargetingInfo(v6 + 3);
    result = v7;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v9, (const struct std::nothrow_t *)0x90);
    throw;
  }
  return result;
}
