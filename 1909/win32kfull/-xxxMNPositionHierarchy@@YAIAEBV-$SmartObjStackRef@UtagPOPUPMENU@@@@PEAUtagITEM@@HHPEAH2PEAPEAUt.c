/*
 * XREFs of ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0221FC4
 * Callers:
 *     xxxMNOpenHierarchy @ 0x1C02250D0 (xxxMNOpenHierarchy.c)
 *     xxxMenuWindowProc @ 0x1C0226F00 (xxxMenuWindowProc.c)
 * Callees:
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C00146C4 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     _MonitorFromRect @ 0x1C00147D0 (_MonitorFromRect.c)
 *     IsTrayWindow @ 0x1C003C7A4 (IsTrayWindow.c)
 *     GetDpiDependentMetric @ 0x1C004A0E8 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C004B4C4 (GetDpiForSystem.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00EB5EC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     xxxSendMinRectMessages @ 0x1C0109A64 (xxxSendMinRectMessages.c)
 *     MNGetpItemFromIndex @ 0x1C012A5A4 (MNGetpItemFromIndex.c)
 *     GetDPIMetrics @ 0x1C012C10C (GetDPIMetrics.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C0221584 (-MNGetPopupBoundsRect@@YAXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     ?GetMenuRightAlignHint@MenuHelpers@@YA_NXZ @ 0x1C0239B8C (-GetMenuRightAlignHint@MenuHelpers@@YA_NXZ.c)
 */

