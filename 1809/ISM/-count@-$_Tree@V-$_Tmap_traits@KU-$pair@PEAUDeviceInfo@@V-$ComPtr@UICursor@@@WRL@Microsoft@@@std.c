/*
 * XREFs of ?count@?$_Tree@V?$_Tmap_traits@KU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@@2@$0A@@std@@@std@@QEBA_KAEBK@Z @ 0x1800FD9A8
 * Callers:
 *     ?ShouldAttachDevice@MPCMouseProcessor@@UEAA_NPEAUDeviceInfo@@@Z @ 0x1800FBD60 (-ShouldAttachDevice@MPCMouseProcessor@@UEAA_NPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceRemoval@MPCMouseProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x1800FBDD0 (-OnDeviceRemoval@MPCMouseProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned long,std::pair<DeviceInfo *,Microsoft::WRL::ComPtr<ICursor>>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::pair<DeviceInfo *,Microsoft::WRL::ComPtr<ICursor>>>>,0>>::count(
        __int64 **a1,
        unsigned int *a2)
{
  __int64 *j; // rax
  __int64 *v3; // r9
  __int64 *v4; // rcx
  __int64 *v5; // r8
  unsigned int v6; // r10d
  unsigned int v7; // edx
  __int64 v8; // r8
  __int64 **v9; // rcx
  __int64 *v10; // rdx
  __int64 *i; // rcx

  j = *a1;
  v3 = *a1;
  v4 = (__int64 *)(*a1)[1];
  v5 = v4;
  if ( !*((_BYTE *)v4 + 25) )
  {
    v6 = *a2;
    do
    {
      if ( *((_DWORD *)v5 + 8) >= v6 )
      {
        if ( *((_BYTE *)v3 + 25) && v6 < *((_DWORD *)v5 + 8) )
          v3 = v5;
        j = v5;
        v5 = (__int64 *)*v5;
      }
      else
      {
        v5 = (__int64 *)v5[2];
      }
    }
    while ( !*((_BYTE *)v5 + 25) );
  }
  if ( !*((_BYTE *)v3 + 25) )
    v4 = (__int64 *)*v3;
  if ( !*((_BYTE *)v4 + 25) )
  {
    v7 = *a2;
    do
    {
      if ( v7 >= *((_DWORD *)v4 + 8) )
      {
        v4 = (__int64 *)v4[2];
      }
      else
      {
        v3 = v4;
        v4 = (__int64 *)*v4;
      }
    }
    while ( !*((_BYTE *)v4 + 25) );
  }
  v8 = 0LL;
  while ( j != v3 )
  {
    ++v8;
    if ( !*((_BYTE *)j + 25) )
    {
      v9 = (__int64 **)j[2];
      if ( *((_BYTE *)v9 + 25) )
      {
        for ( i = (__int64 *)j[1]; !*((_BYTE *)i + 25) && j == (__int64 *)i[2]; i = (__int64 *)i[1] )
          j = i;
        j = i;
      }
      else
      {
        v10 = *v9;
        for ( j = (__int64 *)j[2]; !*((_BYTE *)v10 + 25); v10 = (__int64 *)*v10 )
          j = v10;
      }
    }
  }
  return v8;
}
