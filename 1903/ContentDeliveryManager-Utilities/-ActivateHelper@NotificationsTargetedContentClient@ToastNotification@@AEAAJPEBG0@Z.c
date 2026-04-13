/*
 * XREFs of ?ActivateHelper@NotificationsTargetedContentClient@ToastNotification@@AEAAJPEBG0@Z @ 0x180046E74
 * Callers:
 *     ?Activate@NotificationsTargetedContentClient@ToastNotification@@UEAAJPEBG0PEBUNOTIFICATION_USER_INPUT_DATA@@K@Z @ 0x180046E40 (-Activate@NotificationsTargetedContentClient@ToastNotification@@UEAAJPEBG0PEBUNOTIFICATION_USER_.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003774 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001524C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?GetContentIdAndPath@NotificationsTargetedContentClient@ToastNotification@@AEAAXPEBGAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@1@Z @ 0x180047318 (-GetContentIdAndPath@NotificationsTargetedContentClient@ToastNotification@@AEAAXPEBGAEAV-$basic_.c)
 *     ??$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x18004BE44 (--$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foun.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAVTargetedContentContainer@TargetedContent@Services@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVTargetedContentContainer@TargetedContent@Services@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x18004C2D8 (--$WaitForCompletion@PEAU-$IAsyncOperation@PEAVTargetedContentContainer@TargetedContent@Services.c)
 *     __security_check_cookie @ 0x1800CA900 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall ToastNotification::NotificationsTargetedContentClient::ActivateHelper(
        ToastNotification::NotificationsTargetedContentClient *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3)
{
  HSTRING_HEADER *v3; // rbx
  int ActivationFactory; // eax
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, PVOID, _QWORD **); // rsi
  const WCHAR *v7; // rax
  HSTRING_HEADER *v8; // rbx
  _QWORD *v9; // rcx
  int v10; // eax
  wil::details::in1diag3 *v11; // rcx
  _QWORD *v12; // rbx
  int v13; // eax
  wil::details::in1diag3 *v14; // rcx
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, PVOID, _QWORD **); // r14
  const WCHAR *v17; // rax
  HSTRING_HEADER *v18; // rsi
  _QWORD *v19; // rcx
  int v20; // eax
  wil::details::in1diag3 *v21; // rcx
  __int64 v22; // rax
  int v23; // eax
  wil::details::in1diag3 *v24; // rcx
  __int64 v25; // rax
  int v26; // eax
  wil::details::in1diag3 *v27; // rcx
  __int64 v28; // rax
  int v29; // eax
  wil::details::in1diag3 *v30; // rcx
  int v31; // eax
  wil::details::in1diag3 *v32; // rcx
  const char *v33; // r9
  __int64 result; // rax
  int v35[2]; // [rsp+20h] [rbp-D8h] BYREF
  _QWORD *v36; // [rsp+28h] [rbp-D0h] BYREF
  _QWORD *v37; // [rsp+30h] [rbp-C8h] BYREF
  const WCHAR *v38; // [rsp+38h] [rbp-C0h] BYREF
  __int64 v39; // [rsp+40h] [rbp-B8h]
  __int64 v40; // [rsp+48h] [rbp-B0h] BYREF
  __int64 *v41; // [rsp+50h] [rbp-A8h] BYREF
  __int64 *v42; // [rsp+58h] [rbp-A0h] BYREF
  _QWORD v43[2]; // [rsp+60h] [rbp-98h] BYREF
  WCHAR *v44; // [rsp+70h] [rbp-88h] BYREF
  __int64 v45; // [rsp+80h] [rbp-78h]
  unsigned __int64 v46; // [rsp+88h] [rbp-70h]
  void *v47[3]; // [rsp+90h] [rbp-68h] BYREF
  unsigned __int64 v48; // [rsp+A8h] [rbp-50h]
  HSTRING_HEADER v49; // [rsp+B0h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+0h]

  v43[1] = -2LL;
  LODWORD(v39) = 0;
  v48 = 7LL;
  v47[2] = 0LL;
  LOWORD(v47[0]) = 0;
  v46 = 7LL;
  v45 = 0LL;
  LOWORD(v44) = 0;
  try
  {
    ToastNotification::NotificationsTargetedContentClient::GetContentIdAndPath();
    v38 = L"Windows.Services.TargetedContent.TargetedContentContainer";
    LODWORD(v39) = 1;
    v3 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v49, &v38);
    *(_QWORD *)v35 = 0LL;
    ActivationFactory = RoGetActivationFactory(
                          v3[1].Reserved.Reserved1,
                          &GUID_5b47e7fb_2140_4c1f_a736_c59583f227d8,
                          v35);
    if ( ActivationFactory < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x659,
        (__int64)"internal\\sdk\\inc\\wil\\opensource\\wil\\winrt.h",
        (const char *)(unsigned int)ActivationFactory);
    }
    else
    {
      v5 = *(_QWORD *)v35;
      *(_QWORD *)v35 = 0LL;
      v39 = v5;
      v37 = 0LL;
      v6 = *(__int64 (__fastcall **)(__int64, PVOID, _QWORD **))(*(_QWORD *)v5 + 48LL);
      v7 = (const WCHAR *)&v44;
      if ( v46 >= 8 )
        v7 = v44;
      v38 = v7;
      v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v49, &v38);
      v9 = v37;
      v37 = 0LL;
      if ( v9 )
        (*(void (__fastcall **)(_QWORD *, _QWORD))(*v9 + 16LL))(v9, *v9);
      v10 = v6(v5, v8[1].Reserved.Reserved1, &v37);
      v11 = retaddr;
      if ( v10 >= 0 )
      {
        v43[0] = 0LL;
        v12 = v37;
        v13 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Services::TargetedContent::TargetedContentContainer *> *>(v37);
        if ( v13 >= 0 )
          v13 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD *))(*v12 + 64LL))(v12, v43);
        v14 = retaddr;
        if ( v13 >= 0 )
        {
          v36 = 0LL;
          v15 = v43[0];
          v16 = *(__int64 (__fastcall **)(__int64, PVOID, _QWORD **))(*(_QWORD *)v43[0] + 80LL);
          v17 = (const WCHAR *)v47;
          if ( v48 >= 8 )
            v17 = (const WCHAR *)v47[0];
          v38 = v17;
          v18 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v49, &v38);
          v19 = v36;
          v36 = 0LL;
          if ( v19 )
            (*(void (__fastcall **)(_QWORD *, _QWORD))(*v19 + 16LL))(v19, *v19);
          v20 = v16(v15, v18[1].Reserved.Reserved1, &v36);
          v21 = retaddr;
          if ( v20 >= 0 )
          {
            v42 = 0LL;
            v22 = *v36;
            v42 = 0LL;
            v23 = (*(__int64 (__fastcall **)(_QWORD *, __int64 **))(v22 + 72))(v36, &v42);
            v24 = retaddr;
            if ( v23 >= 0 )
            {
              v41 = 0LL;
              v25 = *v42;
              v41 = 0LL;
              v26 = (*(__int64 (__fastcall **)(__int64 *, __int64 **))(v25 + 112))(v42, &v41);
              v27 = retaddr;
              if ( v26 >= 0 )
              {
                v40 = 0LL;
                v28 = *v41;
                v40 = 0LL;
                v29 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v28 + 48))(v41, &v40);
                v30 = retaddr;
                if ( v29 >= 0 )
                {
                  v31 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncAction *>(v40);
                  v32 = retaddr;
                  if ( v31 >= 0 )
                  {
                    if ( v40 )
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
                    if ( v41 )
                      (*(void (__fastcall **)(__int64 *))(*v41 + 16))(v41);
                    if ( v42 )
                      (*(void (__fastcall **)(__int64 *))(*v42 + 16))(v42);
                    if ( v36 )
                      (*(void (__fastcall **)(_QWORD *))(*v36 + 16LL))(v36);
                    if ( v43[0] )
                      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v43[0] + 16LL))(v43[0]);
                    if ( v37 )
                      (*(void (__fastcall **)(_QWORD *))(*v37 + 16LL))(v37);
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
                    if ( v46 >= 8 )
                      operator delete(v44);
                    v46 = 7LL;
                    v45 = 0LL;
                    LOWORD(v44) = 0;
                    if ( v48 >= 8 )
                      operator delete(v47[0]);
                    return 0LL;
                  }
LABEL_44:
                  wil::details::in1diag3::Throw_Hr(
                    v32,
                    (void *)0x4A,
                    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
                    (const char *)(unsigned int)v31);
                  JUMPOUT(0x180047310LL);
                }
LABEL_43:
                wil::details::in1diag3::Throw_Hr(
                  v30,
                  (void *)0x49,
                  (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
                  (const char *)(unsigned int)v29);
                goto LABEL_44;
              }
LABEL_42:
              wil::details::in1diag3::Throw_Hr(
                v27,
                (void *)0x46,
                (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
                (const char *)(unsigned int)v26);
              goto LABEL_43;
            }
LABEL_41:
            wil::details::in1diag3::Throw_Hr(
              v24,
              (void *)0x43,
              (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
              (const char *)(unsigned int)v23);
            goto LABEL_42;
          }
LABEL_40:
          wil::details::in1diag3::Throw_Hr(
            v21,
            (void *)0x40,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
            (const char *)(unsigned int)v20);
          goto LABEL_41;
        }
LABEL_39:
        wil::details::in1diag3::Throw_Hr(
          v14,
          (void *)0x3D,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
          (const char *)(unsigned int)v13);
        goto LABEL_40;
      }
    }
    wil::details::in1diag3::Throw_Hr(
      v11,
      (void *)0x3A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_39;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x4E,
                           (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
                           v33);
  }
  return result;
}
