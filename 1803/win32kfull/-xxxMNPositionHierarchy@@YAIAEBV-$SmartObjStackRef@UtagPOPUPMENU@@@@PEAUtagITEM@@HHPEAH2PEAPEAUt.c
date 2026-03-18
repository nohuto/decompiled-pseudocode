/*
 * XREFs of ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C01E4AE0
 * Callers:
 *     xxxMNOpenHierarchy @ 0x1C01E7B08 (xxxMNOpenHierarchy.c)
 *     xxxMenuWindowProc @ 0x1C01E96E0 (xxxMenuWindowProc.c)
 * Callees:
 *     MNGetpItemFromIndex @ 0x1C0013D3C (MNGetpItemFromIndex.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0021B08 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     GetDpiDependentMetric @ 0x1C0039CF0 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C003BA94 (GetDpiForSystem.c)
 *     IsTrayWindow @ 0x1C0044B0C (IsTrayWindow.c)
 *     GetDPIMetrics @ 0x1C0065818 (GetDPIMetrics.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C0072A9C (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     _MonitorFromRect @ 0x1C0072BA0 (_MonitorFromRect.c)
 *     xxxSendMinRectMessages @ 0x1C0102848 (xxxSendMinRectMessages.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C01E4154 (-MNGetPopupBoundsRect@@YAXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     ?GetMenuRightAlignHint@MenuHelpers@@YA_NXZ @ 0x1C01F9918 (-GetMenuRightAlignHint@MenuHelpers@@YA_NXZ.c)
 */

