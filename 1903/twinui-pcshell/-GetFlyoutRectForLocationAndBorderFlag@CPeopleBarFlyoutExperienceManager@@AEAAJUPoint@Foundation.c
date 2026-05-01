/*
 * XREFs of ?GetFlyoutRectForLocationAndBorderFlag@CPeopleBarFlyoutExperienceManager@@AEAAJUPoint@Foundation@Windows@@PEAUtagRECT@@PEAW4Border@CSingleViewShellExperience@@@Z @ 0x18018F19C
 * Callers:
 *     ?UpdateViewPositionAndEffects@CPeopleBarFlyoutExperienceManager@@AEAAJ_N@Z @ 0x1801919DC (-UpdateViewPositionAndEffects@CPeopleBarFlyoutExperienceManager@@AEAAJ_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     memset_0 @ 0x180087BFA (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180103910 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180116D70 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?AdjustSizeForScale@CPeopleBarFlyoutExperienceManager@@AEAAXPEAUtagSIZE@@@Z @ 0x18018ECCC (-AdjustSizeForScale@CPeopleBarFlyoutExperienceManager@@AEAAXPEAUtagSIZE@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CPeopleBarFlyoutExperienceManager::GetFlyoutRectForLocationAndBorderFlag(
        __int64 a1,
        __int64 a2,
        RECT *a3,
        _DWORD *a4)
{
  int v6; // r15d
  int v7; // r12d
  HMONITOR v8; // r14
  unsigned int LastError; // ebx
  HRESULT v10; // eax
  __int64 v11; // rdx
  LPVOID v12; // rbx
  __int64 (__fastcall *v13)(LPVOID, SID *, GUID *, SIZE *); // rdi
  SIZE v14; // rbx
  __int64 (__fastcall *v15)(SIZE, HMONITOR, SID *, GUID *, int *); // rdi
  signed int Error; // eax
  __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  __int64 v19; // r9
  UINT v20; // ebx
  const char *v21; // r9
  LONG top; // eax
  SIZE windowSize; // [rsp+38h] [rbp-69h] BYREF
  LPVOID ppv; // [rsp+40h] [rbp-61h] BYREF
  int v26[2]; // [rsp+48h] [rbp-59h] BYREF
  CPeopleBarFlyoutExperienceManager *v27[2]; // [rsp+50h] [rbp-51h] BYREF
  RECT popupWindowPosition; // [rsp+60h] [rbp-41h] BYREF
  RECT rc; // [rsp+70h] [rbp-31h] BYREF
  RECT excludeRect; // [rsp+80h] [rbp-21h] BYREF
  struct tagMONITORINFO mi; // [rsp+90h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  v27[1] = (CPeopleBarFlyoutExperienceManager *)-2LL;
  *(_QWORD *)v26 = a2;
  *a3 = 0u;
  v6 = (int)*(float *)&a2;
  v7 = (int)*((float *)&a2 + 1);
  rc.left = (int)*(float *)&a2;
  rc.top = (int)*((float *)&a2 + 1);
  rc.right = (int)*(float *)&a2;
  rc.bottom = (int)*((float *)&a2 + 1);
  v8 = MonitorFromRect(&rc, 0);
  if ( v8 )
  {
    *(_QWORD *)v26 = 0LL;
    windowSize = 0LL;
    ppv = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
    v10 = CoCreateInstance(&CLSID_ImmersiveShell, 0LL, 0x404u, &GUID_6d5140c1_7436_11ce_8034_00aa006009fa, &ppv);
    LastError = v10;
    if ( v10 < 0 )
    {
      v11 = 605LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
        (const char *)(unsigned int)v10);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&windowSize);
      goto LABEL_38;
    }
    v12 = ppv;
    v13 = *(__int64 (__fastcall **)(LPVOID, SID *, GUID *, SIZE *))(*(_QWORD *)ppv + 24LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&windowSize);
    v10 = v13(v12, &SID_IImmersiveMonitorService, &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2, &windowSize);
    LastError = v10;
    if ( v10 < 0 )
    {
      v11 = 606LL;
      goto LABEL_9;
    }
    v14 = windowSize;
    v15 = *(__int64 (__fastcall **)(SIZE, HMONITOR, SID *, GUID *, int *))(**(_QWORD **)&windowSize + 72LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v26);
    v10 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v15)(
            v14,
            v8,
            &SID_EdgeUi,
            &GUID_6e6c3c52_5a5e_4b4b_a0f8_7fe12621a93e,
            v26);
    LastError = v10;
    if ( v10 < 0 )
    {
      v11 = 609LL;
      goto LABEL_9;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&windowSize);
    Error = (*(__int64 (__fastcall **)(_QWORD, CPeopleBarFlyoutExperienceManager **))(**(_QWORD **)v26 + 80LL))(
              *(_QWORD *)v26,
              v27);
    LastError = Error;
    if ( Error >= 0 )
    {
      Error = (*(__int64 (__fastcall **)(_QWORD, RECT *))(**(_QWORD **)v26 + 168LL))(*(_QWORD *)v26, &excludeRect);
      LastError = Error;
      if ( Error >= 0 )
      {
        *a4 = 0;
        v18 = LODWORD(v27[0]);
        if ( LODWORD(v27[0]) )
        {
          v18 = (unsigned int)(LODWORD(v27[0]) - 1);
          if ( LODWORD(v27[0]) == 1 )
          {
            v20 = 65540;
            *a4 = 13;
          }
          else
          {
            v18 = (unsigned int)(LODWORD(v27[0]) - 2);
            if ( LODWORD(v27[0]) == 2 )
            {
              v20 = 65560;
              *a4 = 11;
            }
            else
            {
              if ( LODWORD(v27[0]) != 3 )
              {
                LastError = -2147467263;
                v19 = 2147500033LL;
                v17 = 664LL;
LABEL_27:
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)v17,
                  (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
                  (const char *)v19);
                goto LABEL_38;
              }
              v20 = 65572;
              *a4 = 7;
            }
          }
        }
        else
        {
          v20 = 65552;
          *a4 = 14;
        }
        ppv = (LPVOID)__PAIR64__(v7, v6);
        windowSize.cx = 320;
        windowSize.cy = 616;
        CPeopleBarFlyoutExperienceManager::AdjustSizeForScale((CPeopleBarFlyoutExperienceManager *)v18, &windowSize);
        if ( CalculatePopupWindowPosition((const POINT *)&ppv, &windowSize, v20, &excludeRect, &popupWindowPosition) )
        {
          mi.cbSize = 40;
          memset_0(&mi.rcMonitor, 0, 0x24uLL);
          if ( GetMonitorInfoW(v8, &mi) )
          {
            rc = mi.rcWork;
            if ( popupWindowPosition.top >= mi.rcWork.top )
            {
              if ( popupWindowPosition.bottom > mi.rcWork.bottom )
              {
                OffsetRect(&popupWindowPosition, 0, mi.rcWork.bottom - popupWindowPosition.bottom);
                top = popupWindowPosition.top;
                if ( popupWindowPosition.top < rc.top )
                  top = rc.top;
                popupWindowPosition.top = top;
              }
            }
            else
            {
              OffsetRect(&popupWindowPosition, 0, mi.rcWork.top - popupWindowPosition.top);
              if ( popupWindowPosition.bottom > rc.bottom )
                popupWindowPosition.bottom = rc.bottom;
            }
            *a3 = popupWindowPosition;
            LastError = 0;
          }
          else
          {
            LastError = wil::details::in1diag3::Return_GetLastError(
                          retaddr,
                          (void *)0x2A7,
                          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
                          v21);
          }
          goto LABEL_38;
        }
        Error = ResultFromKnownLastError();
        LastError = Error;
        if ( Error >= 0 )
        {
LABEL_38:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v26);
          return LastError;
        }
        v17 = 674LL;
      }
      else
      {
        v17 = 617LL;
      }
    }
    else
    {
      v17 = 616LL;
    }
    v19 = (unsigned int)Error;
    goto LABEL_27;
  }
  LastError = -2147418113;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x254,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
    (const char *)0x8000FFFFLL);
  return LastError;
}
