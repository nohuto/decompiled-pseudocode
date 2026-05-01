/*
 * XREFs of ??1ExeDataCache@@QEAA@XZ @ 0x1800BA7C0
 * Callers:
 *     _Win32AppStateManager::Win32AppStateManager_::_1_::dtor$3 @ 0x1800BA69B (_Win32AppStateManager--Win32AppStateManager_--_1_--dtor$3.c)
 * Callees:
 *     ?clear@?$_Tree@V?$_Tmap_traits@PEAUHWND__@@UExeData@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UExeData@@@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x1800BCF28 (-clear@-$_Tree@V-$_Tmap_traits@PEAUHWND__@@UExeData@@U-$less@PEAUHWND__@@@std@@V-$allocator@U-$p.c)
 */

void __fastcall ExeDataCache::~ExeDataCache(ExeDataCache *this)
{
  void **v1; // rbx

  v1 = (void **)((char *)this + 8);
  std::_Tree<std::_Tmap_traits<HWND__ *,ExeData,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,ExeData>>,0>>::clear((char *)this + 8);
  std::_Deallocate<16,0>(*v1, (const struct std::nothrow_t *)0x70);
}
