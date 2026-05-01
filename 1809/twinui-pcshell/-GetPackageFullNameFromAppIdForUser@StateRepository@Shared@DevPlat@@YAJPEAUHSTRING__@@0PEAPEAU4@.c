/*
 * XREFs of ?GetPackageFullNameFromAppIdForUser@StateRepository@Shared@DevPlat@@YAJPEAUHSTRING__@@0PEAPEAU4@@Z @ 0x1803B21E8
 * Callers:
 *     ?LogErrorIfStartOrCortanaArentInstalled@XamlLauncher@@CAJXZ @ 0x18029B794 (-LogErrorIfStartOrCortanaArentInstalled@XamlLauncher@@CAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DevPlat::Shared::StateRepository::GetPackageFullNameFromAppIdForUser(
        DevPlat::Shared::StateRepository *this,
        HSTRING a2,
        HSTRING *a3,
        HSTRING *a4)
{
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r9
  HSTRING v10; // rbx
  int ActivationFactory; // eax
  __int64 v12; // rbx
  HSTRING v13; // rbx
  __int64 v14; // rbx
  __int64 v15; // rbx
  HSTRING v16; // rcx
  HSTRING v17; // rax
  HSTRING v19; // [rsp+30h] [rbp-50h] BYREF
  __int64 v20; // [rsp+38h] [rbp-48h] BYREF
  __int64 v21; // [rsp+40h] [rbp-40h] BYREF
  __int64 v22; // [rsp+48h] [rbp-38h] BYREF
  __int64 v23; // [rsp+50h] [rbp-30h] BYREF
  HSTRING string; // [rsp+58h] [rbp-28h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v23 = 0LL;
  v22 = 0LL;
  v21 = 0LL;
  v20 = 0LL;
  v19 = 0LL;
  if ( a2 )
  {
    if ( !a3 )
    {
      v7 = -2147024809;
      v8 = 40LL;
      v9 = 2147942487LL;
      goto LABEL_21;
    }
    if ( this )
    {
      if ( WindowsCreateStringReference(L"Windows.Internal.StateRepository.User", 0x25u, &hstringHeader, &string) < 0 )
        RaiseException(0xC000000D, 1u, 0, 0LL);
      v10 = string;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
      ActivationFactory = RoGetActivationFactory(v10, &GUID_b07904dd_31f6_452c_a738_fa5a2fda337b, &v21);
      v7 = ActivationFactory;
      if ( ActivationFactory < 0 )
      {
        v8 = 46LL;
LABEL_20:
        v9 = (unsigned int)ActivationFactory;
        goto LABEL_21;
      }
      v12 = v21;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
      ActivationFactory = (*(__int64 (__fastcall **)(__int64, DevPlat::Shared::StateRepository *, __int64 *))(*(_QWORD *)v12 + 80LL))(
                            v12,
                            this,
                            &v20);
      v7 = ActivationFactory;
      if ( ActivationFactory < 0 )
      {
        v8 = 49LL;
        goto LABEL_20;
      }
    }
    if ( WindowsCreateStringReference(L"Windows.Internal.StateRepository.Package", 0x28u, &hstringHeader, &string) < 0 )
      RaiseException(0xC000000D, 1u, 0, 0LL);
    v13 = string;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
    ActivationFactory = RoGetActivationFactory(v13, &GUID_bb7966ba_e363_4f5d_b1bf_901fabfb603b, &v23);
    v7 = ActivationFactory;
    if ( ActivationFactory >= 0 )
    {
      v14 = v23;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
      ActivationFactory = (*(__int64 (__fastcall **)(__int64, __int64, HSTRING, __int64 *))(*(_QWORD *)v14 + 480LL))(
                            v14,
                            v20,
                            a2,
                            &v22);
      v7 = ActivationFactory;
      if ( ActivationFactory >= 0 )
      {
        v15 = v22;
        WindowsDeleteString(v19);
        v19 = 0LL;
        ActivationFactory = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v15 + 208LL))(v15, &v19);
        v7 = ActivationFactory;
        if ( ActivationFactory >= 0 )
        {
          v17 = v19;
          v16 = 0LL;
          v19 = 0LL;
          v7 = 0;
          *a3 = v17;
          goto LABEL_23;
        }
        v8 = 60LL;
      }
      else
      {
        v8 = 57LL;
      }
    }
    else
    {
      v8 = 54LL;
    }
    goto LABEL_20;
  }
  v7 = -2147024809;
  v8 = 39LL;
  v9 = 2147942487LL;
LABEL_21:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"onecoreuap\\base\\appmodel\\execmodel\\shared\\utility\\staterepoutil.cpp",
    (const char *)v9);
  v16 = v19;
LABEL_23:
  WindowsDeleteString(v16);
  v19 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
  return v7;
}
