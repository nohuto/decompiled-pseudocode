/*
 * XREFs of ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0222504
 * Callers:
 *     xxxMNOpenHierarchy @ 0x1C0225610 (xxxMNOpenHierarchy.c)
 *     xxxMenuWindowProc @ 0x1C0227440 (xxxMenuWindowProc.c)
 * Callees:
 *     MNGetpItemFromIndex @ 0x1C0021DE0 (MNGetpItemFromIndex.c)
 *     GetDPIMetrics @ 0x1C00912E8 (GetDPIMetrics.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C0091D38 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     _MonitorFromRect @ 0x1C0091E40 (_MonitorFromRect.c)
 *     IsTrayWindow @ 0x1C009B9D4 (IsTrayWindow.c)
 *     GetDpiDependentMetric @ 0x1C00A9308 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C00AA6E4 (GetDpiForSystem.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C011022C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     xxxSendMinRectMessages @ 0x1C012E7D4 (xxxSendMinRectMessages.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C0221AC4 (-MNGetPopupBoundsRect@@YAXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     ?GetMenuRightAlignHint@MenuHelpers@@YA_NXZ @ 0x1C023A1AC (-GetMenuRightAlignHint@MenuHelpers@@YA_NXZ.c)
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
  __int64 v21; // r8
  __int64 v22; // r9
  LONG left; // eax
  int v24; // edx
  LONG v25; // ebx
  __int64 v26; // rax
  __int64 *v27; // rdx
  __int64 v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // r9
  LONG bottom; // edi
  __int64 v32; // r8
  int v33; // esi
  int v34; // ebx
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
    v33 = *(_DWORD *)(*a2 + 64) + *(_DWORD *)(*a2 + 72) + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*v12 + 16) + 40LL) + 88LL);
    bottom = *(_DWORD *)(*a2 + 68) + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 92LL);
    if ( (*(_DWORD *)(*(_QWORD *)(**a1 + 40) + 124LL) & 3) != 0 )
    {
      v34 = *(_DWORD *)(*(_QWORD *)MNGetpItemFromIndex(
                                     *(_QWORD *)(**a1 + 40),
                                     *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 116LL))
                      + 68LL);
      bottom += *(_DWORD *)(GetDPIMetrics() + 28) - v34;
    }
    v35 = _MonitorFromWindowInternal(*(struct tagWND **)(**a1 + 16), 1, 0);
    v36 = *a1;
    v37 = (__int64)v35;
    v46 = (__int64)v35;
    SmartObjStackRefBase<tagPOPUPMENU>::Init(v53, *v36);
    MNGetPopupBoundsRect(v53, v37, &v45, 0);
    v32 = 2LL;
    v29 = (*(_DWORD *)**a1 >> 4) & 1;
    if ( ((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 26LL) & 0x40) != 0) != ((*(_DWORD *)**a1 & 0x10) != 0)
      && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL) - a3 + 3 >= (int)v45 )
    {
      v33 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL) - a3 + 3;
      v13 = 2;
    }
    if ( v33 + a3 > SDWORD2(v45) )
    {
      v13 = 2;
      v33 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL) - a3 + 3;
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
      xxxSendMinRectMessages(*(HWND **)(**a1 + 16), (struct _LARGE_STRING *)&v54, v21, v22);
    if ( MenuHelpers::GetMenuRightAlignHint(v19) || !v20 )
    {
      v24 = v44;
      *(_DWORD *)**a1 |= 0x10u;
      left = v54.left;
      if ( v16 )
        v25 = v54.right - a3;
      else
        v25 = v54.left + v44 + v17 - a3;
    }
    else
    {
      left = v54.left;
      v24 = v44;
      if ( v16 )
        v25 = v54.left;
      else
        v25 = v17 + v54.left;
    }
    if ( !v16 )
    {
      v54.left = v17 + left;
      v54.right = v24 + v17 + left;
      v54.top += v47;
      v54.bottom = v54.top + v46;
    }
    v26 = MonitorFromRect(&v54, 1u, 0);
    v27 = *a1;
    v28 = v26;
    v46 = v26;
    SmartObjStackRefBase<tagPOPUPMENU>::Init(v52, *v27);
    MNGetPopupBoundsRect(v52, v28, &v45, 0);
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
    v32 = (unsigned int)(DWORD2(v45) - a3);
    v33 = DWORD2(v45) - a3;
    if ( v25 < (int)v32 )
      v33 = v25;
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 26LL) & 0x40) != 0 )
    {
      v29 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 96LL);
      v33 = v29 + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL) - v33 - a3;
      if ( v33 >= (int)v32 )
        v33 = DWORD2(v45) - a3;
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
      DpiForSystem = GetDpiForSystem((__int64)v40, v29, v32, v30);
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
  if ( v33 <= (int)v45 )
    v33 = v45;
  v42 = (_QWORD *)v51;
  if ( bottom <= v39 )
    bottom = v39;
  *v49 = v33;
  *v50 = bottom;
  if ( v42 )
    *v42 = v46;
  return v13;
}
