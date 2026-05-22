/*
 * XREFs of ?OnDeviceRemoval@MPCMouseProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x1800FBDD0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x1800480D0 (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     ?RemoveDeviceId@MPCConstantManager@@QEAAXPEAUIMPCInputProviderBase@@@Z @ 0x180048404 (-RemoveDeviceId@MPCConstantManager@@QEAAXPEAUIMPCInputProviderBase@@@Z.c)
 *     ?count@?$_Tree@V?$_Tmap_traits@KU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@@2@$0A@@std@@@std@@QEBA_KAEBK@Z @ 0x1800FD9A8 (-count@-$_Tree@V-$_Tmap_traits@KU-$pair@PEAUDeviceInfo@@V-$ComPtr@UICursor@@@WRL@Microsoft@@@std.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@KU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@@2@0@Z @ 0x1800FDAB8 (-erase@-$_Tree@V-$_Tmap_traits@KU-$pair@PEAUDeviceInfo@@V-$ComPtr@UICursor@@@WRL@Microsoft@@@std.c)
 *     ?OnDeviceRemoval@MPCInputProviderBase@@UEAAJPEAUDeviceInfo@@@Z @ 0x180100BD0 (-OnDeviceRemoval@MPCInputProviderBase@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCMouseProcessor::OnDeviceRemoval(MPCMouseProcessor *this, struct DeviceInfo *a2)
{
  char *v2; // rsi
  const char *v5; // r9
  __int64 *v6; // r8
  __int64 *v7; // r9
  __int64 *v8; // rax
  __int64 *v9; // rcx
  unsigned int v10; // edx
  __int64 *j; // rax
  __int64 v12; // rbx
  __int64 **v13; // rcx
  __int64 *v14; // rdx
  __int64 *i; // rdx
  __int64 v16; // rdx
  __int64 v17; // r8
  const char *v18; // r9
  MPCConstantManager *Instance; // rax
  int v20; // eax
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v23; // [rsp+30h] [rbp+8h] BYREF

  v2 = (char *)this + 4888;
  if ( !std::_Tree<std::_Tmap_traits<unsigned long,std::pair<DeviceInfo *,Microsoft::WRL::ComPtr<ICursor>>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::pair<DeviceInfo *,Microsoft::WRL::ComPtr<ICursor>>>>,0>>::count(
          (char *)this + 4888,
          a2) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x15E,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
      v5);
    __debugbreak();
  }
  v6 = *(__int64 **)v2;
  v7 = *(__int64 **)v2;
  v8 = *(__int64 **)(*(_QWORD *)v2 + 8LL);
  v9 = v8;
  if ( !*((_BYTE *)v8 + 25) )
  {
    v10 = *(_DWORD *)a2;
    do
    {
      if ( *((_DWORD *)v9 + 8) >= v10 )
      {
        if ( *((_BYTE *)v7 + 25) && v10 < *((_DWORD *)v9 + 8) )
          v7 = v9;
        v6 = v9;
        v9 = (__int64 *)*v9;
      }
      else
      {
        v9 = (__int64 *)v9[2];
      }
    }
    while ( !*((_BYTE *)v9 + 25) );
  }
  if ( !*((_BYTE *)v7 + 25) )
    v8 = (__int64 *)*v7;
  while ( !*((_BYTE *)v8 + 25) )
  {
    if ( *(_DWORD *)a2 >= *((_DWORD *)v8 + 8) )
    {
      v8 = (__int64 *)v8[2];
    }
    else
    {
      v7 = v8;
      v8 = (__int64 *)*v8;
    }
  }
  j = v6;
  v12 = 0LL;
  while ( j != v7 )
  {
    ++v12;
    if ( !*((_BYTE *)j + 25) )
    {
      v13 = (__int64 **)j[2];
      if ( *((_BYTE *)v13 + 25) )
      {
        for ( i = (__int64 *)j[1]; !*((_BYTE *)i + 25) && j == (__int64 *)i[2]; i = (__int64 *)i[1] )
          j = i;
        j = i;
      }
      else
      {
        v14 = *v13;
        for ( j = (__int64 *)j[2]; !*((_BYTE *)v14 + 25); v14 = (__int64 *)*v14 )
          j = v14;
      }
    }
  }
  std::_Tree<std::_Tmap_traits<unsigned long,std::pair<DeviceInfo *,Microsoft::WRL::ComPtr<ICursor>>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::pair<DeviceInfo *,Microsoft::WRL::ComPtr<ICursor>>>>,0>>::erase(
    v2,
    &v23);
  if ( !v12 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x15F,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
      v18);
    JUMPOUT(0x1800FBFA7LL);
  }
  Instance = MPCConstantManager::GetInstance((__int64)this + 24, v16, v17, v18);
  MPCConstantManager::RemoveDeviceId(
    Instance,
    (struct IMPCInputProviderBase *)(((unsigned __int64)this + 24) & -(__int64)(this != (MPCMouseProcessor *)16)));
  if ( *((_QWORD *)this + 612) )
    return 0LL;
  v20 = MPCInputProviderBase::OnDeviceRemoval(this, *((struct DeviceInfo **)this + 6));
  if ( v20 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x165,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
      (const char *)(unsigned int)v20);
    __debugbreak();
  }
  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 472) + 40LL))(
             *((_QWORD *)this + 472),
             *((_QWORD *)this + 6));
  if ( (int)result < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x167,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
      (const char *)(unsigned int)result);
    __debugbreak();
  }
  return result;
}
