/*
 * XREFs of ?ShowWindowArrangementView@TabletModeViewManager@@AEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEAUtagRECT@@PEAUtagPOINT@@2W4SHOW_WINDOW_ARRANGEMENT_VIEW_MODE@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@PEAUITabletModeInputSource@@@Z @ 0x1803D6F80
 * Callers:
 *     ?BeginDragVisualHandoff@TabletModeViewManager@@UEAAJPEAUIApplicationView@@PEAUtagRECT@@PEAUtagPOINT@@PEAUITabletModeInputSource@@@Z @ 0x1803D5E80 (-BeginDragVisualHandoff@TabletModeViewManager@@UEAAJPEAUIApplicationView@@PEAUtagRECT@@PEAUtagPO.c)
 *     ?MoveSizeAttempted@TabletModeViewManager@@UEAAJPEAUIApplicationView@@W4MOVE_SIZE_TYPE@@@Z @ 0x1803D69A0 (-MoveSizeAttempted@TabletModeViewManager@@UEAAJPEAUIApplicationView@@W4MOVE_SIZE_TYPE@@@Z.c)
 *     ?ShowPlaceMode@TabletModeViewManager@@UEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEAUtagRECT@@@Z @ 0x1803D6F20 (-ShowPlaceMode@TabletModeViewManager@@UEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEAUtagRECT@@@Z.c)
 *     ?StartSwipeHelper@TabletModeViewManager@@AEAAJIUtagPOINT@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@@Z @ 0x1803D750C (-StartSwipeHelper@TabletModeViewManager@@AEAAJIUtagPOINT@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18001A930 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180148704 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18018F144 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180191B20 (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0.c)
 *     ??1WindowArrangementView_Show@TabletModeTelemetry@@QEAA@XZ @ 0x1803D5D04 (--1WindowArrangementView_Show@TabletModeTelemetry@@QEAA@XZ.c)
 *     ?GetAppLayoutForDropFeedback@TabletModeViewManager@@AEAAJPEAUIApplicationView@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_MODE@@PEAPEAUIAppLayout@@@Z @ 0x1803D6488 (-GetAppLayoutForDropFeedback@TabletModeViewManager@@AEAAJPEAUIApplicationView@@W4SHOW_WINDOW_ARR.c)
 *     ?StartActivity@WindowArrangementView_Show@TabletModeTelemetry@@QEAAXW4SHOW_WINDOW_ARRANGEMENT_VIEW_MODE@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@@Z @ 0x1803D7324 (-StartActivity@WindowArrangementView_Show@TabletModeTelemetry@@QEAAXW4SHOW_WINDOW_ARRANGEMENT_VI.c)
 *     ?UpdateLayoutItemsSizeConstraints@TabletModeViewManager@@AEAAXXZ @ 0x1803D7DA4 (-UpdateLayoutItemsSizeConstraints@TabletModeViewManager@@AEAAXXZ.c)
 *     ?WindowArrangementView_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1803E4818 (-WindowArrangementView_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?TabletModeInputHandler_CreateInstance@@YAJW4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@PEAUITabletModeInputCallback@@AEBU_GUID@@PEAPEAX@Z @ 0x1803E7530 (-TabletModeInputHandler_CreateInstance@@YAJW4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@PEAUITabletMod.c)
 */

