/*
 * XREFs of ?ComputeDesiredSize@CVirtualTouchpadExperienceManager@@AEAAJPEAUHMONITOR__@@PEBUtagRECT@@PEBW4DEVICE_SCALE_FACTOR@@@Z @ 0x1801C6ED4
 * Callers:
 *     ?ComputeConstraints@CVirtualTouchpadExperienceManager@@AEAAJAEBUTouchpadPositionAnchorInternal@@_N@Z @ 0x1801C6AD8 (-ComputeConstraints@CVirtualTouchpadExperienceManager@@AEAAJAEBUTouchpadPositionAnchorInternal@@.c)
 *     ?ComputeDesiredSizeForMonitor@CVirtualTouchpadExperienceManager@@AEAAJPEAUHMONITOR__@@@Z @ 0x1801C7130 (-ComputeDesiredSizeForMonitor@CVirtualTouchpadExperienceManager@@AEAAJPEAUHMONITOR__@@@Z.c)
 * Callees:
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800497EC (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?GetScaleFactorForWindow@@YAJPEAUHWND__@@PEAI@Z @ 0x18017019C (-GetScaleFactorForWindow@@YAJPEAUHWND__@@PEAI@Z.c)
 *     ?GetRelativeSizeForMonitor@CVirtualTouchpadExperienceManager@@CAIPEAUHMONITOR__@@I@Z @ 0x1801C7730 (-GetRelativeSizeForMonitor@CVirtualTouchpadExperienceManager@@CAIPEAUHMONITOR__@@I@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualTouchpadExperienceManager::ComputeDesiredSize(
        CVirtualTouchpadExperienceManager *this,
        HMONITOR a2,
        const struct tagRECT *a3,
        const enum DEVICE_SCALE_FACTOR *a4)
{
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, __int64 *); // rbx
  int ScaleFactorForWindow; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  int v13; // edi
  unsigned int v14; // edx
  int v15; // eax
  int v16; // ecx
  int v17; // ebx
  int RelativeSizeForMonitor; // eax
  unsigned int v19; // eax
  int nNumerator; // [rsp+20h] [rbp-40h] BYREF
  unsigned int v22[3]; // [rsp+24h] [rbp-3Ch] BYREF
  __int64 v23[2]; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v24[4]; // [rsp+40h] [rbp-20h] BYREF
  int v25; // [rsp+44h] [rbp-1Ch]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]

  v23[1] = -2LL;
  v23[0] = 0LL;
  v8 = *((_QWORD *)this + 41);
  v9 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 32LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v23);
  ScaleFactorForWindow = v9(v8, v23);
  v11 = ScaleFactorForWindow;
  if ( ScaleFactorForWindow >= 0 )
  {
    ScaleFactorForWindow = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v23[0] + 120LL))(v23[0], v24);
    v11 = ScaleFactorForWindow;
    if ( ScaleFactorForWindow < 0 )
    {
      v12 = 326LL;
      goto LABEL_7;
    }
    ScaleFactorForWindow = GetScaleFactorForWindow(*((HWND *)this + 42), v22);
    v11 = ScaleFactorForWindow;
    if ( ScaleFactorForWindow < 0 )
    {
      v12 = 328LL;
      goto LABEL_7;
    }
    v13 = (int)(float)((float)((float)v25 * 100.0) / (float)(int)v22[0]);
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
        v22[0] = *((_DWORD *)this + 67);
        v15 = *((_DWORD *)this + 68);
        goto LABEL_20;
      }
      v16 = a3->right - a3->left;
      if ( v16 >= a3->bottom - a3->top )
        v16 = a3->bottom - a3->top;
      v17 = MulDiv(v16, nNumerator, 100);
      RelativeSizeForMonitor = CVirtualTouchpadExperienceManager::GetRelativeSizeForMonitor(a2, *((_DWORD *)this + 66));
      if ( v17 > RelativeSizeForMonitor )
        RelativeSizeForMonitor = v17;
      v15 = (int)(float)((float)((float)RelativeSizeForMonitor * 100.0) / (float)*(int *)a4);
    }
    else
    {
      v14 = *((_DWORD *)this + 66);
      if ( nNumerator > v14 )
        v14 = nNumerator;
      nNumerator = CVirtualTouchpadExperienceManager::GetRelativeSizeForMonitor(a2, v14);
      v15 = MulDiv(nNumerator, 100, *a4);
      nNumerator = v15;
    }
    v22[0] = v15;
LABEL_20:
    v22[1] = v15 - v13;
    v19 = v22[0];
    *(_QWORD *)((char *)this + 292) = *(_QWORD *)v22;
    v22[0] = (int)(v19 * *a4) / 100;
    v22[1] = *a4 * *((_DWORD *)this + 74) / 100;
    *(_QWORD *)((char *)this + 284) = *(_QWORD *)v22;
    v11 = 0;
    goto LABEL_21;
  }
  v12 = 324LL;
LABEL_7:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
    (const char *)(unsigned int)ScaleFactorForWindow);
LABEL_21:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v23);
  return v11;
}
