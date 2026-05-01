/*
 * XREFs of ?SaveDataToJson@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAPEAUIJsonObject@Json@Data@Windows@@@Z @ 0x18019BC20
 * Callers:
 *     ?SaveDataToDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x18019B8EC (-SaveDataToDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180022328 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180025DE0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18005EE24 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18007F638 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$ActivateInstance@UIJsonObject@Json@Data@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUIJsonObject@Json@Data@1@@Z @ 0x180197ACC (--$ActivateInstance@UIJsonObject@Json@Data@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPE.c)
 *     ??$ActivateInstance@V?$ComPtr@UIJsonArray@Json@Data@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIJsonArray@Json@Data@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180197B60 (--$ActivateInstance@V-$ComPtr@UIJsonArray@Json@Data@Windows@@@WRL@Microsoft@@@Foundation@Windows.c)
 *     ??$As@U?$IVector@PEAUIJsonValue@Json@Data@Windows@@@Collections@Foundation@Windows@@@?$ComPtr@UIJsonArray@Json@Data@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IVector@PEAUIJsonValue@Json@Data@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180197C00 (--$As@U-$IVector@PEAUIJsonValue@Json@Data@Windows@@@Collections@Foundation@Windows@@@-$ComPtr@UI.c)
 *     ??$As@UIJsonValue@Json@Data@Windows@@@?$ComPtr@UIJsonObject@Json@Data@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIJsonValue@Json@Data@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180197C44 (--$As@UIJsonValue@Json@Data@Windows@@@-$ComPtr@UIJsonObject@Json@Data@Windows@@@WRL@Microsoft@@Q.c)
 *     ?GetSortedAppList@RecentAppsCache@Discover@PenWorkspace@@AEAAJAEAV?$vector@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@V?$allocator@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@2@@std@@@Z @ 0x180199DC8 (-GetSortedAppList@RecentAppsCache@Discover@PenWorkspace@@AEAAJAEAV-$vector@V-$shared_ptr@UAppUsa.c)
 */

