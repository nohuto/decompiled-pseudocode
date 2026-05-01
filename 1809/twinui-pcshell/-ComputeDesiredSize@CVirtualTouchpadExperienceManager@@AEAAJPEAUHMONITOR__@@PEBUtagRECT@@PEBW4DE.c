/*
 * XREFs of ?ComputeDesiredSize@CVirtualTouchpadExperienceManager@@AEAAJPEAUHMONITOR__@@PEBUtagRECT@@PEBW4DEVICE_SCALE_FACTOR@@@Z @ 0x18017885C
 * Callers:
 *     ?ComputeConstraints@CVirtualTouchpadExperienceManager@@AEAAJAEBUTouchpadPositionAnchorInternal@@_N@Z @ 0x180178468 (-ComputeConstraints@CVirtualTouchpadExperienceManager@@AEAAJAEBUTouchpadPositionAnchorInternal@@.c)
 *     ?ComputeDesiredSizeForMonitor@CVirtualTouchpadExperienceManager@@AEAAJPEAUHMONITOR__@@@Z @ 0x180178AB4 (-ComputeDesiredSizeForMonitor@CVirtualTouchpadExperienceManager@@AEAAJPEAUHMONITOR__@@@Z.c)
 * Callees:
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800107DC (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?GetScaleFactorForWindow@@YAJPEAUHWND__@@PEAI@Z @ 0x180127A9C (-GetScaleFactorForWindow@@YAJPEAUHWND__@@PEAI@Z.c)
 *     ?GetRelativeSizeForMonitor@CVirtualTouchpadExperienceManager@@CAIPEAUHMONITOR__@@I@Z @ 0x1801790C0 (-GetRelativeSizeForMonitor@CVirtualTouchpadExperienceManager@@CAIPEAUHMONITOR__@@I@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualTouchpadExperienceManager::ComputeDesiredSize(
        CVirtualTouchpadExperienceManager *this,
        HMONITOR a2,
        const struct tagRECT *a3,
        const enum DEVICE_SCALE_FACTOR *a4)
{
  __int64 v8; // rbx
  int ScaleFactorForWindow; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  int v12; // esi
  unsigned int v13; // edx
  int v14; // eax
  int v15; // ecx
  int v16; // ebx
  int RelativeSizeForMonitor; // eax
  unsigned int v18; // eax
  int nNumerator; // [rsp+20h] [rbp-40h] BYREF
  unsigned int v21[3]; // [rsp+24h] [rbp-3Ch] BYREF
  __int64 v22[2]; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v23[4]; // [rsp+40h] [rbp-20h] BYREF
  int v24; // [rsp+44h] [rbp-1Ch]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]

  v22[1] = -2LL;
  v22[0] = 0LL;
  v8 = *((_QWORD *)this + 41);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v22);
  ScaleFactorForWindow = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 32LL))(v8, v22);
  v10 = ScaleFactorForWindow;
  if ( ScaleFactorForWindow >= 0 )
  {
    ScaleFactorForWindow = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v22[0] + 120LL))(v22[0], v23);
    v10 = ScaleFactorForWindow;
    if ( ScaleFactorForWindow < 0 )
    {
      v11 = 326LL;
      goto LABEL_7;
    }
    ScaleFactorForWindow = GetScaleFactorForWindow(*((HWND *)this + 42), v21);
    v10 = ScaleFactorForWindow;
    if ( ScaleFactorForWindow < 0 )
    {
      v11 = 328LL;
      goto LABEL_7;
    }
    v12 = (int)(float)((float)((float)v24 * 100.0) / (float)(int)v21[0]);
    if ( SHRegGetDWORD(
           HKEY_LOCAL_MACHINE,
           L"SOFTWARE\\Microsoft\\Touchpad\\",
           L"FixedDimension",
           (unsigned int *)&nNumerator) < 0 )
    {
      if ( SHRegGetDWORD(
             HKEY_LOCAL_MACHINE,
             L"SOFTWARE\\Microsoft\\Touchpad\\",
             L"PercentOfScreenDimension",
             (unsigned int *)&nNumerator) < 0 )
      {
        v21[0] = *((_DWORD *)this + 67);
        v14 = *((_DWORD *)this + 68);
        goto LABEL_20;
      }
      v15 = a3->right - a3->left;
      if ( v15 >= a3->bottom - a3->top )
        v15 = a3->bottom - a3->top;
      v16 = MulDiv(v15, nNumerator, 100);
      RelativeSizeForMonitor = CVirtualTouchpadExperienceManager::GetRelativeSizeForMonitor(a2, *((_DWORD *)this + 66));
      if ( v16 > RelativeSizeForMonitor )
        RelativeSizeForMonitor = v16;
      v14 = (int)(float)((float)((float)RelativeSizeForMonitor * 100.0) / (float)*(int *)a4);
    }
    else
    {
      v13 = *((_DWORD *)this + 66);
      if ( nNumerator > v13 )
        v13 = nNumerator;
      nNumerator = CVirtualTouchpadExperienceManager::GetRelativeSizeForMonitor(a2, v13);
      v14 = MulDiv(nNumerator, 100, *a4);
      nNumerator = v14;
    }
    v21[0] = v14;
LABEL_20:
    v21[1] = v14 - v12;
    v18 = v21[0];
    *(_QWORD *)((char *)this + 292) = *(_QWORD *)v21;
    v21[0] = (int)(v18 * *a4) / 100;
    v21[1] = *a4 * *((_DWORD *)this + 74) / 100;
    *(_QWORD *)((char *)this + 284) = *(_QWORD *)v21;
    v10 = 0;
    goto LABEL_21;
  }
  v11 = 324LL;
LABEL_7:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
    (const char *)(unsigned int)ScaleFactorForWindow);
LABEL_21:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v22);
  return v10;
}
