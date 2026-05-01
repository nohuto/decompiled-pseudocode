/*
 * XREFs of ?TryGetWindowFromAppId@ExeDataCache@@QEAA?AV?$optional@PEAUHWND__@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@3@@Z @ 0x1800BBED8
 * Callers:
 *     ?GetDisplayName@Win32AppStateManager@@UEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x1800BB040 (-GetDisplayName@Win32AppStateManager@@UEAA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@.c)
 * Callees:
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x180084F74 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800B64B4 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$com_ptr_t.c)
 *     ??0ExeData@@QEAA@AEBU0@@Z @ 0x1800BA448 (--0ExeData@@QEAA@AEBU0@@Z.c)
 *     ??1ExeData@@QEAA@XZ @ 0x1800BA798 (--1ExeData@@QEAA@XZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18011F158 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@_ea_18011F158.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ExeDataCache::TryGetWindowFromAppId(RTL_SRWLOCK *a1, __int64 a2, char *a3)
{
  _QWORD *Ptr; // rbx
  _QWORD *v7; // rdx
  char *v8; // rax
  char *v9; // rdx
  __int64 v10; // rcx
  signed __int64 v11; // rdx
  unsigned __int16 v12; // r8
  int v13; // eax
  _QWORD *v15; // [rsp+28h] [rbp-39h] BYREF
  RTL_SRWLOCK *v16[3]; // [rsp+30h] [rbp-31h] BYREF
  __int64 v17; // [rsp+48h] [rbp-19h]
  _BYTE v18[40]; // [rsp+50h] [rbp-11h] BYREF
  _QWORD v19[4]; // [rsp+78h] [rbp+17h] BYREF

  v16[1] = (RTL_SRWLOCK *)-2LL;
  Microsoft::WRL::Wrappers::SRWLock::LockShared(a1, v16);
  Ptr = a1[1].Ptr;
  v7 = (_QWORD *)*Ptr;
  v15 = (_QWORD *)*Ptr;
  while ( v7 != Ptr )
  {
    v17 = v7[4];
    ExeData::ExeData((ExeData *)v18, (const struct ExeData *)(v7 + 5));
    v8 = (char *)v19;
    if ( v19[3] >= 8uLL )
      v8 = (char *)v19[0];
    v9 = a3;
    if ( *((_QWORD *)a3 + 3) >= 8uLL )
      v9 = *(char **)a3;
    v10 = *((_QWORD *)a3 + 2);
    if ( v10 == v19[2] )
    {
      if ( v10 )
      {
        v11 = v9 - v8;
        while ( 1 )
        {
          v12 = *(_WORD *)&v8[v11];
          if ( v12 != *(_WORD *)v8 )
            break;
          v8 += 2;
          if ( !--v10 )
            goto LABEL_12;
        }
        v13 = v12 < *(_WORD *)v8 ? -1 : 1;
      }
      else
      {
LABEL_12:
        v13 = 0;
      }
      if ( !v13 )
      {
        *(_QWORD *)a2 = v17;
        *(_BYTE *)(a2 + 8) = 1;
        ExeData::~ExeData((ExeData *)v18);
        goto LABEL_18;
      }
    }
    ExeData::~ExeData((ExeData *)v18);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,wil::com_ptr_t<Windows::Internal::ComposableShell::ITreeNode,wil::err_exception_policy>>>>,std::_Iterator_base0>::operator++(&v15);
    v7 = v15;
  }
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
LABEL_18:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(v16);
  return a2;
}
