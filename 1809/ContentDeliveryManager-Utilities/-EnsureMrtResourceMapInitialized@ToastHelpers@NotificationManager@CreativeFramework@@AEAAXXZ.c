/*
 * XREFs of ?EnsureMrtResourceMapInitialized@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXXZ @ 0x1800985AC
 * Callers:
 *     ?ExpandRatingParameters@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXPEB_W@Z @ 0x180098420 (-ExpandRatingParameters@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXPEB_W@Z.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003864 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18000480C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall CreativeFramework::NotificationManager::ToastHelpers::EnsureMrtResourceMapInitialized(
        CreativeFramework::NotificationManager::ToastHelpers *this)
{
  __int64 *v2; // rdi
  int ActivationFactory; // eax
  wil::details::in1diag3 *v4; // rcx
  __int64 v5; // rbx
  HRESULT StringReference; // eax
  int v7; // eax
  wil::details::in1diag3 *v8; // rcx
  HRESULT v9; // eax
  int v10; // eax
  wil::details::in1diag3 *v11; // rcx
  int v12; // eax
  wil::details::in1diag3 *v13; // rcx
  int v14; // eax
  int v15; // eax
  wil::details::in1diag3 *v16; // rcx
  __int64 v17; // rbx
  int v18; // eax
  wil::details::in1diag3 *v19; // rcx
  HRESULT v20; // eax
  wil::details::in1diag3 *v21; // rcx
  LPVOID v22; // rbx
  PCWSTR StringRawBuffer; // rax
  int v24; // eax
  LPVOID v25; // rsi
  __int64 v26; // rcx
  int v27; // eax
  LPVOID v28; // rbx
  __int64 v29; // rcx
  int v30; // eax
  LPVOID ppv; // [rsp+38h] [rbp-29h] BYREF
  HSTRING v32; // [rsp+40h] [rbp-21h] BYREF
  __int64 v33; // [rsp+48h] [rbp-19h] BYREF
  __int64 v34; // [rsp+50h] [rbp-11h] BYREF
  __int64 v35; // [rsp+58h] [rbp-9h] BYREF
  int v36; // [rsp+60h] [rbp-1h] BYREF
  __int64 v37; // [rsp+68h] [rbp+7h] BYREF
  _QWORD v38[2]; // [rsp+70h] [rbp+Fh] BYREF
  HSTRING string; // [rsp+80h] [rbp+1Fh] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+88h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v38[1] = -2LL;
  v2 = (__int64 *)((char *)this + 56);
  if ( *((_QWORD *)this + 7) )
    return;
  v38[0] = 0LL;
  if ( WindowsCreateStringReference(L"Windows.Internal.StateRepository.PackageFamily", 0x2Eu, &hstringHeader, &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  ActivationFactory = RoGetActivationFactory(string, &GUID_86f5b0ee_9560_4d76_a06a_ca4c8bfe4426, v38);
  v4 = retaddr;
  if ( ActivationFactory < 0 )
    goto LABEL_36;
  v34 = 0LL;
  v5 = v38[0];
  *(_QWORD *)&hstringHeader.Reserved.Reserved2[16] = 0LL;
  StringReference = WindowsCreateStringReference(
                      L"Microsoft.Windows.ContentDeliveryManager_cw5n1h2txyewy",
                      0x36u,
                      (HSTRING_HEADER *)&string,
                      (HSTRING *)&hstringHeader.Reserved.Reserved2[16]);
  if ( StringReference < 0 )
  {
LABEL_37:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)StringReference);
    goto LABEL_38;
  }
  v34 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v5 + 128LL))(
         v5,
         *(_QWORD *)&hstringHeader.Reserved.Reserved2[16],
         &v34);
  v8 = retaddr;
  if ( v7 < 0 )
  {
LABEL_38:
    wil::details::in1diag3::Throw_Hr(
      v8,
      (void *)0x17A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_39;
  }
  v33 = 0LL;
  *(_QWORD *)&hstringHeader.Reserved.Reserved2[16] = 0LL;
  v9 = WindowsCreateStringReference(
         L"Windows.Internal.StateRepository.Package",
         0x28u,
         (HSTRING_HEADER *)&string,
         (HSTRING *)&hstringHeader.Reserved.Reserved2[16]);
  if ( v9 < 0 )
  {
LABEL_39:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v9);
    goto LABEL_40;
  }
  v33 = 0LL;
  v10 = RoGetActivationFactory(
          *(_QWORD *)&hstringHeader.Reserved.Reserved2[16],
          &GUID_bb7966ba_e363_4f5d_b1bf_901fabfb603b,
          &v33);
  v11 = retaddr;
  if ( v10 < 0 )
  {
LABEL_40:
    wil::details::in1diag3::Throw_Hr(
      v11,
      (void *)0x17C,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
      (const char *)(unsigned int)v10);
LABEL_41:
    wil::details::in1diag3::Throw_Hr(
      v13,
      (void *)0x17E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
      (const char *)(unsigned int)v12);
    __debugbreak();
  }
  v35 = 0LL;
  v12 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v33 + 224LL))(v33, v34, &v35);
  v13 = retaddr;
  if ( v12 < 0 )
    goto LABEL_41;
  v14 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v35 + 56LL))(v35, &v36);
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x181,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
      (const char *)(unsigned int)v14);
    __debugbreak();
  }
  if ( !v36 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x182,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
      (const char *)0x80070490LL);
    goto LABEL_44;
  }
  v37 = 0LL;
  v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v35 + 48LL))(v35, 0LL, &v37);
  v16 = retaddr;
  if ( v15 < 0 )
  {
LABEL_44:
    wil::details::in1diag3::Throw_Hr(
      v16,
      (void *)0x184,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
      (const char *)(unsigned int)v15);
    goto LABEL_45;
  }
  v17 = v37;
  WindowsDeleteString(0LL);
  v32 = 0LL;
  v18 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v17 + 208LL))(v17, &v32);
  v19 = retaddr;
  if ( v18 < 0 )
  {
LABEL_45:
    wil::details::in1diag3::Throw_Hr(
      v19,
      (void *)0x186,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
      (const char *)(unsigned int)v18);
LABEL_46:
    wil::details::in1diag3::Throw_Hr(
      v21,
      (void *)0x18A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
      (const char *)(unsigned int)v20);
    __debugbreak();
  }
  ppv = 0LL;
  v20 = CoCreateInstance(
          &GUID_dbce7e40_7345_439d_b12c_114a11819a09,
          0LL,
          1u,
          &GUID_130a2f65_2be7_4309_9a58_a9052ff2b61c,
          &ppv);
  v21 = retaddr;
  if ( v20 < 0 )
    goto LABEL_46;
  v22 = ppv;
  StringRawBuffer = WindowsGetStringRawBuffer(v32, 0LL);
  v24 = (*(__int64 (__fastcall **)(LPVOID, PCWSTR))(*(_QWORD *)v22 + 40LL))(v22, StringRawBuffer);
  if ( v24 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x18B,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
      (const char *)(unsigned int)v24);
    __debugbreak();
  }
  v25 = ppv;
  v26 = *((_QWORD *)this + 8);
  if ( v26 )
  {
    *((_QWORD *)this + 8) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  }
  v27 = (*(__int64 (__fastcall **)(LPVOID, GUID *, char *))(*(_QWORD *)v25 + 72LL))(
          v25,
          &GUID_e3c22b30_8502_4b2f_9133_559674587e51,
          (char *)this + 64);
  if ( v27 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x18D,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
      (const char *)(unsigned int)v27);
    JUMPOUT(0x180098A94LL);
  }
  v28 = ppv;
  v29 = *v2;
  if ( *v2 )
  {
    *v2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  }
  v30 = (*(__int64 (__fastcall **)(LPVOID, GUID *, __int64 *))(*(_QWORD *)v28 + 56LL))(
          v28,
          &GUID_6e21e72b_b9b0_42ae_a686_983cf784edcd,
          v2);
  if ( v30 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x18E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
      (const char *)(unsigned int)v30);
LABEL_36:
    wil::details::in1diag3::Throw_Hr(
      v4,
      (void *)0x178,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_37;
  }
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  WindowsDeleteString(v32);
  v32 = 0LL;
  if ( v37 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
  if ( v35 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  if ( v33 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  if ( v34 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
  if ( v38[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v38[0] + 16LL))(v38[0]);
}
