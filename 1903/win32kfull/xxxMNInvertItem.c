/*
 * XREFs of xxxMNInvertItem @ 0x1C024A9E4
 * Callers:
 *     xxxMNSelectItem @ 0x1C0226564 (xxxMNSelectItem.c)
 *     xxxHiliteMenuItem @ 0x1C024D8B0 (xxxHiliteMenuItem.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     MNGetpItemFromIndex @ 0x1C0021DE0 (MNGetpItemFromIndex.c)
 *     MNGetpItemIndex @ 0x1C0022308 (MNGetpItemIndex.c)
 *     MNIsOwnerDrawItem @ 0x1C0022540 (MNIsOwnerDrawItem.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     GreSelectFont @ 0x1C008CDF0 (GreSelectFont.c)
 *     GreSetBkMode @ 0x1C008CFF8 (GreSetBkMode.c)
 *     GetWindowDpiLastNotify @ 0x1C0093050 (GetWindowDpiLastNotify.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C009A3E0 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00A1C48 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetDpiDependentMetric @ 0x1C00A9308 (GetDpiDependentMetric.c)
 *     xxxGetSysMenuPtr @ 0x1C00A9918 (xxxGetSysMenuPtr.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00BFB98 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     xxxDrawMenuItem @ 0x1C00F96F4 (xxxDrawMenuItem.c)
 *     ?MNDrawHilite@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C00F9CC0 (-MNDrawHilite@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     GreSetTextAlign @ 0x1C00F9CEC (GreSetTextAlign.c)
 *     GreSetViewportOrg @ 0x1C00F9D68 (GreSetViewportOrg.c)
 *     GreGetTextAlign @ 0x1C00FBDFC (GreGetTextAlign.c)
 *     ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C00FBE48 (-GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C0106608 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0106A24 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NAEBV0@@Z @ 0x1C0126A98 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NAEBV0@@Z.c)
 *     MNPositionSysMenu @ 0x1C01549AC (MNPositionSysMenu.c)
 *     xxxMNSetTop @ 0x1C0226E04 (xxxMNSetTop.c)
 *     ?RecalcDCVisRgn@@YAXPEAUHDC__@@@Z @ 0x1C0249BD8 (-RecalcDCVisRgn@@YAXPEAUHDC__@@@Z.c)
 *     MNDrawArrow @ 0x1C024A2A8 (MNDrawArrow.c)
 *     MNEraseBackground @ 0x1C024A558 (MNEraseBackground.c)
 *     xxxSendMenuSelect @ 0x1C024C394 (xxxSendMenuSelect.c)
 */

