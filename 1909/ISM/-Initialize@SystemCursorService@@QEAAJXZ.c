/*
 * XREFs of ?Initialize@SystemCursorService@@QEAAJXZ @ 0x1800CD1EC
 * Callers:
 *     ?EnsureServiceAndRegisterClient@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@PEAVBamoSystemCursorControllerClientProxy@@@Z @ 0x1800CA300 (-EnsureServiceAndRegisterClient@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002AAC4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?Create@CursorManager@@SAJPEAUICursorManagerClient@@KW4CursorManagerClientVersion@@PEAPEAUICursorManager@@@Z @ 0x18010E1CC (-Create@CursorManager@@SAJPEAUICursorManagerClient@@KW4CursorManagerClientVersion@@PEAPEAUICurso.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SystemCursorService::Initialize(SystemCursorService *this)
{
  __int64 v2; // r8
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rbx
  int ActivationFactory; // eax
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, GUID *, __int64 *); // rdi
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, _QWORD, _QWORD, GUID *, char *); // rdi
  __int64 v13; // rsi
  __int64 (__fastcall *v14)(__int64, char *); // rdi
  __int64 v16; // [rsp+30h] [rbp-40h] BYREF
  __int64 v17[2]; // [rsp+38h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-28h] BYREF
  __int64 v19; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v17[1] = -2LL;
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 3);
  v3 = CursorManager::Create(this, *((unsigned int *)this + 32), v2, (char *)this + 24);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v17[0] = 0LL;
    v19 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.UI.Composition.Compositor",
      0x22u,
      0x21u);
    v5 = v19;
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(v17);
    ActivationFactory = RoGetActivationFactory(v5, &GUID_00000035_0000_0000_c000_000000000046, v17);
    v4 = ActivationFactory;
    if ( ActivationFactory < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x23,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\sy"
                 "stemcursorservice.cpp",
        (const char *)(unsigned int)ActivationFactory);
LABEL_14:
      Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(v17);
      return v4;
    }
    v16 = 0LL;
    v7 = v17[0];
    v8 = **(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v17[0];
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v16);
    v9 = v8(v7, &GUID_22118adf_23f1_4801_bcfa_66cbf48cc51b, &v16);
    v4 = v9;
    if ( v9 >= 0 )
    {
      v11 = v16;
      v12 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, GUID *, char *))(*(_QWORD *)v16 + 48LL);
      Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 17);
      v9 = v12(v11, 0LL, 0LL, &GUID_b403ca50_7f8c_4e83_985f_cc45060036d8, (char *)this + 136);
      v4 = v9;
      if ( v9 >= 0 )
      {
        v13 = *((_QWORD *)this + 17);
        v14 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v13 + 72LL);
        Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 18);
        v9 = v14(v13, (char *)this + 144);
        v4 = v9;
        if ( v9 >= 0 )
        {
          v4 = 0;
          goto LABEL_13;
        }
        v10 = 49LL;
      }
      else
      {
        v10 = 42LL;
      }
    }
    else
    {
      v10 = 37LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorservice.cpp",
      (const char *)(unsigned int)v9);
LABEL_13:
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v16);
    goto LABEL_14;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1E,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\system"
             "cursorservice.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
