/*
 * XREFs of ?CreateInstance@CCortanaExperienceManagerClassFactory@@EEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180151B80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18005EE24 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CCortanaExperienceManagerClassFactory::CreateInstance(
        CCortanaExperienceManagerClassFactory *this,
        struct IUnknown *a2,
        const struct _GUID *a3,
        void **a4)
{
  unsigned int v6; // ebx
  HRESULT Instance; // eax
  LPVOID v8; // rbx
  int v9; // eax
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // rdx
  __int64 (__fastcall ***v14)(_QWORD, const struct _GUID *, void **); // [rsp+30h] [rbp-50h] BYREF
  __int64 v15; // [rsp+38h] [rbp-48h] BYREF
  LPVOID ppv[2]; // [rsp+40h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-30h] BYREF
  __int64 v18; // [rsp+68h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  ppv[1] = (LPVOID)-2LL;
  *a4 = 0LL;
  if ( !a2 )
  {
    ppv[0] = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)ppv);
    Instance = CoCreateInstance(&CLSID_ImmersiveShell, 0LL, 4u, &GUID_6d5140c1_7436_11ce_8034_00aa006009fa, ppv);
    v6 = Instance;
    if ( Instance < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x696,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
        (const char *)(unsigned int)Instance);
LABEL_15:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)ppv);
      return v6;
    }
    v15 = 0LL;
    v8 = ppv[0];
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
    v9 = (*(__int64 (__fastcall **)(LPVOID, GUID *, GUID *, __int64 *))(*(_QWORD *)v8 + 24LL))(
           v8,
           &GUID_2e8fcb18_a0ee_41ad_8ef8_77fb3a370ca5,
           &GUID_2e8fcb18_a0ee_41ad_8ef8_77fb3a370ca5,
           &v15);
    v6 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x699,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
        (const char *)(unsigned int)v9);
LABEL_14:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
      goto LABEL_15;
    }
    v14 = 0LL;
    v10 = v15;
    v18 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Internal.ShellExperience.Cortana",
      0x29u,
      0x28u);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
    v11 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v10 + 48LL))(v10, v18, &v14);
    v6 = v11;
    if ( v11 >= 0 )
    {
      v11 = (**v14)(v14, a3, a4);
      v6 = v11;
      if ( v11 >= 0 )
      {
        v6 = 0;
        goto LABEL_13;
      }
      v12 = 1693LL;
    }
    else
    {
      v12 = 1692LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v11);
LABEL_13:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
    goto LABEL_14;
  }
  v6 = -2147221232;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x693,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
    (const char *)0x80040110LL);
  return v6;
}
