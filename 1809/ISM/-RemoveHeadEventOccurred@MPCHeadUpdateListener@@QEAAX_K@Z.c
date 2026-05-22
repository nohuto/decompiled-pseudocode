/*
 * XREFs of ?RemoveHeadEventOccurred@MPCHeadUpdateListener@@QEAAX_K@Z @ 0x18005B2E0
 * Callers:
 *     ?Unregister@SpectrumListener@@QEAAXXZ @ 0x180058CB0 (-Unregister@SpectrumListener@@QEAAXXZ.c)
 *     ?SetOwner@SpatialRimDeviceCollectionHeadEventHandler@@QEAAJPEAVSpatialRimDeviceCollection@@PEAUIMessageSession@@@Z @ 0x180061310 (-SetOwner@SpatialRimDeviceCollectionHeadEventHandler@@QEAAJPEAVSpatialRimDeviceCollection@@PEAUI.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Init@?$_Hash@V?$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV?$_Uhash_compare@W4GamepadButtons@Input@Gaming@Windows@@U?$hash@W4GamepadButtons@Input@Gaming@Windows@@@std@@U?$equal_to@W4GamepadButtons@Input@Gaming@Windows@@@6@@std@@V?$allocator@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@6@$0A@@std@@@std@@IEAAX_K@Z @ 0x18000886C (-_Init@-$_Hash@V-$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV-$_Uhash_compare@W4Gamep.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@_KV?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@@Z @ 0x18005B618 (-erase@-$_Hash@V-$_Umap_traits@_KV-$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wi.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCHeadUpdateListener::RemoveHeadEventOccurred(MPCHeadUpdateListener *this, __int64 a2)
{
  _QWORD *v3; // rbp
  struct _RTL_CRITICAL_SECTION *v4; // r15
  __int64 v5; // rcx
  unsigned __int64 i; // r8
  __int64 v7; // rax
  __int64 v8; // r10
  __int64 v9; // r8
  const char *v10; // rbx
  __int64 v11; // rcx
  char *v12; // rdx
  const char *v13; // r9
  const char *v14; // rax
  const char *v15; // rcx
  const char *v16; // rdi
  const char *v17; // rax
  const char *v18; // rax
  __int64 j; // r14
  _QWORD *v20; // rsi
  _QWORD *v21; // rbx
  __int64 v22; // rcx
  const char *v23; // r8
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  char v25; // [rsp+60h] [rbp+8h] BYREF
  __int64 v26; // [rsp+68h] [rbp+10h]

  v26 = a2;
  v3 = (_QWORD *)((char *)this + 8);
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 152);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 152));
  v5 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 8; ++i )
    v5 = 0x100000001B3LL * (*((unsigned __int8 *)&v26 + i) ^ (unsigned __int64)v5);
  v7 = v5 & v3[6];
  v8 = 2 * v7;
  v9 = v3[3];
  v10 = *(const char **)(v9 + 16 * v7);
  v11 = 2 * v7;
  v12 = (char *)v3[1];
  v13 = v10;
  while ( 1 )
  {
    if ( v13 == v12 )
      v14 = (const char *)v3[1];
    else
      v14 = **(const char ***)(v9 + 8 * v11 + 8);
    if ( v10 == v14 )
      goto LABEL_18;
    if ( *((_QWORD *)v10 + 2) == a2 )
      break;
    v10 = *(const char **)v10;
  }
  v15 = v10;
  v16 = v10;
  while ( 1 )
  {
    v17 = v13 == v12 ? (const char *)v3[1] : **(const char ***)(v9 + 8 * v8 + 8);
    if ( v10 == v17 || a2 != *((_QWORD *)v10 + 2) )
      break;
    v10 = *(const char **)v10;
  }
  if ( v15 == v10 )
  {
LABEL_18:
    v16 = (const char *)v3[1];
    v10 = v16;
  }
  v18 = v16;
  for ( j = 0LL; v18 != v10; v18 = *(const char **)v18 )
    ++j;
  v20 = *(_QWORD **)v12;
  if ( v16 == *(const char **)v12 && v10 == v12 )
  {
    *(_QWORD *)v12 = v12;
    *(_QWORD *)(v3[1] + 8LL) = v3[1];
    v3[2] = 0LL;
    if ( v20 != (_QWORD *)v3[1] )
    {
      do
      {
        v21 = (_QWORD *)*v20;
        v22 = v20[3];
        if ( v22 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
        operator delete(v20, (const struct std::nothrow_t *)0x20);
        v20 = v21;
      }
      while ( v21 != (_QWORD *)v3[1] );
    }
    std::_Hash<std::_Umap_traits<enum Windows::Gaming::Input::GamepadButtons,unsigned short,std::_Uhash_compare<enum Windows::Gaming::Input::GamepadButtons,std::hash<enum Windows::Gaming::Input::GamepadButtons>,std::equal_to<enum Windows::Gaming::Input::GamepadButtons>>,std::allocator<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>>,0>>::_Init(
      v3,
      8LL);
  }
  else
  {
    while ( v16 != v10 )
    {
      v23 = v16;
      v16 = *(const char **)v16;
      std::_Hash<std::_Umap_traits<unsigned __int64,wil::com_ptr_t<IHeadEventHandler,wil::err_exception_policy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,wil::com_ptr_t<IHeadEventHandler,wil::err_exception_policy>>>,0>>::erase(
        v3,
        &v25,
        v23);
    }
  }
  if ( j != 1 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x89,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadupdatelistener.cpp",
      v13);
    JUMPOUT(0x18005B483LL);
  }
  if ( v4 )
    LeaveCriticalSection(v4);
}
