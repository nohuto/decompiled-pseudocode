/*
 * XREFs of ?OnViewCreated@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800917A0
 * Callers:
 *     <none>
 * Callees:
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18002D758 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ??$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180030A98 (--$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@Vie.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?Provider@SingleViewExperienceLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x18008E008 (-Provider@SingleViewExperienceLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____lambda_7236ad44fa518745a9bdf4ca8e40e752___ @ 0x18008E958 (Microsoft--WRL--Callback_Windows--Foundation--ITypedEventHandler_Windows--Internal--Shell--ViewM.c)
 *     ??$Callback@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@VCBaseTrayFlyoutExperienceManager@@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@3@PEAUIClientWindowReadyForPresentationChangedEventArgs@6783@@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@@01@PEAVCBaseTrayFlyoutExperienceManager@@P83@EAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@5678@@Z@Z @ 0x18008E9D8 (--$Callback@U-$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windo.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??0CMarshaledInterface@@QEAA@AEBV0@@Z @ 0x18012D804 (--0CMarshaledInterface@@QEAA@AEBV0@@Z.c)
 *     ??$?0U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@@CMarshaledInterface@@QEAA@PEAU?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@W4MARSHAL_KIND@@@Z @ 0x18019ED2C (--$-0U-$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEA.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CBaseTrayFlyoutExperienceManager::OnViewCreated(
        CBaseTrayFlyoutExperienceManager *this,
        ExperienceManagerUtils **a2)
{
  const struct _TlgProvider_t *v4; // rax
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v5; // rdx
  void (__fastcall ***v6)(_QWORD, ExperienceManagerUtils **); // rcx
  __int64 v7; // rcx
  int v8; // eax
  HWND v9; // rax
  unsigned int v10; // ebx
  int v11; // eax
  int v12; // eax
  __int64 v14; // [rsp+38h] [rbp-19h] BYREF
  __int64 v15; // [rsp+40h] [rbp-11h] BYREF
  __int64 v16[2]; // [rsp+48h] [rbp-9h] BYREF
  EVENT_DATA_DESCRIPTOR v17; // [rsp+58h] [rbp+7h] BYREF
  __int64 v18; // [rsp+68h] [rbp+17h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v18 = -2LL;
  v4 = SingleViewExperienceLogging::Provider();
  if ( *(_DWORD *)v4 > 5u )
    TlgWrite(v4, &unk_1804C4FCB, 0LL, 0LL, 2u, &pData);
  v6 = (void (__fastcall ***)(_QWORD, ExperienceManagerUtils **))*((_QWORD *)this + 40);
  if ( v6 )
    (**v6)(v6, a2);
  if ( *((_BYTE *)this + 401) )
  {
    v7 = *((_QWORD *)this + 2);
    if ( v7 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, char *))(*(_QWORD *)v7 + 24LL))(
             v7,
             ((unsigned __int64)this - 24) & -(__int64)(this != (CBaseTrayFlyoutExperienceManager *)48),
             (char *)this + 404);
      if ( v8 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x7F,
          (__int64)"internal\\shell\\private\\inc\\basetrayflyoutexperience.cpp",
          (const char *)(unsigned int)v8);
    }
  }
  v9 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(a2[3], v5);
  if ( !v9 || SetPropW(v9, L"UIA_WindowPatternEnabled", HANDLE_FLAG_INHERIT) )
  {
    v14 = 0LL;
    v11 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState>(
            (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a2 + 3,
            &v14);
    v10 = v11;
    if ( v11 >= 0 )
    {
      pData.Ptr = (ULONGLONG)CBaseTrayFlyoutExperienceManager::OnClientWindowReadyForPresentationChanged;
      pData.Size = 0;
      v17 = pData;
      Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>,CBaseTrayFlyoutExperienceManager,Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>(
        &pData,
        (__int64)this - 48,
        &v17);
      CMarshaledInterface::CMarshaledInterface(v16, pData.Ptr);
      CMarshaledInterface::CMarshaledInterface((CMarshaledInterface *)&v15, (const struct CMarshaledInterface *)v16);
      Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____lambda_7236ad44fa518745a9bdf4ca8e40e752___(
        &v17,
        &v15);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
      v12 = (*(__int64 (__fastcall **)(__int64, ULONGLONG, char *))(*(_QWORD *)v14 + 80LL))(
              v14,
              v17.Ptr,
              (char *)this + 408);
      v10 = v12;
      if ( v12 >= 0 )
        v10 = 0;
      else
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xAA,
          (__int64)"internal\\shell\\private\\inc\\basetrayflyoutexperience.cpp",
          (const char *)(unsigned int)v12);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v16);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&pData);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8F,
        (__int64)"internal\\shell\\private\\inc\\basetrayflyoutexperience.cpp",
        (const char *)(unsigned int)v11);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  }
  else
  {
    v10 = -2147467259;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8B,
      (__int64)"internal\\shell\\private\\inc\\basetrayflyoutexperience.cpp",
      (const char *)0x80004005LL);
  }
  return v10;
}
