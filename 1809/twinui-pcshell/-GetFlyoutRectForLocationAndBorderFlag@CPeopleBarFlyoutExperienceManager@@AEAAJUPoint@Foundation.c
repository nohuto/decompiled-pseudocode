/*
 * XREFs of ?GetFlyoutRectForLocationAndBorderFlag@CPeopleBarFlyoutExperienceManager@@AEAAJUPoint@Foundation@Windows@@PEAUtagRECT@@PEAW4Border@CSingleViewShellExperience@@@Z @ 0x18016292C
 * Callers:
 *     ?UpdateViewPositionAndEffects@CPeopleBarFlyoutExperienceManager@@AEAAJ_N@Z @ 0x180165010 (-UpdateViewPositionAndEffects@CPeopleBarFlyoutExperienceManager@@AEAAJ_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180077188 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x1800F1F40 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?AdjustSizeForScale@CPeopleBarFlyoutExperienceManager@@AEAAXPEAUtagSIZE@@@Z @ 0x1801623F8 (-AdjustSizeForScale@CPeopleBarFlyoutExperienceManager@@AEAAXPEAUtagSIZE@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CPeopleBarFlyoutExperienceManager::GetFlyoutRectForLocationAndBorderFlag(
        __int64 a1,
        __int64 a2,
        RECT *a3,
        _DWORD *a4)
{
  LONG v6; // r14d
  LONG v7; // r15d
  HMONITOR v8; // rsi
  unsigned int LastError; // ebx
  HRESULT Instance; // eax
  __int64 v11; // rdx
  POINT v12; // rbx
  SIZE v13; // rbx
  signed int Error; // eax
  __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  __int64 v17; // r9
  UINT v18; // ebx
  const char *v19; // r9
  LONG top; // eax
  SIZE windowSize; // [rsp+30h] [rbp-69h] BYREF
  POINT anchorPoint; // [rsp+38h] [rbp-61h] BYREF
  int v24[2]; // [rsp+40h] [rbp-59h] BYREF
  CPeopleBarFlyoutExperienceManager *v25[2]; // [rsp+48h] [rbp-51h] BYREF
  RECT popupWindowPosition; // [rsp+58h] [rbp-41h] BYREF
  RECT rc; // [rsp+68h] [rbp-31h] BYREF
  RECT excludeRect; // [rsp+78h] [rbp-21h] BYREF
  struct tagMONITORINFO mi; // [rsp+88h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v25[1] = (CPeopleBarFlyoutExperienceManager *)-2LL;
  *(_QWORD *)v24 = a2;
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
    *(_QWORD *)v24 = 0LL;
    windowSize = 0LL;
    anchorPoint = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&anchorPoint);
    Instance = CoCreateInstance(
                 &CLSID_ImmersiveShell,
                 0LL,
                 0x404u,
                 &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
                 (LPVOID *)&anchorPoint);
    LastError = Instance;
    if ( Instance < 0 )
    {
      v11 = 605LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
        (const char *)(unsigned int)Instance);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&anchorPoint);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&windowSize);
      goto LABEL_38;
    }
    v12 = anchorPoint;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&windowSize);
    Instance = (*(__int64 (__fastcall **)(POINT, SID *, GUID *, SIZE *))(**(_QWORD **)&v12 + 24LL))(
                 v12,
                 &SID_IImmersiveMonitorService,
                 &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
                 &windowSize);
    LastError = Instance;
    if ( Instance < 0 )
    {
      v11 = 606LL;
      goto LABEL_9;
    }
    v13 = windowSize;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v24);
    Instance = (*(__int64 (__fastcall **)(SIZE, HMONITOR, SID *, GUID *, int *))(**(_QWORD **)&v13 + 72LL))(
                 v13,
                 v8,
                 &SID_EdgeUi,
                 &GUID_6e6c3c52_5a5e_4b4b_a0f8_7fe12621a93e,
                 v24);
    LastError = Instance;
    if ( Instance < 0 )
    {
      v11 = 609LL;
      goto LABEL_9;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&anchorPoint);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&windowSize);
    Error = (*(__int64 (__fastcall **)(_QWORD, CPeopleBarFlyoutExperienceManager **))(**(_QWORD **)v24 + 80LL))(
              *(_QWORD *)v24,
              v25);
    LastError = Error;
    if ( Error >= 0 )
    {
      Error = (*(__int64 (__fastcall **)(_QWORD, RECT *))(**(_QWORD **)v24 + 168LL))(*(_QWORD *)v24, &excludeRect);
      LastError = Error;
      if ( Error >= 0 )
      {
        *a4 = 0;
        v16 = LODWORD(v25[0]);
        if ( LODWORD(v25[0]) )
        {
          v16 = (unsigned int)(LODWORD(v25[0]) - 1);
          if ( LODWORD(v25[0]) == 1 )
          {
            v18 = 65540;
            *a4 = 13;
          }
          else
          {
            v16 = (unsigned int)(LODWORD(v25[0]) - 2);
            if ( LODWORD(v25[0]) == 2 )
            {
              v18 = 65560;
              *a4 = 11;
            }
            else
            {
              if ( LODWORD(v25[0]) != 3 )
              {
                LastError = -2147467263;
                v17 = 2147500033LL;
                v15 = 664LL;
LABEL_27:
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)v15,
                  (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
                  (const char *)v17);
                goto LABEL_38;
              }
              v18 = 65572;
              *a4 = 7;
            }
          }
        }
        else
        {
          v18 = 65552;
          *a4 = 14;
        }
        anchorPoint.x = v6;
        anchorPoint.y = v7;
        windowSize.cx = 320;
        windowSize.cy = 616;
        CPeopleBarFlyoutExperienceManager::AdjustSizeForScale((CPeopleBarFlyoutExperienceManager *)v16, &windowSize);
        if ( CalculatePopupWindowPosition(&anchorPoint, &windowSize, v18, &excludeRect, &popupWindowPosition) )
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
                          v19);
          }
          goto LABEL_38;
        }
        Error = ResultFromKnownLastError();
        LastError = Error;
        if ( Error >= 0 )
        {
LABEL_38:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v24);
          return LastError;
        }
        v15 = 674LL;
      }
      else
      {
        v15 = 617LL;
      }
    }
    else
    {
      v15 = 616LL;
    }
    v17 = (unsigned int)Error;
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
