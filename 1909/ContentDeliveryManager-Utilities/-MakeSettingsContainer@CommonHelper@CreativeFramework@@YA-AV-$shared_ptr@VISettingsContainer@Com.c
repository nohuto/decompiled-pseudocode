/*
 * XREFs of ?MakeSettingsContainer@CommonHelper@CreativeFramework@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUIApplicationDataContainer@Storage@Windows@@@Z @ 0x1800ADB54
 * Callers:
 *     ?CreateContainer@SettingsContainer@CommonHelper@CreativeFramework@@UEAA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUHSTRING__@@_N@Z @ 0x1800AD170 (-CreateContainer@SettingsContainer@CommonHelper@CreativeFramework@@UEAA-AV-$shared_ptr@VISetting.c)
 *     ?ResolveContainers@SettingsContainer@CommonHelper@CreativeFramework@@AEAAXXZ @ 0x1800AD4D8 (-ResolveContainers@SettingsContainer@CommonHelper@CreativeFramework@@AEAAXXZ.c)
 *     ?MakeRootSettingsContainer@CommonHelper@CreativeFramework@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@XZ @ 0x1800AD9AC (-MakeRootSettingsContainer@CommonHelper@CreativeFramework@@YA-AV-$shared_ptr@VISettingsContainer.c)
 * Callees:
 *     ?_Buyheadnode@?$_Tree_alloc@$0A@U?$_Tree_base_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@@std@@@2@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@@std@@PEAX@2@XZ @ 0x1800ADCE4 (-_Buyheadnode@-$_Tree_alloc@$0A@U-$_Tree_base_types@U-$pair@$$CBV-$basic_string@_WU_ea_1800ADCE4.c)
 *     ??2@YAPEAX_K@Z @ 0x1800ADED8 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall CreativeFramework::CommonHelper::MakeSettingsContainer(_QWORD *a1, __int64 a2)
{
  _DWORD *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  _DWORD *v7; // rdi

  v4 = operator new(0x38uLL);
  v7 = v4;
  if ( v4 )
  {
    v4[2] = 1;
    v4[3] = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj<CreativeFramework::CommonHelper::SettingsContainer>::`vftable';
    *((_QWORD *)v4 + 2) = &CreativeFramework::CommonHelper::SettingsContainer::`vftable';
    *((_QWORD *)v4 + 3) = a2;
    if ( a2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
    *((_QWORD *)v7 + 4) = 0LL;
    *((_QWORD *)v7 + 5) = 0LL;
    *((_QWORD *)v7 + 4) = std::_Tree_alloc<0,std::_Tree_base_types<std::pair<std::wstring const,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>>>>::_Buyheadnode(
                            v6,
                            v5);
    *((_BYTE *)v7 + 48) = 1;
  }
  else
  {
    v7 = 0LL;
  }
  *a1 = v7 + 4;
  a1[1] = v7;
  return a1;
}
