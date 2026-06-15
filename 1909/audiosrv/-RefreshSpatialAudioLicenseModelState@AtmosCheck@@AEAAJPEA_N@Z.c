/*
 * XREFs of ?RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z @ 0x18005A158
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c0a465a537957875493a7f1285b2ffbd___::Run @ 0x18005A9F0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c0a465a537957875493a7f1285b2ffbd___--Run.c)
 *     _lambda_07ea8ee8549f00f16399909de546051c_::operator() @ 0x18006B150 (_lambda_07ea8ee8549f00f16399909de546051c_--operator().c)
 *     _lambda_54bc6dde1f28aafe8f150296654e3c03_::operator() @ 0x18006B370 (_lambda_54bc6dde1f28aafe8f150296654e3c03_--operator().c)
 *     _lambda_a70780d56f8e66bb41551630c0bd5b4d_::operator() @ 0x18006B600 (_lambda_a70780d56f8e66bb41551630c0bd5b4d_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _TlgWrite @ 0x18001DFF0 (_TlgWrite.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18003E870 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?InitializeLicenseMapLegacy@AtmosCheck@@AEAAXXZ @ 0x180057F1C (-InitializeLicenseMapLegacy@AtmosCheck@@AEAAXXZ.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@@2@$0A@@std@@@std@@QEAAXXZ @ 0x1800587AC (-clear@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$.c)
 *     ?ScanForInstalledSpatialAudioSubtypeAppServices@@YAJPEAUSpatialAudioFormatSubtypeInfo@@HPEA_N@Z @ 0x180058D30 (-ScanForInstalledSpatialAudioSubtypeAppServices@@YAJPEAUSpatialAudioFormatSubtypeInfo@@HPEA_N@Z.c)
 *     ?InitializeSpatialAudioFormatSubtypeInfoArray@@YAJPEAUSpatialAudioFormatSubtypeInfo@@H_N@Z @ 0x180059754 (-InitializeSpatialAudioFormatSubtypeInfoArray@@YAJPEAUSpatialAudioFormatSubtypeInfo@@H_N@Z.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180064DA0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18006532C (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     ??1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1800BB2A0 (--1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 *     ?InitializeAppServiceMode@AtmosCheck@@AEAAJXZ @ 0x18013ED8C (-InitializeAppServiceMode@AtmosCheck@@AEAAJXZ.c)
 *     ?UninitializeAppServiceMode@AtmosCheck@@AEAAXXZ @ 0x180140168 (-UninitializeAppServiceMode@AtmosCheck@@AEAAXXZ.c)
 *     ?UpdateLicenseMapForAllEndpoints@AtmosCheck@@AEAAJXZ @ 0x180140368 (-UpdateLicenseMapForAllEndpoints@AtmosCheck@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AtmosCheck::RefreshSpatialAudioLicenseModelState(AtmosCheck *this, bool *a2)
{
  char *v3; // rbx
  _BYTE *v4; // r15
  unsigned int v5; // edi
  int v6; // eax
  __int64 v7; // rdx
  int v8; // ebx
  __int64 v9; // r9
  __int64 v10; // rdx
  int v11; // eax
  unsigned int v12; // r12d
  LPCWCH *v13; // r14
  signed __int64 v14; // rcx
  signed __int64 v15; // r13
  signed __int64 v16; // rbx
  const WCHAR *v17; // rdx
  const WCHAR *v18; // rcx
  const WCHAR *v19; // rax
  const WCHAR *v20; // r8
  const GUID *v21; // r8
  const GUID *v22; // r9
  void *v23; // rdx
  __int64 v24; // rbx
  void *v25; // rdx
  int v26; // eax
  int updated; // eax
  char v29; // [rsp+38h] [rbp-D0h] BYREF
  char v30; // [rsp+39h] [rbp-CFh]
  signed __int64 v31; // [rsp+40h] [rbp-C8h]
  signed __int64 v32; // [rsp+48h] [rbp-C0h]
  LPCWCH lpString2; // [rsp+50h] [rbp-B8h]
  LPCWCH lpString1; // [rsp+58h] [rbp-B0h]
  signed __int64 v35; // [rsp+60h] [rbp-A8h]
  bool *v36; // [rsp+68h] [rbp-A0h]
  _QWORD v37[3]; // [rsp+70h] [rbp-98h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+88h] [rbp-80h] BYREF
  char *v39; // [rsp+A8h] [rbp-60h]
  __int64 v40; // [rsp+B0h] [rbp-58h]
  char *v41; // [rsp+B8h] [rbp-50h]
  __int64 v42; // [rsp+C0h] [rbp-48h]
  void *v43; // [rsp+C8h] [rbp-40h] BYREF
  char v44; // [rsp+D0h] [rbp-38h] BYREF
  char v45; // [rsp+D8h] [rbp-30h] BYREF
  _BYTE v46[168]; // [rsp+E0h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D0h] [rbp+C8h]

  v37[1] = -2LL;
  v36 = a2;
  v3 = (char *)this + 56;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  v37[0] = v3;
  v4 = (char *)this + 216;
  v30 = *((_BYTE *)this + 216);
  v5 = 0;
  v29 = 0;
  `eh vector constructor iterator'(
    &v43,
    0x20uLL,
    6uLL,
    (void (*)(void *))SpatialAudioFormatSubtypeInfo::SpatialAudioFormatSubtypeInfo,
    (void (*)(void *))SpatialAudioFormatSubtypeInfo::~SpatialAudioFormatSubtypeInfo);
  v6 = InitializeSpatialAudioFormatSubtypeInfoArray(&v43);
  v8 = v6;
  if ( v6 < 0 )
  {
    v9 = (unsigned int)v6;
    v10 = 2142LL;
LABEL_32:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
      (const char *)v9);
    v5 = v8;
    goto LABEL_33;
  }
  v11 = ScanForInstalledSpatialAudioSubtypeAppServices(
          (struct SpatialAudioFormatSubtypeInfo *)&v43,
          v7,
          (bool *)this + 216);
  v8 = v11;
  if ( v11 < 0 )
  {
    v9 = (unsigned int)v11;
    v10 = 2143LL;
    goto LABEL_32;
  }
  v12 = 0;
  v13 = (LPCWCH *)((char *)this + 272);
  v14 = &v44 - (char *)this;
  v35 = &v44 - (char *)this;
  v31 = (char *)&v43 - (char *)this;
  v15 = &v45 - (char *)this;
  v16 = v46 - (_BYTE *)this;
  v32 = v46 - (_BYTE *)this;
  do
  {
    if ( CompareStringOrdinal(*(LPCWCH *)((char *)v13 + v14 - 272), -1, *(v13 - 1), -1, 1) != 2 )
    {
      v8 = -2147418113;
      v9 = 2147549183LL;
      v10 = 2159LL;
      goto LABEL_32;
    }
    v17 = (const WCHAR *)&unk_180161DC4;
    v18 = (const WCHAR *)&unk_180161DC4;
    if ( *v13 )
      v18 = *v13;
    v19 = (const WCHAR *)&unk_180161DC4;
    if ( v13[1] )
      v19 = v13[1];
    lpString1 = v19;
    v20 = (const WCHAR *)&unk_180161DC4;
    if ( *(LPCWCH *)((char *)v13 + v15 - 272) )
      v20 = *(LPCWCH *)((char *)v13 + v15 - 272);
    if ( *(LPCWCH *)((char *)v13 + v16 - 272) )
      v17 = *(LPCWCH *)((char *)v13 + v16 - 272);
    lpString2 = v17;
    if ( *((_BYTE *)v13 - 16) != *((_BYTE *)v13 + v31 - 272)
      || CompareStringOrdinal(v18, -1, v20, -1, 1) != 2
      || CompareStringOrdinal(lpString1, -1, lpString2, -1, 1) != 2 )
    {
      v29 = 1;
      *((_BYTE *)v13 - 16) = *((_BYTE *)v13 + v31 - 272);
      v23 = *(void **)((char *)v13 + v15 - 272);
      *(LPCWCH *)((char *)v13 + v15 - 272) = 0LL;
      v24 = 32LL * (int)v12;
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        (void **)((char *)this + v24 + 272),
        v23);
      v25 = *(void **)((char *)v13 + v32 - 272);
      *(LPCWCH *)((char *)v13 + v32 - 272) = 0LL;
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        (void **)((char *)this + v24 + 280),
        v25);
      v16 = v32;
    }
    ++v12;
    v13 += 4;
    v14 = v35;
  }
  while ( v12 < 6 );
  if ( v30 != *v4 )
  {
    if ( *v4 )
    {
      std::_Hash<std::_Umap_traits<std::wstring,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>>>,0>>::clear((__int64)this + 448);
      v26 = AtmosCheck::InitializeAppServiceMode(this);
      v8 = v26;
      if ( v26 < 0 )
      {
        v9 = (unsigned int)v26;
        v10 = 2209LL;
        goto LABEL_32;
      }
      updated = AtmosCheck::UpdateLicenseMapForAllEndpoints(this);
      v8 = updated;
      if ( updated < 0 )
      {
        v9 = (unsigned int)updated;
        v10 = 2210LL;
        goto LABEL_32;
      }
    }
    else
    {
      AtmosCheck::InitializeLicenseMapLegacy(this);
      AtmosCheck::UninitializeAppServiceMode(this);
    }
  }
  if ( v36 )
    *v36 = v29;
  if ( (unsigned int)dword_1801B54F0 > 5 )
  {
    v39 = &v29;
    v40 = 1LL;
    v41 = (char *)this + 216;
    v42 = 1LL;
    TlgWrite((TraceLoggingHProvider)&dword_1801B54F0, &unk_18017C4EB, v21, v22, 4u, &pData);
  }
LABEL_33:
  `eh vector destructor iterator'(
    &v43,
    0x20uLL,
    6uLL,
    (void (*)(void *))SpatialAudioFormatSubtypeInfo::~SpatialAudioFormatSubtypeInfo);
  Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection((Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *)v37);
  return v5;
}
