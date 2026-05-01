/*
 * XREFs of ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@IUSize@Foundation@Windows@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@5@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@PEAX@2@XZ @ 0x18026D3A8
 * Callers:
 *     ??0ViewGroupManager@@QEAA@PEAUITitleBarController@@PEAUITabViewManager@@@Z @ 0x18026C174 (--0ViewGroupManager@@QEAA@PEAUITitleBarController@@PEAUITabViewManager@@@Z.c)
 *     ??0ViewGroup@@QEAA@PEAUIWindowGroupManager@@PEAUITitleBarController@@PEAUITabViewManager@@PEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@AEBUShellTabGroupId@Tabs@ComposableShell@Internal@6@PEAUIPrivilegedForegroundOperations@@@Z @ 0x18027D9B0 (--0ViewGroup@@QEAA@PEAUIWindowGroupManager@@PEAUITitleBarController@@PEAUITabViewManager@@PEAU-$.c)
 *     ??0TabTipAdapterPolicy@KeyboardHosting@@QEAA@XZ @ 0x18033D030 (--0TabTipAdapterPolicy@KeyboardHosting@@QEAA@XZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180022278 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

_QWORD *std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,Windows::Foundation::Size,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Windows::Foundation::Size>>,0>>::_Buyheadnode()
{
  _QWORD *result; // rax

  result = std::_Allocate<16,std::_Default_allocate_traits,0>(0x28uLL);
  *result = result;
  result[1] = result;
  result[2] = result;
  *((_WORD *)result + 12) = 257;
  return result;
}
