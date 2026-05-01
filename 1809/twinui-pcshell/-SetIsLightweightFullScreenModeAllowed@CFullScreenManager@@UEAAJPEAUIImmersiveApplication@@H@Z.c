/*
 * XREFs of ?SetIsLightweightFullScreenModeAllowed@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@H@Z @ 0x180065710
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1CPropertyStoreHelper@@QEAA@XZ @ 0x1800658A0 (--1CPropertyStoreHelper@@QEAA@XZ.c)
 *     ?GetViewForApplication@ApplicationViewHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveApplication@@PEAPEAUIApplicationView@@@Z @ 0x1800658D8 (-GetViewForApplication@ApplicationViewHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveApplication@@PEAPE.c)
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x180065968 (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFullScreenManager::SetIsLightweightFullScreenModeAllowed(
        IUnknown **this,
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
  IUnknown *punk; // [rsp+30h] [rbp-30h] BYREF
  __int64 v17; // [rsp+38h] [rbp-28h] BYREF
  __int64 v18; // [rsp+40h] [rbp-20h] BYREF
  __int16 v19; // [rsp+48h] [rbp-18h] BYREF
  __int16 v20; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  __int64 v22; // [rsp+98h] [rbp+38h] BYREF
  void *ppvOut; // [rsp+A8h] [rbp+48h] BYREF

  v17 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  v6 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, GUID *, __int64 *))a2->lpVtbl[2].QueryInterface)(
         a2,
         0LL,
         &GUID_886d8eeb_8cf2_4446_8d02_cdba1dbdcf99,
         &v17);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x142,
      (__int64)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_14;
  }
  wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
    &v18,
    v17);
  v19 = 11;
  if ( a3 )
    v20 = -1;
  else
    v20 = 0;
  v8 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int16 *))(*(_QWORD *)v18 + 48LL))(
         v18,
         &PKEY_ImmersiveApplication_LightweightFullScreenModeAllowed,
         &v19);
  v7 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x145,
      (__int64)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_13;
  }
  v22 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
  ViewForApplication = ApplicationViewHelpers::GetViewForApplication(
                         *(this - 9),
                         a2,
                         (struct IImmersiveApplication *)&v22,
                         v9);
  v7 = ViewForApplication;
  if ( ViewForApplication < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x148,
      (__int64)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
      (const char *)(unsigned int)ViewForApplication);
    goto LABEL_12;
  }
  v11 = v22;
  punk = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
  v12 = (*(__int64 (__fastcall **)(__int64, IUnknown **))(*(_QWORD *)v11 + 80LL))(v11, &punk);
  v7 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14C,
      (__int64)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
      (const char *)(unsigned int)v12);
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
      (__int64)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
      (const char *)(unsigned int)v13);
    goto LABEL_10;
  }
  v13 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)ppvOut + 104LL))(ppvOut, v22);
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
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
LABEL_12:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
LABEL_13:
  CPropertyStoreHelper::~CPropertyStoreHelper((CPropertyStoreHelper *)&v18);
LABEL_14:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  return v7;
}
