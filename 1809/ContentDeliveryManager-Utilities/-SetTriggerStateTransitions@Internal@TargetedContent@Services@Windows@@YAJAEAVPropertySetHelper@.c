/*
 * XREFs of ?SetTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@Triggers@CreativeFramework@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180072608
 * Callers:
 *     ?SetTriggerRegistration@Internal@TargetedContent@Services@Windows@@YAJV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180072B2C (-SetTriggerRegistration@Internal@TargetedContent@Services@Windows@@YAJV-$shared_ptr@VISettingsCo.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000366C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003864 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetString@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_ValueSet@@3QBGB@Triggers@CreativeFramework@@QEAAJPEBG0@Z @ 0x18002E644 (-SetString@-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_ValueSet@@3QBG.c)
 *     ??0?$basic_streambuf@GU?$char_traits@G@std@@@std@@IEAA@XZ @ 0x180032B2C (--0-$basic_streambuf@GU-$char_traits@G@std@@@std@@IEAA@XZ.c)
 *     ?GetStringBytes@Internal@TargetedContent@Services@Windows@@YAXPEAUHSTRING__@@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@@wil@@PEAI@Z @ 0x18006CF10 (-GetStringBytes@Internal@TargetedContent@Services@Windows@@YAXPEAUHSTRING__@@AEAV-$unique_any_t@.c)
 *     ?GetBase64StringFromBytes@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@IPEBE@Z @ 0x18006D55C (-GetBase64StringFromBytes@Internal@TargetedContent@Services@Windows@@YA-AVHString@Wrappers@WRL@M.c)
 *     ?ResolveNameFromTriggerState@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContentTriggerState@1234@@Z @ 0x18006EF18 (-ResolveNameFromTriggerState@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContent.c)
 *     ??1?$basic_ostringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UEAA@XZ @ 0x1800746CC (--1-$basic_ostringstream@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@UEAA@XZ.c)
 *     ?str@?$basic_stringbuf@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@XZ @ 0x180074C04 (-str@-$basic_stringbuf@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBA-AV-$basic_string@_W.c)
 *     ?init@?$basic_ios@_WU?$char_traits@_W@std@@@std@@IEAAXPEAV?$basic_streambuf@_WU?$char_traits@_W@std@@@2@_N@Z @ 0x180074E84 (-init@-$basic_ios@_WU-$char_traits@_W@std@@@std@@IEAAXPEAV-$basic_streambuf@_WU-$char_traits@_W@.c)
 *     ??$?6_WU?$char_traits@_W@std@@@std@@YAAEAV?$basic_ostream@_WU?$char_traits@_W@std@@@0@AEAV10@PEB_W@Z @ 0x180075144 (--$-6_WU-$char_traits@_W@std@@@std@@YAAEAV-$basic_ostream@_WU-$char_traits@_W@std@@@0@AEAV10@PEB.c)
 *     ?_Ios_base_dtor@ios_base@std@@CAXPEAV12@@Z @ 0x1800AAE6C (-_Ios_base_dtor@ios_base@std@@CAXPEAV12@@Z.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
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
  int v7; // esi
  unsigned int i; // edi
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rcx
  const char *v12; // r9
  __int64 v13; // rdx
  __int64 result; // rax
  __int64 v15; // rbx
  int v16; // eax
  wil::details::in1diag3 *v17; // rcx
  int v18; // eax
  wil::details::in1diag3 *v19; // rcx
  int v20; // eax
  wil::details::in1diag3 *v21; // rcx
  void *v22; // rbx
  PCWSTR StringRawBuffer; // rbx
  wchar_t *v24; // r15
  wchar_t *v25; // r14
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rcx
  const WCHAR *v31; // r8
  int v32; // eax
  wil::details::in1diag3 *v33; // rcx
  __int64 v34; // rcx
  int v35; // [rsp+20h] [rbp-198h] BYREF
  __int64 v36; // [rsp+28h] [rbp-190h] BYREF
  int v37; // [rsp+30h] [rbp-188h] BYREF
  __int64 v38; // [rsp+38h] [rbp-180h] BYREF
  HSTRING v39; // [rsp+40h] [rbp-178h] BYREF
  unsigned int v40; // [rsp+48h] [rbp-170h] BYREF
  int v41; // [rsp+4Ch] [rbp-16Ch] BYREF
  HSTRING string; // [rsp+50h] [rbp-168h] BYREF
  LPVOID pv[3]; // [rsp+58h] [rbp-160h] BYREF
  int *v44; // [rsp+70h] [rbp-148h] BYREF
  _QWORD v45[14]; // [rsp+78h] [rbp-140h] BYREF
  int v46; // [rsp+E8h] [rbp-D0h]
  int v47; // [rsp+F4h] [rbp-C4h]
  _QWORD v48[13]; // [rsp+F8h] [rbp-C0h] BYREF
  void *v49[3]; // [rsp+160h] [rbp-58h] BYREF
  unsigned __int64 v50; // [rsp+178h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+0h]

  pv[1] = (LPVOID)-2LL;
  try
  {
    v35 = 0;
    v38 = 0LL;
    v4 = (*(__int64 (__fastcall **)(struct CreativeFramework::Triggers::PropertySetHelper *, __int64 *))(*(_QWORD *)a2 + 320LL))(
           a2,
           &v38);
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
      v5 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v38 + 56LL))(v38, &v40);
      v6 = retaddr;
      if ( v5 >= 0 )
      {
        v44 = (int *)&std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::`vbtable'{for `std::basic_ostream<unsigned short>'};
        v7 = 1;
        v35 = 1;
        v48[0] = &std::basic_ostream<unsigned short>::`vftable';
        v47 = 120;
        std::wios::init((std::ios_base *)v48);
        *(_QWORD *)((char *)&v45[-1] + v44[1]) = &std::wostringstream::`vftable';
        *(_DWORD *)((char *)&pv[2] + v44[1] + 4) = v44[1] - 136;
        pv[0] = v45;
        std::basic_streambuf<unsigned short>::basic_streambuf<unsigned short>(v45);
        v45[0] = &std::basic_stringbuf<unsigned short>::`vftable';
        v45[13] = 0LL;
        v46 = 4;
        for ( i = 0; i < v40; ++i )
        {
          v36 = 0LL;
          v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v38 + 48LL))(v38, i, &v36);
          v10 = v9;
          if ( v9 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x1D2,
              (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
              (const char *)(unsigned int)v9);
            v11 = v36;
            if ( v36 )
            {
              v36 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
            }
            std::wostringstream::~wostringstream(v48);
            v48[0] = &std::ios_base::`vftable';
            std::ios_base::_Ios_base_dtor((struct std::ios_base *)v48);
            v13 = v38;
            if ( v38 )
            {
              v38 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
            }
            return v10;
          }
          v39 = 0LL;
          v15 = v36;
          WindowsDeleteString(0LL);
          v39 = 0LL;
          v16 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v15 + 48LL))(v15, &v39);
          v17 = retaddr;
          if ( v16 < 0 )
            goto LABEL_33;
          v18 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v36 + 80LL))(v36, &v41);
          v19 = retaddr;
          if ( v18 < 0 )
            goto LABEL_34;
          v20 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v36 + 64LL))(v36, &v37);
          v21 = retaddr;
          if ( v20 < 0 )
            goto LABEL_35;
          if ( i )
            std::operator<<<wchar_t,std::char_traits<wchar_t>>(&v44, L"|");
          v35 = 0;
          pv[0] = 0LL;
          Windows::Services::TargetedContent::Internal::GetStringBytes(v39, pv, &v35);
          v22 = pv[0];
          Windows::Services::TargetedContent::Internal::GetBase64StringFromBytes(&string, v35, (__int64)pv[0]);
          v7 |= 4u;
          if ( v22 )
            CoTaskMemFree(v22);
          StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
          v24 = Windows::Services::TargetedContent::Internal::ResolveNameFromTriggerState(v41);
          v25 = Windows::Services::TargetedContent::Internal::ResolveNameFromTriggerState(v37);
          v26 = std::operator<<<wchar_t,std::char_traits<wchar_t>>(&v44, StringRawBuffer);
          v27 = std::operator<<<wchar_t,std::char_traits<wchar_t>>(v26, L";");
          v28 = std::operator<<<wchar_t,std::char_traits<wchar_t>>(v27, v25);
          v29 = std::operator<<<wchar_t,std::char_traits<wchar_t>>(v28, L";");
          std::operator<<<wchar_t,std::char_traits<wchar_t>>(v29, v24);
          WindowsDeleteString(string);
          string = 0LL;
          WindowsDeleteString(v39);
          v39 = 0LL;
          v30 = v36;
          if ( v36 )
          {
            v36 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
          }
        }
        if ( !v40 )
          goto LABEL_28;
        std::wstringbuf::str(v45, v49);
        v31 = (const WCHAR *)v49;
        if ( v50 >= 8 )
          v31 = (const WCHAR *)v49[0];
        v32 = CreativeFramework::Triggers::PropertySetHelperBase<&unsigned short const near * const RuntimeClass_Windows_Foundation_Collections_ValueSet>::SetString(
                (__int64)this,
                L"StateTransitions",
                v31);
        v33 = retaddr;
        if ( v32 >= 0 )
        {
          if ( v50 >= 8 )
            operator delete(v49[0]);
LABEL_28:
          std::wostringstream::~wostringstream(v48);
          v48[0] = &std::ios_base::`vftable';
          std::ios_base::_Ios_base_dtor((struct std::ios_base *)v48);
          v34 = v38;
          if ( v38 )
          {
            v38 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
          }
          return 0LL;
        }
LABEL_36:
        wil::details::in1diag3::Throw_Hr(
          v33,
          (void *)0x1E9,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
          (const char *)(unsigned int)v32);
        JUMPOUT(0x180072AF0LL);
      }
    }
    wil::details::in1diag3::Throw_Hr(
      v6,
      (void *)0x1CD,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v5);
LABEL_33:
    wil::details::in1diag3::Throw_Hr(
      v17,
      (void *)0x1D5,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v16);
LABEL_34:
    wil::details::in1diag3::Throw_Hr(
      v19,
      (void *)0x1D7,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v18);
LABEL_35:
    wil::details::in1diag3::Throw_Hr(
      v21,
      (void *)0x1D9,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v20);
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
