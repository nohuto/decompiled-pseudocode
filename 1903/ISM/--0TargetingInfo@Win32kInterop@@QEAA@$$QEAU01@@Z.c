/*
 * XREFs of ??0TargetingInfo@Win32kInterop@@QEAA@$$QEAU01@@Z @ 0x1800BA970
 * Callers:
 *     ??$_Buynode@AEA_KUTargetingInfo@Win32kInterop@@@?$_List_buy@U?$pair@$$CB_KUTargetingInfo@Win32kInterop@@@std@@V?$allocator@U?$pair@$$CB_KUTargetingInfo@Win32kInterop@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CB_KUTargetingInfo@Win32kInterop@@@std@@PEAX@1@PEAU21@0AEA_K$$QEAUTargetingInfo@Win32kInterop@@@Z @ 0x1800B9BC0 (--$_Buynode@AEA_KUTargetingInfo@Win32kInterop@@@-$_List_buy@U-$pair@$$CB_KUTargetingInfo@Win32kI.c)
 * Callees:
 *     ??0?$_Hash@V?$_Umap_traits@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA@$$QEAV01@@Z @ 0x1800BA7C4 (--0-$_Hash@V-$_Umap_traits@KV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@V-$_Uhash_comp_ea_1800BA7C4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Win32kInterop::TargetingInfo::TargetingInfo(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rcx
  _QWORD *v5; // rcx

  *(_QWORD *)a1 = 0LL;
  if ( a1 != a2 )
  {
    *(_QWORD *)a1 = *(_QWORD *)a2;
    *(_QWORD *)a2 = 0LL;
  }
  std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>(
    a1 + 8,
    a2 + 8);
  v4 = (_QWORD *)(a2 + 72);
  *(_QWORD *)(a1 + 72) = 0LL;
  if ( a1 + 72 != a2 + 72 )
  {
    *(_QWORD *)(a1 + 72) = *v4;
    *v4 = 0LL;
  }
  *(_OWORD *)(a1 + 80) = *(_OWORD *)(a2 + 80);
  *(_DWORD *)(a1 + 96) = *(_DWORD *)(a2 + 96);
  v5 = (_QWORD *)(a2 + 104);
  *(_QWORD *)(a1 + 104) = 0LL;
  if ( a1 + 104 != a2 + 104 )
  {
    *(_QWORD *)(a1 + 104) = *v5;
    *v5 = 0LL;
  }
  *(_BYTE *)(a1 + 112) = *(_BYTE *)(a2 + 112);
  return a1;
}
