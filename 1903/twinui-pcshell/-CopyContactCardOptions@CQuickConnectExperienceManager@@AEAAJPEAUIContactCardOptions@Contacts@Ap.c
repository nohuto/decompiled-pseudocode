/*
 * XREFs of ?CopyContactCardOptions@CQuickConnectExperienceManager@@AEAAJPEAUIContactCardOptions@Contacts@ApplicationModel@Windows@@PEAPEAU2345@@Z @ 0x1801A10B4
 * Callers:
 *     ?CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ @ 0x1801A0CDC (-CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ.c)
 *     ?ShowContactCard@CQuickConnectExperienceManager@@UEAAJU_GUID@@_KPEAUIContact@Contacts@ApplicationModel@Windows@@URect@Foundation@6@W4Placement@Popups@UI@6@PEAUIContactCardOptions@456@ME@Z @ 0x1801A35B0 (-ShowContactCard@CQuickConnectExperienceManager@@UEAAJU_GUID@@_KPEAUIContact@Contacts@Applicatio.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800403C0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$ActivateInstance@V?$ComPtr@UIContactCardOptions@Contacts@ApplicationModel@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIContactCardOptions@Contacts@ApplicationModel@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18019EEB8 (--$ActivateInstance@V-$ComPtr@UIContactCardOptions@Contacts@ApplicationModel@Windows@@@WRL@Micro.c)
 *     ??$As@UIContactCardOptions2@Contacts@ApplicationModel@Windows@@@?$ComPtr@UIContactCardOptions@Contacts@ApplicationModel@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIContactCardOptions2@Contacts@ApplicationModel@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18019EF58 (--$As@UIContactCardOptions2@Contacts@ApplicationModel@Windows@@@-$ComPtr@UIContactCardOptions@Co.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CQuickConnectExperienceManager::CopyContactCardOptions(
        CQuickConnectExperienceManager *this,
        struct Windows::ApplicationModel::Contacts::IContactCardOptions *a2,
        struct Windows::ApplicationModel::Contacts::IContactCardOptions **a3)
{
  __int64 v5; // rdx
  unsigned int v6; // ebx
  int v7; // eax
  int v8; // eax
  __int64 v9; // rdx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  __int64 v13; // rdx
  unsigned int v14; // edi
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  unsigned int v20; // [rsp+28h] [rbp-39h] BYREF
  __int64 v21; // [rsp+30h] [rbp-31h] BYREF
  struct Windows::ApplicationModel::Contacts::IContactCardOptions *v22; // [rsp+38h] [rbp-29h] BYREF
  __int64 v23; // [rsp+40h] [rbp-21h] BYREF
  __int64 v24; // [rsp+48h] [rbp-19h] BYREF
  unsigned int v25; // [rsp+50h] [rbp-11h] BYREF
  unsigned int v26; // [rsp+54h] [rbp-Dh] BYREF
  __int64 v27; // [rsp+58h] [rbp-9h] BYREF
  __int64 (__fastcall ***v28)(_QWORD, GUID *, __int64 *); // [rsp+60h] [rbp-1h] BYREF
  _QWORD v29[2]; // [rsp+68h] [rbp+7h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+78h] [rbp+17h] BYREF
  __int64 v31; // [rsp+90h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v29[1] = -2LL;
  if ( a2 )
  {
    if ( !a3 )
    {
      v5 = 337LL;
      goto LABEL_3;
    }
    *a3 = 0LL;
    v22 = 0LL;
    v31 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.ApplicationModel.Contacts.ContactCardOptions",
      0x35u,
      0x34u);
    v7 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::ApplicationModel::Contacts::IContactCardOptions>>(
           v31,
           (__int64 *)&v22);
    v6 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x159,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
        (const char *)(unsigned int)v7);
LABEL_38:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
      return v6;
    }
    v28 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v28);
    v8 = (*(__int64 (__fastcall **)(struct Windows::ApplicationModel::Contacts::IContactCardOptions *, unsigned int *))(*(_QWORD *)a2 + 48LL))(
           a2,
           &v25);
    v6 = v8;
    if ( v8 < 0 )
    {
      v9 = 350LL;
LABEL_16:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
        (const char *)(unsigned int)v8);
LABEL_37:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v28);
      goto LABEL_38;
    }
    v8 = (*(__int64 (__fastcall **)(struct Windows::ApplicationModel::Contacts::IContactCardOptions *, _QWORD))(*(_QWORD *)v22 + 56LL))(
           v22,
           v25);
    v6 = v8;
    if ( v8 < 0 )
    {
      v9 = 351LL;
      goto LABEL_16;
    }
    v8 = (*(__int64 (__fastcall **)(struct Windows::ApplicationModel::Contacts::IContactCardOptions *, unsigned int *))(*(_QWORD *)a2 + 64LL))(
           a2,
           &v26);
    v6 = v8;
    if ( v8 < 0 )
    {
      v9 = 354LL;
      goto LABEL_16;
    }
    v8 = (*(__int64 (__fastcall **)(struct Windows::ApplicationModel::Contacts::IContactCardOptions *, _QWORD))(*(_QWORD *)v22 + 72LL))(
           v22,
           v26);
    v6 = v8;
    if ( v8 < 0 )
    {
      v9 = 355LL;
      goto LABEL_16;
    }
    v27 = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<Windows::ApplicationModel::Contacts::IContactCardOptions>::As<Windows::ApplicationModel::Contacts::IContactCardOptions2>(
                &v28,
                &v27) >= 0 )
    {
      v24 = 0LL;
      v10 = Microsoft::WRL::ComPtr<Windows::ApplicationModel::Contacts::IContactCardOptions>::As<Windows::ApplicationModel::Contacts::IContactCardOptions2>(
              (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v22,
              &v24);
      v6 = v10;
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x16A,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
          (const char *)(unsigned int)v10);
LABEL_46:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
        goto LABEL_36;
      }
      v21 = 0LL;
      v11 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v27 + 48LL))(v27, &v21);
      v6 = v11;
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x16D,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
          (const char *)(unsigned int)v11);
LABEL_44:
        v19 = v21;
        if ( v21 )
        {
          v21 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
        }
        goto LABEL_46;
      }
      v23 = 0LL;
      v12 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v24 + 48LL))(v24, &v23);
      v6 = v12;
      if ( v12 < 0 )
      {
        v13 = 368LL;
        goto LABEL_42;
      }
      v20 = 0;
      v12 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v21 + 56LL))(v21, &v20);
      v6 = v12;
      if ( v12 < 0 )
      {
        v13 = 371LL;
LABEL_42:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v13,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
          (const char *)(unsigned int)v12);
        v18 = v23;
        if ( v23 )
        {
          v23 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
        }
        goto LABEL_44;
      }
      v14 = 0;
      if ( v20 )
      {
        while ( 1 )
        {
          v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *))(*(_QWORD *)v21 + 48LL))(v21, v14, v29);
          v6 = v12;
          if ( v12 < 0 )
            break;
          v12 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v23 + 104LL))(v23, v29[0]);
          v6 = v12;
          if ( v12 < 0 )
          {
            v13 = 377LL;
            goto LABEL_42;
          }
          if ( ++v14 >= v20 )
            goto LABEL_30;
        }
        v13 = 376LL;
        goto LABEL_42;
      }
LABEL_30:
      v15 = v23;
      if ( v23 )
      {
        v23 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      }
      v16 = v21;
      if ( v21 )
      {
        v21 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
    }
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v22);
    *a3 = v22;
    v6 = 0;
LABEL_36:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
    goto LABEL_37;
  }
  v5 = 336LL;
LABEL_3:
  v6 = -2147024809;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
    (const char *)0x80070057LL);
  return v6;
}