__int64 *__fastcall xxxMNInvertItem(__int64 **a1, __int64 **a2, signed int a3, _QWORD *a4, unsigned int a5)
{
  __int64 *v7; // r13
  signed int v9; // r15d
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rsi
  __int64 ThreadWin32Thread; // rax
  _QWORD *i; // rcx
  __int64 SysMenuPtr; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  _QWORD *v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  _DWORD *v22; // rcx
  __int64 v23; // r8
  signed int v24; // edx
  __int64 v25; // rcx
  __int64 v26; // r11
  int v27; // r10d
  __int64 v28; // rax
  __int64 v29; // rcx
  _DWORD *v30; // rcx
  int v31; // edx
  int v32; // r8d
  __int64 *v33; // rax
  HDC DC; // r15
  __int64 DCEx; // rax
  __int64 v36; // rdx
  unsigned int WindowDpiLastNotify; // eax
  __int64 v38; // rax
  int v39; // ebx
  __int64 v40; // rcx
  unsigned int v41; // eax
  __int64 v42; // rax
  __int64 v43; // rdx
  int DpiDependentMetric; // ebx
  __int64 v45; // r8
  __int64 v46; // r9
  _DWORD *v47; // rax
  int v48; // ecx
  __int64 v49; // r8
  int TextAlign; // eax
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // r9
  int v54; // ebx
  __int64 *DPIMETRICS; // rax
  __int64 v56; // rax
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rdx
  int v60; // ecx
  unsigned int v61; // ecx
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rcx
  __int64 v65; // rcx
  int v66; // ebx
  __int64 v67; // rdx
  __int64 v68; // rdx
  __int64 v69; // rcx
  unsigned int v70; // eax
  __int64 v71; // rcx
  __int64 v72; // rax
  __int64 v73; // rcx
  int v75; // [rsp+28h] [rbp-41h]
  int v76; // [rsp+38h] [rbp-31h]
  int v77; // [rsp+38h] [rbp-31h]
  int v78; // [rsp+3Ch] [rbp-2Dh]
  int v79; // [rsp+40h] [rbp-29h]
  int v80; // [rsp+40h] [rbp-29h]
  __int64 v81; // [rsp+48h] [rbp-21h] BYREF
  int v82; // [rsp+50h] [rbp-19h]
  int v83; // [rsp+54h] [rbp-15h]
  int v84; // [rsp+58h] [rbp-11h]
  __int64 v85; // [rsp+60h] [rbp-9h]
  _QWORD v86[2]; // [rsp+68h] [rbp-1h] BYREF
  _QWORD *v87; // [rsp+78h] [rbp+Fh]
  __int64 v88; // [rsp+80h] [rbp+17h] BYREF
  __int64 v89; // [rsp+88h] [rbp+1Fh]
  __int64 v90; // [rsp+90h] [rbp+27h]

  v7 = 0LL;
  v78 = 0;
  v9 = a3;
  SmartObjStackRefBase<tagMENU>::Init(v86, 0LL);
  v87 = 0LL;
  v82 = 0;
  v81 = 0LL;
  v88 = 0LL;
  v89 = 0LL;
  v90 = 0LL;
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)a2) || !a4 )
  {
LABEL_113:
    v7 = 0LL;
    goto LABEL_114;
  }
  if ( **a1 )
  {
    v13 = *(_QWORD *)(**a1 + 16);
    if ( (_QWORD *)v13 != a4 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, v11, v12);
      v88 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v88;
      v89 = v13;
      if ( v13 )
        HMLockObject(v13);
    }
  }
  else
  {
    v13 = (__int64)a4;
  }
  if ( v9 < 0 )
  {
    if ( **a1 && (unsigned int)(v9 + 4) <= 1 )
      MNDrawArrow(0LL, a1, (unsigned int)v9);
    for ( i = *(_QWORD **)(a4[2] + 600LL); i && *(_QWORD **)(*i + 8LL) != a4; i = (_QWORD *)i[6] )
      ;
LABEL_107:
    xxxSendMenuSelect((_DWORD)a4, v13, (_DWORD)a2, v9, (__int64)i);
    goto LABEL_108;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(**a2 + 40) + 40LL) & 1) == 0 )
  {
    SysMenuPtr = xxxGetSysMenuPtr(a4, v10, v11, v12);
    v87 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v86, SysMenuPtr);
    if ( SmartObjStackRef<tagMENU>::operator==((__int64)a2, (__int64)v86) )
    {
      v19 = v87;
      if ( !v87 )
        v19 = *(_QWORD **)v86[0];
      MNPositionSysMenu((__int64)a4, v19, v17, v18);
      v78 = 1;
    }
  }
  v20 = (__int64)a2[2];
  if ( !v20 )
    v20 = **a2;
  v7 = (__int64 *)MNGetpItemFromIndex(v20, v9);
  if ( v7 )
  {
    v22 = (_DWORD *)*(unsigned int *)(*(_QWORD *)(**a2 + 40) + 40LL);
    if ( ((unsigned __int8)v22 & 1) != 0 || (*(_BYTE *)(a4[5] + 31LL) & 0x20) == 0 )
    {
      v22 = (_DWORD *)*v7;
      v21 = a5;
      if ( (*(_DWORD *)*v7 & 0x800) != 0 )
      {
LABEL_102:
        if ( !(_DWORD)v21 )
          goto LABEL_108;
        for ( i = *(_QWORD **)(a4[2] + 600LL); i && *(_QWORD **)(*i + 8LL) != a4; i = (_QWORD *)i[6] )
          ;
        goto LABEL_107;
      }
      if ( (v22[1] & 0x80) != a5 )
      {
        if ( !a5 || !**a1 || (*(_DWORD *)(**a2 + 124) & 3) == 0 )
          goto LABEL_47;
        if ( v9 >= *(_DWORD *)(**a2 + 116) )
        {
          v25 = (__int64)a2[2];
          if ( !v25 )
            v25 = **a2;
          v26 = MNGetpItemFromIndex(v25, *(_DWORD *)(v25 + 116));
          v24 = *(_DWORD *)(**a2 + 116);
          v27 = *(_DWORD *)(*v7 + 68)
              + *(_DWORD *)(*v7 + 76)
              - *(_DWORD *)(**a2 + 68)
              - *(_DWORD *)(*(_QWORD *)v26 + 68LL);
          while ( v27 > 0 && v24 < *(_DWORD *)(*(_QWORD *)(**a2 + 40) + 44LL) )
          {
            v28 = *(_QWORD *)v26;
            v26 += 96LL;
            v27 -= *(_DWORD *)(v28 + 76);
            ++v24;
          }
          if ( v24 >= *(_DWORD *)(*(_QWORD *)(**a2 + 40) + 44LL) )
            v24 = *(_DWORD *)(*(_QWORD *)(**a2 + 40) + 44LL);
        }
        else
        {
          v24 = v9;
        }
        if ( (unsigned int)xxxMNSetTop(a1, v24) )
          xxxInternalUpdateWindow((struct tagWND *)v13, 1u);
        v29 = (__int64)a2[2];
        if ( !v29 )
          v29 = **a2;
        if ( (unsigned int)MNGetpItemIndex(v29, (__int64)v7) != -1 )
        {
LABEL_47:
          v30 = (_DWORD *)*v7;
          v31 = *(_DWORD *)(*v7 + 64);
          v32 = *(_DWORD *)(*v7 + 68);
          v83 = v31 + *(_DWORD *)(*v7 + 72);
          v79 = v31;
          v84 = v32 + v30[19];
          v33 = *a2;
          LODWORD(v85) = v32;
          if ( (*(_DWORD *)(*(_QWORD *)(*v33 + 40) + 40LL) & 1) != 0 )
          {
            DC = (HDC)_GetDC(v13);
          }
          else
          {
            DCEx = _GetDCEx(v13, 0LL, 65537LL);
            v36 = *(_QWORD *)(v13 + 40);
            DC = (HDC)DCEx;
            if ( (*(_BYTE *)(v36 + 30) & 4) != 0 && !v78 )
            {
              if ( (*(_DWORD *)(v36 + 232) & 0x8000000) != 0 )
              {
                WindowDpiLastNotify = GetWindowDpiLastNotify(v13);
              }
              else if ( (*(_DWORD *)(v36 + 288) & 0xF) == 0
                     && (v38 = *(_QWORD *)(*(_QWORD *)(v13 + 16) + 448LL)) != 0
                     && (*(_DWORD *)(**(_QWORD **)(v38 + 8) + 64LL) & 1) != 0 )
              {
                WindowDpiLastNotify = 96;
              }
              else
              {
                WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v13 + 16) + 416LL) + 284LL);
              }
              v39 = *(_DWORD *)(v36 + 88);
              v76 = *(_DWORD *)(v36 + 96);
              v77 = v76 - v39 - GetDpiDependentMetric(14LL, WindowDpiLastNotify);
              v40 = *(_QWORD *)(v13 + 40);
              if ( (*(_DWORD *)(v40 + 232) & 0x8000000) != 0 )
              {
                v41 = GetWindowDpiLastNotify(v13);
              }
              else if ( (*(_DWORD *)(v40 + 288) & 0xF) == 0
                     && (v42 = *(_QWORD *)(*(_QWORD *)(v13 + 16) + 448LL)) != 0
                     && (*(_DWORD *)(**(_QWORD **)(v42 + 8) + 64LL) & 1) != 0 )
              {
                v41 = 96;
              }
              else
              {
                v41 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v13 + 16) + 416LL) + 284LL);
              }
              DpiDependentMetric = GetDpiDependentMetric(15LL, v41);
              if ( v83 > v77
                || (v45 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(v13 + 40) + 100LL)
                                       - *(_DWORD *)(*(_QWORD *)(v13 + 40) + 92LL)
                                       - DpiDependentMetric),
                    v84 > (int)v45) )
              {
                GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL), v43, v45, v46);
                v47 = *(_DWORD **)(v13 + 40);
                v48 = v47[22];
                v49 = (unsigned int)(v47[23] + v85);
                v75 = v47[25] - DpiDependentMetric;
                v82 = 1;
                GreIntersectVisRect(DC, (unsigned int)(v48 + v79), v49, (unsigned int)(v48 + v77), v75);
                GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
              }
            }
          }
          TextAlign = GreGetTextAlign(DC);
          v54 = TextAlign;
          v80 = TextAlign;
          if ( (*(_DWORD *)*v7 & 0x2000) != 0 )
            GreSetTextAlign(DC, TextAlign | 0x100);
          DPIMETRICS = (__int64 *)GetDPIMETRICS((struct tagWND *)v13, v51, v52, v53);
          v56 = GreSelectFont((__int64)DC, *DPIMETRICS);
          v81 = 0LL;
          v85 = v56;
          GreGetDCPoint(DC, 4LL, &v81);
          v59 = *v7;
          v60 = *(_DWORD *)(*v7 + 4);
          if ( a5 )
            v61 = v60 | 0x80;
          else
            v61 = v60 & 0xFFFFFF7F;
          *(_DWORD *)(v59 + 4) = v61;
          if ( v78 || *(_QWORD *)(*v7 + 96) == 1LL && (*(_DWORD *)(*(_QWORD *)(**a2 + 40) + 40LL) & 1) == 0 )
            goto LABEL_99;
          if ( (*(_DWORD *)(**a2 + 124) & 3) != 0 )
          {
            v62 = (__int64)a2[2];
            if ( !v62 )
              v62 = **a2;
            v63 = MNGetpItemFromIndex(v62, *(_DWORD *)(v62 + 116));
            GreSetViewportOrg(DC, v81, HIDWORD(v81) - *(_DWORD *)(*(_QWORD *)v63 + 68LL));
          }
          v64 = **a2;
          if ( *(_QWORD *)(*(_QWORD *)(v64 + 40) + 24LL) && !(unsigned int)MNDrawHilite((__int64)a2, (__int64)v7) )
          {
            v65 = (__int64)a2[2];
            if ( !v65 )
              v65 = **a2;
            if ( !(unsigned int)MNIsOwnerDrawItem(v65, (_DWORD **)v7) )
            {
              v66 = GreSetBkMode(DC, 1);
              v67 = (__int64)a2[2];
              if ( !v67 )
                v67 = **a2;
              MNEraseBackground(
                DC,
                v67,
                *(_DWORD *)(*v7 + 64),
                *(_DWORD *)(*v7 + 68),
                *(_DWORD *)(*v7 + 72),
                *(_DWORD *)(*v7 + 76));
              GreSetBkMode(DC, v66);
              v54 = v80;
            }
          }
          if ( v13 )
          {
            v71 = *(_QWORD *)(v13 + 40);
            if ( (*(_DWORD *)(v71 + 232) & 0x8000000) != 0 )
            {
              v70 = GetWindowDpiLastNotify(v13);
              goto LABEL_98;
            }
            if ( (*(_DWORD *)(v71 + 288) & 0xF) != 0
              || (v72 = *(_QWORD *)(*(_QWORD *)(v13 + 16) + 448LL)) == 0
              || (*(_DWORD *)(**(_QWORD **)(v72 + 8) + 64LL) & 1) == 0 )
            {
              v70 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v13 + 16) + 416LL) + 284LL);
              goto LABEL_98;
            }
          }
          else if ( (W32GetCurrentThreadDpiAwarenessContext(v64, v59, v57, v58) & 0xF) != 0 )
          {
            v70 = *(unsigned __int16 *)(PsGetCurrentProcessWin32Process(v69, v68) + 284);
LABEL_98:
            xxxDrawMenuItem(DC, v70, a2, (__int64)v7, 1, v13);
LABEL_99:
            if ( v82 )
              RecalcDCVisRgn(DC, v59, v57, v58);
            GreSelectFont((__int64)DC, v85);
            GreSetViewportOrg(DC, v81, SHIDWORD(v81));
            GreSetTextAlign(DC, v54);
            _ReleaseDC(DC);
            v21 = a5;
            v9 = a3;
            goto LABEL_102;
          }
          v70 = 96;
          goto LABEL_98;
        }
      }
    }
  }
LABEL_108:
  if ( (_QWORD *)v13 != a4 )
    ThreadUnlock1(v22, v21, v23);
  v73 = (__int64)a2[2];
  if ( !v73 )
    v73 = **a2;
  if ( (unsigned int)MNGetpItemIndex(v73, (__int64)v7) == -1 )
    goto LABEL_113;
LABEL_114:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v86, v10, v11, v12);
  return v7;
}
