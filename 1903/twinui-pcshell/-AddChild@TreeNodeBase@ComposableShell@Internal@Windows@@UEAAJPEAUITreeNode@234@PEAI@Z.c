/*
 * XREFs of ?AddChild@TreeNodeBase@ComposableShell@Internal@Windows@@UEAAJPEAUITreeNode@234@PEAI@Z @ 0x18020E2C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@IV?$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIV?$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@AEBI@Z @ 0x1800AE9D0 (-find@-$_Tree@V-$_Tmap_traits@IV-$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_ex.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??4?$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIPrivilegedForegroundOperations@@@Z @ 0x180121284 (--4-$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEA.c)
 *     ??$InvokeAll@PEAVTreeNodeBase@ComposableShell@Internal@Windows@@PEAVNodeChangedEventArgs@234@@?$EventSource@U?$ITypedEventHandler@PEAUITreeNode@ComposableShell@Internal@Windows@@PEAUITreeNodeEventArgs@234@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVTreeNodeBase@ComposableShell@Internal@Windows@@PEAVNodeChangedEventArgs@456@@Z @ 0x18019A42C (--$InvokeAll@PEAVTreeNodeBase@ComposableShell@Internal@Windows@@PEAVNodeChangedEventArgs@234@@-$.c)
 *     ??$MakeAndInitializeOrThrow@VNodeChangedEventArgs@ComposableShell@Internal@Windows@@W4TreeNodeEventType@234@AEAPEAUITreeNode@234@@wil@@YA?AV?$ComPtr@VNodeChangedEventArgs@ComposableShell@Internal@Windows@@@WRL@Microsoft@@$$QEAW4TreeNodeEventType@ComposableShell@Internal@Windows@@AEAPEAUITreeNode@567@@Z @ 0x18020A69C (--$MakeAndInitializeOrThrow@VNodeChangedEventArgs@ComposableShell@Internal@Windows@@W4TreeNodeEv.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IV?$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIV?$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@4@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@std@@_N@1@AEBI@Z @ 0x18020B294 (--$_Try_emplace@AEBI$$V@-$map@IV-$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_ex.c)
 *     _lambda_dd8f4aabae2ca26411facba6a281aa4a_::operator() @ 0x18020DA50 (_lambda_dd8f4aabae2ca26411facba6a281aa4a_--operator().c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Internal::ComposableShell::TreeNodeBase::AddChild(
        RTL_SRWLOCK *this,
        struct Windows::Internal::ComposableShell::ITreeNode *a2,
        unsigned int *a3)
{
  const char *v5; // r9
  __int64 result; // rax
  unsigned int *i; // r11
  int v8; // r10d
  int v9; // eax
  const char *v10; // r9
  __int128 v11; // [rsp+28h] [rbp-50h] BYREF
  __int128 v12; // [rsp+38h] [rbp-40h] BYREF
  char v13; // [rsp+48h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  RTL_SRWLOCK *v15; // [rsp+80h] [rbp+8h] BYREF
  struct Windows::Internal::ComposableShell::ITreeNode *v16; // [rsp+88h] [rbp+10h] BYREF
  _DWORD *v17; // [rsp+90h] [rbp+18h] BYREF
  __int64 v18; // [rsp+98h] [rbp+20h] BYREF

  v17 = a3;
  v16 = a2;
  try
  {
    *a3 = 0;
    *(_QWORD *)&v11 = this;
    *((_QWORD *)&v11 + 1) = &v17;
    v12 = v11;
    v13 = 1;
    (*((void (__fastcall **)(RTL_SRWLOCK *))this->Ptr + 12))(this);
    AcquireSRWLockExclusive(this + 2);
    v15 = this + 2;
    if ( LOBYTE(this[3].Ptr) )
    {
      if ( this != (RTL_SRWLOCK *)-16LL )
        ReleaseSRWLockExclusive(this + 2);
      v13 = 0;
      lambda_dd8f4aabae2ca26411facba6a281aa4a_::operator()((RTL_SRWLOCK **)&v12);
      result = 2147947423LL;
    }
    else
    {
      for ( i = (unsigned int *)&this[7];
            *std::_Tree<std::_Tmap_traits<unsigned int,wil::com_ptr_t<Windows::Internal::ComposableShell::ITreeNode,wil::err_exception_policy>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,wil::com_ptr_t<Windows::Internal::ComposableShell::ITreeNode,wil::err_exception_policy>>>,0>>::find(
               (__int64 **)&this[5],
               (__int64 **)&v11,
               i) != this[5].Ptr
         || !v8;
            *i = v8 + 1 )
      {
        ;
      }
      *v17 = v8;
      ++*i;
      std::map<unsigned int,wil::com_ptr_t<Windows::Internal::ComposableShell::ITreeNode,wil::err_exception_policy>>::_Try_emplace<unsigned int const &,>(
        (__int64 *)&this[5],
        (__int64)&v11,
        v17);
      wil::com_ptr_t<IPrivilegedForegroundOperations,wil::err_exception_policy>::operator=(
        (__int64 *)(v11 + 40),
        (__int64)a2);
      if ( this != (RTL_SRWLOCK *)-16LL )
        ReleaseSRWLockExclusive(this + 2);
      LODWORD(v15) = 0;
      wil::MakeAndInitializeOrThrow<Windows::Internal::ComposableShell::NodeChangedEventArgs,enum Windows::Internal::ComposableShell::TreeNodeEventType,Windows::Internal::ComposableShell::ITreeNode * &>(
        &v18,
        (int *)&v15,
        (__int64 *)&v16);
      v9 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::ITreeNode *,Windows::Internal::ComposableShell::ITreeNodeEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<Windows::Internal::ComposableShell::TreeNodeBase *,Windows::Internal::ComposableShell::NodeChangedEventArgs *>(
             (__int64)&this[8],
             (__int64)this,
             v18);
      if ( v9 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          233LL,
          (__int64)"internal\\shellcommoncomposable\\inc\\treenodebase.h",
          (const char *)(unsigned int)v9);
      try
      {
        (*((void (__fastcall **)(RTL_SRWLOCK *, struct Windows::Internal::ComposableShell::ITreeNode *))this->Ptr + 13))(
          this,
          a2);
      }
      catch ( ... )
      {
        wil::details::in1diag3::Log_CaughtException(
          retaddr,
          (void *)0xF0,
          (__int64)"internal\\shellcommoncomposable\\inc\\treenodebase.h",
          v10);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
      result = 0LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xF5,
                           (__int64)"internal\\shellcommoncomposable\\inc\\treenodebase.h",
                           v5);
  }
  return result;
}
