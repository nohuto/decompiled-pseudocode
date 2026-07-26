/*
 * XREFs of ?ndisReadRegistryKnobs@@YAJPEAU_DRIVER_OBJECT@@PEBUNDIS_REGISTRY_KNOB@@_K@Z @ 0x1C00C8C90
 * Callers:
 *     NdisReadConfiguration @ 0x1C00C6760 (NdisReadConfiguration.c)
 *     ndisReadRegistry @ 0x1C0126080 (ndisReadRegistry.c)
 *     ?ndisNblTrackerReadConfiguration@@YAXXZ @ 0x1C012978C (-ndisNblTrackerReadConfiguration@@YAXXZ.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1C001CA9C (-reset@-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@.c)
 *     WPP_SF_D @ 0x1C0041770 (WPP_SF_D.c)
 *     WPP_SF_Sd @ 0x1C0051C6C (WPP_SF_Sd.c)
 *     ?QueryValueUlong@KRegKey@@QEAAJPEB_WPEAK@Z @ 0x1C00C8E08 (-QueryValueUlong@KRegKey@@QEAAJPEB_WPEAK@Z.c)
 */

__int64 __fastcall ndisReadRegistryKnobs(
        struct _DRIVER_OBJECT *a1,
        const struct NDIS_REGISTRY_KNOB *a2,
        unsigned __int64 a3)
{
  PVOID v3; // r14
  const struct NDIS_REGISTRY_KNOB *v5; // rbx
  char *v6; // rdx
  unsigned __int64 v7; // r9
  _DWORD *v8; // rcx
  int v9; // eax
  int v10; // eax
  unsigned int v11; // edi
  int v12; // eax
  unsigned __int64 v13; // r14
  unsigned int *v14; // rdi
  int ValueUlong; // eax
  HANDLE Handle; // [rsp+60h] [rbp+30h] BYREF
  HANDLE v18; // [rsp+70h] [rbp+40h] BYREF
  void *v19; // [rsp+78h] [rbp+48h]

  Handle = a1;
  v3 = ndisDriverObject;
  v5 = a2;
  if ( a3 )
  {
    v6 = (char *)a2 + 8;
    v7 = a3;
    do
    {
      v8 = *(_DWORD **)v6;
      v9 = *((_DWORD *)v6 + 2);
      v6 += 24;
      *v8 = v9;
      --v7;
    }
    while ( v7 );
  }
  v18 = 0LL;
  Handle = 0LL;
  v19 = 0LL;
  v10 = IoOpenDriverRegistryKey(v3, 1LL, 1LL);
  v11 = v10;
  if ( v10 )
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
      WPP_SF_D(0xBu, &WPP_d97384ff81733b666d2a0bed288fd62c_Traceguids, v10);
  }
  else
  {
    wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
      &Handle,
      v19);
    v19 = 0LL;
    v12 = IoOpenDriverRegistryKey(v3, 0LL, 1LL);
    v11 = v12;
    if ( v12 )
    {
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
        WPP_SF_D(0xCu, &WPP_d97384ff81733b666d2a0bed288fd62c_Traceguids, v12);
    }
    else
    {
      wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
        &v18,
        v19);
      v13 = 0LL;
      if ( a3 )
      {
        while ( 1 )
        {
          v14 = (unsigned int *)*((_QWORD *)v5 + 1);
          if ( !Handle )
            goto LABEL_10;
          ValueUlong = KRegKey::QueryValueUlong((KRegKey *)&Handle, *(const wchar_t **)v5, *((unsigned int **)v5 + 1));
          if ( (unsigned int)(ValueUlong + 1073741789) <= 1 )
          {
            if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 3u )
              WPP_SF_Sd(0xAu, &WPP_d97384ff81733b666d2a0bed288fd62c_Traceguids, *(const wchar_t **)v5, ValueUlong);
            ValueUlong = 0;
          }
          if ( ValueUlong == -1073741772 )
          {
LABEL_10:
            ValueUlong = KRegKey::QueryValueUlong((KRegKey *)&v18, *(const wchar_t **)v5, v14);
            if ( ValueUlong == -1073741772 )
            {
              *v14 = *((_DWORD *)v5 + 4);
              ValueUlong = 0;
            }
          }
          v11 = ValueUlong;
          if ( ValueUlong )
            break;
          if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 5u )
            WPP_SF_Sd(
              0xDu,
              &WPP_d97384ff81733b666d2a0bed288fd62c_Traceguids,
              *(const wchar_t **)v5,
              **((_DWORD **)v5 + 1));
          ++v13;
          v5 = (const struct NDIS_REGISTRY_KNOB *)((char *)v5 + 24);
          if ( v13 >= a3 )
            goto LABEL_16;
        }
        if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
          WPP_SF_Sd(0xEu, &WPP_d97384ff81733b666d2a0bed288fd62c_Traceguids, *(const wchar_t **)v5, ValueUlong);
      }
    }
LABEL_16:
    if ( Handle )
      ZwClose(Handle);
  }
  if ( v18 )
    ZwClose(v18);
  return v11;
}
