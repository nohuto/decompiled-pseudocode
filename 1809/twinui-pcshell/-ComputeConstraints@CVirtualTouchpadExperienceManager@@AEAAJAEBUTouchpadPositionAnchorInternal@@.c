/*
 * XREFs of ?ComputeConstraints@CVirtualTouchpadExperienceManager@@AEAAJAEBUTouchpadPositionAnchorInternal@@_N@Z @ 0x180178468
 * Callers:
 *     ?Show@CVirtualTouchpadExperienceManager@@UEAAJW4VirtualTouchpadPosition@Experience@Shell@Internal@Windows@@URect@Foundation@6@@Z @ 0x18017AAF0 (-Show@CVirtualTouchpadExperienceManager@@UEAAJW4VirtualTouchpadPosition@Experience@Shell@Interna.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180077188 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?ComputeDesiredSize@CVirtualTouchpadExperienceManager@@AEAAJPEAUHMONITOR__@@PEBUtagRECT@@PEBW4DEVICE_SCALE_FACTOR@@@Z @ 0x18017885C (-ComputeDesiredSize@CVirtualTouchpadExperienceManager@@AEAAJPEAUHMONITOR__@@PEBUtagRECT@@PEBW4DE.c)
 *     ?FindMonitor@@YAPEAUHMONITOR__@@$$QEAV?$function@$$A6A_NPEAUHMONITOR__@@@Z@std@@@Z @ 0x180178DE4 (-FindMonitor@@YAPEAUHMONITOR__@@$$QEAV-$function@$$A6A_NPEAUHMONITOR__@@@Z@std@@@Z.c)
 *     ?IsPointerDeviceSupportedOnMonitor@CVirtualTouchpadExperienceManager@@CA_NPEAUHMONITOR__@@W4tagPOINTER_DEVICE_TYPE@@@Z @ 0x1801795B4 (-IsPointerDeviceSupportedOnMonitor@CVirtualTouchpadExperienceManager@@CA_NPEAUHMONITOR__@@W4tagP.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18017B930 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CVirtualTouchpadExperienceManager::ComputeConstraints(
        CVirtualTouchpadExperienceManager *this,
        HMONITOR *a2,
        char a3)
{
  char v6; // r15
  HMONITOR Monitor; // rsi
  const char *v8; // r9
  __int64 v9; // rdx
  int ScaleFactorForMonitor; // ebx
  __int64 v12; // rdx
  __int32 v13; // r8d
  __int64 v14; // rbx
  int v15; // eax
  __int64 v16; // rbx
  int v17; // eax
  __int64 v18; // rdx
  __int32 v19; // esi
  __int32 v20; // r14d
  int v21; // ecx
  enum DEVICE_SCALE_FACTOR v22; // [rsp+38h] [rbp-69h] BYREF
  int v23[2]; // [rsp+40h] [rbp-61h] BYREF
  __int64 v24; // [rsp+48h] [rbp-59h] BYREF
  int v25; // [rsp+50h] [rbp-51h] BYREF
  __int64 v26; // [rsp+58h] [rbp-49h]
  struct tagMONITORINFO mi; // [rsp+60h] [rbp-41h] BYREF
  _QWORD v28[8]; // [rsp+88h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  v26 = -2LL;
  v6 = 0;
  Monitor = *a2;
  if ( !(unsigned __int8)CVirtualTouchpadExperienceManager::IsPointerDeviceSupportedOnMonitor(*a2) )
  {
    v6 = 1;
    v28[0] = off_1803D6890;
    v28[7] = v28;
    Monitor = (HMONITOR)FindMonitor(v28);
    std::_Func_class<void,>::_Tidy(v28);
    if ( !Monitor )
    {
      v9 = 255LL;
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)v9,
               (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
               v8);
    }
  }
  mi.cbSize = 40;
  memset_0(&mi.rcMonitor, 0, 0x24uLL);
  if ( !GetMonitorInfoW(Monitor, &mi) )
  {
    v9 = 259LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v9,
             (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
             v8);
  }
  ScaleFactorForMonitor = GetScaleFactorForMonitor(Monitor, &v22);
  if ( ScaleFactorForMonitor < 0 )
  {
    v12 = 261LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
      (const char *)(unsigned int)ScaleFactorForMonitor);
    return (unsigned int)ScaleFactorForMonitor;
  }
  ScaleFactorForMonitor = CVirtualTouchpadExperienceManager::ComputeDesiredSize(this, Monitor, &mi.rcMonitor, &v22);
  if ( ScaleFactorForMonitor < 0 )
  {
    v12 = 262LL;
    goto LABEL_9;
  }
  if ( v6 || !a3 )
  {
    v24 = 0LL;
    v14 = *((_QWORD *)this + 39);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
    v15 = (*(__int64 (__fastcall **)(__int64, SID *, GUID *, __int64 *))(*(_QWORD *)v14 + 24LL))(
            v14,
            &SID_IImmersiveMonitorService,
            &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
            &v24);
    ScaleFactorForMonitor = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x10B,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
        (const char *)(unsigned int)v15);
LABEL_23:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
      return (unsigned int)ScaleFactorForMonitor;
    }
    *(_QWORD *)v23 = 0LL;
    v16 = v24;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v23);
    v17 = (*(__int64 (__fastcall **)(__int64, HMONITOR, SID *, GUID *, int *))(*(_QWORD *)v16 + 72LL))(
            v16,
            Monitor,
            &SID_EdgeUi,
            &GUID_6e6c3c52_5a5e_4b4b_a0f8_7fe12621a93e,
            v23);
    ScaleFactorForMonitor = v17;
    if ( v17 < 0 )
    {
      v18 = 270LL;
LABEL_22:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v18,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
        (const char *)(unsigned int)v17);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v23);
      goto LABEL_23;
    }
    v19 = v22 * *((_DWORD *)this + 69) / 100;
    v20 = v22 * *((_DWORD *)this + 70) / 100;
    *((_BYTE *)this + 300) = v6;
    v17 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)v23 + 80LL))(*(_QWORD *)v23, &v25);
    ScaleFactorForMonitor = v17;
    if ( v17 < 0 )
    {
      v18 = 278LL;
      goto LABEL_22;
    }
    if ( !v25 )
    {
      *((_DWORD *)this + 77) = mi.rcWork.bottom - *((_DWORD *)this + 72) / 2;
      *((_DWORD *)this + 76) = v19 + mi.rcWork.left + *((_DWORD *)this + 71) / 2;
      goto LABEL_34;
    }
    if ( v25 == 1 )
    {
      *((_DWORD *)this + 77) = v20 + mi.rcWork.top + *((_DWORD *)this + 72) / 2;
    }
    else
    {
      if ( v25 == 2 )
      {
        v21 = mi.rcWork.bottom - *((_DWORD *)this + 72) / 2;
      }
      else
      {
        if ( v25 != 3 )
        {
LABEL_34:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v23);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
          return 0LL;
        }
        v21 = mi.rcWork.bottom - *((_DWORD *)this + 72) / 2 - v20;
      }
      *((_DWORD *)this + 77) = v21;
    }
    *((_DWORD *)this + 76) = mi.rcWork.right - *((_DWORD *)this + 71) / 2 - v19;
    goto LABEL_34;
  }
  v13 = v22 * *((_DWORD *)a2 + 3) / 100;
  *((_DWORD *)this + 76) = mi.rcMonitor.right + *((_DWORD *)this + 71) / -2 - v22 * *((_DWORD *)a2 + 2) / 100;
  *((_DWORD *)this + 77) = mi.rcMonitor.bottom - *((_DWORD *)this + 72) / 2 - v13;
  return 0LL;
}
