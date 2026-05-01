/*
 * XREFs of ??1?$map@PEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@U?$less@PEAUHSTRING__@@@3@V?$allocator@U?$pair@QEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@@3@@std@@QEAA@XZ @ 0x1803FFE38
 * Callers:
 *     _TwinUI::Lighting::AssistantLightManager::AssistantLightManager_::_1_::dtor$1 @ 0x1803FFD4E (_TwinUI--Lighting--AssistantLightManager--AssistantLightManager_--_1_--dtor$1.c)
 * Callees:
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@PEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@U?$less@PEAUHWND__@@@3@V?$allocator@U?$pair@QEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@@std@@@3@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@@std@@PEAX@2@@Z @ 0x1800AE444 (-_Erase@-$_Tree@V-$_Tmap_traits@PEAUHWND__@@V-$shared_ptr@VWin32AppViewInfo@@@std@@U-$less@PEAUH.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::map<HSTRING__ *,std::shared_ptr<TwinUI::Lighting::IAssistantLight>>::~map<HSTRING__ *,std::shared_ptr<TwinUI::Lighting::IAssistantLight>>(
        void **a1)
{
  void *v2; // rbx

  v2 = *a1;
  std::_Tree<std::_Tmap_traits<HWND__ *,std::shared_ptr<Win32AppViewInfo>,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,std::shared_ptr<Win32AppViewInfo>>>,0>>::_Erase(
    (__int64)a1,
    *((_QWORD **)*a1 + 1));
  *((_QWORD *)*a1 + 1) = v2;
  *(_QWORD *)*a1 = v2;
  *((_QWORD *)*a1 + 2) = v2;
  a1[1] = 0LL;
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x38);
}
