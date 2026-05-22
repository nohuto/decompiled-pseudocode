/*
 * XREFs of ?OnDeviceRemoval@MobileButtonDeviceCollection@@MEAAJK@Z @ 0x1800A1830
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18002C06E (memset_0.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@std@@@std@@@2@AEBK@Z @ 0x18006E520 (-lower_bound@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@V-$_Uhash_.c)
 *     ?CreateButtonInfo@MobileButtonDeviceCollection@@AEAAJKKT_LARGE_INTEGER@@G_NPEAUInputInfo@@@Z @ 0x1800A1254 (-CreateButtonInfo@MobileButtonDeviceCollection@@AEAAJKKT_LARGE_INTEGER@@G_NPEAUInputInfo@@@Z.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@UCursorId@@PEAVDWMCursor@@V?$_Uhash_compare@UCursorId@@UCursorIdHash@@U?$equal_to@UCursorId@@@std@@@std@@V?$allocator@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@std@@@std@@@2@@Z @ 0x1800A2430 (-erase@-$_Hash@V-$_Umap_traits@UCursorId@@PEAVDWMCursor@@V-$_Uhash_compare@UCursorId@@UCursorIdH.c)
 *     ?OnDeviceRemoval@HIDDeviceCollection@@MEAAJK@Z @ 0x1800A59F0 (-OnDeviceRemoval@HIDDeviceCollection@@MEAAJK@Z.c)
 */

__int64 __fastcall MobileButtonDeviceCollection::OnDeviceRemoval(MobileButtonDeviceCollection *this, unsigned int a2)
{
  __int64 v4; // rbx
  unsigned __int16 *v6; // r14
  __int64 v7; // rcx
  unsigned __int16 *v8; // r15
  unsigned __int16 *v9; // rsi
  DWORD TickCount; // edi
  int ButtonInfo; // edi
  __int64 v12; // rdx
  const struct std::nothrow_t *v13; // rdx
  unsigned int v14; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v15; // [rsp+48h] [rbp-B8h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v17[24]; // [rsp+60h] [rbp-A0h] BYREF
  int v18; // [rsp+78h] [rbp-88h]
  wil::details::in1diag3 *retaddr; // [rsp+898h] [rbp+798h]

  v14 = a2;
  memset_0(v17, 0, 0x7F0uLL);
  v18 = 2032;
  std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>,0>>::lower_bound(
    (__int64)this + 2760,
    (__int64)&v15,
    (unsigned __int8 *)&v14);
  v4 = v15;
  if ( v15 == *((_QWORD *)this + 346) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8B,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\mobilebuttondevicecollection.cpp",
      (const char *)0x80004005LL);
    return 2147500037LL;
  }
  v6 = *(unsigned __int16 **)(v15 + 24);
  v7 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)(v15 + 24), 8));
  if ( !v6 )
  {
    if ( (_DWORD)v7 )
    {
      _o_terminate(v7);
      __debugbreak();
    }
  }
  v8 = &v6[(unsigned int)v7];
  v9 = *(unsigned __int16 **)(v15 + 24);
  if ( v6 != v8 )
  {
    do
    {
      if ( *v9 )
      {
        TickCount = GetTickCount();
        QueryPerformanceCounter(&PerformanceCount);
        ButtonInfo = MobileButtonDeviceCollection::CreateButtonInfo(
                       (MobileButtonDeviceCollection *)*v9,
                       a2,
                       TickCount,
                       PerformanceCount,
                       *v9,
                       0,
                       (struct InputInfo *)v17);
        if ( ButtonInfo < 0 )
        {
          v12 = 173LL;
LABEL_15:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v12,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\mobilebuttondevicecollection.cpp",
            (const char *)(unsigned int)ButtonInfo);
          return (unsigned int)ButtonInfo;
        }
        ButtonInfo = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 2) + 24LL))(
                       *((_QWORD *)this + 2),
                       v17);
        if ( ButtonInfo < 0 )
        {
          v12 = 179LL;
          goto LABEL_15;
        }
      }
      ++v9;
    }
    while ( v9 != v8 );
  }
  ButtonInfo = HIDDeviceCollection::OnDeviceRemoval(this, a2);
  if ( ButtonInfo < 0 )
  {
    v12 = 183LL;
    goto LABEL_15;
  }
  std::_Hash<std::_Umap_traits<CursorId,DWMCursor *,std::_Uhash_compare<CursorId,CursorIdHash,std::equal_to<CursorId>>,std::allocator<std::pair<CursorId const,DWMCursor *>>,0>>::erase(
    (char *)this + 2760,
    &v15,
    v4);
  operator delete(v6, v13);
  return 0LL;
}