__int64 __fastcall xxxMNPositionHierarchy(__int64 **a1, __int64 *a2, int a3, int a4, int *a5, LONG *a6, __int64 a7)
{
  __int64 *v10; // rax
  bool v11; // zf
  __int64 *v12; // rax
  unsigned int v13; // r15d
  __int64 v14; // rcx
  __int64 v15; // rax
  char v16; // di
  int v17; // esi
  __int64 *v18; // rax
  MenuHelpers *v19; // rcx
  bool v20; // bl
  LONG left; // eax
  int v22; // edx
  LONG v23; // ebx
  __int64 v24; // rax
  __int64 *v25; // rdx
  __int64 v26; // rsi
  __int64 v27; // rdx
  LONG bottom; // edi
  __int64 v29; // r8
  int v30; // esi
  __int64 *v31; // rax
  int v32; // ebx
  __int64 v33; // rdx
  __int64 v34; // r8
  struct tagMONITOR *v35; // rax
  __int64 *v36; // rdx
  __int64 v37; // rbx
  int v38; // edi
  LONG v39; // ebx
  _DWORD *v40; // rcx
  unsigned int DpiForSystem; // eax
  _QWORD *v42; // rcx
  int v44; // [rsp+20h] [rbp-71h]
  __int128 v45; // [rsp+28h] [rbp-69h] BYREF
  __int64 v46; // [rsp+38h] [rbp-59h]
  int v47; // [rsp+40h] [rbp-51h]
  __int64 *v48; // [rsp+48h] [rbp-49h]
  int *v49; // [rsp+50h] [rbp-41h]
  LONG *v50; // [rsp+58h] [rbp-39h]
  __int64 v51; // [rsp+60h] [rbp-31h]
  int **v52[2]; // [rsp+68h] [rbp-29h] BYREF
  int **v53[2]; // [rsp+78h] [rbp-19h] BYREF
  struct tagRECT v54; // [rsp+88h] [rbp-9h] BYREF

  v49 = a5;
  v50 = a6;
  v51 = a7;
  v45 = 0uLL;
  v10 = *a1;
  v48 = a2;
  v11 = (*(_DWORD *)*v10 & 1) == 0;
  v12 = *a1;
  if ( v11 )
  {
    v13 = 1;
    v30 = *(_DWORD *)(*a2 + 64) + *(_DWORD *)(*a2 + 72) + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*v12 + 16) + 40LL) + 88LL);
    bottom = *(_DWORD *)(*a2 + 68) + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 92LL);
    if ( (*(_DWORD *)(*(_QWORD *)(**a1 + 40) + 124LL) & 3) != 0 )
    {
      v31 = (__int64 *)MNGetpItemFromIndex(*(_QWORD *)(**a1 + 40), *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 116LL));
      v32 = *(_DWORD *)(*v31 + 68);
      bottom += *(_DWORD *)(GetDPIMetrics(*v31, v33, v34) + 28) - v32;
    }
    v35 = _MonitorFromWindowInternal(*(struct tagWND **)(**a1 + 16), 1, 0);
    v36 = *a1;
    v37 = (__int64)v35;
    v46 = (__int64)v35;
    SmartObjStackRefBase<tagPOPUPMENU>::Init(v53, *v36);
    MNGetPopupBoundsRect(v53, v37, &v45, 0);
    v29 = 2LL;
    v27 = (*(_DWORD *)**a1 >> 4) & 1;
    if ( ((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 26LL) & 0x40) != 0) != ((*(_DWORD *)**a1 & 0x10) != 0)
      && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL) - a3 + 3 >= (int)v45 )
    {
      v30 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL) - a3 + 3;
      v13 = 2;
    }
    if ( v30 + a3 > SDWORD2(v45) )
    {
      v13 = 2;
      v30 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL) - a3 + 3;
    }
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 26LL) & 0x40) != 0 )
      v13 ^= 3u;
  }
  else
  {
    v13 = 4;
    v14 = *(_QWORD *)(*(_QWORD *)(*v12 + 16) + 40LL);
    v15 = *a2;
    v16 = *(_BYTE *)(v14 + 31) & 0x20;
    v17 = *(_DWORD *)(*a2 + 64);
    v47 = *(_DWORD *)(*a2 + 68);
    LODWORD(v14) = *(_DWORD *)(v15 + 72);
    LODWORD(v46) = *(_DWORD *)(v15 + 76);
    v44 = v14;
    v18 = *a1;
    v54 = *(struct tagRECT *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL);
    v19 = (MenuHelpers *)*v18;
    v20 = 1;
    if ( *(_QWORD *)(*v18 + 40) )
    {
      v19 = *(MenuHelpers **)(*(_QWORD *)(**a1 + 40) + 40LL);
      if ( (*((_DWORD *)v19 + 10) & 0x20) != 0 )
        v20 = 0;
    }
    if ( v16 && (unsigned int)IsTrayWindow(*(_QWORD **)(**a1 + 16)) )
      xxxSendMinRectMessages(*(unsigned __int64 **)(**a1 + 16), (struct _LARGE_STRING *)&v54);
    if ( MenuHelpers::GetMenuRightAlignHint(v19) || !v20 )
    {
      v22 = v44;
      *(_DWORD *)**a1 |= 0x10u;
      left = v54.left;
      if ( v16 )
        v23 = v54.right - a3;
      else
        v23 = v54.left + v44 + v17 - a3;
    }
    else
    {
      left = v54.left;
      v22 = v44;
      if ( v16 )
        v23 = v54.left;
      else
        v23 = v17 + v54.left;
    }
    if ( !v16 )
    {
      v54.left = v17 + left;
      v54.right = v22 + v17 + left;
      v54.top += v47;
      v54.bottom = v54.top + v46;
    }
    v24 = MonitorFromRect(&v54, 1u, 0);
    v25 = *a1;
    v26 = v24;
    v46 = v24;
    SmartObjStackRefBase<tagPOPUPMENU>::Init(v52, *v25);
    MNGetPopupBoundsRect(v52, v26, &v45, 0);
    if ( v16 )
    {
      bottom = v54.top - a4;
      if ( v54.top - a4 < SDWORD1(v45) )
        bottom = v54.bottom;
    }
    else
    {
      bottom = v54.bottom;
    }
    v29 = (unsigned int)(DWORD2(v45) - a3);
    v30 = DWORD2(v45) - a3;
    if ( v23 < (int)v29 )
      v30 = v23;
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 26LL) & 0x40) != 0 )
    {
      v27 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 96LL);
      v30 = v27 + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL) - v30 - a3;
      if ( v30 >= (int)v29 )
        v30 = DWORD2(v45) - a3;
    }
  }
  if ( bottom + a4 <= SHIDWORD(v45) )
  {
    v39 = DWORD1(v45);
  }
  else
  {
    v38 = bottom - a4;
    v39 = DWORD1(v45);
    v40 = (_DWORD *)**a1;
    if ( (*v40 & 1) != 0 )
    {
      DpiForSystem = GetDpiForSystem((__int64)v40, v27, v29);
      bottom = v38 - GetDpiDependentMetric(26LL, DpiForSystem);
      if ( bottom < v39 )
      {
LABEL_44:
        bottom = HIDWORD(v45) - a4;
        goto LABEL_46;
      }
      v13 = 8;
    }
    else
    {
      bottom = *(_DWORD *)(*v48 + 76) + 6 + v38;
    }
    if ( bottom < v39 || bottom + a4 > SHIDWORD(v45) )
      goto LABEL_44;
  }
LABEL_46:
  if ( v30 <= (int)v45 )
    v30 = v45;
  v42 = (_QWORD *)v51;
  if ( bottom <= v39 )
    bottom = v39;
  *v49 = v30;
  *v50 = bottom;
  if ( v42 )
    *v42 = v46;
  return v13;
}
