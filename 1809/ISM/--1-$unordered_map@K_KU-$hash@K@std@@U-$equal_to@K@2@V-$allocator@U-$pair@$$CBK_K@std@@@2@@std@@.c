/*
 * XREFs of ??1?$unordered_map@K_KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBK_K@std@@@2@@std@@QEAA@XZ @ 0x1800230F8
 * Callers:
 *     _DragNDropProcessor::DragNDropProcessor_::_1_::dtor$5 @ 0x18012EBF2 (_DragNDropProcessor--DragNDropProcessor_--_1_--dtor$5.c)
 *     _ControllerNavigationManager::ControllerNavigationManager_::_1_::dtor$1 @ 0x18012F12D (_ControllerNavigationManager--ControllerNavigationManager_--_1_--dtor$1.c)
 *     _Win32kInterop::Win32kInterop_::_1_::dtor$3 @ 0x180131CFF (_Win32kInterop--Win32kInterop_--_1_--dtor$3.c)
 *     _Win32kInterop::Win32kInterop_::_1_::dtor$4 @ 0x180131D15 (_Win32kInterop--Win32kInterop_--_1_--dtor$4.c)
 *     _DWMInputRouter::DWMInputRouter_::_1_::dtor$10 @ 0x1801320D8 (_DWMInputRouter--DWMInputRouter_--_1_--dtor$10.c)
 *     _InputInfoValidator::ValidatePointerInput_::_1_::dtor$0 @ 0x180135715 (_InputInfoValidator--ValidatePointerInput_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::unordered_map<unsigned long,unsigned __int64>::~unordered_map<unsigned long,unsigned __int64>(
        _QWORD *a1)
{
  std::_Hash<std::_Umap_traits<unsigned long,IRawInputProvider *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,IRawInputProvider *>>,0>>::~_Hash<std::_Umap_traits<unsigned long,IRawInputProvider *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,IRawInputProvider *>>,0>>(a1);
}
