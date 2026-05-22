/*
 * XREFs of ?OnDeviceChange@DWMInputRouter@@IEAAJPEAUDeviceInfo@@_N@Z @ 0x180028D24
 * Callers:
 *     ?OnDeviceAttach@DWMInputRouter@@UEAAJPEAUDeviceInfo@@@Z @ 0x180028CA0 (-OnDeviceAttach@DWMInputRouter@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceRemoval@DWMInputRouter@@UEAAJPEAUDeviceInfo@@@Z @ 0x1800C4900 (-OnDeviceRemoval@DWMInputRouter@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceUpdate@DWMInputRouter@@UEAAJPEAUDeviceInfo@@@Z @ 0x1800C49C0 (-OnDeviceUpdate@DWMInputRouter@@UEAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ??$_Try_emplace@AEBK$$V@?$unordered_map@KPEAUDeviceInfo@@U?$hash@K@std@@U?$equal_to@K@3@V?$allocator@U?$pair@$$CBKPEAUDeviceInfo@@@std@@@3@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAUDeviceInfo@@@std@@@std@@@std@@@std@@_N@1@AEBK@Z @ 0x1800133F8 (--$_Try_emplace@AEBK$$V@-$unordered_map@KPEAUDeviceInfo@@U-$hash@K@std@@U-$equal_to@K@3@V-$alloc.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveTarget@DWMInputRouter@@AEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@std@@@std@@@std@@V23@@Z @ 0x1800C4DB0 (-RemoveTarget@DWMInputRouter@@AEAA-AV-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@KPEAUDeviceInfo@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUDeviceInfo@@@std@@@3@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x1800C57B4 (-erase@-$_Hash@V-$_Umap_traits@KPEAUDeviceInfo@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMInputRouter::OnDeviceChange(DWMInputRouter *this, struct DeviceInfo *a2, char a3)
{
  char v6; // r15
  __int64 v7; // rax
  struct DeviceInfo *v8; // r10
  struct DeviceInfo *v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // r9
  __int64 *i; // rcx
  __int64 *v14; // rax
  _QWORD *v15; // rbx
  __int64 (__fastcall ***v17)(_QWORD, GUID *, _QWORD **); // rsi
  __int64 (__fastcall *v18)(_QWORD, GUID *, _QWORD **); // rdi
  int v19; // eax
  __int64 (__fastcall **v20)(_QWORD, _QWORD); // rax
  int v21; // eax
  _QWORD v22[8]; // [rsp+28h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  _QWORD *v24; // [rsp+88h] [rbp+20h] BYREF

  v6 = 0;
  if ( a3 )
  {
    v7 = 0xCBF29CE484222325uLL;
    v8 = a2;
    v9 = (struct DeviceInfo *)((char *)a2 + 4);
    v10 = (struct DeviceInfo *)((char *)a2 + 4) >= a2 ? 4 : 0;
    if ( v8 <= v9 )
    {
      do
      {
        v7 = 0x100000001B3LL * (*(unsigned __int8 *)v8 ^ (unsigned __int64)v7);
        v8 = (struct DeviceInfo *)((char *)v8 + 1);
      }
      while ( v8 - a2 != v10 );
    }
    v11 = 2 * (v7 & *((_QWORD *)this + 36));
    v12 = *((_QWORD *)this + 33);
    for ( i = *(__int64 **)(v12 + 16 * (v7 & *((_QWORD *)this + 36))); ; i = (__int64 *)*i )
    {
      v14 = *(_QWORD *)(v12 + 8 * v11) == *((_QWORD *)this + 31)
          ? (__int64 *)*((_QWORD *)this + 31)
          : **(__int64 ***)(v12 + 8 * v11 + 8);
      if ( i == v14 )
        break;
      if ( *((_DWORD *)i + 4) == *(_DWORD *)a2 )
        goto LABEL_9;
    }
    i = (__int64 *)*((_QWORD *)this + 31);
LABEL_9:
    if ( i == *((__int64 **)this + 31) )
    {
      std::unordered_map<unsigned long,DeviceInfo *>::_Try_emplace<unsigned long const &,>(
        (__int64)this + 240,
        (__int64)v22,
        (unsigned __int8 *)a2);
      *(_QWORD *)(v22[0] + 24LL) = a2;
    }
    else
    {
      v6 = 1;
    }
  }
  else if ( !std::_Hash<std::_Umap_traits<unsigned long,DeviceInfo *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DeviceInfo *>>,0>>::erase((char *)this + 240) )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x40F,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)0x80004005LL,
      -2);
    __debugbreak();
  }
  v15 = (_QWORD *)**((_QWORD **)this + 12);
  while ( v15 != *((_QWORD **)this + 12) )
  {
    v17 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD **))v15[7];
    v24 = 0LL;
    v18 = **v17;
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)&v24);
    v19 = v18(v17, &GUID_ce017166_b885_4259_a1c9_31032455b8b4, &v24);
    if ( v19 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x41F,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v19,
        -2);
      JUMPOUT(0x18004D4D6LL);
    }
    if ( !v24 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x423,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)0x8000FFFFLL,
        -2);
      __debugbreak();
    }
    v20 = (__int64 (__fastcall **)(_QWORD, _QWORD))*v24;
    if ( a3 )
    {
      if ( v6 )
        v21 = ((__int64 (__fastcall **)(_QWORD *, struct DeviceInfo *))v20)[4](v24, a2);
      else
        v21 = ((__int64 (__fastcall **)(_QWORD *, struct DeviceInfo *))v20)[3](v24, a2);
    }
    else
    {
      v21 = ((__int64 (__fastcall **)(_QWORD *, struct DeviceInfo *))v20)[5](v24, a2);
    }
    if ( v21 >= 0 )
      v15 = (_QWORD *)*v15;
    else
      v15 = *(_QWORD **)DWMInputRouter::RemoveTarget(this, v22, v15);
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)&v24);
  }
  return 0LL;
}