// Hidden C++ exception states: #wind=16
__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::SaveDataToJson(
        RTL_SRWLOCK *this,
        struct Windows::Data::Json::IJsonObject **a2)
{
  struct Windows::Data::Json::IJsonObject **v2; // rdi
  int SortedAppList; // eax
  unsigned int v4; // ebx
  __int64 v5; // rbx
  int ActivationFactory; // eax
  int v7; // eax
  int v8; // eax
  int v9; // r13d
  int v10; // r12d
  __int64 v11; // r14
  const WCHAR **v12; // rsi
  __int64 v13; // rbx
  int v14; // eax
  const WCHAR *v15; // rax
  __int64 v16; // rdi
  HSTRING_HEADER *v17; // rbx
  int v18; // eax
  __int64 v19; // rbx
  PVOID v20; // rdx
  _QWORD *v21; // rbx
  __int64 v22; // rbx
  PVOID v23; // rdx
  _QWORD *v24; // rbx
  __int64 v25; // rbx
  PVOID v26; // rdx
  _QWORD *v27; // rbx
  __int64 v28; // rbx
  PVOID v29; // rdx
  __int64 v30; // rbx
  const WCHAR *v31; // rdx
  __int64 v32; // rbx
  PVOID v33; // rdx
  int v34; // eax
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rdx
  PVOID Reserved1; // rdx
  __int64 i; // rdi
  std::_Ref_count_base *v41; // rcx
  __int64 v43; // [rsp+28h] [rbp-59h] BYREF
  __int64 v44; // [rsp+30h] [rbp-51h] BYREF
  _QWORD *v45; // [rsp+38h] [rbp-49h] BYREF
  __int64 v46; // [rsp+40h] [rbp-41h] BYREF
  __int64 v47; // [rsp+48h] [rbp-39h] BYREF
  __int64 (__fastcall ***v48)(_QWORD, GUID *, __int64 *); // [rsp+50h] [rbp-31h] BYREF
  __int128 v49; // [rsp+58h] [rbp-29h] BYREF
  __int64 v50; // [rsp+68h] [rbp-19h]
  __int64 v51; // [rsp+70h] [rbp-11h] BYREF
  struct Windows::Data::Json::IJsonObject **v52; // [rsp+78h] [rbp-9h]
  const WCHAR *v53[2]; // [rsp+80h] [rbp-1h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+90h] [rbp+Fh] BYREF
  __int64 v55; // [rsp+A8h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v53[1] = (const WCHAR *)-2LL;
  v2 = a2;
  v52 = a2;
  *a2 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  SortedAppList = PenWorkspace::Discover::RecentAppsCache::GetSortedAppList(this, (__int64)&v49);
  v4 = SortedAppList;
  if ( SortedAppList < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x318,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)SortedAppList);
    goto LABEL_60;
  }
  v45 = 0LL;
  v55 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Data.Json.JsonValue",
    0x1Cu,
    0x1Bu);
  v5 = v55;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v45);
  ActivationFactory = RoGetActivationFactory(v5, &GUID_5f6b544a_2f53_48e1_91a3_f78b50a6345c, &v45);
  v4 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x31B,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_59;
  }
  v48 = 0LL;
  v55 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Data.Json.JsonArray",
    0x1Cu,
    0x1Bu);
  v7 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Data::Json::IJsonArray>>(
         v55,
         (__int64 *)&v48);
  v4 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x31E,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_58;
  }
  v51 = 0LL;
  v8 = Microsoft::WRL::ComPtr<Windows::Data::Json::IJsonArray>::As<Windows::Foundation::Collections::IVector<Windows::Data::Json::IJsonValue *>>(
         &v48,
         &v51);
  v4 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x321,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_57;
  }
  v9 = 0;
  v10 = 0;
  v11 = (__int64)(*((_QWORD *)&v49 + 1) - v49) >> 4;
  if ( (int)v11 <= 0 )
  {
LABEL_31:
    v47 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v47);
    v35 = (**v48)(v48, &GUID_a3219ecb_f0b3_4dcd_beee_19d48cd3ed1e, &v47);
    v4 = v35;
    if ( v35 >= 0 )
    {
      v55 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        &hstringHeader,
        L"Windows.Data.Json.JsonObject",
        0x1Du,
        0x1Cu);
      v35 = Windows::Foundation::ActivateInstance<Windows::Data::Json::IJsonObject>(v55, v2);
      v4 = v35;
      if ( v35 >= 0 )
      {
        Reserved1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                      &hstringHeader,
                      (const WCHAR **)off_180400210)[1].Reserved.Reserved1;
        v35 = (*(__int64 (__fastcall **)(struct Windows::Data::Json::IJsonObject *, PVOID, __int64))(*(_QWORD *)*v2 + 56LL))(
                *v2,
                Reserved1,
                v47);
        v4 = v35;
        if ( v35 >= 0 )
        {
          v4 = 0;
          goto LABEL_56;
        }
        v36 = 842LL;
      }
      else
      {
        v36 = 841LL;
      }
    }
    else
    {
      v36 = 839LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v36,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)v35);
