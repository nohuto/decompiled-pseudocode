/*
 * XREFs of ?ProcessDeviceRemoval@Win32kInterop@@AEAAXK@Z @ 0x18008262C
 * Callers:
 *     ?ProcessPnpNotification@Win32kInterop@@AEAAXAEBU_PnpNotification@@@Z @ 0x1800827F0 (-ProcessPnpNotification@Win32kInterop@@AEAAXAEBU_PnpNotification@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x1800056F0 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@KPEAUIRawInputProvider@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@std@@@std@@@2@@Z @ 0x180025FFC (-erase@-$_Hash@V-$_Umap_traits@KPEAUIRawInputProvider@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equa.c)
 *     ?ProcessDeviceRemoval@Win32kInterop@InputETW@@SAXK@Z @ 0x180081B98 (-ProcessDeviceRemoval@Win32kInterop@InputETW@@SAXK@Z.c)
 *     ?IsDeviceAttached@Win32kInterop@@AEAA_NK_N@Z @ 0x1800823AC (-IsDeviceAttached@Win32kInterop@@AEAA_NK_N@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Win32kInterop::ProcessDeviceRemoval(Win32kInterop *this, unsigned int a2)
{
  __int64 v4; // rsi
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 *v10; // rcx
  __int64 v11; // r9
  __int64 *i; // r8
  __int64 *v13; // rax
  __int64 v14; // rbx
  unsigned __int64 j; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 *v18; // rcx
  __int64 *k; // rbx
  __int64 *v20; // rax
  void *v21; // rsi
  int v22; // eax
  unsigned int v23; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v25; // [rsp+58h] [rbp+10h]
  __int64 v26; // [rsp+60h] [rbp+18h] BYREF

  v25 = a2;
  if ( Win32kInterop::IsDeviceAttached(this, a2, 0) )
  {
    InputETW::Win32kInterop::ProcessDeviceRemoval(a2);
    v4 = 0xCBF29CE484222325uLL;
    v5 = 0LL;
    v6 = 0xCBF29CE484222325uLL;
    do
    {
      v7 = *((unsigned __int8 *)&v25 + v5++);
      v6 = 0x100000001B3LL * (v7 ^ v6);
    }
    while ( v5 < 4 );
    v8 = *((_QWORD *)this + 19);
    v9 = v6 & *((_QWORD *)this + 22);
    v10 = (__int64 *)*((_QWORD *)this + 17);
    v11 = 2 * v9;
    for ( i = *(__int64 **)(v8 + 16 * v9); ; i = (__int64 *)*i )
    {
      v13 = *(__int64 **)(v8 + 8 * v11) == v10 ? (__int64 *)*((_QWORD *)this + 17) : **(__int64 ***)(v8 + 8 * v11 + 8);
      if ( i == v13 )
        break;
      if ( *((_DWORD *)i + 4) == a2 )
        goto LABEL_12;
    }
    i = (__int64 *)*((_QWORD *)this + 17);
LABEL_12:
    if ( i != v10 )
    {
      v14 = i[3];
      std::_Hash<std::_Umap_traits<unsigned long,IRawInputProvider *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,IRawInputProvider *>>,0>>::erase(
        (_QWORD *)this + 16,
        &v26,
        i);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    for ( j = 0LL; j < 4; ++j )
    {
      v16 = *((unsigned __int8 *)&v25 + j);
      v4 = 0x100000001B3LL * (v16 ^ v4);
    }
    v17 = *((_QWORD *)this + 11);
    v18 = (__int64 *)*((_QWORD *)this + 9);
    for ( k = *(__int64 **)(v17 + 16 * (v4 & *((_QWORD *)this + 14))); ; k = (__int64 *)*k )
    {
      v20 = *(__int64 **)(v17 + 16 * (v4 & *((_QWORD *)this + 14))) == v18
          ? (__int64 *)*((_QWORD *)this + 9)
          : **(__int64 ***)(v17 + 16 * (v4 & *((_QWORD *)this + 14)) + 8);
      if ( k == v20 )
        break;
      if ( *((_DWORD *)k + 4) == a2 )
        goto LABEL_24;
    }
    k = (__int64 *)*((_QWORD *)this + 9);
LABEL_24:
    if ( k == v18 )
    {
      v23 = wil::verify_hresult<long>(0x80004005);
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x19C,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        (const char *)v23);
      JUMPOUT(0x1800827E6LL);
    }
    v21 = (void *)k[3];
    v22 = (*(__int64 (__fastcall **)(_QWORD, void *))(**((_QWORD **)this + 7) + 56LL))(*((_QWORD *)this + 7), v21);
    if ( v22 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1A0,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        (const char *)(unsigned int)v22);
      __debugbreak();
    }
    std::_Hash<std::_Umap_traits<unsigned long,IRawInputProvider *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,IRawInputProvider *>>,0>>::erase(
      (_QWORD *)this + 8,
      &v26,
      k);
    operator delete(v21, (const struct std::nothrow_t *)0x3D8);
  }
}
