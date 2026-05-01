/*
 * XREFs of ?Reactivate@CShoulderTapExperienceManager@@AEAAJ_N@Z @ 0x1801684E4
 * Callers:
 *     ?OnViewPropertiesChanging@CShoulderTapExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180167AE0 (-OnViewPropertiesChanging@CShoulderTapExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?ShoulderTap@CShoulderTapExperienceManager@@UEAAJPEAUHSTRING__@@000HHH000@Z @ 0x180168C00 (-ShoulderTap@CShoulderTapExperienceManager@@UEAAJPEAUHSTRING__@@000HHH000@Z.c)
 * Callees:
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x180018C04 (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180025DE0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJEPEAPEAUIInspectable@@@ZE@Z @ 0x180026320 (--$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180027064 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ?RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@KPEAUHSTRING__@@11PEAUIPropertySet@Collections@Foundation@6@2@Z @ 0x18003EC80 (-RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18005EE24 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJIPEAPEAUIInspectable@@@ZI@Z @ 0x180071724 (--$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ??$SetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJ0PEAPEAUIInspectable@@@Z0@Z @ 0x180071804 (--$SetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@.c)
 *     ??$SetValue@H@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJHPEAPEAUIInspectable@@@ZH@Z @ 0x180075A7C (--$SetValue@H@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?GetPeopleBarScreenEdge@CShoulderTapExperienceManager@@AEAAJPEAW4EDGEUI_TRAYSTUCKPLACE@@@Z @ 0x18016784C (-GetPeopleBarScreenEdge@CShoulderTapExperienceManager@@AEAAJPEAW4EDGEUI_TRAYSTUCKPLACE@@@Z.c)
 */