__int64 __fastcall TabletModeViewManager::ShowWindowArrangementView(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        struct tagPOINT *a5,
        __int64 a6,
        unsigned int a7,
        unsigned int a8,
        __int64 a9)
{
  int AppLayoutForDropFeedback; // eax
  unsigned int v13; // ebx
  __int64 v14; // rcx
  __int64 *v15; // rax
  IUnknown *v16; // rdx
  char v17; // r14
  IUnknown *v18; // rcx
  int Instance; // eax
  __int64 v20; // rdx
  const struct _GUID *v21; // rcx
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // rcx
  IUnknown *punk; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v29; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v30; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v31; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v32; // [rsp+50h] [rbp-B0h] BYREF
  struct tagPOINT Point; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v34; // [rsp+60h] [rbp-A0h]
  _QWORD v35[40]; // [rsp+70h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+F8h]

  v34 = a6;
  v31 = a4;
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v35,
    (__int64)"WindowArrangementView_Show");
  v35[0] = &TabletModeTelemetry::WindowArrangementView_Show::`vftable';
  TabletModeTelemetry::WindowArrangementView_Show::StartActivity(v35, a7, a8);
  v30 = 0LL;
  if ( a3 )
  {
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(&v30, a3);
    goto LABEL_3;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
  AppLayoutForDropFeedback = TabletModeViewManager::GetAppLayoutForDropFeedback((__int64)a1, a2, a7, &v30);
  v13 = AppLayoutForDropFeedback;
  if ( AppLayoutForDropFeedback >= 0 )
  {
LABEL_3:
    if ( a5 )
      Point = *a5;
    else
      GetPhysicalCursorPos(&Point);
    v14 = a1[16];
    if ( v14 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 48LL))(v14, 0LL);
    punk = 0LL;
    v15 = a1 + 17;
    v16 = (IUnknown *)a1[17];
    v17 = 1;
    if ( v16 )
    {
      v18 = 0LL;
      if ( &v32 != v15 )
      {
        *v15 = 0LL;
        v18 = v16;
      }
      v32 = 0LL;
      punk = v18;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v32);
LABEL_14:
      v29 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
      Instance = ((__int64 (__fastcall *)(IUnknown *, GUID *, __int64 *))punk->lpVtbl->QueryInterface)(
                   punk,
                   &GUID_bf49be29_71c8_427e_a671_fec22c61e5f1,
                   &v29);
      v13 = Instance;
      if ( Instance >= 0 )
      {
        if ( a9 )
        {
          Instance = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a9 + 24LL))(a9, v29);
          v13 = Instance;
          if ( Instance < 0 )
          {
            v20 = 537LL;
            goto LABEL_28;
          }
        }
        else
        {
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 19);
          Instance = TabletModeInputHandler_CreateInstance(a8, v29, v24, a1 + 19);
          v13 = Instance;
          if ( Instance < 0 )
          {
            v20 = 542LL;
            goto LABEL_28;
          }
        }
        Instance = ((__int64 (__fastcall *)(IUnknown *, __int64, struct tagPOINT *, __int64))punk->lpVtbl[1].AddRef)(
                     punk,
                     v31,
                     &Point,
                     v34);
        v13 = Instance;
        if ( Instance >= 0 )
        {
          Microsoft::WRL::ComPtr<IApplicationView>::operator=(a1 + 16, (__int64 *)&punk);
          v25 = a1[20];
          if ( v25 != a9 )
          {
            if ( a9 )
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)a9 + 8LL))(a9);
              v25 = a1[20];
            }
            v31 = v25;
            a1[20] = a9;
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
          }
          TabletModeViewManager::UpdateLayoutItemsSizeConstraints((TabletModeViewManager *)a1);
          v17 = 0;
          wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v35);
          v13 = 0;
LABEL_34:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
          if ( !v17 )
          {
LABEL_38:
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
            goto LABEL_39;
          }
LABEL_35:
          v26 = a1[19];
          if ( v26 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 56LL))(v26);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 19);
          }
          IUnknown_SetSite(punk, 0LL);
          goto LABEL_38;
        }
        v20 = 545LL;
      }
      else
      {
        v20 = 532LL;
      }
LABEL_28:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v20,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
        (const char *)(unsigned int)Instance);
      goto LABEL_34;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
    v22 = WindowArrangementView_CreateInstance(v21, (void **)&punk);
    v13 = v22;
    if ( v22 >= 0 )
    {
      IUnknown_SetSite(punk, (IUnknown *)a1);
      v22 = ((__int64 (__fastcall *)(IUnknown *, __int64, __int64, _QWORD, unsigned int))punk->lpVtbl[1].QueryInterface)(
              punk,
              a2,
              v30,
              a7,
              a8);
      v13 = v22;
      if ( v22 >= 0 )
        goto LABEL_14;
      v23 = 527LL;
    }
    else
    {
      v23 = 525LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v23,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
      (const char *)(unsigned int)v22);
    goto LABEL_35;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1E3,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
    (const char *)(unsigned int)AppLayoutForDropFeedback);
LABEL_39:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
  TabletModeTelemetry::WindowArrangementView_Show::~WindowArrangementView_Show((TabletModeTelemetry::WindowArrangementView_Show *)v35);
  return v13;
}
