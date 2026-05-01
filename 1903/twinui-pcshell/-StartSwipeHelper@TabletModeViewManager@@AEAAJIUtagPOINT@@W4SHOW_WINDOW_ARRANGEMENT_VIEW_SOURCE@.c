/*
 * XREFs of ?StartSwipeHelper@TabletModeViewManager@@AEAAJIUtagPOINT@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@@Z @ 0x1803B7FFC
 * Callers:
 *     ?StartDrag@TabletModeViewManager@@UEAAJUtagPOINT@@@Z @ 0x1803B7FC0 (-StartDrag@TabletModeViewManager@@UEAAJUtagPOINT@@@Z.c)
 *     ?StartExtendedSwipe@TabletModeViewManager@@UEAAJUtagPOINT@@I0@Z @ 0x1803B7FE0 (-StartExtendedSwipe@TabletModeViewManager@@UEAAJUtagPOINT@@I0@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@VICortanaExperienceManagerNotification@Cortana@TwinUI@@@WRL@Microsoft@@QEAAAEAV012@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@@Z @ 0x180065588 (--4-$ComPtr@VICortanaExperienceManagerNotification@Cortana@TwinUI@@@WRL@Microsoft@@QEAAAEAV012@P.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180129204 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?DismissAllLightDismiss@TabletModeViewManager@@AEAAJXZ @ 0x1803B6E74 (-DismissAllLightDismiss@TabletModeViewManager@@AEAAJXZ.c)
 *     ?IsLauncherOrSwitcherVisibleOnThisMonitor@TabletModeViewManager@@AEAA_NXZ @ 0x1803B72A8 (-IsLauncherOrSwitcherVisibleOnThisMonitor@TabletModeViewManager@@AEAA_NXZ.c)
 *     ?ShowWindowArrangementView@TabletModeViewManager@@AEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEAUtagRECT@@PEAUtagPOINT@@2W4SHOW_WINDOW_ARRANGEMENT_VIEW_MODE@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@PEAUITabletModeInputSource@@@Z @ 0x1803B7A70 (-ShowWindowArrangementView@TabletModeViewManager@@AEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEA.c)
 */

__int64 __fastcall TabletModeViewManager::StartSwipeHelper(__int64 a1, unsigned int a2, POINT a3, unsigned int a4)
{
  unsigned int v4; // r12d
  unsigned int v6; // edi
  HRESULT v8; // eax
  unsigned int v9; // esi
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // r8
  bool *v13; // r9
  int v14; // eax
  void *v15; // rbx
  __int64 v16; // rbx
  HRESULT v17; // eax
  HRESULT v18; // edi
  void *v19; // rdi
  int v20; // eax
  unsigned int v21; // edi
  LONG left; // eax
  LONG top; // eax
  __int64 v24; // rdi
  int v25; // eax
  unsigned int v26; // edi
  int v27; // eax
  POINT pt; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v30; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v31; // [rsp+60h] [rbp-A0h] BYREF
  void *v32; // [rsp+68h] [rbp-98h] BYREF
  __int64 v33; // [rsp+70h] [rbp-90h] BYREF
  __int64 v34; // [rsp+78h] [rbp-88h] BYREF
  void *v35; // [rsp+80h] [rbp-80h] BYREF
  void *ppvOut; // [rsp+88h] [rbp-78h] BYREF
  int v37; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v38; // [rsp+94h] [rbp-6Ch]
  _BYTE v39[16]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v40; // [rsp+B0h] [rbp-50h]
  RECT v41; // [rsp+C8h] [rbp-38h] BYREF
  RECT v42; // [rsp+E0h] [rbp-20h] BYREF
  RECT rc; // [rsp+F8h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+48h]

  v4 = 0;
  v38 = a4;
  *(_BYTE *)(a1 + 184) = 0;
  pt = a3;
  v6 = a4;
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  v8 = IUnknown_QueryService(
         *(IUnknown **)(a1 + 16),
         &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
         &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
         &ppvOut);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(void *, int *))(*(_QWORD *)ppvOut + 24LL))(ppvOut, &v37);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = 633LL;
      goto LABEL_5;
    }
    v9 = 1;
    if ( v37 != 1 )
      goto LABEL_46;
    if ( TabletModeViewManager::IsLauncherOrSwitcherVisibleOnThisMonitor((TabletModeViewManager *)a1, v11, v12, v13) )
    {
      *(_BYTE *)(a1 + 184) = 1;
      v9 = 0;
      goto LABEL_46;
    }
    v14 = TabletModeViewManager::DismissAllLightDismiss((TabletModeViewManager *)a1);
    if ( v14 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x288,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
        (const char *)(unsigned int)v14);
    v34 = 0LL;
    v35 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v35);
    if ( IUnknown_QueryService(
           *(IUnknown **)(a1 + 16),
           &GUID_88ed940d_d632_4b84_9529_a3110b5af527,
           &GUID_88ed940d_d632_4b84_9529_a3110b5af527,
           &v35) >= 0 )
    {
      v15 = v35;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v34);
      (*(void (__fastcall **)(void *, __int64 *))(*(_QWORD *)v15 + 80LL))(v15, &v34);
    }
    v16 = 0LL;
    v33 = 0LL;
    if ( v34 )
    {
      v4 = 1;
      Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v33, &v34);
      v16 = v33;
