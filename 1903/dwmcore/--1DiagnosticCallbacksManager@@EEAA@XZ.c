/*
 * XREFs of ??1DiagnosticCallbacksManager@@EEAA@XZ @ 0x18018A254
 * Callers:
 *     ??_EDiagnosticCallbacksManager@@EEAAPEAXI@Z @ 0x18018A470 (--_EDiagnosticCallbacksManager@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C42A4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@IV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@2@0@Z @ 0x18018BCA8 (-erase@-$_Tree@V-$_Tmap_traits@IV-$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@U-$l.c)
 */

void __fastcall DiagnosticCallbacksManager::~DiagnosticCallbacksManager(DiagnosticCallbacksManager *this)
{
  void **v1; // rbx
  __int64 v3; // rcx
  __int64 v4; // rcx
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = (void **)((char *)this + 168);
  std::_Tree<std::_Tmap_traits<unsigned int,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>,0>>::erase(
    (char *)this + 168,
    &v5,
    **((_QWORD **)this + 21),
    *((_QWORD *)this + 21));
  std::_Deallocate<16,0>(*v1, 0x30uLL);
  v3 = *((_QWORD *)this + 20);
  if ( v3 )
  {
    *((_QWORD *)this + 20) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = *((_QWORD *)this + 19);
  if ( v4 )
  {
    *((_QWORD *)this + 19) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  Microsoft::BamoImpl::BaseBamoConnectionImpl::~BaseBamoConnectionImpl((DiagnosticCallbacksManager *)((char *)this + 8));
}
