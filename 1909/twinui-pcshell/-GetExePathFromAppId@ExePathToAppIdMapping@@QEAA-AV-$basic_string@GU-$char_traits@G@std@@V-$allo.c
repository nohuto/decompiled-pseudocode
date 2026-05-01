/*
 * XREFs of ?GetExePathFromAppId@ExePathToAppIdMapping@@QEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV23@@Z @ 0x1800BB180
 * Callers:
 *     ?GetDisplayName@Win32AppStateManager@@UEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x1800BB040 (-GetDisplayName@Win32AppStateManager@@UEAA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18005D1A0 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x180084F74 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800B64B4 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$com_ptr_t.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18011F158 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@_ea_18011F158.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ExePathToAppIdMapping::GetExePathFromAppId(RTL_SRWLOCK *a1, __int64 a2, char *a3)
{
  _QWORD *Ptr; // r9
  _QWORD *v7; // rax
  char *v8; // rcx
  char *v9; // rax
  char *v10; // r8
  __int64 v11; // rdx
  signed __int64 v12; // r8
  unsigned __int16 v13; // cx
  int v14; // eax
  _QWORD *v16; // [rsp+40h] [rbp+8h] BYREF
  RTL_SRWLOCK *v17; // [rsp+58h] [rbp+20h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockShared(a1, &v17);
  Ptr = a1[1].Ptr;
  v7 = (_QWORD *)*Ptr;
  v16 = (_QWORD *)*Ptr;
  while ( v7 != Ptr )
  {
    v8 = (char *)(v7 + 8);
    v9 = v8;
    if ( *((_QWORD *)v8 + 3) >= 8uLL )
      v9 = *(char **)v8;
    v10 = a3;
    if ( *((_QWORD *)a3 + 3) >= 8uLL )
      v10 = *(char **)a3;
    v11 = *((_QWORD *)a3 + 2);
    if ( v11 == *((_QWORD *)v8 + 2) )
    {
      if ( v11 )
      {
        v12 = v10 - v9;
        while ( 1 )
        {
          v13 = *(_WORD *)&v9[v12];
          if ( v13 != *(_WORD *)v9 )
            break;
          v9 += 2;
          if ( !--v11 )
            goto LABEL_12;
        }
        v14 = v13 < *(_WORD *)v9 ? -1 : 1;
      }
      else
      {
LABEL_12:
        v14 = 0;
      }
      if ( !v14 )
      {
        std::wstring::wstring(a2);
        goto LABEL_18;
      }
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,wil::com_ptr_t<Windows::Internal::ComposableShell::ITreeNode,wil::err_exception_policy>>>>,std::_Iterator_base0>::operator++(&v16);
    v7 = v16;
  }
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 7LL;
  *(_WORD *)a2 = 0;
LABEL_18:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v17);
  return a2;
}
