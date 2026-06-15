/*
 * XREFs of ?RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z @ 0x18005014C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c0a465a537957875493a7f1285b2ffbd___::Run @ 0x18004FB90 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c0a465a537957875493a7f1285b2ffbd___--Run.c)
 *     _lambda_07ea8ee8549f00f16399909de546051c_::operator() @ 0x18006A0F0 (_lambda_07ea8ee8549f00f16399909de546051c_--operator().c)
 *     _lambda_54bc6dde1f28aafe8f150296654e3c03_::operator() @ 0x18006A310 (_lambda_54bc6dde1f28aafe8f150296654e3c03_--operator().c)
 *     _lambda_a70780d56f8e66bb41551630c0bd5b4d_::operator() @ 0x18006A5A0 (_lambda_a70780d56f8e66bb41551630c0bd5b4d_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _TlgWrite @ 0x18001AD10 (_TlgWrite.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18003A5B0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?ScanForInstalledSpatialAudioSubtypeAppServices@@YAJPEAUSpatialAudioFormatSubtypeInfo@@HPEA_N@Z @ 0x1800504C0 (-ScanForInstalledSpatialAudioSubtypeAppServices@@YAJPEAUSpatialAudioFormatSubtypeInfo@@HPEA_N@Z.c)
 *     ?InitializeSpatialAudioFormatSubtypeInfoArray@@YAJPEAUSpatialAudioFormatSubtypeInfo@@H_N@Z @ 0x1800516B4 (-InitializeSpatialAudioFormatSubtypeInfoArray@@YAJPEAUSpatialAudioFormatSubtypeInfo@@H_N@Z.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@@2@$0A@@std@@@std@@QEAAXXZ @ 0x180053554 (-clear@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$.c)
 *     ?InitializeLicenseMapLegacy@AtmosCheck@@AEAAXXZ @ 0x180053B98 (-InitializeLicenseMapLegacy@AtmosCheck@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180063DB0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18006433C (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     ??1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1800BB7A0 (--1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 *     ?InitializeAppServiceMode@AtmosCheck@@AEAAJXZ @ 0x18013F23C (-InitializeAppServiceMode@AtmosCheck@@AEAAJXZ.c)
 *     ?UninitializeAppServiceMode@AtmosCheck@@AEAAXXZ @ 0x180140618 (-UninitializeAppServiceMode@AtmosCheck@@AEAAXXZ.c)
 *     ?UpdateLicenseMapForAllEndpoints@AtmosCheck@@AEAAJXZ @ 0x180140818 (-UpdateLicenseMapForAllEndpoints@AtmosCheck@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AtmosCheck::RefreshSpatialAudioLicenseModelState(AtmosCheck *this, bool *a2)
{
  char *v3; // rbx
  _BYTE *v4; // r15
  unsigned int v5; // edi
  int v6; // edx
  bool v7; // r8
  int v8; // eax
  int v9; // edx
  int v10; // ebx
  __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // eax
  unsigned int v14; // r12d
  LPCWCH *v15; // r14
  signed __int64 v16; // rcx
  signed __int64 v17; // r13
  signed __int64 v18; // rbx
  const WCHAR *v19; // rdx
  const WCHAR *v20; // rcx
  const WCHAR *v21; // rax
  const WCHAR *v22; // r8
  const GUID *v23; // r8
  const GUID *v24; // r9
  void *v25; // rdx
  __int64 v26; // rbx
  void *v27; // rdx
  int v28; // eax
  int updated; // eax
  char v31; // [rsp+38h] [rbp-D0h] BYREF
  char v32; // [rsp+39h] [rbp-CFh]
  signed __int64 v33; // [rsp+40h] [rbp-C8h]
  signed __int64 v34; // [rsp+48h] [rbp-C0h]
  LPCWCH lpString2; // [rsp+50h] [rbp-B8h]
  LPCWCH lpString1; // [rsp+58h] [rbp-B0h]
  signed __int64 v37; // [rsp+60h] [rbp-A8h]
  bool *v38; // [rsp+68h] [rbp-A0h]
  _QWORD v39[3]; // [rsp+70h] [rbp-98h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+88h] [rbp-80h] BYREF
  char *v41; // [rsp+A8h] [rbp-60h]
  __int64 v42; // [rsp+B0h] [rbp-58h]
  char *v43; // [rsp+B8h] [rbp-50h]
  __int64 v44; // [rsp+C0h] [rbp-48h]
  _BYTE v45[8]; // [rsp+C8h] [rbp-40h] BYREF
  char v46; // [rsp+D0h] [rbp-38h] BYREF
  char v47; // [rsp+D8h] [rbp-30h] BYREF
  _BYTE v48[168]; // [rsp+E0h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D0h] [rbp+C8h]

  v39[1] = -2LL;
  v38 = a2;
  v3 = (char *)this + 56;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  v39[0] = v3;
  v4 = (char *)this + 216;
  v32 = *((_BYTE *)this + 216);
  v5 = 0;
  v31 = 0;
  `eh vector constructor iterator'(
    v45,
    0x20uLL,
    6uLL,
    (void (*)(void *))SpatialAudioFormatSubtypeInfo::SpatialAudioFormatSubtypeInfo,
    (void (*)(void *))SpatialAudioFormatSubtypeInfo::~SpatialAudioFormatSubtypeInfo);
  v8 = InitializeSpatialAudioFormatSubtypeInfoArray((struct SpatialAudioFormatSubtypeInfo *)v45, v6, v7);
  v10 = v8;
  if ( v8 < 0 )
  {
    v11 = (unsigned int)v8;
    v12 = 2142LL;
LABEL_32:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
      (const char *)v11);
    v5 = v10;
    goto LABEL_33;
  }
  v13 = ScanForInstalledSpatialAudioSubtypeAppServices(
          (struct SpatialAudioFormatSubtypeInfo *)v45,
          v9,
          (bool *)this + 216);
  v10 = v13;
  if ( v13 < 0 )
  {
    v11 = (unsigned int)v13;
    v12 = 2143LL;
    goto LABEL_32;
  }
  v14 = 0;
  v15 = (LPCWCH *)((char *)this + 272);
  v16 = &v46 - (char *)this;
  v37 = &v46 - (char *)this;
  v33 = v45 - (_BYTE *)this;
  v17 = &v47 - (char *)this;
  v18 = v48 - (_BYTE *)this;
  v34 = v48 - (_BYTE *)this;
  do
  {
    if ( CompareStringOrdinal(*(LPCWCH *)((char *)v15 + v16 - 272), -1, *(v15 - 1), -1, 1) != 2 )
    {
      v10 = -2147418113;
      v11 = 2147549183LL;
      v12 = 2159LL;
      goto LABEL_32;
    }
    v19 = (const WCHAR *)&unk_180162EC4;
    v20 = (const WCHAR *)&unk_180162EC4;
    if ( *v15 )
      v20 = *v15;
    v21 = (const WCHAR *)&unk_180162EC4;
    if ( v15[1] )
      v21 = v15[1];
    lpString1 = v21;
    v22 = (const WCHAR *)&unk_180162EC4;
    if ( *(LPCWCH *)((char *)v15 + v17 - 272) )
      v22 = *(LPCWCH *)((char *)v15 + v17 - 272);
    if ( *(LPCWCH *)((char *)v15 + v18 - 272) )
      v19 = *(LPCWCH *)((char *)v15 + v18 - 272);
    lpString2 = v19;
    if ( *((_BYTE *)v15 - 16) != *((_BYTE *)v15 + v33 - 272)
      || CompareStringOrdinal(v20, -1, v22, -1, 1) != 2
      || CompareStringOrdinal(lpString1, -1, lpString2, -1, 1) != 2 )
    {
      v31 = 1;
      *((_BYTE *)v15 - 16) = *((_BYTE *)v15 + v33 - 272);
      v25 = *(void **)((char *)v15 + v17 - 272);
      *(LPCWCH *)((char *)v15 + v17 - 272) = 0LL;
      v26 = 32LL * (int)v14;
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        (void **)((char *)this + v26 + 272),
        v25);
      v27 = *(void **)((char *)v15 + v34 - 272);
      *(LPCWCH *)((char *)v15 + v34 - 272) = 0LL;
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        (void **)((char *)this + v26 + 280),
        v27);
      v18 = v34;
    }
    ++v14;
    v15 += 4;
    v16 = v37;
  }
  while ( v14 < 6 );
  if ( v32 != *v4 )
  {
    if ( *v4 )
    {
      std::_Hash<std::_Umap_traits<std::wstring,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>>>,0>>::clear((char *)this + 448);
      v28 = AtmosCheck::InitializeAppServiceMode(this);
      v10 = v28;
      if ( v28 < 0 )
      {
        v11 = (unsigned int)v28;
        v12 = 2209LL;
        goto LABEL_32;
      }
      updated = AtmosCheck::UpdateLicenseMapForAllEndpoints(this);
      v10 = updated;
      if ( updated < 0 )
      {
        v11 = (unsigned int)updated;
        v12 = 2210LL;
        goto LABEL_32;
      }
    }
    else
    {
      AtmosCheck::InitializeLicenseMapLegacy(this);
      AtmosCheck::UninitializeAppServiceMode(this);
    }
  }
  if ( v38 )
    *v38 = v31;
  if ( (unsigned int)dword_1801B64F0 > 5 )
  {
    v41 = &v31;
    v42 = 1LL;
    v43 = (char *)this + 216;
    v44 = 1LL;
    TlgWrite((TraceLoggingHProvider)&dword_1801B64F0, &unk_18017D50B, v23, v24, 4u, &pData);
  }
LABEL_33:
  `eh vector destructor iterator'(
    v45,
    0x20uLL,
    6uLL,
    (void (*)(void *))SpatialAudioFormatSubtypeInfo::~SpatialAudioFormatSubtypeInfo);
  Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection((Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *)v39);
  return v5;
}
