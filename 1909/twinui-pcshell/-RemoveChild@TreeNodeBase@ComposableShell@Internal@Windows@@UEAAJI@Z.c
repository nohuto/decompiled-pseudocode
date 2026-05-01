/*
 * XREFs of ?RemoveChild@TreeNodeBase@ComposableShell@Internal@Windows@@UEAAJI@Z @ 0x180231B30
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@IV?$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIV?$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@AEBI@Z @ 0x1800BD2D0 (-find@-$_Tree@V-$_Tmap_traits@IV-$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_ex.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$InvokeAll@PEAVTreeNodeBase@ComposableShell@Internal@Windows@@PEAVNodeChangedEventArgs@234@@?$EventSource@U?$ITypedEventHandler@PEAUITreeNode@ComposableShell@Internal@Windows@@PEAUITreeNodeEventArgs@234@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVTreeNodeBase@ComposableShell@Internal@Windows@@PEAVNodeChangedEventArgs@456@@Z @ 0x1801B937C (--$InvokeAll@PEAVTreeNodeBase@ComposableShell@Internal@Windows@@PEAVNodeChangedEventArgs@234@@-$.c)
 *     ??$MakeAndInitializeOrThrow@VNodeChangedEventArgs@ComposableShell@Internal@Windows@@W4TreeNodeEventType@234@AEAPEAUITreeNode@234@@wil@@YA?AV?$ComPtr@VNodeChangedEventArgs@ComposableShell@Internal@Windows@@@WRL@Microsoft@@$$QEAW4TreeNodeEventType@ComposableShell@Internal@Windows@@AEAPEAUITreeNode@567@@Z @ 0x180229910 (--$MakeAndInitializeOrThrow@VNodeChangedEventArgs@ComposableShell@Internal@Windows@@W4TreeNodeEv.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@IV?$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIV?$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@@Z @ 0x180236484 (-erase@-$_Tree@V-$_Tmap_traits@IV-$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_e.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Internal::ComposableShell::TreeNodeBase::RemoveChild(
        Windows::Internal::ComposableShell::TreeNodeBase *this,
        unsigned int a2)
{
  RTL_SRWLOCK *v3; // rsi
  __int64 **v4; // r10
  __int64 *v5; // r8
  __int64 v6; // rdi
  int v7; // eax
  const char *v8; // r9
  const char *v9; // r9
  int v11[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 *v14; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v15; // [rsp+58h] [rbp+10h] BYREF
  __int64 v16; // [rsp+60h] [rbp+18h] BYREF
  __int64 v17; // [rsp+68h] [rbp+20h] BYREF

  v15 = a2;
  v12 = -2LL;
  v17 = 0LL;
  v3 = (RTL_SRWLOCK *)((char *)this + 16);
  AcquireSRWLockExclusive((PSRWLOCK)this + 2);
  *(_QWORD *)v11 = v3;
  std::_Tree<std::_Tmap_traits<unsigned int,wil::com_ptr_t<Windows::Internal::ComposableShell::ITreeNode,wil::err_exception_policy>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,wil::com_ptr_t<Windows::Internal::ComposableShell::ITreeNode,wil::err_exception_policy>>>,0>>::find(
    (__int64 **)this + 5,
    &v14,
    &v15);
  try
  {
    v5 = v14;
    if ( v14 == *v4 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        253LL,
        (__int64)"internal\\shellcommoncomposable\\inc\\treenodebase.h",
        (const char *)0x80070057LL);
    v6 = v5[5];
    v5[5] = 0LL;
    v17 = v6;
    std::_Tree<std::_Tmap_traits<unsigned int,wil::com_ptr_t<Windows::Internal::ComposableShell::ITreeNode,wil::err_exception_policy>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,wil::com_ptr_t<Windows::Internal::ComposableShell::ITreeNode,wil::err_exception_policy>>>,0>>::erase(
      v4,
      &v14);
    if ( v3 )
      ReleaseSRWLockExclusive(v3);
    *(_QWORD *)v11 = v6;
    LODWORD(v14) = 1;
    wil::MakeAndInitializeOrThrow<Windows::Internal::ComposableShell::NodeChangedEventArgs,enum Windows::Internal::ComposableShell::TreeNodeEventType,Windows::Internal::ComposableShell::ITreeNode * &>(
      &v16,
      (int *)&v14,
      (__int64 *)v11);
    v7 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::ITreeNode *,Windows::Internal::ComposableShell::ITreeNodeEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<Windows::Internal::ComposableShell::TreeNodeBase *,Windows::Internal::ComposableShell::NodeChangedEventArgs *>(
           (RTL_SRWLOCK *)this + 8,
           (__int64)this,
           v16);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        261LL,
        (__int64)"internal\\shellcommoncomposable\\inc\\treenodebase.h",
        (const char *)(unsigned int)v7);
    try
    {
      (*(void (__fastcall **)(Windows::Internal::ComposableShell::TreeNodeBase *, __int64))(*(_QWORD *)this + 112LL))(
        this,
        v6);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x10C,
        (__int64)"internal\\shellcommoncomposable\\inc\\treenodebase.h",
        v8);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x110,
                           (__int64)"internal\\shellcommoncomposable\\inc\\treenodebase.h",
                           v9);
  }
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v17);
  return 0LL;
}
