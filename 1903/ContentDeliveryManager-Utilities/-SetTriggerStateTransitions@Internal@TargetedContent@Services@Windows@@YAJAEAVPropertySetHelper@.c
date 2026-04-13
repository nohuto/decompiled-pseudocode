/*
 * XREFs of ?SetTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@Triggers@CreativeFramework@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180073DEC
 * Callers:
 *     ?SetTriggerRegistration@Internal@TargetedContent@Services@Windows@@YAJV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180074300 (-SetTriggerRegistration@Internal@TargetedContent@Services@Windows@@YAJV-$shared_ptr@VISettingsCo.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003584 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003774 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetString@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_ValueSet@@3QBGB@Triggers@CreativeFramework@@QEAAJPEBG0@Z @ 0x18002F094 (-SetString@-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_ValueSet@@3QBG.c)
 *     ??0?$basic_streambuf@GU?$char_traits@G@std@@@std@@IEAA@XZ @ 0x1800335D0 (--0-$basic_streambuf@GU-$char_traits@G@std@@@std@@IEAA@XZ.c)
 *     ?GetStringBytes@Internal@TargetedContent@Services@Windows@@YAXPEAUHSTRING__@@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@PEAI@Z @ 0x18006E7A0 (-GetStringBytes@Internal@TargetedContent@Services@Windows@@YAXPEAUHSTRING__@@AEAV-$unique_any_t@.c)
 *     ?GetBase64StringFromBytes@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@IPEBE@Z @ 0x18006EDFC (-GetBase64StringFromBytes@Internal@TargetedContent@Services@Windows@@YA-AVHString@Wrappers@WRL@M.c)
 *     ?ResolveNameFromTriggerState@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContentTriggerState@1234@@Z @ 0x1800706FC (-ResolveNameFromTriggerState@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContent.c)
 *     ??1?$basic_ostringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UEAA@XZ @ 0x180075EDC (--1-$basic_ostringstream@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@UEAA@XZ.c)
 *     ?str@?$basic_stringbuf@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@XZ @ 0x180076414 (-str@-$basic_stringbuf@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBA-AV-$basic_string@_W.c)
 *     ?init@?$basic_ios@_WU?$char_traits@_W@std@@@std@@IEAAXPEAV?$basic_streambuf@_WU?$char_traits@_W@std@@@2@_N@Z @ 0x1800766A8 (-init@-$basic_ios@_WU-$char_traits@_W@std@@@std@@IEAAXPEAV-$basic_streambuf@_WU-$char_traits@_W@.c)
 *     ??$?6_WU?$char_traits@_W@std@@@std@@YAAEAV?$basic_ostream@_WU?$char_traits@_W@std@@@0@AEAV10@PEB_W@Z @ 0x180076968 (--$-6_WU-$char_traits@_W@std@@@std@@YAAEAV-$basic_ostream@_WU-$char_traits@_W@std@@@0@AEAV10@PEB.c)
 *     ?_Ios_base_dtor@ios_base@std@@CAXPEAV12@@Z @ 0x1800AEDEC (-_Ios_base_dtor@ios_base@std@@CAXPEAV12@@Z.c)
 *     __security_check_cookie @ 0x1800CA900 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall Windows::Services::TargetedContent::Internal::SetTriggerStateTransitions(
        Windows::Services::TargetedContent::Internal *this,
        struct CreativeFramework::Triggers::PropertySetHelper *a2,
        struct Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *a3)
{
  int v4; // eax
  int v5; // eax
  wil::details::in1diag3 *v6; // rcx
  int v7; // r14d
  unsigned int i; // esi
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rcx
  const char *v12; // r9
  __int64 v13; // rdx
  __int64 result; // rax
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, HSTRING *); // rdi
  int v17; // eax
  wil::details::in1diag3 *v18; // rcx
  int v19; // eax
  wil::details::in1diag3 *v20; // rcx
  int v21; // eax
  wil::details::in1diag3 *v22; // rcx
  void *v23; // rbx
  PCWSTR StringRawBuffer; // rdx
  __int64 v25; // rax
  __int64 v26; // rbx
  wchar_t *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rbx
  wchar_t *v30; // rax
  __int64 v31; // rcx
  const WCHAR *v32; // r8
  int v33; // eax
  wil::details::in1diag3 *v34; // rcx
  __int64 v35; // rcx
  int v36; // [rsp+20h] [rbp-198h] BYREF
  __int64 v37; // [rsp+28h] [rbp-190h] BYREF
  int v38; // [rsp+30h] [rbp-188h] BYREF
  __int64 v39; // [rsp+38h] [rbp-180h] BYREF
  HSTRING v40; // [rsp+40h] [rbp-178h] BYREF
  unsigned int v41; // [rsp+48h] [rbp-170h] BYREF
  int v42; // [rsp+4Ch] [rbp-16Ch] BYREF
  HSTRING string; // [rsp+50h] [rbp-168h] BYREF
  LPVOID pv[3]; // [rsp+58h] [rbp-160h] BYREF
  int *v45; // [rsp+70h] [rbp-148h] BYREF
  _QWORD v46[14]; // [rsp+78h] [rbp-140h] BYREF
  int v47; // [rsp+E8h] [rbp-D0h]
  int v48; // [rsp+F4h] [rbp-C4h]
  _QWORD v49[13]; // [rsp+F8h] [rbp-C0h] BYREF
  void *v50[3]; // [rsp+160h] [rbp-58h] BYREF
  unsigned __int64 v51; // [rsp+178h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+0h]

  pv[1] = (LPVOID)-2LL;
  try
  {
    v36 = 0;
    v39 = 0LL;
    v4 = (*(__int64 (__fastcall **)(struct CreativeFramework::Triggers::PropertySetHelper *, __int64 *))(*(_QWORD *)a2 + 320LL))(
           a2,
           &v39);
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1CA,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)v4);
    }
    else
    {
      v5 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v39 + 56LL))(v39, &v41);
      v6 = retaddr;
      if ( v5 >= 0 )
      {
        v45 = (int *)&std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::`vbtable'{for `std::basic_ostream<unsigned short>'};
        v7 = 1;
        v36 = 1;
        v49[0] = &std::basic_ostream<unsigned short>::`vftable';
        v48 = 120;
        std::wios::init((std::ios_base *)v49);
        *(_QWORD *)((char *)&v46[-1] + v45[1]) = &std::wostringstream::`vftable';
        *(_DWORD *)((char *)&pv[2] + v45[1] + 4) = v45[1] - 136;
        std::basic_streambuf<unsigned short>::basic_streambuf<unsigned short>(v46);
        v46[0] = &std::basic_stringbuf<unsigned short>::`vftable';
        v46[13] = 0LL;
        v47 = 4;
        for ( i = 0; i < v41; ++i )
        {
          v37 = 0LL;
          v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v39 + 48LL))(v39, i, &v37);
          v10 = v9;
          if ( v9 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x1D2,
              (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
              (const char *)(unsigned int)v9);
            v11 = v37;
            if ( v37 )
            {
              v37 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
            }
            std::wostringstream::~wostringstream(v49);
            v49[0] = &std::ios_base::`vftable';
            std::ios_base::_Ios_base_dtor((struct std::ios_base *)v49);
            v13 = v39;
            if ( v39 )
            {
              v39 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
            }
            return v10;
          }
          v40 = 0LL;
          v15 = v37;
          v16 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v37 + 48LL);
          WindowsDeleteString(0LL);
          v40 = 0LL;
          v17 = v16(v15, &v40);
          v18 = retaddr;
          if ( v17 < 0 )
            goto LABEL_33;
          v19 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v37 + 80LL))(v37, &v38);
          v20 = retaddr;
          if ( v19 < 0 )
            goto LABEL_34;
          v21 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v37 + 64LL))(v37, &v42);
          v22 = retaddr;
          if ( v21 < 0 )
            goto LABEL_35;
          if ( i )
            std::operator<<<wchar_t,std::char_traits<wchar_t>>(&v45, L"|");
          v36 = 0;
          pv[0] = 0LL;
          Windows::Services::TargetedContent::Internal::GetStringBytes(v40, pv, &v36);
          v23 = pv[0];
          Windows::Services::TargetedContent::Internal::GetBase64StringFromBytes(&string, v36, (__int64)pv[0]);
          v7 |= 4u;
          if ( v23 )
            CoTaskMemFree(v23);
          StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
          v25 = std::operator<<<wchar_t,std::char_traits<wchar_t>>(&v45, StringRawBuffer);
          v26 = std::operator<<<wchar_t,std::char_traits<wchar_t>>(v25, L";");
          v27 = Windows::Services::TargetedContent::Internal::ResolveNameFromTriggerState(v42);
          v28 = std::operator<<<wchar_t,std::char_traits<wchar_t>>(v26, v27);
          v29 = std::operator<<<wchar_t,std::char_traits<wchar_t>>(v28, L";");
          v30 = Windows::Services::TargetedContent::Internal::ResolveNameFromTriggerState(v38);
          std::operator<<<wchar_t,std::char_traits<wchar_t>>(v29, v30);
          WindowsDeleteString(string);
          string = 0LL;
          WindowsDeleteString(v40);
          v40 = 0LL;
          v31 = v37;
          if ( v37 )
          {
            v37 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
          }
        }
        if ( !v41 )
          goto LABEL_28;
        std::wstringbuf::str(v46, v50);
        v32 = (const WCHAR *)v50;
        if ( v51 >= 8 )
          v32 = (const WCHAR *)v50[0];
        v33 = CreativeFramework::Triggers::PropertySetHelperBase<&unsigned short const near * const RuntimeClass_Windows_Foundation_Collections_ValueSet>::SetString(
                (__int64)this,
                L"StateTransitions",
                v32);
        v34 = retaddr;
        if ( v33 >= 0 )
        {
          if ( v51 >= 8 )
            operator delete(v50[0]);
LABEL_28:
          std::wostringstream::~wostringstream(v49);
          v49[0] = &std::ios_base::`vftable';
          std::ios_base::_Ios_base_dtor((struct std::ios_base *)v49);
          v35 = v39;
          if ( v39 )
          {
            v39 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
          }
          return 0LL;
        }
LABEL_36:
        wil::details::in1diag3::Throw_Hr(
          v34,
          (void *)0x1E9,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
          (const char *)(unsigned int)v33);
        JUMPOUT(0x1800742C3LL);
      }
    }
    wil::details::in1diag3::Throw_Hr(
      v6,
      (void *)0x1CD,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v5);
LABEL_33:
    wil::details::in1diag3::Throw_Hr(
      v18,
      (void *)0x1D5,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v17);
LABEL_34:
    wil::details::in1diag3::Throw_Hr(
      v20,
      (void *)0x1D7,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v19);
LABEL_35:
    wil::details::in1diag3::Throw_Hr(
      v22,
      (void *)0x1D9,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v21);
    goto LABEL_36;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1ED,
                           (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
                           v12);
  }
  return result;
}
