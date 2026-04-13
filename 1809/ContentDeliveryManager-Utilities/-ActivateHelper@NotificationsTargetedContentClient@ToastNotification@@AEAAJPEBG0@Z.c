/*
 * XREFs of ?ActivateHelper@NotificationsTargetedContentClient@ToastNotification@@AEAAJPEBG0@Z @ 0x180045EB4
 * Callers:
 *     ?Activate@NotificationsTargetedContentClient@ToastNotification@@UEAAJPEBG0PEBUNOTIFICATION_USER_INPUT_DATA@@K@Z @ 0x180045E80 (-Activate@NotificationsTargetedContentClient@ToastNotification@@UEAAJPEBG0PEBUNOTIFICATION_USER_.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003864 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180014F6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?GetContentIdAndPath@NotificationsTargetedContentClient@ToastNotification@@AEAAXPEBGAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@1@Z @ 0x18004633C (-GetContentIdAndPath@NotificationsTargetedContentClient@ToastNotification@@AEAAXPEBGAEAV-$basic_.c)
 *     ??$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x18004A89C (--$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foun.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAVTargetedContentContainer@TargetedContent@Services@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVTargetedContentContainer@TargetedContent@Services@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x18004B050 (--$WaitForCompletion@PEAU-$IAsyncOperation@PEAVTargetedContentContainer@TargetedContent@Services.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall ToastNotification::NotificationsTargetedContentClient::ActivateHelper(
        ToastNotification::NotificationsTargetedContentClient *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3)
{
  __int64 v3; // rbx
  int ActivationFactory; // eax
  __int64 v5; // rdi
  const WCHAR *v6; // rax
  __int64 v7; // rbx
  _QWORD *v8; // rcx
  int v9; // eax
  wil::details::in1diag3 *v10; // rcx
  _QWORD *v11; // rbx
  int v12; // eax
  wil::details::in1diag3 *v13; // rcx
  const WCHAR *v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rsi
  _QWORD *v17; // rcx
  int v18; // eax
  wil::details::in1diag3 *v19; // rcx
  int v20; // eax
  wil::details::in1diag3 *v21; // rcx
  int v22; // eax
  wil::details::in1diag3 *v23; // rcx
  int v24; // eax
  wil::details::in1diag3 *v25; // rcx
  int v26; // eax
  wil::details::in1diag3 *v27; // rcx
  const char *v28; // r9
  __int64 result; // rax
  int v30[2]; // [rsp+20h] [rbp-D8h] BYREF
  _QWORD *v31; // [rsp+28h] [rbp-D0h] BYREF
  _QWORD *v32; // [rsp+30h] [rbp-C8h] BYREF
  const WCHAR *v33; // [rsp+38h] [rbp-C0h] BYREF
  __int64 v34; // [rsp+40h] [rbp-B8h]
  __int64 v35; // [rsp+48h] [rbp-B0h] BYREF
  __int64 v36; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v37; // [rsp+58h] [rbp-A0h] BYREF
  _QWORD v38[2]; // [rsp+60h] [rbp-98h] BYREF
  WCHAR *v39; // [rsp+70h] [rbp-88h] BYREF
  __int64 v40; // [rsp+80h] [rbp-78h]
  unsigned __int64 v41; // [rsp+88h] [rbp-70h]
  void *v42[3]; // [rsp+90h] [rbp-68h] BYREF
  unsigned __int64 v43; // [rsp+A8h] [rbp-50h]
  _BYTE v44[32]; // [rsp+B0h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+0h]

  v38[1] = -2LL;
  LODWORD(v34) = 0;
  v43 = 7LL;
  v42[2] = 0LL;
  LOWORD(v42[0]) = 0;
  v41 = 7LL;
  v40 = 0LL;
  LOWORD(v39) = 0;
  try
  {
    ToastNotification::NotificationsTargetedContentClient::GetContentIdAndPath();
    v33 = L"Windows.Services.TargetedContent.TargetedContentContainer";
    LODWORD(v34) = 1;
    v3 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v44, &v33);
    *(_QWORD *)v30 = 0LL;
    ActivationFactory = RoGetActivationFactory(*(_QWORD *)(v3 + 24), &GUID_5b47e7fb_2140_4c1f_a736_c59583f227d8, v30);
    if ( ActivationFactory < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x669,
        (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
        (const char *)(unsigned int)ActivationFactory);
    }
    else
    {
      v5 = *(_QWORD *)v30;
      *(_QWORD *)v30 = 0LL;
      v34 = v5;
      v32 = 0LL;
      v6 = (const WCHAR *)&v39;
      if ( v41 >= 8 )
        v6 = v39;
      v33 = v6;
      v7 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v44, &v33);
      v8 = v32;
      v32 = 0LL;
      if ( v8 )
        (*(void (__fastcall **)(_QWORD *, _QWORD))(*v8 + 16LL))(v8, *v8);
      v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD **))(*(_QWORD *)v5 + 48LL))(
             v5,
             *(_QWORD *)(v7 + 24),
             &v32);
      v10 = retaddr;
      if ( v9 >= 0 )
      {
        v38[0] = 0LL;
        v11 = v32;
        v12 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Services::TargetedContent::TargetedContentContainer *> *>(v32);
        if ( v12 >= 0 )
          v12 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD *))(*v11 + 64LL))(v11, v38);
        v13 = retaddr;
        if ( v12 >= 0 )
        {
          v31 = 0LL;
          v14 = (const WCHAR *)v42;
          if ( v43 >= 8 )
            v14 = (const WCHAR *)v42[0];
          v33 = v14;
          v15 = v38[0];
          v16 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v44, &v33);
          v17 = v31;
          v31 = 0LL;
          if ( v17 )
            (*(void (__fastcall **)(_QWORD *, _QWORD))(*v17 + 16LL))(v17, *v17);
          v18 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD **))(*(_QWORD *)v15 + 80LL))(
                  v15,
                  *(_QWORD *)(v16 + 24),
                  &v31);
          v19 = retaddr;
          if ( v18 >= 0 )
          {
            v37 = 0LL;
            v20 = (*(__int64 (__fastcall **)(_QWORD *, __int64 *))(*v31 + 72LL))(v31, &v37);
            v21 = retaddr;
            if ( v20 >= 0 )
            {
              v36 = 0LL;
              v22 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v37 + 112LL))(v37, &v36);
              v23 = retaddr;
              if ( v22 >= 0 )
              {
                v35 = 0LL;
                v24 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v36 + 48LL))(v36, &v35);
                v25 = retaddr;
                if ( v24 >= 0 )
                {
                  v26 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncAction *>(v35);
                  v27 = retaddr;
                  if ( v26 >= 0 )
                  {
                    if ( v35 )
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
                    if ( v36 )
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
                    if ( v37 )
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
                    if ( v31 )
                      (*(void (__fastcall **)(_QWORD *))(*v31 + 16LL))(v31);
                    if ( v38[0] )
                      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v38[0] + 16LL))(v38[0]);
                    if ( v32 )
                      (*(void (__fastcall **)(_QWORD *))(*v32 + 16LL))(v32);
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
                    if ( v41 >= 8 )
                      operator delete(v39);
                    v41 = 7LL;
                    v40 = 0LL;
                    LOWORD(v39) = 0;
                    if ( v43 >= 8 )
                      operator delete(v42[0]);
                    return 0LL;
                  }
LABEL_44:
                  wil::details::in1diag3::Throw_Hr(
                    v27,
                    (void *)0x4A,
                    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
                    (const char *)(unsigned int)v26);
                  JUMPOUT(0x180046331LL);
                }
LABEL_43:
                wil::details::in1diag3::Throw_Hr(
                  v25,
                  (void *)0x49,
                  (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
                  (const char *)(unsigned int)v24);
                goto LABEL_44;
              }
LABEL_42:
              wil::details::in1diag3::Throw_Hr(
                v23,
                (void *)0x46,
                (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
                (const char *)(unsigned int)v22);
              goto LABEL_43;
            }
LABEL_41:
            wil::details::in1diag3::Throw_Hr(
              v21,
              (void *)0x43,
              (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
              (const char *)(unsigned int)v20);
            goto LABEL_42;
          }
LABEL_40:
          wil::details::in1diag3::Throw_Hr(
            v19,
            (void *)0x40,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
            (const char *)(unsigned int)v18);
          goto LABEL_41;
        }
LABEL_39:
        wil::details::in1diag3::Throw_Hr(
          v13,
          (void *)0x3D,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
          (const char *)(unsigned int)v12);
        goto LABEL_40;
      }
    }
    wil::details::in1diag3::Throw_Hr(
      v10,
      (void *)0x3A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_39;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x4E,
                           (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
                           v28);
  }
  return result;
}