// Hidden C++ exception states: #wind=17
__int64 __fastcall CShoulderTapExperienceManager::Reactivate(CShoulderTapExperienceManager *this, char a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  HSTRING_HEADER *v6; // rax
  __int64 v7; // r8
  int v8; // eax
  __int64 v9; // r9
  __int64 v10; // rdx
  HSTRING_HEADER *v11; // rax
  __int64 v12; // r8
  int v13; // eax
  HSTRING_HEADER *v14; // rax
  __int64 v15; // r8
  int v16; // eax
  HSTRING_HEADER *v17; // rax
  __int64 v18; // r8
  int v19; // eax
  HSTRING_HEADER *v20; // rax
  __int64 v21; // r8
  int v22; // eax
  HSTRING_HEADER *v23; // rax
  __int64 v24; // r8
  int v25; // eax
  HSTRING_HEADER *v26; // rax
  __int64 v27; // r8
  int v28; // eax
  HSTRING_HEADER *v29; // rax
  __int64 v30; // r8
  int v31; // eax
  HSTRING_HEADER *v32; // rax
  __int64 v33; // r8
  int v34; // eax
  HSTRING_HEADER *v35; // rax
  __int64 v36; // r8
  int v37; // eax
  HSTRING_HEADER *v38; // rax
  __int64 v39; // r8
  int v40; // eax
  int PeopleBarScreenEdge; // eax
  HSTRING_HEADER *v42; // rax
  __int64 v43; // r8
  int v44; // eax
  unsigned int v45; // ebx
  unsigned int v46; // esi
  HSTRING_HEADER *v47; // rax
  __int64 v48; // r8
  int v49; // eax
  HSTRING_HEADER *v50; // rax
  __int64 v51; // r8
  int v52; // eax
  int v53; // eax
  HSTRING_HEADER *v54; // rax
  int v55; // eax
  HSTRING v57; // [rsp+48h] [rbp-9h] BYREF
  unsigned int v58; // [rsp+50h] [rbp-1h] BYREF
  HSTRING v59[2]; // [rsp+58h] [rbp+7h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+68h] [rbp+17h] BYREF
  __int64 v61; // [rsp+80h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v59[1] = (HSTRING)-2LL;
  v59[0] = 0LL;
  v61 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Foundation.Collections.ValueSet",
    0x28u,
    0x27u);
  v4 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
         v61,
         v59);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v57 = v59[0];
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v57);
    v6 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, (const WCHAR **)&off_180400100);
    v8 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<HSTRING__ *>(
           (Windows::Internal::ShellHelpers::PropertySetHelper *)&v57,
           (HSTRING)v6[1].Reserved.Reserved1,
           v7,
           *((_QWORD *)this + 31));
    v5 = v8;
    if ( v8 < 0 )
    {
      v9 = (unsigned int)v8;
      v10 = 107LL;
      goto LABEL_46;
    }
    v11 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, (const WCHAR **)&off_1804000E0);
    v13 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<HSTRING__ *>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v57,
            (HSTRING)v11[1].Reserved.Reserved1,
            v12,
            *((_QWORD *)this + 32));
    v5 = v13;
    if ( v13 < 0 )
    {
      v9 = (unsigned int)v13;
      v10 = 108LL;
      goto LABEL_46;
    }
    v14 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, (const WCHAR **)&off_1804000F0);
    v16 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<HSTRING__ *>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v57,
            (HSTRING)v14[1].Reserved.Reserved1,
            v15,
            *((_QWORD *)this + 33));
    v5 = v16;
    if ( v16 < 0 )
    {
      v9 = (unsigned int)v16;
      v10 = 109LL;
      goto LABEL_46;
    }
    v17 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, (const WCHAR **)&off_1804000E8);
    v19 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<HSTRING__ *>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v57,
            (HSTRING)v17[1].Reserved.Reserved1,
            v18,
            *((_QWORD *)this + 34));
    v5 = v19;
    if ( v19 < 0 )
    {
      v9 = (unsigned int)v19;
      v10 = 110LL;
      goto LABEL_46;
    }
    v20 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, (const WCHAR **)&off_1804000C0);
    v22 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v57,
            (HSTRING)v20[1].Reserved.Reserved1,
            v21,
            *((_DWORD *)this + 70));
    v5 = v22;
    if ( v22 < 0 )
    {
      v9 = (unsigned int)v22;
      v10 = 111LL;
      goto LABEL_46;
    }
    v23 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, (const WCHAR **)&off_1804000B8);
    v25 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v57,
            (HSTRING)v23[1].Reserved.Reserved1,
            v24,
            *((_DWORD *)this + 71));
    v5 = v25;
    if ( v25 < 0 )
    {
      v9 = (unsigned int)v25;
      v10 = 112LL;
      goto LABEL_46;
    }
    v26 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, (const WCHAR **)&off_1804000D0);
    v28 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v57,
            (HSTRING)v26[1].Reserved.Reserved1,
            v27,
            *((_DWORD *)this + 72));
    v5 = v28;
    if ( v28 < 0 )
    {
      v9 = (unsigned int)v28;
      v10 = 113LL;
      goto LABEL_46;
    }
    v29 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, (const WCHAR **)&off_1804000C8);
    v31 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<HSTRING__ *>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v57,
            (HSTRING)v29[1].Reserved.Reserved1,
            v30,
            *((_QWORD *)this + 37));
    v5 = v31;
    if ( v31 < 0 )
    {
      v9 = (unsigned int)v31;
      v10 = 114LL;
      goto LABEL_46;
    }
    v32 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, (const WCHAR **)&off_1804000A0);
    v34 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<HSTRING__ *>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v57,
            (HSTRING)v32[1].Reserved.Reserved1,
            v33,
            *((_QWORD *)this + 38));
    v5 = v34;
    if ( v34 < 0 )
    {
      v9 = (unsigned int)v34;
      v10 = 115LL;
      goto LABEL_46;
    }
    v35 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, (const WCHAR **)&off_1804000B0);
    v37 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<HSTRING__ *>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v57,
            (HSTRING)v35[1].Reserved.Reserved1,
            v36,
            *((_QWORD *)this + 39));
    v5 = v37;
    if ( v37 < 0 )
    {
      v9 = (unsigned int)v37;
      v10 = 116LL;
      goto LABEL_46;
    }
    v38 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, (const WCHAR **)&off_180400098);
    v40 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v57,
            (HSTRING)v38[1].Reserved.Reserved1,
            v39,
            a2);
    v5 = v40;
    if ( v40 < 0 )
    {
      v9 = (unsigned int)v40;
      v10 = 117LL;
      goto LABEL_46;
    }
    v58 = -1;
    PeopleBarScreenEdge = CShoulderTapExperienceManager::GetPeopleBarScreenEdge(
                            this,
                            (enum EDGEUI_TRAYSTUCKPLACE *)&v58);
    v5 = PeopleBarScreenEdge;
    if ( PeopleBarScreenEdge < 0 )
    {
      v9 = (unsigned int)PeopleBarScreenEdge;
      v10 = 121LL;
      goto LABEL_46;
    }
    v42 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, (const WCHAR **)&off_1804000D8);
    v44 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<int>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v57,
            (HSTRING)v42[1].Reserved.Reserved1,
            v43,
            v58);
    v5 = v44;
    if ( v44 < 0 )
    {
      v9 = (unsigned int)v44;
      v10 = 122LL;
      goto LABEL_46;
    }
    v45 = 184;
    v46 = 184;
    if ( v58 != -1 )
    {
      switch ( v58 )
      {
        case 0u:
          goto LABEL_35;
        case 1u:
LABEL_34:
          v46 = 202;
          goto LABEL_36;
        case 2u:
LABEL_35:
          v45 = 202;
LABEL_36:
          v47 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                  &hstringHeader,
                  (const WCHAR **)&off_1804000A8);
          v49 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(
                  (Windows::Internal::ShellHelpers::PropertySetHelper *)&v57,
                  (HSTRING)v47[1].Reserved.Reserved1,
                  v48,
                  v45);
          v5 = v49;
          if ( v49 >= 0 )
          {
            v50 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                    &hstringHeader,
                    (const WCHAR **)&off_180400090);
            v52 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(
                    (Windows::Internal::ShellHelpers::PropertySetHelper *)&v57,
                    (HSTRING)v50[1].Reserved.Reserved1,
                    v51,
                    v46);
            v5 = v52;
            if ( v52 >= 0 )
            {
              v53 = CSingleViewShellExperience::Show(
                      (__int64)this + 40,
                      (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)1);
              v5 = v53;
              if ( v53 >= 0 )
              {
                v54 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                        &hstringHeader,
                        (const WCHAR **)&off_1804000F8);
                v55 = ExperienceManagerUtils::RaiseReactivatedEvent(
                        *((ExperienceManagerUtils **)this + 8),
                        (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)*((unsigned int *)this + 42),
                        *((HSTRING *)this + 6),
                        *((HSTRING *)this + 7),
                        (HSTRING)v54[1].Reserved.Reserved1,
                        v59[0]);
                v5 = v55;
                if ( v55 >= 0 )
                {
                  v5 = 0;
LABEL_47:
                  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v57);
                  goto LABEL_48;
                }
                v9 = (unsigned int)v55;
                v10 = 153LL;
              }
              else
              {
                v9 = (unsigned int)v53;
                v10 = 152LL;
              }
            }
            else
            {
              v9 = (unsigned int)v52;
              v10 = 149LL;
            }
          }
          else
          {
            v9 = (unsigned int)v49;
            v10 = 148LL;
          }
LABEL_46:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v10,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shouldertapexperiencemanager.cpp",
            (const char *)v9);
          goto LABEL_47;
        case 3u:
          goto LABEL_34;
      }
    }
    v5 = -2147024809;
    v9 = 2147942487LL;
    v10 = 145LL;
    goto LABEL_46;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x68,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shouldertapexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
LABEL_48:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v59);
  return v5;
}
