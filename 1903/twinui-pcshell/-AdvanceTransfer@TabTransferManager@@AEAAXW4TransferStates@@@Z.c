/*
 * XREFs of ?AdvanceTransfer@TabTransferManager@@AEAAXW4TransferStates@@@Z @ 0x180256DAC
 * Callers:
 *     _lambda_101c7afbd5e76fc2a50976d3f19be39a_::operator() @ 0x180255F9C (_lambda_101c7afbd5e76fc2a50976d3f19be39a_--operator().c)
 *     _lambda_2de9129cf7ca5d1ddf0542513b424d5e_::operator() @ 0x180256044 (_lambda_2de9129cf7ca5d1ddf0542513b424d5e_--operator().c)
 *     _lambda_63df1022615e5d58b392f54f931127cc_::operator() @ 0x180256440 (_lambda_63df1022615e5d58b392f54f931127cc_--operator().c)
 *     _lambda_6fa5311f677dfb1ca9719d5bf83446d7_::operator() @ 0x18025672C (_lambda_6fa5311f677dfb1ca9719d5bf83446d7_--operator().c)
 *     _lambda_70c1c60e35f2cf7099057459f26c5cae_::operator() @ 0x18025686C (_lambda_70c1c60e35f2cf7099057459f26c5cae_--operator().c)
 *     _lambda_9e85f7730accfb574b1a6ae66a739164_::operator() @ 0x180256944 (_lambda_9e85f7730accfb574b1a6ae66a739164_--operator().c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c0a2f07679fb06ed1e26642539d8e628___::Run @ 0x180258D50 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c0a2f07679fb06ed1e26642539d8e628___--Run.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180082E6C (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$TabTransferManager_SetTransferState@I@TabViewManagerTraceLogging@@SAX$$QEAI@Z @ 0x180255A78 (--$TabTransferManager_SetTransferState@I@TabViewManagerTraceLogging@@SAX$$QEAI@Z.c)
 *     ?PerformCancel@TabTransferManager@@AEAAX_N@Z @ 0x180257DC0 (-PerformCancel@TabTransferManager@@AEAAX_N@Z.c)
 *     ?PerformComplete@TabTransferManager@@AEAAXXZ @ 0x180257F0C (-PerformComplete@TabTransferManager@@AEAAXXZ.c)
 *     ?PerformDrop@TabTransferManager@@AEAAXXZ @ 0x18025858C (-PerformDrop@TabTransferManager@@AEAAXXZ.c)
 *     ?PrepareTabAndViewForDrag@TabTransferManager@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180258904 (-PrepareTabAndViewForDrag@TabTransferManager@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@W.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TabTransferManager::AdvanceTransfer(__int64 a1, unsigned int a2)
{
  int v4; // ecx
  int v5; // edx
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, __int128 *, struct Windows::Internal::ComposableShell::Tabs::IShellTab **); // rbx
  int v8; // eax
  __int64 *v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  int v12; // r9d
  int v13; // ecx
  int v14; // r8d
  int v15; // eax
  __int128 v16; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct Windows::Internal::ComposableShell::Tabs::IShellTab *v18; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v19; // [rsp+58h] [rbp+10h] BYREF

  v4 = *(_DWORD *)(a1 + 284);
  if ( (a2 & v4) != a2 && ((v4 & 1) != 0 || a2 == 1) )
  {
    v19 = a2;
    TabViewManagerTraceLogging::TabTransferManager_SetTransferState<unsigned int>(&v19);
    *(_DWORD *)(a1 + 284) |= a2;
    v5 = *(_DWORD *)(a1 + 284);
    if ( a2 == 2 )
    {
      v18 = 0LL;
      v6 = *(_QWORD *)(a1 + 72);
      v7 = *(__int64 (__fastcall **)(__int64, __int128 *, struct Windows::Internal::ComposableShell::Tabs::IShellTab **))(*(_QWORD *)v6 + 96LL);
      v16 = *(_OWORD *)(a1 + 192);
      wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)&v18);
      v8 = v7(v6, &v16, &v18);
      if ( v8 < 0 )
      {
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          147LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfermanager.cpp",
          (const char *)(unsigned int)v8);
        __debugbreak();
      }
      if ( !v18 )
      {
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          148LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfermanager.cpp",
          (const char *)0x80070490LL);
        __debugbreak();
      }
      TabTransferManager::PrepareTabAndViewForDrag((TabTransferManager *)a1, v18);
      v9 = *(__int64 **)(a1 + 88);
      v10 = *v9;
      v16 = *(_OWORD *)(a1 + 192);
      v11 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, _QWORD))(v10 + 48))(
              v9,
              &v16,
              (unsigned int)~*(_DWORD *)(a1 + 280));
      if ( v11 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          153LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfermanager.cpp",
          (const char *)(unsigned int)v11);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v18);
      v5 = *(_DWORD *)(a1 + 284);
    }
    v13 = v5;
    v14 = v5;
    if ( (v5 & 0x10) == 0 )
    {
      v12 = *(_BYTE *)(a1 + 253) != 0 ? 14 : 10;
      if ( (v5 & v12) == v12 )
      {
        TabTransferManager::PerformDrop((TabTransferManager *)a1);
        v14 = *(_DWORD *)(a1 + 284);
        v13 = v14;
      }
    }
    v15 = 48;
    if ( *(_BYTE *)(a1 + 252) )
    {
      v13 = v14;
      if ( (v14 & 0x100) != 0 )
        v15 = 560;
    }
    if ( (v13 & 0x40) == 0 && (v15 & v13) == v15 )
      TabTransferManager::PerformComplete((TabTransferManager *)a1);
  }
  else
  {
    TabTransferManager::PerformCancel((TabTransferManager *)a1, 0);
  }
}
