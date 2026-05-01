/*
 * XREFs of ?OnTitleBarsCreated@ViewGroup@@UEAAJXZ @ 0x18027FA20
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003072C (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800B64B4 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$com_ptr_t.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewGroup::OnTitleBarsCreated(ViewGroup *this)
{
  RTL_SRWLOCK *v2; // rbp
  __int64 *v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // r9
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF

  v2 = (RTL_SRWLOCK *)((char *)this + 152);
  AcquireSRWLockShared((PSRWLOCK)this + 19);
  if ( !*((_BYTE *)this + 196) )
  {
    v3 = (__int64 *)*((_QWORD *)this + 20);
    v4 = *v3;
    v7 = *v3;
    while ( (__int64 *)v4 != v3 )
    {
      LOBYTE(v5) = (unsigned int)SHIsSameObject(*(struct IUnknown **)(v4 + 32), *((struct IUnknown **)this + 22)) != 0;
      (*(void (__fastcall **)(_QWORD, _QWORD, char *, __int64))(**((_QWORD **)this + 8) + 56LL))(
        *((_QWORD *)this + 8),
        *(_QWORD *)(v4 + 32),
        (char *)this + 88,
        v5);
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,wil::com_ptr_t<Windows::Internal::ComposableShell::ITreeNode,wil::err_exception_policy>>>>,std::_Iterator_base0>::operator++(&v7);
      v4 = v7;
    }
  }
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return 0LL;
}
