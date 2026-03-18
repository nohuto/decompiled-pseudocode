/*
 * XREFs of ?SetBootstrapProxy@DiagnosticCallbacksManager@@MEAAJPEAVBamoProxy@Bamo@Microsoft@@@Z @ 0x180155860
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801448EC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@IV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180154F80 (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEBI@2@V-$tuple@$$V@2@@-$_T_ea_180154F80.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall DiagnosticCallbacksManager::SetBootstrapProxy(
        DiagnosticCallbacksManager *this,
        struct Microsoft::Bamo::BamoProxy *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 *v6; // r9
  __int64 *v7; // rbx
  __int64 *v8; // rdx
  unsigned int v9; // ecx
  __int64 v10; // rax
  int *v11; // rax
  __int64 v12; // rdi
  int v13; // eax
  __int64 *v15; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  unsigned int v17; // [rsp+68h] [rbp+28h] BYREF
  int *v18; // [rsp+70h] [rbp+30h] BYREF
  int *v19; // [rsp+78h] [rbp+38h] BYREF

  if ( a2 )
    (**(void (__fastcall ***)(struct Microsoft::Bamo::BamoProxy *))a2)(a2);
  v18 = 0LL;
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v18);
  if ( (*(int (__fastcall **)(struct Microsoft::Bamo::BamoProxy *, GUID *, int **))(*(_QWORD *)a2 + 16LL))(
         a2,
         &GUID_04ee6573_94fb_9d69_ad96_7b14cfe9246a,
         &v18) < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8A,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\diagnosticcallbacksmanager.cpp",
      (const char *)0x87B2080CLL);
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v18);
    (*(void (__fastcall **)(struct Microsoft::Bamo::BamoProxy *))(*(_QWORD *)a2 + 8LL))(a2);
    return 2276591628LL;
  }
  else
  {
    v4 = (__int64)(v18 + 6);
    if ( !v18 )
      v4 = 32LL;
    v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v4 + 16LL) + 8LL))(*(_QWORD *)(*(_QWORD *)v4 + 16LL));
    v6 = (__int64 *)((char *)this + 168);
    v7 = (__int64 *)*((_QWORD *)this + 21);
    v8 = v7;
    v9 = *(_DWORD *)(v5 + 36);
    v17 = v9;
    v10 = v7[1];
    while ( !*(_BYTE *)(v10 + 25) )
    {
      if ( *(_DWORD *)(v10 + 32) >= v9 )
      {
        v7 = (__int64 *)v10;
        v10 = *(_QWORD *)v10;
      }
      else
      {
        v10 = *(_QWORD *)(v10 + 16);
      }
    }
    if ( v7 == v8 || v9 < *((_DWORD *)v7 + 8) )
    {
      v19 = (int *)&v17;
      v7 = *std::_Tree<std::_Tmap_traits<unsigned int,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
              v6,
              &v15,
              (__int64)v7,
              (__int64)v6,
              &v19);
    }
    v11 = (int *)v7[5];
    v12 = (__int64)v18;
    if ( v11 != v18 )
    {
      if ( v18 )
      {
        (*(void (__fastcall **)(int *))(*(_QWORD *)v18 + 8LL))(v18);
        v11 = (int *)v7[5];
      }
      v19 = v11;
      v7[5] = v12;
      Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v19);
      v12 = (__int64)v18;
    }
    v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 24LL))(v12);
    if ( v13 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v13, retaddr);
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v18);
    (*(void (__fastcall **)(struct Microsoft::Bamo::BamoProxy *))(*(_QWORD *)a2 + 8LL))(a2);
    return 0LL;
  }
}
