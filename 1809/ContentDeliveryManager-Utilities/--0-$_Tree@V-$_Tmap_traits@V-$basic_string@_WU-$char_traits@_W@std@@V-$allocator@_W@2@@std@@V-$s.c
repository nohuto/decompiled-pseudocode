/*
 * XREFs of ??0?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@Uless@Details@CommonHelper@CreativeFramework@@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@@std@@@2@$0A@@std@@@std@@QEAA@AEBV01@AEBV?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@@std@@@1@@Z @ 0x1800A9B0C
 * Callers:
 *     ?EnumerateAllTriggersInContainer@Internal@TargetedContent@Services@Windows@@YA_NV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@V?$function@$$A6A_NV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@AEAVPropertySetHelper@Triggers@CreativeFramework@@@Z@6@@Z @ 0x18006FFDC (-EnumerateAllTriggersInContainer@Internal@TargetedContent@Services@Windows@@YA_NV-$shared_ptr@VI.c)
 *     ?GetTriggerSettingsContainerFromName@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUHSTRING__@@0@Z @ 0x180070E88 (-GetTriggerSettingsContainerFromName@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_pt.c)
 *     ?DeleteContainer@SettingsContainer@CommonHelper@CreativeFramework@@UEAAXPEAUHSTRING__@@@Z @ 0x1800A9160 (-DeleteContainer@SettingsContainer@CommonHelper@CreativeFramework@@UEAAXPEAUHSTRING__@@@Z.c)
 *     ?GetChildContainers@SettingsContainer@CommonHelper@CreativeFramework@@UEAA?AV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@Uless@Details@CommonHelper@CreativeFramework@@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@@std@@@2@@std@@XZ @ 0x1800A9260 (-GetChildContainers@SettingsContainer@CommonHelper@CreativeFramework@@UEAA-AV-$map@V-$basic_stri.c)
 * Callees:
 *     ?_Buyheadnode@?$_Tree_alloc@$0A@U?$_Tree_base_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@@std@@@2@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@@std@@PEAX@2@XZ @ 0x1800A9BD4 (-_Buyheadnode@-$_Tree_alloc@$0A@U-$_Tree_base_types@U-$pair@$$CBV-$basic_string@_WU_ea_1800A9BD4.c)
 *     ??$_Copy_nodes@U?$integral_constant@_N$0A@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@Uless@Details@CommonHelper@CreativeFramework@@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@@std@@@2@$0A@@std@@@std@@IEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@@std@@PEAX@1@PEAU21@0U?$integral_constant@_N$0A@@1@@Z @ 0x1800A9CAC (--$_Copy_nodes@U-$integral_constant@_N$0A@@std@@@-$_Tree@V-$_Tmap_traits@V-$basic_s_ea_1800A9CAC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall std::_Tree<std::_Tmap_traits<std::wstring,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>,CreativeFramework::CommonHelper::Details::less,std::allocator<std::pair<std::wstring const,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>>>,0>>::_Tree<std::_Tmap_traits<std::wstring,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>,CreativeFramework::CommonHelper::Details::less,std::allocator<std::pair<std::wstring const,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>>>,0>>(
        __int64 *a1,
        __int64 a2)
{
  __int64 v4; // rax
  _QWORD *v5; // rdx
  __int64 **v6; // r8
  __int64 *i; // rcx
  __int64 v8; // rax
  __int64 j; // rcx
  __int64 *result; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v4 = std::_Tree_alloc<0,std::_Tree_base_types<std::pair<std::wstring const,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>>>>::_Buyheadnode(
         a1,
         a2);
  *a1 = v4;
  try
  {
    *(_QWORD *)(v4 + 8) = std::_Tree<std::_Tmap_traits<std::wstring,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>,CreativeFramework::CommonHelper::Details::less,std::allocator<std::pair<std::wstring const,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>>>,0>>::_Copy_nodes<std::integral_constant<bool,0>>(a1);
    a1[1] = *(_QWORD *)(a2 + 8);
    v5 = (_QWORD *)*a1;
    v6 = *(__int64 ***)(*a1 + 8);
    if ( *((_BYTE *)v6 + 25) )
    {
      *v5 = v5;
      *(_QWORD *)(*a1 + 16) = *a1;
    }
    else
    {
      for ( i = *v6; !*((_BYTE *)i + 25); i = (__int64 *)*i )
        v6 = (__int64 **)i;
      *v5 = v6;
      v8 = *(_QWORD *)(*a1 + 8);
      for ( j = *(_QWORD *)(v8 + 16); !*(_BYTE *)(j + 25); j = *(_QWORD *)(j + 16) )
        v8 = j;
      *(_QWORD *)(*a1 + 16) = v8;
    }
    result = a1;
  }
  catch ( ... )
  {
    std::_Tree<std::_Tmap_traits<std::wstring,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>,CreativeFramework::CommonHelper::Details::less,std::allocator<std::pair<std::wstring const,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>>>,0>>::_Tidy(a1);
    throw;
  }
  return result;
}
