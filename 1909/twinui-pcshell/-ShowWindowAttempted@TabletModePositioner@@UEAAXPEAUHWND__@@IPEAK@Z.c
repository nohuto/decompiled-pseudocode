/*
 * XREFs of ?ShowWindowAttempted@TabletModePositioner@@UEAAXPEAUHWND__@@IPEAK@Z @ 0x18007AF20
 * Callers:
 *     <none>
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18003B6E4 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18007DF80 (--1-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18007E144 (--0-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ?IsTabletMode@TabletModePositioner@@AEAA_NXZ @ 0x180085618 (-IsTabletMode@TabletModePositioner@@AEAA_NXZ.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18037D8E0 (-IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?IsOperableWindow@TabletModePositionerHelpers@@YA_NPEAUHWND__@@@Z @ 0x18037D970 (-IsOperableWindow@TabletModePositionerHelpers@@YA_NPEAUHWND__@@@Z.c)
 *     _lambda_ee4684b34cbbc9b29a5b46cb0674d720_::operator() @ 0x1803C8E00 (_lambda_ee4684b34cbbc9b29a5b46cb0674d720_--operator().c)
 *     ?CloakWindow@TabletModePositioner@@AEAAJPEAUHWND__@@@Z @ 0x1803C9F60 (-CloakWindow@TabletModePositioner@@AEAAJPEAUHWND__@@@Z.c)
 *     ?StartActivity@ShowWindowAttempted@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@PEAUHWND__@@I@Z @ 0x1803D0EFC (-StartActivity@ShowWindowAttempted@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@PEAUHWND__.c)
 *     ?Stop@ShowWindowAttempted@TabletModeTraceLogging@@QEAAXK@Z @ 0x1803D16F0 (-Stop@ShowWindowAttempted@TabletModeTraceLogging@@QEAAXK@Z.c)
 */

void __fastcall TabletModePositioner::ShowWindowAttempted(
        TabletModePositioner *this,
        HWND a2,
        unsigned int a3,
        unsigned int *a4)
{
  bool v4; // zf
  TabletModePositioner *v5; // r13
  unsigned int v9; // r12d
  unsigned int v10; // edi
  __int64 v11; // rbx
  struct IApplicationView *v12; // rbx
  TabletModePositionerHelpers *v13; // rdx
  HWND v14; // rax
  int v15; // eax
  int v16; // [rsp+20h] [rbp-E0h] BYREF
  HWND v17; // [rsp+28h] [rbp-D8h] BYREF
  unsigned int v18; // [rsp+30h] [rbp-D0h]
  __int64 v19; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v20[2]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v21[40]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+E8h]

  v4 = *((_DWORD *)this + 18) == 1;
  v5 = (TabletModePositioner *)((char *)this - 160);
  v18 = a3;
  if ( v4 && *((_DWORD *)this + 19) == 1 )
  {
    v9 = 2;
    if ( *((_DWORD *)this + 18) != 2 )
    {
      v10 = 0;
      v19 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
      (***((void (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 23))(
        *((_QWORD *)this + 23),
        &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
        &v19);
      v11 = v19;
      v17 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
      (*(void (__fastcall **)(__int64, HWND, HWND *))(*(_QWORD *)v11 + 48LL))(v11, a2, &v17);
      v12 = (struct IApplicationView *)v17;
      v20[0] = v5;
      wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v21);
      v21[0] = &TabletModeTraceLogging::ShowWindowAttempted::`vftable';
      TabletModeTraceLogging::ShowWindowAttempted::StartActivity(
        (TabletModeTraceLogging::ShowWindowAttempted *)v21,
        v12,
        a2,
        v18);
      if ( v17 )
        goto LABEL_29;
      if ( TabletModePositionerHelpers::IsOperableWindow((TabletModePositionerHelpers *)a2, 0LL) )
      {
        LOWORD(v16) = 257;
        lambda_ee4684b34cbbc9b29a5b46cb0674d720_::operator()(v20, a2, &v16, (char *)&v16 + 1);
        if ( (_BYTE)v16 )
          TabletModePositioner::CloakWindow(v5, a2);
        if ( !BYTE1(v16) || !TabletModePositioner::IsTabletMode(v5) )
          v9 = 0;
        *a4 = v9;
        goto LABEL_22;
      }
      if ( v17 )
      {
LABEL_29:
        if ( TabletModePositioner::IsTabletMode(v5) && TabletModePositionerHelpers::IsOperableView(v13, v13) )
        {
          if ( !(*(unsigned int (__fastcall **)(_QWORD, HWND))(**((_QWORD **)this + 11) + 184LL))(
                  *((_QWORD *)this + 11),
                  v17) )
          {
            LOWORD(v16) = 257;
            lambda_ee4684b34cbbc9b29a5b46cb0674d720_::operator()(v20, a2, &v16, (char *)&v16 + 1);
            *a4 = BYTE1(v16) != 0 ? 2 : 0;
            if ( (_BYTE)v16 )
            {
              v15 = (*(__int64 (__fastcall **)(HWND, __int64, __int64))(*(_QWORD *)v17 + 96LL))(v17, 1LL, 1LL);
              if ( v15 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x5D6,
                  (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
                  (const char *)(unsigned int)v15);
            }
            goto LABEL_22;
          }
          v14 = (HWND)*((_QWORD *)this + 39);
          if ( v14 && a2 == v14 && v18 == *((_DWORD *)this + 80) )
          {
            *((_QWORD *)this + 39) = 0LL;
            *((_DWORD *)this + 80) = 0;
          }
          else
          {
            LOBYTE(v10) = IsWindowVisible(a2);
          }
        }
        *a4 = v10;
      }
LABEL_22:
      TabletModeTraceLogging::ShowWindowAttempted::Stop((TabletModeTraceLogging::ShowWindowAttempted *)v21, *a4);
      v21[0] = &TabletModeTraceLogging::ShowWindowAttempted::`vftable';
      wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(v21);
      wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(v21);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
    }
  }
}