LABEL_56:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v47);
    goto LABEL_57;
  }
  v12 = (const WCHAR **)v49;
  while ( 1 )
  {
    if ( v9 >= 30 )
    {
LABEL_30:
      v2 = v52;
      goto LABEL_31;
    }
    if ( *((int *)*v12 + 8) < 3 )
      goto LABEL_29;
    v44 = 0LL;
    v55 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Data.Json.JsonObject",
      0x1Du,
      0x1Cu);
    v13 = v55;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v44);
    v14 = Windows::Foundation::ActivateInstance<Windows::Data::Json::IJsonObject>(v13, &v44);
    v4 = v14;
    if ( v14 < 0 )
      break;
    v43 = 0LL;
    v15 = *v12;
    if ( *((_QWORD *)*v12 + 3) >= 8uLL )
      v15 = *(const WCHAR **)v15;
    v53[0] = v15;
    v16 = (__int64)v45;
    v17 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, v53);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v43);
    v18 = (*(__int64 (__fastcall **)(__int64, PVOID, __int64 *))(*(_QWORD *)v16 + 80LL))(
            v16,
            v17[1].Reserved.Reserved1,
            &v43);
    v4 = v18;
    if ( v18 < 0 )
    {
      v38 = 816LL;
      goto LABEL_46;
    }
    v19 = v44;
    v20 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, (const WCHAR **)off_180400208)[1].Reserved.Reserved1;
    v18 = (*(__int64 (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)v19 + 56LL))(v19, v20, v43);
    v4 = v18;
    if ( v18 < 0 )
    {
      v38 = 817LL;
      goto LABEL_46;
    }
    v21 = v45;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v43);
    v18 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64 *))(*v21 + 72LL))(v21, *v21, &v43);
    v4 = v18;
    if ( v18 < 0 )
    {
      v38 = 819LL;
      goto LABEL_46;
    }
    v22 = v44;
    v23 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, (const WCHAR **)off_180400230)[1].Reserved.Reserved1;
    v18 = (*(__int64 (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)v22 + 56LL))(v22, v23, v43);
    v4 = v18;
    if ( v18 < 0 )
    {
      v38 = 820LL;
      goto LABEL_46;
    }
    v24 = v45;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v43);
    v18 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64 *))(*v24 + 72LL))(v24, *v24, &v43);
    v4 = v18;
    if ( v18 < 0 )
    {
      v38 = 822LL;
      goto LABEL_46;
    }
    v25 = v44;
    v26 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, (const WCHAR **)off_180400228)[1].Reserved.Reserved1;
    v18 = (*(__int64 (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)v25 + 56LL))(v25, v26, v43);
    v4 = v18;
    if ( v18 < 0 )
    {
      v38 = 823LL;
      goto LABEL_46;
    }
    v27 = v45;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v43);
    v18 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64 *))(*v27 + 72LL))(v27, *v27, &v43);
    v4 = v18;
    if ( v18 < 0 )
    {
      v38 = 825LL;
      goto LABEL_46;
    }
    v28 = v44;
    v29 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, (const WCHAR **)off_180400220)[1].Reserved.Reserved1;
    v18 = (*(__int64 (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)v28 + 56LL))(v28, v29, v43);
    v4 = v18;
    if ( v18 < 0 )
    {
      v38 = 826LL;
      goto LABEL_46;
    }
    v30 = (__int64)v45;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v43);
    v31 = *v12;
    LOBYTE(v31) = *((_BYTE *)*v12 + 44);
    v18 = (*(__int64 (__fastcall **)(__int64, const WCHAR *, __int64 *))(*(_QWORD *)v30 + 64LL))(v30, v31, &v43);
    v4 = v18;
    if ( v18 < 0 )
    {
      v38 = 828LL;
LABEL_46:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v38,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
        (const char *)(unsigned int)v18);
      goto LABEL_47;
    }
    v32 = v44;
    v33 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, (const WCHAR **)off_180400218)[1].Reserved.Reserved1;
    v18 = (*(__int64 (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)v32 + 56LL))(v32, v33, v43);
    v4 = v18;
    if ( v18 < 0 )
    {
      v38 = 829LL;
      goto LABEL_46;
    }
    v46 = 0LL;
    v34 = Microsoft::WRL::ComPtr<Windows::Data::Json::IJsonObject>::As<Windows::Data::Json::IJsonValue>(&v44, &v46);
    v4 = v34;
    if ( v34 < 0 )
    {
      v37 = 832LL;
LABEL_35:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v37,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
        (const char *)(unsigned int)v34);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v46);
LABEL_47:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v43);
      goto LABEL_49;
    }
    v34 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v51 + 104LL))(v51, v46);
    v4 = v34;
    if ( v34 < 0 )
    {
      v37 = 833LL;
      goto LABEL_35;
    }
    ++v9;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v46);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v43);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v44);
LABEL_29:
    ++v10;
    v12 += 2;
    if ( v10 >= (int)v11 )
      goto LABEL_30;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x32D,
    (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
    (const char *)(unsigned int)v14);
LABEL_49:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v44);
LABEL_57:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v51);
LABEL_58:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v48);
LABEL_59:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v45);
LABEL_60:
  if ( (_QWORD)v49 )
  {
    for ( i = v49; i != *((_QWORD *)&v49 + 1); i += 16LL )
    {
      v41 = *(std::_Ref_count_base **)(i + 8);
      if ( v41 )
        std::_Ref_count_base::_Decref(v41);
    }
    std::_Deallocate<16,0>((void *)v49, (const struct std::nothrow_t *)((v50 - v49) & 0xFFFFFFFFFFFFFFF0uLL));
  }
  return v4;
}
