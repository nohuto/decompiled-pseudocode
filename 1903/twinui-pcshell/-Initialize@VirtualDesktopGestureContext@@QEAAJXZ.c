/*
 * XREFs of ?Initialize@VirtualDesktopGestureContext@@QEAAJXZ @ 0x1803F5220
 * Callers:
 *     ?StartSwipe@VirtualDesktopGestureHandler@@UEAAJHHIUTOUCHPAD_GESTURE_CONTEXT@@@Z @ 0x1803F63A0 (-StartSwipe@VirtualDesktopGestureHandler@@UEAAJHHIUTOUCHPAD_GESTURE_CONTEXT@@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005E750 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18011BE3C (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ??0?$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x1801DFCB8 (--0-$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@d.c)
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x1802B061C (--0Iterator@-$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V-$ComPtr@UIImmersiveMonitor@@@WRL@Micr.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x1802B1754 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V-$ComPtr@UIImmersiveMon.c)
 *     ??$Make@VVirtualDesktopGestureWindow@@PEAUIVirtualDesktopManagerInternal@@PEAUISwitchThumbnailDeviceManager@@PEAUIApplicationViewCollection@@PEAUIImmersiveSettingsCache@@AEAUCRect@Geometry@@AEAPEAUHMONITOR__@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VVirtualDesktopGestureWindow@@@12@$$QEAPEAUIVirtualDesktopManagerInternal@@$$QEAPEAUISwitchThumbnailDeviceManager@@$$QEAPEAUIApplicationViewCollection@@$$QEAPEAUIImmersiveSettingsCache@@AEAUCRect@Geometry@@AEAPEAUHMONITOR__@@@Z @ 0x1803F3334 (--$Make@VVirtualDesktopGestureWindow@@PEAUIVirtualDesktopManagerInternal@@PEAUISwitchThumbnailDe.c)
 *     ?Initialize@VirtualDesktopGestureWindow@@QEAAJXZ @ 0x1803F5664 (-Initialize@VirtualDesktopGestureWindow@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=22
__int64 __fastcall VirtualDesktopGestureContext::Initialize(VirtualDesktopGestureContext *this)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, __int64 *); // rbx
  int v4; // eax
  unsigned int v5; // edi
  char v6; // r15
  __int64 v7; // rbx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  void *v11; // r8
  const char *v12; // r9
  __int64 v13; // rdx
  int v14; // eax
  VirtualDesktopGestureWindow **v15; // r8
  VirtualDesktopGestureWindow *v16; // rcx
  __int64 v17; // r9
  __int64 v18; // rdx
  VirtualDesktopGestureWindow *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rbx
  __int64 v22; // rsi
  VirtualDesktopGestureWindow *v24; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v25; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v26; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v27; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+68h] [rbp-A0h] BYREF
  int v29; // [rsp+70h] [rbp-98h]
  __int64 v30; // [rsp+78h] [rbp-90h] BYREF
  __int64 v31[2]; // [rsp+80h] [rbp-88h] BYREF
  HMONITOR v32; // [rsp+90h] [rbp-78h] BYREF
  int v33[2]; // [rsp+98h] [rbp-70h] BYREF
  struct IApplicationViewCollection *v34; // [rsp+A0h] [rbp-68h] BYREF
  struct ISwitchThumbnailDeviceManager *v35; // [rsp+A8h] [rbp-60h] BYREF
  struct IVirtualDesktopManagerInternal *v36[2]; // [rsp+B0h] [rbp-58h] BYREF
  char v37; // [rsp+C0h] [rbp-48h]
  int v38; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v39[3]; // [rsp+D0h] [rbp-38h] BYREF
  struct tagRECT v40; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v41; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v42; // [rsp+100h] [rbp-8h]
  __int64 v43; // [rsp+108h] [rbp+0h]
  wil::details::in1diag3 *retaddr; // [rsp+130h] [rbp+28h]

  v39[2] = -2LL;
  v25 = 0LL;
  v2 = *((_QWORD *)this + 4);
  v3 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 112LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
  v4 = v3(v2, &v25);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1DA,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_39;
  }
  v36[1] = this;
  v6 = 1;
  v37 = 1;
  v41 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  if ( (unsigned int)GetPrecisionTouchPadConfiguration(&v41) )
    *((_BYTE *)this + 66) = (unsigned __int8)(BYTE4(v42) & 8) >> 3;
  details::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>(
    (__int64)&v28,
    v25);
  details::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>::Iterator::Iterator(
    (__int64)&v30,
    (__int64)&v28,
    0);
  details::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>::Iterator::Iterator(
    (__int64)&v38,
    (__int64)&v28,
    v29);
  while ( 1 )
  {
    if ( (_DWORD)v30 == v38 && v31[1] == v39[1] )
    {
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v39);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v31);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
      v6 = 0;
      v37 = 0;
      v5 = 0;
      goto LABEL_35;
    }
    v7 = v31[0];
    v27 = v31[0];
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v27);
    v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 48LL))(v7, &v26);
    if ( v8 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1EE,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v8);
      goto LABEL_23;
    }
    if ( (_DWORD)v26 )
      break;
LABEL_23:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v27);
    LODWORD(v30) = v30 + 1;
    details::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>::Iterator::GetCurrentObject(&v30);
  }
  *(_QWORD *)&v40.left = 0LL;
  *(_QWORD *)&v40.right = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v7 + 72LL))(v7, &v40);
  v5 = v9;
  if ( v9 < 0 )
  {
    v20 = 497LL;
    goto LABEL_33;
  }
  v9 = (*(__int64 (__fastcall **)(__int64, HMONITOR *))(*(_QWORD *)v7 + 40LL))(v7, &v32);
  v5 = v9;
  if ( v9 < 0 )
  {
    v20 = 500LL;
LABEL_33:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_34;
  }
  *(_QWORD *)v33 = *((_QWORD *)this + 5);
  v34 = (struct IApplicationViewCollection *)*((_QWORD *)this + 2);
  v35 = (struct ISwitchThumbnailDeviceManager *)*((_QWORD *)this + 1);
  v36[0] = *(struct IVirtualDesktopManagerInternal **)this;
  Microsoft::WRL::Details::Make<VirtualDesktopGestureWindow,IVirtualDesktopManagerInternal *,ISwitchThumbnailDeviceManager *,IApplicationViewCollection *,IImmersiveSettingsCache *,Geometry::CRect &,HMONITOR__ * &>(
    (__int64)&v24,
    v36,
    &v35,
    &v34,
    (struct IImmersiveSettingsCache **)v33,
    &v40,
    &v32);
  if ( !v24 )
  {
    v5 = -2147024882;
    v17 = 2147942414LL;
    v18 = 503LL;
    goto LABEL_28;
  }
  v10 = VirtualDesktopGestureWindow::Initialize(v24);
  v5 = v10;
  if ( v10 >= 0 )
  {
    v12 = 0LL;
    v13 = *((_QWORD *)this + 10);
    if ( v13 != *((_QWORD *)this + 12)
      || (v14 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                  (__int64)this + 72,
                  v13 + 1,
                  v11),
          v12 = (const char *)(unsigned int)v14,
          v14 >= 0) )
    {
      v15 = (VirtualDesktopGestureWindow **)(*((_QWORD *)this + 9) + 8 * (*((_QWORD *)this + 10))++);
      if ( v15 )
      {
        *v15 = 0LL;
        if ( v15 != &v24 )
        {
          *v15 = v24;
          v24 = 0LL;
        }
      }
    }
    if ( (int)v12 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1F9,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        v12);
      DestroyWindow(*((HWND *)v24 + 1));
      v5 = -2147024882;
      goto LABEL_29;
    }
    v16 = v24;
    if ( v24 )
    {
      v24 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v16 + 4);
    }
    goto LABEL_23;
  }
  v17 = (unsigned int)v10;
  v18 = 504LL;
LABEL_28:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v18,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
    (const char *)v17);
LABEL_29:
  v19 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v19 + 4);
  }
LABEL_34:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v27);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v39);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v31);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
LABEL_35:
  if ( v6 )
  {
    v37 = 0;
    v21 = *((_QWORD *)this + 9);
    v22 = v21 + 8LL * *((_QWORD *)this + 10);
    while ( v21 != v22 )
    {
      DestroyWindow(*(HWND *)(*(_QWORD *)v21 + 8LL));
      v21 += 8LL;
    }
  }
LABEL_39:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
  return v5;
}
