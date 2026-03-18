/*
 * XREFs of ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C020A9E0
 * Callers:
 *     xxxMNOpenHierarchy @ 0x1C020DA04 (xxxMNOpenHierarchy.c)
 *     xxxMenuWindowProc @ 0x1C020F6B0 (xxxMenuWindowProc.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C00209DC (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C002657C (GetDpiForSystem.c)
 *     IsTrayWindow @ 0x1C002CD08 (IsTrayWindow.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C007A7CC (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     _MonitorFromRect @ 0x1C007A8E0 (_MonitorFromRect.c)
 *     MNGetpItemFromIndex @ 0x1C00AB734 (MNGetpItemFromIndex.c)
 *     GetDPIMetrics @ 0x1C00AB99C (GetDPIMetrics.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0102A84 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     xxxSendMinRectMessages @ 0x1C01240B0 (xxxSendMinRectMessages.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C020A024 (-MNGetPopupBoundsRect@@YAXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     ?GetMenuRightAlignHint@MenuHelpers@@YA_NXZ @ 0x1C0221A78 (-GetMenuRightAlignHint@MenuHelpers@@YA_NXZ.c)
 */

__int64 __fastcall xxxMNPositionHierarchy(__int64 **a1, __int64 *a2, int a3, int a4, int *a5, LONG *a6, __int64 a7)
{
  __int64 *v10; // rax
  bool v11; // zf
  __int64 *v12; // rax
  unsigned int v13; // r15d
  char v14; // di
  char v15; // di
  __int64 v16; // rax
  int v17; // esi
  int v18; // ecx
  __int64 *v19; // rax
  MenuHelpers *v20; // rcx
  bool v21; // bl
  LONG left; // eax
  int v23; // edx
  LONG v24; // ebx
  __int64 v25; // rax
  __int64 *v26; // rdx
  __int64 v27; // rsi
  LONG bottom; // edi
  int v29; // esi
  __int64 *v30; // rax
  int v31; // ebx
  __int64 v32; // rdx
  struct tagMONITOR *v33; // rax
  __int64 *v34; // rdx
  __int64 v35; // rbx
  int v36; // edi
  LONG v37; // ebx
  unsigned int DpiForSystem; // eax
  __int64 v39; // r8
  _QWORD *v40; // rcx
  int v42; // [rsp+20h] [rbp-71h]
  __int128 v43; // [rsp+28h] [rbp-69h] BYREF
  __int64 v44; // [rsp+38h] [rbp-59h]
  int v45; // [rsp+40h] [rbp-51h]
  __int64 *v46; // [rsp+48h] [rbp-49h]
  int *v47; // [rsp+50h] [rbp-41h]
  LONG *v48; // [rsp+58h] [rbp-39h]
  __int64 v49; // [rsp+60h] [rbp-31h]
  int **v50[2]; // [rsp+68h] [rbp-29h] BYREF
  int **v51[2]; // [rsp+78h] [rbp-19h] BYREF
  struct tagRECT v52; // [rsp+88h] [rbp-9h] BYREF

  v47 = a5;
  v48 = a6;
  v49 = a7;
  v43 = 0uLL;
  v10 = *a1;
  v46 = a2;
  v11 = (*(_DWORD *)*v10 & 1) == 0;
  v12 = *a1;
  if ( v11 )
  {
    v13 = 1;
    v29 = *(_DWORD *)(*a2 + 64) + *(_DWORD *)(*a2 + 72) + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*v12 + 16) + 40LL) + 88LL);
    bottom = *(_DWORD *)(*a2 + 68) + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 92LL);
    if ( (*(_DWORD *)(*(_QWORD *)(**a1 + 40) + 124LL) & 3) != 0 )
    {
      v30 = (__int64 *)MNGetpItemFromIndex(*(_QWORD *)(**a1 + 40), *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 116LL));
      v31 = *(_DWORD *)(*v30 + 68);
      bottom += *(_DWORD *)(GetDPIMetrics(*v30, v32) + 28) - v31;
    }
    v33 = _MonitorFromWindowInternal(*(struct tagWND **)(**a1 + 16), 1, 0);
    v34 = *a1;
    v35 = (__int64)v33;
    v44 = (__int64)v33;
    SmartObjStackRefBase<tagPOPUPMENU>::Init(v51, *v34);
    MNGetPopupBoundsRect(v51, v35, &v43, 0);
    if ( ((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 26LL) & 0x40) != 0) != ((*(_DWORD *)**a1 & 0x10) != 0)
      && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL) - a3 + 3 >= (int)v43 )
    {
      v29 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL) - a3 + 3;
      v13 = 2;
    }
    if ( v29 + a3 > SDWORD2(v43) )
    {
      v13 = 2;
      v29 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL) - a3 + 3;
    }
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 26LL) & 0x40) != 0 )
      v13 ^= 3u;
  }
  else
  {
    v13 = 4;
    v14 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v12 + 16) + 40LL) + 31LL);
    *(_QWORD *)&v52.left = 0LL;
    v15 = v14 & 0x20;
    *(_QWORD *)&v52.right = 0LL;
    v16 = *a2;
    v17 = *(_DWORD *)(*a2 + 64);
    v45 = *(_DWORD *)(*a2 + 68);
    v18 = *(_DWORD *)(v16 + 72);
    LODWORD(v44) = *(_DWORD *)(v16 + 76);
    v42 = v18;
    v19 = *a1;
    v52 = *(struct tagRECT *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL);
    v20 = (MenuHelpers *)*v19;
    v21 = 1;
    if ( *(_QWORD *)(*v19 + 40) )
    {
      v20 = *(MenuHelpers **)(*(_QWORD *)(**a1 + 40) + 40LL);
      if ( (*((_DWORD *)v20 + 10) & 0x20) != 0 )
        v21 = 0;
    }
    if ( v15 && (unsigned int)IsTrayWindow(*(_QWORD **)(**a1 + 16)) )
      xxxSendMinRectMessages(*(unsigned __int64 **)(**a1 + 16), (__int64)&v52);
    if ( MenuHelpers::GetMenuRightAlignHint(v20) || !v21 )
    {
      v23 = v42;
      *(_DWORD *)**a1 |= 0x10u;
      left = v52.left;
      if ( v15 )
        v24 = v52.right - a3;
      else
        v24 = v52.left + v42 + v17 - a3;
    }
    else
    {
      left = v52.left;
      v23 = v42;
      if ( v15 )
        v24 = v52.left;
      else
        v24 = v17 + v52.left;
    }
    if ( !v15 )
    {
      v52.left = v17 + left;
      v52.right = v23 + v17 + left;
      v52.top += v45;
      v52.bottom = v52.top + v44;
    }
    v25 = MonitorFromRect(&v52, 1u, 0);
    v26 = *a1;
    v27 = v25;
    v44 = v25;
    SmartObjStackRefBase<tagPOPUPMENU>::Init(v50, *v26);
    MNGetPopupBoundsRect(v50, v27, &v43, 0);
    if ( v15 )
    {
      bottom = v52.top - a4;
      if ( v52.top - a4 < SDWORD1(v43) )
        bottom = v52.bottom;
    }
    else
    {
      bottom = v52.bottom;
    }
    v29 = DWORD2(v43) - a3;
    if ( v24 < DWORD2(v43) - a3 )
      v29 = v24;
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 26LL) & 0x40) != 0 )
    {
      v29 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 96LL)
          + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL)
          - v29
          - a3;
      if ( v29 >= DWORD2(v43) - a3 )
        v29 = DWORD2(v43) - a3;
    }
  }
  if ( bottom + a4 <= SHIDWORD(v43) )
  {
    v37 = DWORD1(v43);
  }
  else
  {
    v36 = bottom - a4;
    v37 = DWORD1(v43);
    if ( (*(_DWORD *)**a1 & 1) != 0 )
    {
      DpiForSystem = GetDpiForSystem();
      bottom = v36 - GetDpiDependentMetric(26LL, DpiForSystem, v39);
      if ( bottom < v37 )
      {
LABEL_44:
        bottom = HIDWORD(v43) - a4;
        goto LABEL_46;
      }
      v13 = 8;
    }
    else
    {
      bottom = *(_DWORD *)(*v46 + 76) + 6 + v36;
    }
    if ( bottom < v37 || bottom + a4 > SHIDWORD(v43) )
      goto LABEL_44;
  }
LABEL_46:
  if ( v29 <= (int)v43 )
    v29 = v43;
  v40 = (_QWORD *)v49;
  if ( bottom <= v37 )
    bottom = v37;
  *v47 = v29;
  *v48 = bottom;
  if ( v40 )
    *v40 = v44;
  return v13;
}
