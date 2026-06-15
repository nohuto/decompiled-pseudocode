/*
 * XREFs of ?InitializeCommonSpatialTechInfo@AtmosCheck@@AEAAJXZ @ 0x180042550
 * Callers:
 *     ?Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z @ 0x1800546E4 (-Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004C07C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18006158E (memset_0.c)
 *     _invalid_parameter_noinfo @ 0x18006165A (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x1800688A3 (memcpy_0.c)
 */

__int64 __fastcall AtmosCheck::InitializeCommonSpatialTechInfo(LPOLESTR *this)
{
  unsigned int v1; // edi
  char *v3; // rax
  HRESULT v5; // eax
  unsigned int v6; // ebx
  HRESULT v7; // eax
  unsigned int v8; // ebx
  HRESULT v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rcx
  const wchar_t *v12; // rax
  size_t v13; // rbx
  size_t v14; // r14
  char *v15; // rax
  char *v16; // rbp
  HRESULT v17; // eax
  unsigned int v18; // ebx
  HRESULT v19; // eax
  unsigned int v20; // ebx
  __int64 v21; // rcx
  int v22; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v1 = 0;
  if ( !*((_BYTE *)this + 72) )
  {
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
      this + 31,
      0LL);
    v5 = StringFromCLSID(&DOLBY_ATMOS_MAT_SPATIAL_ENCODER, this + 31);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x865,
        (unsigned int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
        (const char *)(unsigned int)v5,
        v22);
      return v6;
    }
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
      this + 39,
      0LL);
    v7 = StringFromCLSID(&DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER, this + 39);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x86D,
        (unsigned int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
        (const char *)(unsigned int)v7,
        v22);
      return v8;
    }
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
      this + 35,
      0LL);
    v9 = StringFromCLSID(&DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER, this + 35);
    v10 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x875,
        (unsigned int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
        (const char *)(unsigned int)v9,
        v22);
      return v10;
    }
    v11 = 0x7FFFFFFFLL;
    v12 = L"{8f3bbd02-6bbe-4b60-9f8b-406837ce466f}";
    do
    {
      if ( !*v12 )
        break;
      ++v12;
      --v11;
    }
    while ( v11 );
    v13 = 2 * (v12 - L"{8f3bbd02-6bbe-4b60-9f8b-406837ce466f}");
    v14 = v13 + 2;
    v15 = (char *)CoTaskMemAlloc(v13 + 2);
    v16 = v15;
    if ( v15 )
    {
      if ( v13 )
      {
        if ( v14 < v13 )
        {
          memset_0(v15, 0, v14);
          *(_DWORD *)_o__errno(v21) = 34;
          invalid_parameter_noinfo();
        }
        else
        {
          memcpy_0(v15, L"{8f3bbd02-6bbe-4b60-9f8b-406837ce466f}", v13);
        }
      }
      *(_WORD *)&v16[v13] = 0;
    }
    if ( this + 27 == (LPOLESTR *)&v22 )
    {
      if ( v16 )
        CoTaskMemFree(v16);
    }
    else
    {
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
        this + 27,
        v16);
    }
    if ( !this[27] )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x87A,
        (unsigned int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
        (const char *)0x8007000ELL,
        v22);
      return 2147942414LL;
    }
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
      this + 43,
      0LL);
    v17 = StringFromCLSID(&DTSX_HEADPHONES_SPATIAL_ENCODER, this + 43);
    v18 = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x882,
        (unsigned int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
        (const char *)(unsigned int)v17,
        v22);
      return v18;
    }
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
      this + 47,
      0LL);
    v19 = StringFromCLSID(&DTSX_TWOSPEAKER_SPATIAL_ENCODER, this + 47);
    v20 = v19;
    if ( v19 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x88A,
        (unsigned int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
        (const char *)(unsigned int)v19,
        v22);
      return v20;
    }
  }
  v3 = (char *)(this + 34);
  do
  {
    *(v3 - 64) = 0;
    v1 += 6;
    *(v3 - 32) = 0;
    *v3 = 0;
    v3[32] = 0;
    v3[64] = 0;
    v3[96] = 0;
    v3 += 192;
  }
  while ( v1 < 6 );
  return 0LL;
}
