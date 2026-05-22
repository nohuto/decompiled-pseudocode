/*
 * XREFs of ?ProcessDeviceRemoval@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z @ 0x1800BD1B8
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_bd472a9a8f72191484719e318aced7b7__void__MIT_PNP_DEVICE_NOTIFICATION_MESSAGE_const___::_Do_call @ 0x180014AF0 (std--_Func_impl_no_alloc__lambda_bd472a9a8f72191484719e318aced7b7__void__MIT_PNP_DE_ea_180014AF0.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@KPEAULegacyDeviceInfo@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAULegacyDeviceInfo@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAULegacyDeviceInfo@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAULegacyDeviceInfo@@@std@@@std@@@std@@@2@@Z @ 0x18006E4DC (-erase@-$_Hash@V-$_Umap_traits@KPEAULegacyDeviceInfo@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal.c)
 *     ?IsDeviceAttached@Win32kInterop@@AEAA_NK_N@Z @ 0x1800BCF24 (-IsDeviceAttached@Win32kInterop@@AEAA_NK_N@Z.c)
 *     ?ProcessDeviceRemoval@Win32kInterop@InputETW@@SAXK@Z @ 0x1800BD328 (-ProcessDeviceRemoval@Win32kInterop@InputETW@@SAXK@Z.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@KPEAVInputInfoValidator@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAVInputInfoValidator@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAVInputInfoValidator@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAVInputInfoValidator@@@std@@@std@@@std@@@2@@Z @ 0x1800BF654 (-erase@-$_Hash@V-$_Umap_traits@KPEAVInputInfoValidator@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equ.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@KPEAVInputInfoValidator@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAVInputInfoValidator@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAVInputInfoValidator@@@std@@@std@@@std@@@2@AEBK@Z @ 0x1800BFAC8 (-lower_bound@-$_Hash@V-$_Umap_traits@KPEAVInputInfoValidator@@V-$_Uhash_compare@KU-$hash@K@std@@.c)
 */

void __fastcall Win32kInterop::ProcessDeviceRemoval(
        Win32kInterop *this,
        const struct _MIT_PNP_DEVICE_NOTIFICATION_MESSAGE *a2)
{
  unsigned int v2; // esi
  __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int8 *v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 i; // rbx
  __int64 v13; // rax
  void *v14; // rsi
  int v15; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v17; // [rsp+48h] [rbp+10h] BYREF
  __int64 v18; // [rsp+50h] [rbp+18h] BYREF

  v2 = *((_DWORD *)a2 + 1);
  LODWORD(v17) = v2;
  if ( Win32kInterop::IsDeviceAttached(this, v2, 0) )
  {
    InputETW::Win32kInterop::ProcessDeviceRemoval(v2);
    std::_Hash<std::_Umap_traits<unsigned long,InputInfoValidator *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,InputInfoValidator *>>,0>>::lower_bound(
      (char *)this + 128,
      &v18,
      &v17);
    if ( v18 != *((_QWORD *)this + 17) )
    {
      v4 = *(_QWORD *)(v18 + 24);
      std::_Hash<std::_Umap_traits<unsigned long,InputInfoValidator *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,InputInfoValidator *>>,0>>::erase(
        (char *)this + 128,
        &v18);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
    v5 = 0xCBF29CE484222325uLL;
    v6 = (unsigned __int8 *)&v17;
    v7 = 4LL;
    do
    {
      v8 = *v6++;
      v5 = 0x100000001B3LL * (v8 ^ v5);
      --v7;
    }
    while ( v7 );
    v9 = *((_QWORD *)this + 11);
    v10 = *((_QWORD *)this + 9);
    v11 = 2 * (v5 & *((_QWORD *)this + 14));
    for ( i = *(_QWORD *)(v9 + 16 * (v5 & *((_QWORD *)this + 14))); ; i = *(_QWORD *)i )
    {
      v13 = *(_QWORD *)(v9 + 8 * v11) == v10 ? *((_QWORD *)this + 9) : **(_QWORD **)(v9 + 8 * v11 + 8);
      if ( i == v13 )
        break;
      if ( *(_DWORD *)(i + 16) == v2 )
        goto LABEL_14;
    }
    i = *((_QWORD *)this + 9);
LABEL_14:
    if ( i == v10 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        493LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        (const char *)0x80004005LL);
      __debugbreak();
    }
    v14 = *(void **)(i + 24);
    v15 = (*(__int64 (__fastcall **)(_QWORD, void *))(**((_QWORD **)this + 7) + 56LL))(*((_QWORD *)this + 7), v14);
    if ( v15 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        497LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        (const char *)(unsigned int)v15);
      __debugbreak();
    }
    std::_Hash<std::_Umap_traits<unsigned long,LegacyDeviceInfo *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,LegacyDeviceInfo *>>,0>>::erase(
      (_QWORD *)this + 8,
      &v17,
      (__int64 *)i);
    operator delete(v14, (const struct std::nothrow_t *)0x620);
  }
}
