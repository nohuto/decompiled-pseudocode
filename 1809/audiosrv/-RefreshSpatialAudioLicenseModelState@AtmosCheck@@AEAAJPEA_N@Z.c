/*
 * XREFs of ?RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z @ 0x180068220
 * Callers:
 *     _lambda_3a6a9ae2d1ede84324f1e385780d9b63_::operator() @ 0x180067B40 (_lambda_3a6a9ae2d1ede84324f1e385780d9b63_--operator().c)
 *     _lambda_d16d110d62607e9e7a123dfd70e3b2fb_::operator() @ 0x180067D8C (_lambda_d16d110d62607e9e7a123dfd70e3b2fb_--operator().c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_def7c7ce47039446187daa2faf99ada6___::Run @ 0x1800685C0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_def7c7ce47039446187daa2faf99ada6___--Run.c)
 * Callees:
 *     ?ScanForInstalledSpatialAudioSubtypeAppServices@@YAJPEAUSpatialAudioFormatSubtypeInfo@@HPEA_N@Z @ 0x180019B20 (-ScanForInstalledSpatialAudioSubtypeAppServices@@YAJPEAUSpatialAudioFormatSubtypeInfo@@HPEA_N@Z.c)
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18002D194 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     ?InitializeSpatialAudioFormatSubtypeInfoArray@@YAJPEAUSpatialAudioFormatSubtypeInfo@@H_N@Z @ 0x180042730 (-InitializeSpatialAudioFormatSubtypeInfoArray@@YAJPEAUSpatialAudioFormatSubtypeInfo@@H_N@Z.c)
 *     ?InitializeLicenseMapLegacy@AtmosCheck@@AEAAXXZ @ 0x18004AEBC (-InitializeLicenseMapLegacy@AtmosCheck@@AEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004C07C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@@2@$0A@@std@@@std@@QEAAXXZ @ 0x180054F10 (-clear@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180060770 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x180060CFC (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     ?InitializeAppServiceMode@AtmosCheck@@AEAAJXZ @ 0x18013A01C (-InitializeAppServiceMode@AtmosCheck@@AEAAJXZ.c)
 *     ?UninitializeAppServiceMode@AtmosCheck@@AEAAXXZ @ 0x18013C1EC (-UninitializeAppServiceMode@AtmosCheck@@AEAAXXZ.c)
 *     ?UpdateLicenseMapForAllEndpoints@AtmosCheck@@AEAAJXZ @ 0x18013C370 (-UpdateLicenseMapForAllEndpoints@AtmosCheck@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AtmosCheck::RefreshSpatialAudioLicenseModelState(AtmosCheck *this, bool *a2)
{
  _BYTE *v3; // r14
  int v4; // eax
  __int64 v5; // rdx
  unsigned int v6; // ebx
  __int64 v7; // r9
  __int64 v8; // rdx
  int v9; // eax
  unsigned int v10; // r15d
  LPCWCH *v11; // rsi
  signed __int64 v12; // rax
  signed __int64 v13; // rbx
  signed __int64 v14; // r12
  signed __int64 v15; // r13
  const WCHAR *v16; // rdx
  const WCHAR *v17; // rcx
  const WCHAR *v18; // rax
  const WCHAR *v19; // r8
  const GUID *v20; // r8
  const GUID *v21; // r9
  void *v22; // rdx
  __int64 v23; // rbx
  void *v24; // rdx
  int v25; // eax
  int updated; // eax
  bool v28; // [rsp+30h] [rbp-D0h]
  char v29; // [rsp+31h] [rbp-CFh]
  const WCHAR *lpString2; // [rsp+38h] [rbp-C8h]
  const WCHAR *lpString1; // [rsp+40h] [rbp-C0h]
  LPCRITICAL_SECTION lpCriticalSection[2]; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-90h] BYREF
  char *v35; // [rsp+90h] [rbp-70h]
  int v36; // [rsp+98h] [rbp-68h]
  int v37; // [rsp+9Ch] [rbp-64h]
  char v38[8]; // [rsp+A0h] [rbp-60h] BYREF
  char v39; // [rsp+A8h] [rbp-58h] BYREF
  char v40; // [rsp+B0h] [rbp-50h] BYREF
  char v41; // [rsp+B8h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  lpCriticalSection[1] = (LPCRITICAL_SECTION)-2LL;
  Microsoft::WRL::Wrappers::CriticalSection::Lock(
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 32),
    lpCriticalSection);
  v3 = (char *)this + 184;
  v29 = *((_BYTE *)this + 184);
  v28 = 0;
  `eh vector constructor iterator'(
    v38,
    32LL,
    6LL,
    (void (*)(void *))SpatialAudioFormatSubtypeInfo::SpatialAudioFormatSubtypeInfo);
  v4 = InitializeSpatialAudioFormatSubtypeInfoArray((struct SpatialAudioFormatSubtypeInfo *)v38);
  v6 = v4;
  if ( v4 < 0 )
  {
    v7 = (unsigned int)v4;
    v8 = 1900LL;
LABEL_33:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      v8,
      (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
      (const char *)v7);
    goto LABEL_34;
  }
  v9 = ScanForInstalledSpatialAudioSubtypeAppServices(
         (struct SpatialAudioFormatSubtypeInfo *)v38,
         v5,
         (bool *)this + 184);
  v6 = v9;
  if ( v9 < 0 )
  {
    v7 = (unsigned int)v9;
    v8 = 1901LL;
    goto LABEL_33;
  }
  v10 = 0;
  v11 = (LPCWCH *)((char *)this + 224);
  v12 = &v39 - (char *)this;
  v13 = v38 - (char *)this;
  v14 = &v40 - (char *)this;
  v15 = &v41 - (char *)this;
  do
  {
    if ( CompareStringOrdinal(*(LPCWCH *)((char *)v11 + v12 - 224), -1, *(v11 - 1), -1, 1) != 2 )
    {
      v6 = -2147418113;
      v7 = 2147549183LL;
      v8 = 1917LL;
      goto LABEL_33;
    }
    v16 = &word_18015F720;
    v17 = &word_18015F720;
    if ( *v11 )
      v17 = *v11;
    v18 = &word_18015F720;
    if ( v11[1] )
      v18 = v11[1];
    lpString1 = v18;
    v19 = &word_18015F720;
    if ( *(LPCWCH *)((char *)v11 + v14 - 224) )
      v19 = *(LPCWCH *)((char *)v11 + v14 - 224);
    if ( *(LPCWCH *)((char *)v11 + v15 - 224) )
      v16 = *(LPCWCH *)((char *)v11 + v15 - 224);
    lpString2 = v16;
    if ( *((_BYTE *)v11 - 16) != *((_BYTE *)v11 + v13 - 224)
      || CompareStringOrdinal(v17, -1, v19, -1, 1) != 2
      || CompareStringOrdinal(lpString1, -1, lpString2, -1, 1) != 2 )
    {
      v28 = 1;
      *((_BYTE *)v11 - 16) = *((_BYTE *)v11 + v13 - 224);
      v22 = *(void **)((char *)v11 + v14 - 224);
      *(LPCWCH *)((char *)v11 + v14 - 224) = 0LL;
      v23 = 32LL * (int)v10;
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
        (void **)((char *)this + v23 + 224),
        v22);
      v24 = *(void **)((char *)v11 + v15 - 224);
      *(LPCWCH *)((char *)v11 + v15 - 224) = 0LL;
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
        (void **)((char *)this + v23 + 232),
        v24);
      v13 = v38 - (char *)this;
    }
    ++v10;
    v11 += 4;
    v12 = &v39 - (char *)this;
  }
  while ( v10 < 6 );
  if ( v29 != *v3 )
  {
    if ( *v3 )
    {
      std::_Hash<std::_Umap_traits<std::wstring,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>>>,0>>::clear((__int64)this + 400);
      v25 = AtmosCheck::InitializeAppServiceMode(this);
      v6 = v25;
      if ( v25 < 0 )
      {
        v7 = (unsigned int)v25;
        v8 = 1967LL;
        goto LABEL_33;
      }
      updated = AtmosCheck::UpdateLicenseMapForAllEndpoints(this);
      v6 = updated;
      if ( updated < 0 )
      {
        v7 = (unsigned int)updated;
        v8 = 1968LL;
        goto LABEL_33;
      }
    }
    else
    {
      AtmosCheck::InitializeLicenseMapLegacy(this);
      AtmosCheck::UninitializeAppServiceMode(this);
    }
  }
  if ( a2 )
    *a2 = v28;
  if ( (unsigned int)dword_1801B1580 > 5 )
  {
    v35 = (char *)this + 184;
    v36 = 1;
    v37 = 0;
    TlgWrite((TraceLoggingHProvider)&dword_1801B1580, &unk_1801784E2, v20, v21, 3u, &pData);
  }
  v6 = 0;
LABEL_34:
  `eh vector destructor iterator'(
    v38,
    32LL,
    6LL,
    (void (*)(void *))SpatialAudioFormatSubtypeInfo::~SpatialAudioFormatSubtypeInfo);
  if ( lpCriticalSection[0] )
    LeaveCriticalSection(lpCriticalSection[0]);
  return v6;
}
