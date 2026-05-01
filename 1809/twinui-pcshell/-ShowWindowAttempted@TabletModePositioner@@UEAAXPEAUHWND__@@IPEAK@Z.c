/*
 * XREFs of ?ShowWindowAttempted@TabletModePositioner@@UEAAXPEAUHWND__@@IPEAK@Z @ 0x18034B0F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18002FA94 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsTabletMode@TabletModePositioner@@AEAA_NXZ @ 0x18007FFA8 (-IsTabletMode@TabletModePositioner@@AEAA_NXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x1802FD768 (-IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?IsOperableWindow@TabletModePositionerHelpers@@YA_NPEAUHWND__@@@Z @ 0x1802FD7F8 (-IsOperableWindow@TabletModePositionerHelpers@@YA_NPEAUHWND__@@@Z.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180306034 (--0-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@.c)
 *     ??1?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1803060CC (--1-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@.c)
 *     _lambda_c83d19acf1b991dd1bcd5204dc87c22e_::operator() @ 0x180343E58 (_lambda_c83d19acf1b991dd1bcd5204dc87c22e_--operator().c)
 *     ?CloakWindow@TabletModePositioner@@AEAAJPEAUHWND__@@@Z @ 0x1803451C8 (-CloakWindow@TabletModePositioner@@AEAAJPEAUHWND__@@@Z.c)
 *     ?StartActivity@ShowWindowAttempted@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@PEAUHWND__@@I@Z @ 0x18034C0A8 (-StartActivity@ShowWindowAttempted@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@PEAUHWND__.c)
 *     ?Stop@ShowWindowAttempted@TabletModeTraceLogging@@QEAAXK@Z @ 0x18034C82C (-Stop@ShowWindowAttempted@TabletModeTraceLogging@@QEAAXK@Z.c)
 */

void __fastcall TabletModePositioner::ShowWindowAttempted(
        TabletModePositioner *this,
        TabletModePositionerHelpers *a2,
        unsigned int a3,
        unsigned int *a4)
{
  TabletModePositioner *v4; // r12
  unsigned int v8; // edi
  unsigned int v9; // r15d
  __int64 v10; // rbx
  struct IApplicationView *v11; // rbx
  __int64 (__fastcall ***v12)(ApplicationViewHelpers *, GUID *, __int64 *); // rdx
  int v13; // eax
  int v14; // [rsp+20h] [rbp-E0h] BYREF
  HWND v15; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v16; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v17; // [rsp+38h] [rbp-C8h]
  __int64 v18[2]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v19[40]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+E8h]

  v4 = (TabletModePositioner *)((char *)this - 160);
  v17 = a3;
  v8 = 0;
  if ( TabletModePositioner::IsTabletMode((TabletModePositioner *)((char *)this - 160)) )
  {
    v9 = 2;
    if ( *((_DWORD *)this + 18) != 2 )
    {
      v16 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
      (***((void (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 23))(
        *((_QWORD *)this + 23),
        &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
        &v16);
      v10 = v16;
      v15 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
      (*(void (__fastcall **)(__int64, TabletModePositionerHelpers *, HWND *))(*(_QWORD *)v10 + 48LL))(v10, a2, &v15);
      v11 = (struct IApplicationView *)v15;
      v18[0] = (__int64)v4;
      wil::ActivityBase<WindowManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
        (struct wil::details::IFailureCallback *)v19,
        (__int64)"ShowWindowAttempted");
      v19[0] = &TabletModeTraceLogging::ShowWindowAttempted::`vftable';
      TabletModeTraceLogging::ShowWindowAttempted::StartActivity(
        (TabletModeTraceLogging::ShowWindowAttempted *)v19,
        v11,
        (HWND)a2,
        v17);
      if ( v15 )
        goto LABEL_24;
      if ( TabletModePositionerHelpers::IsOperableWindow(a2, 0LL) )
      {
        LOWORD(v14) = 257;
        lambda_c83d19acf1b991dd1bcd5204dc87c22e_::operator()(v18, (HWND)a2, &v14, (_BYTE *)&v14 + 1);
        if ( (_BYTE)v14 )
          TabletModePositioner::CloakWindow(v4, (HWND)a2);
        if ( !BYTE1(v14) || !TabletModePositioner::IsTabletMode(v4) )
          v9 = 0;
        *a4 = v9;
        goto LABEL_17;
      }
      if ( v15 )
      {
LABEL_24:
        if ( TabletModePositioner::IsTabletMode(v4)
          && TabletModePositionerHelpers::IsOperableView(v12, (struct IApplicationView *)v12) )
        {
          if ( !(*(unsigned int (__fastcall **)(_QWORD, HWND))(**((_QWORD **)this + 11) + 184LL))(
                  *((_QWORD *)this + 11),
                  v15) )
          {
            LOWORD(v14) = 257;
            lambda_c83d19acf1b991dd1bcd5204dc87c22e_::operator()(v18, (HWND)a2, &v14, (_BYTE *)&v14 + 1);
            *a4 = BYTE1(v14) != 0 ? 2 : 0;
            if ( (_BYTE)v14 )
            {
              v13 = (*(__int64 (__fastcall **)(HWND, __int64, __int64))(*(_QWORD *)v15 + 96LL))(v15, 1LL, 1LL);
              if ( v13 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  1455LL,
                  (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
                  (const char *)(unsigned int)v13);
            }
            goto LABEL_17;
          }
          LOBYTE(v8) = IsWindowVisible((HWND)a2);
        }
        *a4 = v8;
      }
LABEL_17:
      TabletModeTraceLogging::ShowWindowAttempted::Stop((TabletModeTraceLogging::ShowWindowAttempted *)v19, *a4);
      v19[0] = &TabletModeTraceLogging::ShowWindowAttempted::`vftable';
      wil::ActivityBase<WindowManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v19);
      wil::ActivityBase<WindowManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v19);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
    }
  }
}
