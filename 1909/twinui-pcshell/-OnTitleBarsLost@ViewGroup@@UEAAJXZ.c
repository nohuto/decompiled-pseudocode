/*
 * XREFs of ?OnTitleBarsLost@ViewGroup@@UEAAJXZ @ 0x18027FAE0
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003072C (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800B64B4 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$com_ptr_t.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewGroup::OnTitleBarsLost(ViewGroup *this)
{
  RTL_SRWLOCK *v2; // rbx
  const char *v3; // r9
  __int64 *v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v9; // [rsp+60h] [rbp+8h] BYREF
  RTL_SRWLOCK *v10; // [rsp+68h] [rbp+10h]

  v2 = (RTL_SRWLOCK *)((char *)this + 152);
  AcquireSRWLockShared((PSRWLOCK)this + 19);
  try
  {
    v10 = v2;
    if ( !*((_BYTE *)this + 196) )
    {
      v4 = (__int64 *)*((_QWORD *)this + 20);
      v5 = *v4;
      v9 = *v4;
      while ( (__int64 *)v5 != v4 )
      {
        LOBYTE(v6) = (unsigned int)SHIsSameObject(*(struct IUnknown **)(v5 + 32), *((struct IUnknown **)this + 22)) != 0;
        (*(void (__fastcall **)(_QWORD, _QWORD, char *, __int64))(**((_QWORD **)this + 8) + 56LL))(
          *((_QWORD *)this + 8),
          *(_QWORD *)(v5 + 32),
          (char *)this + 88,
          v6);
        std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,wil::com_ptr_t<Windows::Internal::ComposableShell::ITreeNode,wil::err_exception_policy>>>>,std::_Iterator_base0>::operator++(&v9);
        v5 = v9;
      }
    }
    if ( v2 )
      ReleaseSRWLockShared(v2);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x2AF,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroup.cpp",
                           v3);
  }
  return result;
}