__int64 __fastcall xxxMNPositionHierarchy(__int64 **a1, __int64 a2, int a3, int a4, int *a5, LONG *a6, __int64 a7)
{
  __int64 v9; // r9
  __int64 *v11; // rax
  bool v12; // zf
  __int64 *v13; // rax
  unsigned int v14; // r15d
  char v15; // di
  char v16; // di
  __int64 v17; // rax
  int v18; // esi
  int v19; // ecx
  __int64 *v20; // rax
  MenuHelpers *v21; // rcx
  bool v22; // bl
  __int64 v23; // r9
  LONG left; // eax
  int v25; // edx
  LONG v26; // ebx
  __int64 v27; // rax
  __int64 *v28; // rdx
  __int64 v29; // rsi
  LONG bottom; // edi
  int v31; // esi
  __int64 *v32; // rax
  int v33; // ebx
  __int64 v34; // rdx
  struct tagMONITOR *v35; // rax
  __int64 *v36; // rdx
  __int64 v37; // rbx
  int v38; // edi
  LONG v39; // ebx
  unsigned int DpiForSystem; // eax
  _QWORD *v41; // rcx
  int v43; // [rsp+20h] [rbp-71h]
  __int128 v44; // [rsp+28h] [rbp-69h] BYREF
  __int64 v45; // [rsp+38h] [rbp-59h]
  int v46; // [rsp+40h] [rbp-51h]
  __int64 v47; // [rsp+48h] [rbp-49h]
  int *v48; // [rsp+50h] [rbp-41h]
  LONG *v49; // [rsp+58h] [rbp-39h]
  __int64 v50; // [rsp+60h] [rbp-31h]
  int **v51[2]; // [rsp+68h] [rbp-29h] BYREF
  int **v52[2]; // [rsp+78h] [rbp-19h] BYREF
  struct tagRECT v53; // [rsp+88h] [rbp-9h] BYREF

  v48 = a5;
  v9 = a2;
  v49 = a6;
  v50 = a7;
  v44 = 0uLL;
  v11 = *a1;
  v47 = a2;
  v12 = (*(_DWORD *)*v11 & 1) == 0;
  v13 = *a1;
  if ( v12 )
  {
    v14 = 1;
    v31 = *(_DWORD *)(*(_QWORD *)a2 + 64LL)
        + *(_DWORD *)(*(_QWORD *)a2 + 72LL)
        + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*v13 + 16) + 40LL) + 88LL);
    bottom = *(_DWORD *)(*(_QWORD *)a2 + 68LL) + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 92LL);
    if ( (*(_DWORD *)(*(_QWORD *)(**a1 + 40) + 124LL) & 3) != 0 )
    {
      v32 = (__int64 *)MNGetpItemFromIndex(*(_QWORD *)(**a1 + 40), *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 116LL));
      v33 = *(_DWORD *)(*v32 + 68);
      bottom += *(_DWORD *)(GetDPIMetrics(*v32, v34) + 28) - v33;
    }
    v35 = _MonitorFromWindowInternal(*(struct tagWND **)(**a1 + 16), 1LL, 0LL, v9);
    v36 = *a1;
    v37 = (__int64)v35;
    v45 = (__int64)v35;
    SmartObjStackRefBase<tagPOPUPMENU>::Init(v52, *v36);
    MNGetPopupBoundsRect(v52, v37, &v44, 0);
    if ( ((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 26LL) & 0x40) != 0) != ((*(_DWORD *)**a1 & 0x10) != 0)
      && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL) - a3 + 3 >= (int)v44 )
    {
      v31 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL) - a3 + 3;
      v14 = 2;
    }
    if ( v31 + a3 > SDWORD2(v44) )
    {
      v14 = 2;
      v31 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL) - a3 + 3;
    }
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 26LL) & 0x40) != 0 )
      v14 ^= 3u;
  }
  else
  {
    v14 = 4;
    v15 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v13 + 16) + 40LL) + 31LL);
    *(_QWORD *)&v53.left = 0LL;
    v16 = v15 & 0x20;
    *(_QWORD *)&v53.right = 0LL;
    v17 = *(_QWORD *)a2;
    v18 = *(_DWORD *)(*(_QWORD *)a2 + 64LL);
    v46 = *(_DWORD *)(*(_QWORD *)a2 + 68LL);
    v19 = *(_DWORD *)(v17 + 72);
    LODWORD(v45) = *(_DWORD *)(v17 + 76);
    v43 = v19;
    v20 = *a1;
    v53 = *(struct tagRECT *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL);
    v21 = (MenuHelpers *)*v20;
    v22 = 1;
    if ( *(_QWORD *)(*v20 + 40) )
    {
      v21 = *(MenuHelpers **)(*(_QWORD *)(**a1 + 40) + 40LL);
      if ( (*((_DWORD *)v21 + 10) & 0x20) != 0 )
        v22 = 0;
    }
    if ( v16 && (unsigned int)IsTrayWindow(*(_QWORD **)(**a1 + 16)) )
      xxxSendMinRectMessages(*(HWND **)(**a1 + 16), (__int64)&v53);
    if ( MenuHelpers::GetMenuRightAlignHint(v21) || !v22 )
    {
      v25 = v43;
      *(_DWORD *)**a1 |= 0x10u;
      left = v53.left;
      if ( v16 )
        v26 = v53.right - a3;
      else
        v26 = v53.left + v43 + v18 - a3;
    }
    else
    {
      left = v53.left;
      v25 = v43;
      if ( v16 )
        v26 = v53.left;
      else
        v26 = v18 + v53.left;
    }
    if ( !v16 )
    {
      v53.left = v18 + left;
      v53.right = v25 + v18 + left;
      v53.top += v46;
      v53.bottom = v53.top + v45;
    }
    v27 = MonitorFromRect(&v53, 1LL, 0LL, v23);
    v28 = *a1;
    v29 = v27;
    v45 = v27;
    SmartObjStackRefBase<tagPOPUPMENU>::Init(v51, *v28);
    MNGetPopupBoundsRect(v51, v29, &v44, 0);
    if ( v16 )
    {
      bottom = v53.top - a4;
      if ( v53.top - a4 < SDWORD1(v44) )
        bottom = v53.bottom;
    }
    else
    {
      bottom = v53.bottom;
    }
    v31 = DWORD2(v44) - a3;
    if ( v26 < DWORD2(v44) - a3 )
      v31 = v26;
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 26LL) & 0x40) != 0 )
    {
      v31 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 96LL)
          + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL)
          - v31
          - a3;
      if ( v31 >= DWORD2(v44) - a3 )
        v31 = DWORD2(v44) - a3;
    }
  }
  if ( bottom + a4 <= SHIDWORD(v44) )
  {
    v39 = DWORD1(v44);
  }
  else
  {
    v38 = bottom - a4;
    v39 = DWORD1(v44);
    if ( (*(_DWORD *)**a1 & 1) != 0 )
    {
      DpiForSystem = GetDpiForSystem();
      bottom = v38 - GetDpiDependentMetric(26LL, DpiForSystem);
      if ( bottom < v39 )
      {
LABEL_44:
        bottom = HIDWORD(v44) - a4;
        goto LABEL_46;
      }
      v14 = 8;
    }
    else
    {
      bottom = *(_DWORD *)(*(_QWORD *)v47 + 76LL) + 6 + v38;
    }
    if ( bottom < v39 || bottom + a4 > SHIDWORD(v44) )
      goto LABEL_44;
  }
LABEL_46:
  if ( v31 <= (int)v44 )
    v31 = v44;
  v41 = (_QWORD *)v50;
  if ( bottom <= v39 )
    bottom = v39;
  *v48 = v31;
  *v49 = bottom;
  if ( v41 )
    *v41 = v45;
  return v14;
}
