/*
 * XREFs of ?SaveDataToJson@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAPEAUIJsonObject@Json@Data@Windows@@@Z @ 0x180201D34
 * Callers:
 *     ?SaveDataToDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x1802019FC (-SaveDataToDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180043620 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800436F0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@U?$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18011E190 (--1-$ComPtr@U-$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collectio.c)
 *     ??$As@U?$IVector@PEAUIJsonValue@Json@Data@Windows@@@Collections@Foundation@Windows@@@?$ComPtr@UIJsonArray@Json@Data@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IVector@PEAUIJsonValue@Json@Data@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801E07FC (--$As@U-$IVector@PEAUIJsonValue@Json@Data@Windows@@@Collections@Foundation@Windows@@@-$ComPtr@UI.c)
 *     ??$ActivateInstance@UIJsonObject@Json@Data@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUIJsonObject@Json@Data@1@@Z @ 0x1801FDCCC (--$ActivateInstance@UIJsonObject@Json@Data@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPE.c)
 *     ??$ActivateInstance@V?$ComPtr@UIJsonArray@Json@Data@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIJsonArray@Json@Data@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1801FDD60 (--$ActivateInstance@V-$ComPtr@UIJsonArray@Json@Data@Windows@@@WRL@Microsoft@@@Foundation@Windows.c)
 *     ??$As@UIJsonValue@Json@Data@Windows@@@?$ComPtr@UIJsonArray@Json@Data@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIJsonValue@Json@Data@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801FDE00 (--$As@UIJsonValue@Json@Data@Windows@@@-$ComPtr@UIJsonArray@Json@Data@Windows@@@WRL@Microsoft@@QE.c)
 *     ??1?$vector@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@V?$allocator@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@2@@std@@QEAA@XZ @ 0x1801FF048 (--1-$vector@V-$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@V-$allocator@V-$shared_ptr@.c)
 *     ?GetSortedAppList@RecentAppsCache@Discover@PenWorkspace@@AEAAJAEAV?$vector@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@V?$allocator@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@2@@std@@@Z @ 0x1801FFE58 (-GetSortedAppList@RecentAppsCache@Discover@PenWorkspace@@AEAAJAEAV-$vector@V-$shared_ptr@UAppUsa.c)
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
  int v9; // r12d
  int v10; // r15d
  const WCHAR **v11; // rsi
  __int64 v12; // r14
  __int64 v13; // rbx
  int v14; // eax
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, PVOID, __int64 **); // r13
  const WCHAR *v17; // rax
  HSTRING_HEADER *v18; // rdi
  int v19; // eax
  __int64 (__fastcall ***v20)(_QWORD, GUID *, __int64 *); // rbx
  __int64 (__fastcall *v21)(_QWORD, GUID *, __int64 *); // rdi
  HSTRING_HEADER *v22; // rax
  __int64 v23; // rbx
  __int64 (__fastcall *v24)(__int64, __int64, __int64 **); // rdi
  __int64 v25; // rdx
  __int64 (__fastcall ***v26)(_QWORD, GUID *, __int64 *); // rbx
  __int64 (__fastcall *v27)(_QWORD, GUID *, __int64 *); // rdi
  HSTRING_HEADER *v28; // rax
  __int64 v29; // rbx
  __int64 (__fastcall *v30)(__int64, __int64, __int64 **); // rdi
  __int64 v31; // rdx
  __int64 (__fastcall ***v32)(_QWORD, GUID *, __int64 *); // rbx
  __int64 (__fastcall *v33)(_QWORD, GUID *, __int64 *); // rdi
  HSTRING_HEADER *v34; // rax
  __int64 v35; // rbx
  __int64 (__fastcall *v36)(__int64, __int64, __int64 **); // rdi
  __int64 v37; // rdx
  __int64 (__fastcall ***v38)(_QWORD, GUID *, __int64 *); // rbx
  __int64 (__fastcall *v39)(_QWORD, GUID *, __int64 *); // rdi
  HSTRING_HEADER *v40; // rax
  __int64 v41; // rbx
  __int64 (__fastcall *v42)(__int64, __int64, __int64 **); // rdi
  __int64 v43; // rdx
  __int64 (__fastcall ***v44)(_QWORD, GUID *, __int64 *); // rbx
  __int64 (__fastcall *v45)(_QWORD, GUID *, __int64 *); // rdi
  HSTRING_HEADER *v46; // rax
  int v47; // eax
  int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // rdx
  __int64 v51; // rdx
  struct Windows::Data::Json::IJsonObject *v52; // rdi
  __int64 (__fastcall *v53)(struct Windows::Data::Json::IJsonObject *, PVOID, __int64); // rbx
  HSTRING_HEADER *v54; // rax
  __int64 *v56; // [rsp+28h] [rbp-69h] BYREF
  __int64 (__fastcall ***v57)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-61h] BYREF
  __int64 v58; // [rsp+38h] [rbp-59h] BYREF
  __int64 v59; // [rsp+40h] [rbp-51h] BYREF
  __int64 (__fastcall ***v60)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp-49h] BYREF
  __int64 v61; // [rsp+50h] [rbp-41h] BYREF
  __int64 v62; // [rsp+58h] [rbp-39h] BYREF
  struct Windows::Data::Json::IJsonObject **v63; // [rsp+60h] [rbp-31h]
  const WCHAR *v64; // [rsp+68h] [rbp-29h] BYREF
  __int128 v65; // [rsp+70h] [rbp-21h] BYREF
  __int64 v66; // [rsp+80h] [rbp-11h]
  __int64 v67; // [rsp+88h] [rbp-9h]
  HSTRING_HEADER hstringHeader; // [rsp+90h] [rbp-1h] BYREF
  __int64 v69; // [rsp+A8h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  v67 = -2LL;
  v2 = a2;
  v63 = a2;
  *a2 = 0LL;
  v65 = 0LL;
  v66 = 0LL;
  SortedAppList = PenWorkspace::Discover::RecentAppsCache::GetSortedAppList(this, (__int64)&v65);
  v4 = SortedAppList;
  if ( SortedAppList < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x318,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)SortedAppList);
    goto LABEL_59;
  }
  v58 = 0LL;
  v69 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Data.Json.JsonValue",
    0x1Cu,
    0x1Bu);
  v5 = v69;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v58);
  ActivationFactory = RoGetActivationFactory(v5, &GUID_5f6b544a_2f53_48e1_91a3_f78b50a6345c, &v58);
  v4 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x31B,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_58;
  }
  v60 = 0LL;
  v69 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Data.Json.JsonArray",
    0x1Cu,
    0x1Bu);
  v7 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Data::Json::IJsonArray>>(
         v69,
         (__int64 *)&v60);
  v4 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x31E,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_57;
  }
  v62 = 0LL;
  v8 = Microsoft::WRL::ComPtr<Windows::Data::Json::IJsonArray>::As<Windows::Foundation::Collections::IVector<Windows::Data::Json::IJsonValue *>>(
         &v60,
         &v62);
  v4 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x321,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_56;
  }
  v9 = 0;
  v10 = 0;
  v11 = (const WCHAR **)v65;
  v12 = (__int64)(*((_QWORD *)&v65 + 1) - v65) >> 4;
  if ( (int)v12 <= 0 )
  {
LABEL_30:
    v61 = 0LL;
    v48 = Microsoft::WRL::ComPtr<Windows::Data::Json::IJsonArray>::As<Windows::Data::Json::IJsonValue>(&v60, &v61);
    v4 = v48;
    if ( v48 >= 0 )
    {
      v69 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        &hstringHeader,
        L"Windows.Data.Json.JsonObject",
        0x1Du,
        0x1Cu);
      v48 = Windows::Foundation::ActivateInstance<Windows::Data::Json::IJsonObject>(v69, v2);
      v4 = v48;
      if ( v48 >= 0 )
      {
        v52 = *v2;
        v53 = *(__int64 (__fastcall **)(struct Windows::Data::Json::IJsonObject *, PVOID, __int64))(*(_QWORD *)v52 + 56LL);
        v54 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                &hstringHeader,
                (const WCHAR **)off_180451620);
        v48 = v53(v52, v54[1].Reserved.Reserved1, v61);
        v4 = v48;
        if ( v48 >= 0 )
        {
          v4 = 0;
          goto LABEL_55;
        }
        v49 = 842LL;
      }
      else
      {
        v49 = 841LL;
      }
    }
    else
    {
      v49 = 839LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v49,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)v48);
LABEL_55:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>(&v61);
    goto LABEL_56;
  }
  while ( 1 )
  {
    if ( v9 >= 30 )
    {
LABEL_29:
      v2 = v63;
      goto LABEL_30;
    }
    if ( *((int *)*v11 + 8) < 3 )
      goto LABEL_28;
    v57 = 0LL;
    v69 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Data.Json.JsonObject",
      0x1Du,
      0x1Cu);
    v13 = v69;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v57);
    v14 = Windows::Foundation::ActivateInstance<Windows::Data::Json::IJsonObject>(v13, &v57);
    v4 = v14;
    if ( v14 < 0 )
      break;
    v56 = 0LL;
    v15 = v58;
    v16 = *(__int64 (__fastcall **)(__int64, PVOID, __int64 **))(*(_QWORD *)v58 + 80LL);
    v17 = *v11;
    if ( *((_QWORD *)*v11 + 3) >= 8uLL )
      v17 = *(const WCHAR **)v17;
    v64 = v17;
    v18 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &v64);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v56);
    v19 = v16(v15, v18[1].Reserved.Reserved1, &v56);
    v4 = v19;
    if ( v19 < 0 )
    {
      v51 = 816LL;
      goto LABEL_45;
    }
    v20 = v57;
    v21 = (*v57)[7];
    v22 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, (const WCHAR **)off_180451610);
    v19 = v21(v20, (GUID *)v22[1].Reserved.Reserved1, v56);
    v4 = v19;
    if ( v19 < 0 )
    {
      v51 = 817LL;
      goto LABEL_45;
    }
    v23 = v58;
    v24 = *(__int64 (__fastcall **)(__int64, __int64, __int64 **))(*(_QWORD *)v58 + 72LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v56);
    v19 = v24(v23, v25, &v56);
    v4 = v19;
    if ( v19 < 0 )
    {
      v51 = 819LL;
      goto LABEL_45;
    }
    v26 = v57;
    v27 = (*v57)[7];
    v28 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, (const WCHAR **)off_180451618);
    v19 = v27(v26, (GUID *)v28[1].Reserved.Reserved1, v56);
    v4 = v19;
    if ( v19 < 0 )
    {
      v51 = 820LL;
      goto LABEL_45;
    }
    v29 = v58;
    v30 = *(__int64 (__fastcall **)(__int64, __int64, __int64 **))(*(_QWORD *)v58 + 72LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v56);
    v19 = v30(v29, v31, &v56);
    v4 = v19;
    if ( v19 < 0 )
    {
      v51 = 822LL;
      goto LABEL_45;
    }
    v32 = v57;
    v33 = (*v57)[7];
    v34 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, (const WCHAR **)off_180451630);
    v19 = v33(v32, (GUID *)v34[1].Reserved.Reserved1, v56);
    v4 = v19;
    if ( v19 < 0 )
    {
      v51 = 823LL;
      goto LABEL_45;
    }
    v35 = v58;
    v36 = *(__int64 (__fastcall **)(__int64, __int64, __int64 **))(*(_QWORD *)v58 + 72LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v56);
    v19 = v36(v35, v37, &v56);
    v4 = v19;
    if ( v19 < 0 )
    {
      v51 = 825LL;
      goto LABEL_45;
    }
    v38 = v57;
    v39 = (*v57)[7];
    v40 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, (const WCHAR **)off_180451638);
    v19 = v39(v38, (GUID *)v40[1].Reserved.Reserved1, v56);
    v4 = v19;
    if ( v19 < 0 )
    {
      v51 = 826LL;
      goto LABEL_45;
    }
    v41 = v58;
    v42 = *(__int64 (__fastcall **)(__int64, __int64, __int64 **))(*(_QWORD *)v58 + 64LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v56);
    LOBYTE(v43) = *((_BYTE *)*v11 + 44);
    v19 = v42(v41, v43, &v56);
    v4 = v19;
    if ( v19 < 0 )
    {
      v51 = 828LL;
LABEL_45:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v51,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
        (const char *)(unsigned int)v19);
      goto LABEL_46;
    }
    v44 = v57;
    v45 = (*v57)[7];
    v46 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, (const WCHAR **)off_180451628);
    v19 = v45(v44, (GUID *)v46[1].Reserved.Reserved1, v56);
    v4 = v19;
    if ( v19 < 0 )
    {
      v51 = 829LL;
      goto LABEL_45;
    }
    v59 = 0LL;
    v47 = Microsoft::WRL::ComPtr<Windows::Data::Json::IJsonArray>::As<Windows::Data::Json::IJsonValue>(&v57, &v59);
    v4 = v47;
    if ( v47 < 0 )
    {
      v50 = 832LL;
LABEL_34:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v50,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
        (const char *)(unsigned int)v47);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>(&v59);
LABEL_46:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>((__int64 *)&v56);
      goto LABEL_48;
    }
    v47 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v62 + 104LL))(v62, v59);
    v4 = v47;
    if ( v47 < 0 )
    {
      v50 = 833LL;
      goto LABEL_34;
    }
    ++v9;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>(&v59);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>((__int64 *)&v56);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>((__int64 *)&v57);
LABEL_28:
    ++v10;
    v11 += 2;
    if ( v10 >= (int)v12 )
      goto LABEL_29;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x32D,
    (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
    (const char *)(unsigned int)v14);
LABEL_48:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>((__int64 *)&v57);
LABEL_56:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>(&v62);
LABEL_57:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>((__int64 *)&v60);
LABEL_58:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>(&v58);
LABEL_59:
  std::vector<std::shared_ptr<PenWorkspace::Discover::AppUsageData>>::~vector<std::shared_ptr<PenWorkspace::Discover::AppUsageData>>((__int64)&v65);
  return v4;
}
