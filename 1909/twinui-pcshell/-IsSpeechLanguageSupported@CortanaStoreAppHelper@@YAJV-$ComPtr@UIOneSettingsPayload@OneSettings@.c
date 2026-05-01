/*
 * XREFs of ?IsSpeechLanguageSupported@CortanaStoreAppHelper@@YAJV?$ComPtr@UIOneSettingsPayload@OneSettings@Flighting@Internal@Windows@@@WRL@Microsoft@@PEAE@Z @ 0x1801E6050
 * Callers:
 *     ?UpdateReplaceDecision@CortanaStoreAppHelper@@YAJXZ @ 0x1801EAF5C (-UpdateReplaceDecision@CortanaStoreAppHelper@@YAJXZ.c)
 * Callees:
 *     ?CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z @ 0x180042D24 (-CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800436F0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$As@U?$IVector@PEAUIJsonValue@Json@Data@Windows@@@Collections@Foundation@Windows@@@?$ComPtr@UIJsonArray@Json@Data@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IVector@PEAUIJsonValue@Json@Data@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801E07FC (--$As@U-$IVector@PEAUIJsonValue@Json@Data@Windows@@@Collections@Foundation@Windows@@@-$ComPtr@UI.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CortanaStoreAppHelper::IsSpeechLanguageSupported(
        __int64 (__fastcall ***a1)(_QWORD, GUID *, __int64 *),
        _BYTE *a2)
{
  __int64 (__fastcall **v4)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v5)(_QWORD, __int64, _QWORD); // rbx
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rbx
  int ActivationFactory; // eax
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, __int64 *); // rdi
  int v14; // eax
  char v15; // r14
  __int64 v16; // rbx
  __int64 (__fastcall *v17)(__int64, HSTRING *); // rdi
  int v18; // eax
  unsigned int v19; // esi
  __int64 (__fastcall ***v20)(_QWORD, GUID *, __int64 *); // rbx
  __int64 (__fastcall *v21)(_QWORD, GUID *, __int64 *); // rdi
  int v22; // eax
  HSTRING v23; // r8
  __int64 v25; // [rsp+28h] [rbp-49h] BYREF
  HSTRING string; // [rsp+30h] [rbp-41h] BYREF
  __int64 v27; // [rsp+38h] [rbp-39h] BYREF
  unsigned int v28; // [rsp+40h] [rbp-31h] BYREF
  __int64 v29; // [rsp+48h] [rbp-29h] BYREF
  HSTRING v30; // [rsp+50h] [rbp-21h] BYREF
  __int64 (__fastcall ***v31[3])(_QWORD, GUID *, __int64 *); // [rsp+58h] [rbp-19h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp-1h] BYREF
  __int64 v33; // [rsp+88h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v31[1] = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))-2LL;
  v31[2] = a1;
  *a2 = 0;
  v31[0] = 0LL;
  v4 = *a1;
  v5 = (__int64 (__fastcall *)(_QWORD, __int64, _QWORD))*((_QWORD *)**a1 + 8);
  v33 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"SupportedSpeechLanguages", 0x19u, 0x18u);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v31);
  v6 = v5(v4, v33, v31);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v25 = 0LL;
    v8 = Microsoft::WRL::ComPtr<Windows::Data::Json::IJsonArray>::As<Windows::Foundation::Collections::IVector<Windows::Data::Json::IJsonValue *>>(
           v31,
           &v25);
    v7 = v8;
    if ( v8 < 0 )
    {
      v9 = 312LL;
LABEL_5:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreapphelper.cpp",
        (const char *)(unsigned int)v8);
LABEL_6:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
      goto LABEL_24;
    }
    v28 = 0;
    v8 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v25 + 56LL))(v25, &v28);
    v7 = v8;
    if ( v8 < 0 )
    {
      v9 = 315LL;
      goto LABEL_5;
    }
    v27 = 0LL;
    v33 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Media.Speech.SpeechSettings",
      0x24u,
      0x23u);
    v10 = v33;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
    ActivationFactory = RoGetActivationFactory(v10, &GUID_1085d99a_9b04_4af6_8d33_3b27bc0d6f23, &v27);
    v7 = ActivationFactory;
    if ( ActivationFactory < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x13E,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreapphelper.cpp",
        (const char *)(unsigned int)ActivationFactory);
LABEL_11:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
      goto LABEL_6;
    }
    v29 = 0LL;
    v12 = v27;
    v13 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v27 + 56LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
    v14 = v13(v12, &v29);
    v7 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x141,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreapphelper.cpp",
        (const char *)(unsigned int)v14);
LABEL_14:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
      goto LABEL_11;
    }
    v15 = 0;
    v16 = v29;
    if ( v29 )
    {
      string = 0LL;
      v17 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v29 + 48LL);
      WindowsDeleteString(0LL);
      string = 0LL;
      v18 = v17(v16, &string);
      v7 = v18;
      if ( v18 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x149,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreapphelper.cpp",
          (const char *)(unsigned int)v18);
LABEL_18:
        WindowsDeleteString(string);
        string = 0LL;
        goto LABEL_14;
      }
      v19 = 0;
      if ( v28 )
      {
        while ( 1 )
        {
          v30 = 0LL;
          v20 = v31[0];
          v21 = (*v31[0])[8];
          WindowsDeleteString(0LL);
          v30 = 0LL;
          v22 = v21(v20, (GUID *)v19, (__int64 *)&v30);
          v7 = v22;
          if ( v22 < 0 )
            break;
          v15 |= (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                                 (Microsoft::WRL::Wrappers::Details *)v30,
                                 string,
                                 v23) == 0;
          WindowsDeleteString(v30);
          if ( ++v19 >= v28 )
            goto LABEL_22;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x14E,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreapphelper.cpp",
          (const char *)(unsigned int)v22);
        WindowsDeleteString(v30);
        v30 = 0LL;
        goto LABEL_18;
      }
LABEL_22:
      WindowsDeleteString(string);
    }
    *a2 = v15;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
    v7 = 0;
    goto LABEL_24;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x135,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreapphelper.cpp",
    (const char *)(unsigned int)v6);
LABEL_24:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v31);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)a1);
  return v7;
}
