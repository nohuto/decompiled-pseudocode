/*
 * XREFs of ?ComputeConstraints@CVirtualTouchpadExperienceManager@@AEAAJAEBUTouchpadPositionAnchorInternal@@_N@Z @ 0x1801A7BC8
 * Callers:
 *     ?Show@CVirtualTouchpadExperienceManager@@UEAAJW4VirtualTouchpadPosition@Experience@Shell@Internal@Windows@@URect@Foundation@6@@Z @ 0x1801AA1F0 (-Show@CVirtualTouchpadExperienceManager@@UEAAJW4VirtualTouchpadPosition@Experience@Shell@Interna.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     memset_0 @ 0x180087BFA (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180103910 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?ComputeDesiredSize@CVirtualTouchpadExperienceManager@@AEAAJPEAUHMONITOR__@@PEBUtagRECT@@PEBW4DEVICE_SCALE_FACTOR@@@Z @ 0x1801A7FC4 (-ComputeDesiredSize@CVirtualTouchpadExperienceManager@@AEAAJPEAUHMONITOR__@@PEBUtagRECT@@PEBW4DE.c)
 *     ?FindMonitor@@YAPEAUHMONITOR__@@$$QEAV?$function@$$A6A_NPEAUHMONITOR__@@@Z@std@@@Z @ 0x1801A8544 (-FindMonitor@@YAPEAUHMONITOR__@@$$QEAV-$function@$$A6A_NPEAUHMONITOR__@@@Z@std@@@Z.c)
 *     ?IsPointerDeviceSupportedOnMonitor@CVirtualTouchpadExperienceManager@@CA_NPEAUHMONITOR__@@W4tagPOINTER_DEVICE_TYPE@@@Z @ 0x1801A8D14 (-IsPointerDeviceSupportedOnMonitor@CVirtualTouchpadExperienceManager@@CA_NPEAUHMONITOR__@@W4tagP.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x1801AAFE4 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CVirtualTouchpadExperienceManager::ComputeConstraints(
        CVirtualTouchpadExperienceManager *this,
        HMONITOR *a2,
        char a3)
{
  char v6; // r15
  HMONITOR Monitor; // r14
  const char *v8; // r9
  __int64 v9; // rdx
  int ScaleFactorForMonitor; // ebx
  __int64 v12; // rdx
  __int32 v13; // r8d
  __int64 v14; // rdi
  __int64 (__fastcall *v15)(__int64, SID *, GUID *, __int64 *); // rbx
  int v16; // eax
  __int64 v17; // rbx
  __int64 (__fastcall *v18)(__int64, HMONITOR, SID *, GUID *, int *); // rdi
  int v19; // eax
  __int64 v20; // rdx
  __int32 v21; // edi
  __int32 v22; // r14d
  int v23; // ecx
  enum DEVICE_SCALE_FACTOR v24; // [rsp+38h] [rbp-69h] BYREF
  int v25[2]; // [rsp+40h] [rbp-61h] BYREF
  __int64 v26; // [rsp+48h] [rbp-59h] BYREF
  int v27; // [rsp+50h] [rbp-51h] BYREF
  __int64 v28; // [rsp+58h] [rbp-49h]
  struct tagMONITORINFO mi; // [rsp+60h] [rbp-41h] BYREF
  _QWORD v30[8]; // [rsp+88h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  v28 = -2LL;
  v6 = 0;
  Monitor = *a2;
  if ( !(unsigned __int8)CVirtualTouchpadExperienceManager::IsPointerDeviceSupportedOnMonitor(*a2) )
  {
    v6 = 1;
    v30[0] = off_18043C250;
    v30[7] = v30;
    Monitor = (HMONITOR)FindMonitor(v30);
    std::_Func_class<void,>::_Tidy(v30);
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
  ScaleFactorForMonitor = GetScaleFactorForMonitor(Monitor, &v24);
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
  ScaleFactorForMonitor = CVirtualTouchpadExperienceManager::ComputeDesiredSize(this, Monitor, &mi.rcMonitor, &v24);
  if ( ScaleFactorForMonitor < 0 )
  {
    v12 = 262LL;
    goto LABEL_9;
  }
  if ( v6 || !a3 )
  {
    v26 = 0LL;
    v14 = *((_QWORD *)this + 39);
    v15 = *(__int64 (__fastcall **)(__int64, SID *, GUID *, __int64 *))(*(_QWORD *)v14 + 24LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v26);
    v16 = v15(v14, &SID_IImmersiveMonitorService, &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2, &v26);
    ScaleFactorForMonitor = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x10B,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
        (const char *)(unsigned int)v16);
LABEL_23:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v26);
      return (unsigned int)ScaleFactorForMonitor;
    }
    *(_QWORD *)v25 = 0LL;
    v17 = v26;
    v18 = *(__int64 (__fastcall **)(__int64, HMONITOR, SID *, GUID *, int *))(*(_QWORD *)v26 + 72LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v25);
    v19 = v18(v17, Monitor, &SID_EdgeUi, &GUID_6e6c3c52_5a5e_4b4b_a0f8_7fe12621a93e, v25);
    ScaleFactorForMonitor = v19;
    if ( v19 < 0 )
    {
      v20 = 270LL;
LABEL_22:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v20,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
        (const char *)(unsigned int)v19);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v25);
      goto LABEL_23;
    }
    v21 = v24 * *((_DWORD *)this + 69) / 100;
    v22 = v24 * *((_DWORD *)this + 70) / 100;
    *((_BYTE *)this + 300) = v6;
    v19 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)v25 + 80LL))(*(_QWORD *)v25, &v27);
    ScaleFactorForMonitor = v19;
    if ( v19 < 0 )
    {
      v20 = 278LL;
      goto LABEL_22;
    }
    if ( !v27 )
    {
      *((_DWORD *)this + 77) = mi.rcWork.bottom - *((_DWORD *)this + 72) / 2;
      *((_DWORD *)this + 76) = v21 + mi.rcWork.left + *((_DWORD *)this + 71) / 2;
      goto LABEL_34;
    }
    if ( v27 == 1 )
    {
      *((_DWORD *)this + 77) = v22 + mi.rcWork.top + *((_DWORD *)this + 72) / 2;
    }
    else
    {
      if ( v27 == 2 )
      {
        v23 = mi.rcWork.bottom - *((_DWORD *)this + 72) / 2;
      }
      else
      {
        if ( v27 != 3 )
        {
LABEL_34:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v25);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v26);
          return 0LL;
        }
        v23 = mi.rcWork.bottom - *((_DWORD *)this + 72) / 2 - v22;
      }
      *((_DWORD *)this + 77) = v23;
    }
    *((_DWORD *)this + 76) = mi.rcWork.right - *((_DWORD *)this + 71) / 2 - v21;
    goto LABEL_34;
  }
  v13 = v24 * *((_DWORD *)a2 + 3) / 100;
  *((_DWORD *)this + 76) = mi.rcMonitor.right + *((_DWORD *)this + 71) / -2 - v24 * *((_DWORD *)a2 + 2) / 100;
  *((_DWORD *)this + 77) = mi.rcMonitor.bottom - *((_DWORD *)this + 72) / 2 - v13;
  return 0LL;
}