LABEL_41:
      if ( v16 )
      {
        v27 = TabletModeViewManager::ShowWindowArrangementView((__int64 *)a1, v16, 0LL, 0LL, &pt, 0LL, v4, v6, 0LL);
        v9 = v27;
        if ( v27 >= 0 )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD, POINT))(**(_QWORD **)(a1 + 152) + 24LL))(
            *(_QWORD *)(a1 + 152),
            a2,
            pt);
          v9 = 0;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2C3,
            (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
            (const char *)(unsigned int)v27);
        }
      }
      goto LABEL_45;
    }
    v32 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v32);
    v17 = IUnknown_QueryService(
            *(IUnknown **)(a1 + 16),
            &GUID_975d55f5_ce62_42c0_868a_eda817f3871e,
            &GUID_975d55f5_ce62_42c0_868a_eda817f3871e,
            &v32);
    v18 = v17;
    if ( v17 >= 0 )
    {
      v30 = 0LL;
      v19 = v32;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
      v20 = (*(__int64 (__fastcall **)(void *, __int64 *))(*(_QWORD *)v19 + 72LL))(v19, &v30);
      v21 = v20;
      if ( v20 >= 0 )
      {
        (*(void (__fastcall **)(__int64, RECT *))(*(_QWORD *)v30 + 24LL))(v30, &v42);
        if ( PtInRect(&rc, pt) && !PtInRect(&v42, pt) )
        {
          left = v42.left;
          if ( pt.x > v42.left )
            left = pt.x;
          if ( left >= v42.right )
          {
            pt.x = v42.right;
          }
          else if ( pt.x <= v42.left )
          {
            pt.x = v42.left;
          }
          top = v42.top;
          if ( pt.y > v42.top )
            top = pt.y;
          if ( top >= v42.bottom )
          {
            pt.y = v42.bottom;
          }
          else if ( pt.y <= v42.top )
          {
            pt.y = v42.top;
          }
        }
        v31 = 0LL;
        v24 = v30;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
        v25 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v24 + 128LL))(v24, &v31);
        v26 = v25;
        if ( v25 >= 0 )
        {
          while ( (*(int (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)v31 + 24LL))(v31, 1LL, v39) >= 0 )
          {
            if ( PtInRect(&v41, pt) )
            {
              Microsoft::WRL::ComPtr<TwinUI::Cortana::ICortanaExperienceManagerNotification>::operator=(&v33, v40);
              v16 = v33;
              break;
            }
          }
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v32);
          v6 = v38;
          goto LABEL_41;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2B3,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
          (const char *)(unsigned int)v25);
        v9 = v26;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2A4,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
          (const char *)(unsigned int)v20);
        v9 = v21;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2A1,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
        (const char *)(unsigned int)v17);
      v9 = v18;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v32);
LABEL_45:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v33);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v35);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v34);
    goto LABEL_46;
  }
  v10 = 630LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
    (const char *)(unsigned int)v8);
LABEL_46:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  return v9;
}
