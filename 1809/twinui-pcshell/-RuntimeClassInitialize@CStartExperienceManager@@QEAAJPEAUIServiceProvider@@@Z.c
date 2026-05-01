/*
 * XREFs of ?RuntimeClassInitialize@CStartExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x18016AB7C
 * Callers:
 *     ??$MakeAndInitialize@VCStartExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x180169504 (--$MakeAndInitialize@VCStartExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18001C76C (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180025DE0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18005EE24 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x1803AE670 (-AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x1803AF554 (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CStartExperienceManager::RuntimeClassInitialize(
        CStartExperienceManager *this,
        struct IServiceProvider *a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  HSTRING Reserved1; // rdx
  _QWORD *v7; // r14
  int v8; // eax
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // rdx
  __int64 (__fastcall ***v13)(_QWORD, GUID *, char *); // [rsp+38h] [rbp-29h] BYREF
  __int64 v14[2]; // [rsp+40h] [rbp-21h] BYREF
  HSTRING_HEADER v15; // [rsp+50h] [rbp-11h] BYREF
  HSTRING v16; // [rsp+68h] [rbp+7h]
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp+Fh] BYREF
  HSTRING v18; // [rsp+88h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v14[1] = -2LL;
  v18 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.ShellExperience.StartMenu",
    0x2Bu,
    0x2Au);
  v16 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v15,
    L"Microsoft.Windows.ShellExperienceHost_cw5n1h2txyewy!App",
    0x38u,
    0x37u);
  v4 = CSingleViewShellExperience::RuntimeClassInitialize(
         (CStartExperienceManager *)((char *)this + 304),
         (struct IWeakReferenceSource *)(((unsigned __int64)this + 32) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
         a2,
         v16,
         v18);
  if ( v4 >= 0 )
  {
    Reserved1 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                           &v15,
                           (const WCHAR **)&off_180400110)[1].Reserved.Reserved1;
    v4 = CSingleViewShellExperience::AddTestAumid((CStartExperienceManager *)((char *)this + 304), Reserved1);
    if ( v4 < 0 )
    {
      v5 = 209LL;
      goto LABEL_3;
    }
    *((_DWORD *)this + 91) = 6;
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 62, (__int64)a2);
    v7 = (_QWORD *)((char *)this + 520);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 65);
    v4 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
           a2,
           &IID_IImmersiveWindowMessageService,
           &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca,
           (char *)this + 520);
    if ( v4 < 0 )
    {
      v5 = 215LL;
      goto LABEL_3;
    }
    v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, char *))(*(_QWORD *)*v7 + 24LL))(
           *v7,
           26LL,
           ((unsigned __int64)this + 48) & -(__int64)(this != 0LL),
           (char *)this + 504);
    if ( v4 < 0 )
    {
      v5 = 216LL;
      goto LABEL_3;
    }
    v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, char *))(*(_QWORD *)*v7 + 24LL))(
           *v7,
           1025LL,
           ((unsigned __int64)this + 48) & -(__int64)(this != 0LL),
           (char *)this + 508);
    if ( v4 < 0 )
    {
      v5 = 217LL;
      goto LABEL_3;
    }
    v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, char *))(*(_QWORD *)*v7 + 24LL))(
           *v7,
           798LL,
           ((unsigned __int64)this + 48) & -(__int64)(this != 0LL),
           (char *)this + 512);
    if ( v4 < 0 )
    {
      v5 = 218LL;
      goto LABEL_3;
    }
    v14[0] = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v14);
    v8 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
           a2,
           &GUID_2e8fcb18_a0ee_41ad_8ef8_77fb3a370ca5,
           &GUID_2e8fcb18_a0ee_41ad_8ef8_77fb3a370ca5,
           v14);
    v4 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xDD,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)(unsigned int)v8);
LABEL_27:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v14);
      return (unsigned int)v4;
    }
    v13 = 0LL;
    v9 = v14[0];
    v16 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &v15,
      L"Windows.Internal.ShellExperience.Host",
      0x26u,
      0x25u);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
    v10 = (*(__int64 (__fastcall **)(__int64, HSTRING, _QWORD))(*(_QWORD *)v9 + 48LL))(v9, v16, &v13);
    v4 = v10;
    if ( v10 >= 0 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 36);
      v10 = (**v13)(v13, &GUID_2410129c_64a0_4b85_9e61_12caec38d6ef, (char *)this + 288);
      v4 = v10;
      if ( v10 >= 0 )
      {
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 37);
        v10 = (**v13)(v13, &GUID_fdae1e57_9570_4461_bab5_532c0f899149, (char *)this + 296);
        v4 = v10;
        if ( v10 >= 0 )
        {
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 66);
          v10 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))a2->lpVtbl->QueryService)(
                  a2,
                  &SID_TransitionCoordinator,
                  &GUID_b1bed1ae_63da_4687_8063_c89ec276d28a,
                  (char *)this + 528);
          v4 = v10;
          if ( v10 >= 0 )
          {
            v4 = 0;
            goto LABEL_26;
          }
          v11 = 226LL;
        }
        else
        {
          v11 = 225LL;
        }
      }
      else
      {
        v11 = 224LL;
      }
    }
    else
    {
      v11 = 223LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)v10);
LABEL_26:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
    goto LABEL_27;
  }
  v5 = 208LL;
LABEL_3:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
  return (unsigned int)v4;
}
