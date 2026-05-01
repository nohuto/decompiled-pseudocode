/*
 * XREFs of ?SetIsLightweightFullScreenModeAllowed@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@H@Z @ 0x180067A60
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x18000B7EC (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1CPropertyStoreHelper@@QEAA@XZ @ 0x180067BF0 (--1CPropertyStoreHelper@@QEAA@XZ.c)
 *     ?GetViewForApplication@ApplicationViewHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveApplication@@PEAPEAUIApplicationView@@@Z @ 0x180067C28 (-GetViewForApplication@ApplicationViewHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveApplication@@PEAPE.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFullScreenManager::SetIsLightweightFullScreenModeAllowed(
        ApplicationViewHelpers **this,
        struct IUnknown *a2,
        int a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  struct IApplicationView **v9; // r9
  int ViewForApplication; // eax
  __int64 v11; // rbx
  int v12; // eax
  HRESULT v13; // eax
  __int64 v15; // rdx
  int v16; // [rsp+20h] [rbp-40h]
  IUnknown *punk; // [rsp+30h] [rbp-30h] BYREF
  __int64 v18; // [rsp+38h] [rbp-28h] BYREF
  __int64 v19; // [rsp+40h] [rbp-20h] BYREF
  __int16 v20; // [rsp+48h] [rbp-18h] BYREF
  __int16 v21; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  __int64 v23; // [rsp+98h] [rbp+38h] BYREF
  void *ppvOut; // [rsp+A8h] [rbp+48h] BYREF

  v18 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
  v6 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, GUID *, __int64 *))a2->lpVtbl[2].QueryInterface)(
         a2,
         0LL,
         &GUID_886d8eeb_8cf2_4446_8d02_cdba1dbdcf99,
         &v18);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x142,
      (unsigned int)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
      (const char *)(unsigned int)v6,
      v16);
    goto LABEL_14;
  }
  wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
    &v19,
    v18);
  v20 = 11;
  if ( a3 )
    v21 = -1;
  else
    v21 = 0;
  v8 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int16 *))(*(_QWORD *)v19 + 48LL))(
         v19,
         &PKEY_ImmersiveApplication_LightweightFullScreenModeAllowed,
         &v20);
  v7 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x145,
      (unsigned int)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
      (const char *)(unsigned int)v8,
      v16);
    goto LABEL_13;
  }
  v23 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
  ViewForApplication = ApplicationViewHelpers::GetViewForApplication(
                         *(this - 9),
                         a2,
                         (struct IImmersiveApplication *)&v23,
                         v9);
  v7 = ViewForApplication;
  if ( ViewForApplication < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x148,
      (unsigned int)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
      (const char *)(unsigned int)ViewForApplication,
      v16);
    goto LABEL_12;
  }
  v11 = v23;
  punk = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
  v12 = (*(__int64 (__fastcall **)(__int64, IUnknown **))(*(_QWORD *)v11 + 80LL))(v11, &punk);
  v7 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14C,
      (unsigned int)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
      (const char *)(unsigned int)v12,
      v16);
    goto LABEL_11;
  }
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  v13 = IUnknown_QueryService(
          punk,
          &GUID_88ed940d_d632_4b84_9529_a3110b5af527,
          &GUID_88ed940d_d632_4b84_9529_a3110b5af527,
          &ppvOut);
  v7 = v13;
  if ( v13 < 0 )
  {
    v15 = 335LL;
LABEL_22:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (unsigned int)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
      (const char *)(unsigned int)v13,
      v16);
    goto LABEL_10;
  }
  v13 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)ppvOut + 104LL))(ppvOut, v23);
  v7 = v13;
  if ( v13 < 0 )
  {
    v15 = 336LL;
    goto LABEL_22;
  }
  v7 = 0;
LABEL_10:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
LABEL_11:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
LABEL_12:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
LABEL_13:
  CPropertyStoreHelper::~CPropertyStoreHelper((CPropertyStoreHelper *)&v19);
LABEL_14:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
  return v7;
}
