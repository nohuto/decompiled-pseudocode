/*
 * XREFs of ?Shutdown@WindowGroupManager@@UEAAXXZ @ 0x18027D140
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800B64B4 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$com_ptr_t.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1801F30C4 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_893ab1ceb423f24e3232dfd70ca4a2ca___ @ 0x18027BD28 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_893ab1ceb423f24e3232dfd70ca4a2ca.c)
 */

void __fastcall WindowGroupManager::Shutdown(WindowGroupManager *this)
{
  RTL_SRWLOCK *v1; // rdi
  void *v3; // rdx
  _QWORD *v4; // rbx
  _QWORD *v5; // rax
  DWORD CurrentThreadId; // eax
  unsigned int v7; // ecx
  int v8; // eax
  int v9[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  _QWORD *v11; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v12; // [rsp+48h] [rbp+10h] BYREF

  v1 = (RTL_SRWLOCK *)((char *)this + 64);
  AcquireSRWLockShared((PSRWLOCK)this + 8);
  v4 = (_QWORD *)*((_QWORD *)this + 9);
  v5 = (_QWORD *)*v4;
  v11 = (_QWORD *)*v4;
  while ( v5 != v4 )
  {
    v12 = v5 + 4;
    *(_QWORD *)v9 = *((_QWORD *)this + 14);
    *(_QWORD *)&v9[2] = &v12;
    CurrentThreadId = GetCurrentThreadId();
    v8 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_893ab1ceb423f24e3232dfd70ca4a2ca___(
           v7,
           CurrentThreadId,
           (__int128 *)v9);
    if ( v8 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5F,
        (__int64)"internal\\onecoreuapshell\\inc\\CreationThreadDispatcher.h",
        (const char *)(unsigned int)v8);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,wil::com_ptr_t<Windows::Internal::ComposableShell::ITreeNode,wil::err_exception_policy>>>>,std::_Iterator_base0>::operator++(&v11);
    v5 = v11;
  }
  wil::details::SetEvent(*((wil::details **)this + 13), v3);
  if ( v1 )
    ReleaseSRWLockShared(v1);
}
