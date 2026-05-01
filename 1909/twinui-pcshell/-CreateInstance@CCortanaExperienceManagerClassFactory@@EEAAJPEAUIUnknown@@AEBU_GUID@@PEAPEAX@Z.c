/*
 * XREFs of ?CreateInstance@CCortanaExperienceManagerClassFactory@@EEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18019CD40
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800436F0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
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
  __int64 (__fastcall *v9)(LPVOID, void *, GUID *, __int64 *); // rdi
  int v10; // eax
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, __int64, _QWORD); // rdi
  int v13; // eax
  __int64 v14; // rdx
  __int64 (__fastcall ***v16)(_QWORD, const struct _GUID *, void **); // [rsp+30h] [rbp-50h] BYREF
  __int64 v17; // [rsp+38h] [rbp-48h] BYREF
  LPVOID ppv[2]; // [rsp+40h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-30h] BYREF
  __int64 v20; // [rsp+68h] [rbp-18h]
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
        (void *)0x6A3,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
        (const char *)(unsigned int)Instance);
LABEL_15:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)ppv);
      return v6;
    }
    v17 = 0LL;
    v8 = ppv[0];
    v9 = *(__int64 (__fastcall **)(LPVOID, void *, GUID *, __int64 *))(*(_QWORD *)ppv[0] + 24LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
    v10 = v9(v8, &unk_1805126E8, &GUID_2e8fcb18_a0ee_41ad_8ef8_77fb3a370ca5, &v17);
    v6 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6A6,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
        (const char *)(unsigned int)v10);
LABEL_14:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
      goto LABEL_15;
    }
    v16 = 0LL;
    v11 = v17;
    v12 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v17 + 48LL);
    v20 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Internal.ShellExperience.Cortana",
      0x29u,
      0x28u);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
    v13 = v12(v11, v20, &v16);
    v6 = v13;
    if ( v13 >= 0 )
    {
      v13 = (**v16)(v16, a3, a4);
      v6 = v13;
      if ( v13 >= 0 )
      {
        v6 = 0;
        goto LABEL_13;
      }
      v14 = 1706LL;
    }
    else
    {
      v14 = 1705LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v13);
LABEL_13:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
    goto LABEL_14;
  }
  v6 = -2147221232;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x6A0,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
    (const char *)0x80040110LL);
  return v6;
}
