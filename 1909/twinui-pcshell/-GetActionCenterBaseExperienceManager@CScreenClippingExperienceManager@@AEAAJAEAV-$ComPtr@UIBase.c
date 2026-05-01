/*
 * XREFs of ?GetActionCenterBaseExperienceManager@CScreenClippingExperienceManager@@AEAAJAEAV?$ComPtr@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@@Z @ 0x1801CBEC4
 * Callers:
 *     ?IsActionCenterOpen@CScreenClippingExperienceManager@@AEAA_NXZ @ 0x1801CE2C0 (-IsActionCenterOpen@CScreenClippingExperienceManager@@AEAA_NXZ.c)
 *     ?StartClosingActionCenterAndOpenScreenClipping@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1801D1D90 (-StartClosingActionCenterAndOpenScreenClipping@CScreenClippingExperienceManager@@AEAAJXZ.c)
 *     ?SubscribeToActionCenterVisibilityChanged@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1801D20C4 (-SubscribeToActionCenterVisibilityChanged@CScreenClippingExperienceManager@@AEAAJXZ.c)
 *     ?UnsubscribeFromActionCenterVisibilityChanged@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1801D28DC (-UnsubscribeFromActionCenterVisibilityChanged@CScreenClippingExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??$AsWeak@UIDWMStoryboardListener@@@WRL@Microsoft@@YAJPEAUIDWMStoryboardListener@@PEAVWeakRef@01@@Z @ 0x18000C5F4 (--$AsWeak@UIDWMStoryboardListener@@@WRL@Microsoft@@YAJPEAUIDWMStoryboardListener@@PEAVWeakRef@01.c)
 *     ?InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x180014890 (-InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800436F0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     atexit @ 0x18008A080 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18016D308 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??$As@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801A2F38 (--$As@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@@-$ComPtr@UIInspectable@@@WRL@M.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CScreenClippingExperienceManager::GetActionCenterBaseExperienceManager(__int64 a1, __int64 *a2)
{
  Microsoft::WRL::WeakRef *v4; // r14
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, void *, GUID *, __int64 *); // rbx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, __int64, _QWORD); // rdi
  int v12; // eax
  int v13; // eax
  const struct _TlgProvider_t *v14; // rcx
  void *v15; // rax
  __int64 (__fastcall ***v16)(_QWORD, GUID *, __int64 *); // rbx
  __int64 *v17; // rax
  int v18; // eax
  LPVOID Context; // [rsp+38h] [rbp-19h] BYREF
  __int64 (__fastcall ***v20)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp-11h] BYREF
  __int64 (__fastcall ***v21)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp-9h] BYREF
  __int64 v22; // [rsp+50h] [rbp-1h] BYREF
  WINBOOL fPending; // [rsp+58h] [rbp+7h] BYREF
  __int64 v24; // [rsp+60h] [rbp+Fh]
  HSTRING_HEADER pData; // [rsp+68h] [rbp+17h] BYREF
  __int64 v26; // [rsp+80h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v24 = -2LL;
  v4 = (Microsoft::WRL::WeakRef *)(a1 + 424);
  if ( *(_QWORD *)(a1 + 424) )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
    if ( (int)Microsoft::WRL::WeakRef::InternalResolve(
                v4,
                &GUID_fd8022e5_1099_53f9_b49a_b39bf3f15861,
                (struct IInspectable **)a2) >= 0
      && *a2 )
    {
      return 0LL;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v4);
  }
  v22 = 0LL;
  v6 = *(_QWORD *)(a1 + 304);
  v7 = *(__int64 (__fastcall **)(__int64, void *, GUID *, __int64 *))(*(_QWORD *)v6 + 24LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
  v8 = v7(v6, &unk_180514408, &GUID_2e8fcb18_a0ee_41ad_8ef8_77fb3a370ca5, &v22);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v21 = 0LL;
    v10 = v22;
    v11 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v22 + 48LL);
    v26 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &pData,
      L"Windows.Internal.ShellExperience.ActionCenter",
      0x2Eu,
      0x2Du);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
    v12 = v11(v10, v26, &v21);
    v9 = v12;
    if ( v12 >= 0 )
    {
      v20 = 0LL;
      v13 = Microsoft::WRL::ComPtr<IInspectable>::As<Windows::Internal::Shell::Experience::IBaseExperienceManager>(
              &v21,
              (__int64 *)&v20);
      v9 = v13;
      if ( v13 >= 0 )
      {
        Context = 0LL;
        if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
          && fPending )
        {
          Context = qword_1805C20F0;
          qword_1805C20F0[0] = &ShellScreenClippingLogging::`vftable';
          qword_1805C2108 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
          wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805C20F0, qword_1805C2108);
          InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_1805C20F0);
        }
        v14 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
        if ( *(_DWORD *)v14 > 5u )
          TlgWrite(v14, &unk_1804E8B00, 0LL, 0LL, 2u, (EVENT_DATA_DESCRIPTOR *)&pData);
        v15 = (void *)*a2;
        v16 = v20;
        if ( (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a2 != v20 )
        {
          if ( v20 )
          {
            ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v20)[1])(v20);
            v15 = (void *)*a2;
          }
          Context = v15;
          *a2 = (__int64)v16;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&Context);
        }
        Context = v4;
        v17 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *((__int64 **)&Context);
        v18 = Microsoft::WRL::AsWeak<IDWMStoryboardListener>(v20, v17);
        if ( v18 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x4F7,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
            (const char *)(unsigned int)v18);
        v9 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x4EF,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
          (const char *)(unsigned int)v13);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4EC,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
        (const char *)(unsigned int)v12);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4E8,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
      (const char *)(unsigned int)v8);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
  return v9;
}
