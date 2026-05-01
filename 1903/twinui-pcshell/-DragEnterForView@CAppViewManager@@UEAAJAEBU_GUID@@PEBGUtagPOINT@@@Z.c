/*
 * XREFs of ?DragEnterForView@CAppViewManager@@UEAAJAEBU_GUID@@PEBGUtagPOINT@@@Z @ 0x18012FFD0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIImmersiveApplication@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@@Details@12@@Z @ 0x18010A874 (--$As@UIImmersiveApplication@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ??0?$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18012D1D0 (--0-$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_Param0I.c)
 *     ??1DragEnterForView@AppViewManagerTabTelemetry@@QEAA@XZ @ 0x18012DD6C (--1DragEnterForView@AppViewManagerTabTelemetry@@QEAA@XZ.c)
 *     _lambda_c1a7ac69e9e62a8a18c5910db6fc25e8_::operator() @ 0x18012E650 (_lambda_c1a7ac69e9e62a8a18c5910db6fc25e8_--operator().c)
 *     ?EnsureApplication@CAppViewManager@@AEAAJPEBGPEAPEAUIImmersiveApplicationInternal@@@Z @ 0x180130420 (-EnsureApplication@CAppViewManager@@AEAAJPEBGPEAPEAUIImmersiveApplicationInternal@@@Z.c)
 *     ?StartActivity@DragEnterForView@AppViewManagerTabTelemetry@@QEAAXPEBGAEBU_GUID@@AEBUtagPOINT@@@Z @ 0x18013306C (-StartActivity@DragEnterForView@AppViewManagerTabTelemetry@@QEAAXPEBGAEBU_GUID@@AEBUtagPOINT@@@Z.c)
 *     ?Stop@?$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180133E68 (-Stop@-$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Para.c)
 *     ?_CheckTabletMode@CAppViewManager@@AEAAJXZ @ 0x180136A7C (-_CheckTabletMode@CAppViewManager@@AEAAJXZ.c)
 */

__int64 __fastcall CAppViewManager::DragEnterForView(
        CAppViewManager *this,
        const struct _GUID *a2,
        const unsigned __int16 *a3,
        struct tagPOINT a4)
{
  int v7; // ebx
  RTL_SRWLOCK *v8; // rbx
  int v9; // eax
  int v10; // edi
  int v11; // eax
  int v12; // eax
  RTL_SRWLOCK *v13; // rbx
  int v14; // eax
  struct IImmersiveApplicationInternal *v16; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v17; // [rsp+38h] [rbp-C8h] BYREF
  int v18; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v19; // [rsp+50h] [rbp-B0h] BYREF
  char v20; // [rsp+60h] [rbp-A0h]
  struct tagPOINT v21; // [rsp+68h] [rbp-98h] BYREF
  __int64 v22; // [rsp+70h] [rbp-90h]
  _QWORD v23[40]; // [rsp+80h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+208h] [rbp+108h]

  v22 = -2LL;
  v21 = a4;
  wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TabShellTelemetryProvider,1,70368744177664,4,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v23,
    (__int64)"DragEnterForView");
  v23[0] = &AppViewManagerTabTelemetry::DragEnterForView::`vftable';
  AppViewManagerTabTelemetry::DragEnterForView::StartActivity(
    (AppViewManagerTabTelemetry::DragEnterForView *)v23,
    a3,
    a2,
    &v21);
  v7 = CAppViewManager::_CheckTabletMode((CAppViewManager *)((char *)this - 56));
  if ( v7 >= 0 )
  {
    v8 = CApplicationManagerUtility::g_pIAMGlobals;
    AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
    v9 = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, int *))(**((_QWORD **)this + 16) + 24LL))(
           *((_QWORD *)this + 16),
           a2,
           &v18);
    v10 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x42B,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v9);
      if ( v8 )
        ReleaseSRWLockShared(v8);
LABEL_5:
      v7 = v10;
      goto LABEL_22;
    }
    if ( v8 )
      ReleaseSRWLockShared(v8);
    if ( !v18 )
    {
      v16 = 0LL;
      *(_QWORD *)&v17 = (char *)this - 56;
      *((_QWORD *)&v17 + 1) = &v16;
      v19 = v17;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v16);
      v11 = CAppViewManager::EnsureApplication((CAppViewManager *)((char *)this - 56), a3, &v16);
      v7 = v11;
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x43D,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v11);
LABEL_11:
        v20 = 0;
        lambda_c1a7ac69e9e62a8a18c5910db6fc25e8_::operator()((_QWORD **)&v19);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v16);
        goto LABEL_22;
      }
      *(_QWORD *)&v17 = 0LL;
      v12 = Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplication>(
              (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v16,
              (__int64 *)&v17);
      v7 = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x442,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v12);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
        goto LABEL_11;
      }
      v13 = CApplicationManagerUtility::g_pIAMGlobals;
      AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      v14 = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, GUID *, _QWORD))(**((_QWORD **)this + 16) + 32LL))(
              *((_QWORD *)this + 16),
              a2,
              &GUID_NULL,
              v17);
      v10 = v14;
      if ( v14 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x444,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v14);
        if ( v13 )
          ReleaseSRWLockExclusive(v13);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
        v20 = 0;
        lambda_c1a7ac69e9e62a8a18c5910db6fc25e8_::operator()((_QWORD **)&v19);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v16);
        goto LABEL_5;
      }
      if ( v13 )
        ReleaseSRWLockExclusive(v13);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v16);
    }
    wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v23);
    v7 = 0;
  }
LABEL_22:
  AppViewManagerTabTelemetry::DragEnterForView::~DragEnterForView((AppViewManagerTabTelemetry::DragEnterForView *)v23);
  return (unsigned int)v7;
}
