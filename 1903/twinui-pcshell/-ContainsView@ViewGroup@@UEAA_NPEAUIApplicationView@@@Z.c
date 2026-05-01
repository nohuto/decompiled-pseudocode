/*
 * XREFs of ?ContainsView@ViewGroup@@UEAA_NPEAUIApplicationView@@@Z @ 0x18025F3C0
 * Callers:
 *     <none>
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800A7B74 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$com_ptr_t.c)
 */

bool __fastcall ViewGroup::ContainsView(RTL_SRWLOCK *this, struct IApplicationView *a2)
{
  RTL_SRWLOCK *v2; // rsi
  __int64 **Ptr; // rax
  __int64 **v6; // r9
  __int64 *v7; // rcx
  __int64 *v8; // r8
  __int64 v9; // r10
  bool v10; // bl
  __int64 **v12; // [rsp+30h] [rbp+8h] BYREF

  v2 = this + 21;
  AcquireSRWLockShared(this + 21);
  Ptr = (__int64 **)this[22].Ptr;
  v6 = Ptr;
  v7 = Ptr[1];
  v8 = v7;
  while ( !*((_BYTE *)v8 + 25) )
  {
    if ( v8[4] >= (unsigned __int64)a2 )
    {
      if ( *((_BYTE *)v6 + 25) && (unsigned __int64)a2 < v8[4] )
        v6 = (__int64 **)v8;
      Ptr = (__int64 **)v8;
      v8 = (__int64 *)*v8;
    }
    else
    {
      v8 = (__int64 *)v8[2];
    }
  }
  if ( !*((_BYTE *)v6 + 25) )
    v7 = *v6;
  while ( !*((_BYTE *)v7 + 25) )
  {
    if ( (unsigned __int64)a2 >= v7[4] )
    {
      v7 = (__int64 *)v7[2];
    }
    else
    {
      v6 = (__int64 **)v7;
      v7 = (__int64 *)*v7;
    }
  }
  v12 = Ptr;
  v9 = 0LL;
  while ( Ptr != v6 )
  {
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,wil::com_ptr_t<Windows::Internal::ComposableShell::ITreeNode,wil::err_exception_policy>>>>,std::_Iterator_base0>::operator++(&v12);
    Ptr = v12;
  }
  v10 = v9 != 0;
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return v10;
}
