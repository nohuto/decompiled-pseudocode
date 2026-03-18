/*
 * XREFs of xxxMNInvertItem @ 0x1C0231D7C
 * Callers:
 *     xxxMNSelectItem @ 0x1C020E8F4 (xxxMNSelectItem.c)
 *     xxxHiliteMenuItem @ 0x1C0234C70 (xxxHiliteMenuItem.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C00209DC (GetDpiDependentMetric.c)
 *     xxxGetSysMenuPtr @ 0x1C0020FE8 (xxxGetSysMenuPtr.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0029850 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GreSelectFont @ 0x1C0056790 (GreSelectFont.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0069C30 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     MNGetpItemIndex @ 0x1C006AA14 (MNGetpItemIndex.c)
 *     MNIsOwnerDrawItem @ 0x1C006BA64 (MNIsOwnerDrawItem.c)
 *     GreSetBkMode @ 0x1C007BDE4 (GreSetBkMode.c)
 *     ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C00A707C (-GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z.c)
 *     GreGetTextAlign @ 0x1C00A70F4 (GreGetTextAlign.c)
 *     GreSetViewportOrg @ 0x1C00A7138 (GreSetViewportOrg.c)
 *     GreSetTextAlign @ 0x1C00A72C0 (GreSetTextAlign.c)
 *     GetWindowDpiLastNotify @ 0x1C00A7B60 (GetWindowDpiLastNotify.c)
 *     xxxDrawMenuItem @ 0x1C00AAA94 (xxxDrawMenuItem.c)
 *     MNGetpItemFromIndex @ 0x1C00AB734 (MNGetpItemFromIndex.c)
 *     ?MNDrawHilite@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C00AB970 (-MNDrawHilite@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C00F7460 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FBDF8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00FE500 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NAEBV0@@Z @ 0x1C011DEC4 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NAEBV0@@Z.c)
 *     MNPositionSysMenu @ 0x1C014D710 (MNPositionSysMenu.c)
 *     xxxMNSetTop @ 0x1C020F0B8 (xxxMNSetTop.c)
 *     ?RecalcDCVisRgn@@YAXPEAUHDC__@@@Z @ 0x1C0230F98 (-RecalcDCVisRgn@@YAXPEAUHDC__@@@Z.c)
 *     MNDrawArrow @ 0x1C0231664 (MNDrawArrow.c)
 *     MNEraseBackground @ 0x1C0231918 (MNEraseBackground.c)
 *     xxxSendMenuSelect @ 0x1C0233710 (xxxSendMenuSelect.c)
 */

_DWORD **__fastcall xxxMNInvertItem(__int64 **a1, __int64 **a2, int a3, _QWORD *a4, int a5)
{
  _DWORD **v7; // r12
  int v9; // r15d
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 ThreadWin32Thread; // rax
  _QWORD *i; // rcx
  __int64 v14; // rdx
  _QWORD *v15; // rcx
  __int64 SysMenuPtr; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  struct _NT_TIB *v19; // rdx
  __int64 v20; // rcx
  unsigned int v21; // r13d
  __int64 v22; // rcx
  __int64 v23; // r11
  int v24; // r10d
  __int64 v25; // rax
  __int64 v26; // rcx
  _QWORD *v27; // rcx
  int v28; // edx
  int v29; // r8d
  __int64 *v30; // rax
  HDC DC; // r15
  __int64 DCEx; // rax
  __int64 v33; // r8
  __int64 v34; // rdx
  unsigned int WindowDpiLastNotify; // eax
  __int64 v36; // rax
  int v37; // ebx
  __int64 v38; // r8
  __int64 v39; // rcx
  unsigned int v40; // eax
  __int64 v41; // rax
  int DpiDependentMetric; // ebx
  _DWORD *v43; // rax
  int v44; // ecx
  __int64 v45; // r8
  int TextAlign; // eax
  int v47; // ebx
  __int64 v48; // rdx
  _QWORD *v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rcx
  int v54; // ebx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rcx
  int v61; // [rsp+28h] [rbp-41h]
  int v62; // [rsp+38h] [rbp-31h]
  int v63; // [rsp+38h] [rbp-31h]
  int v64; // [rsp+3Ch] [rbp-2Dh]
  int v65; // [rsp+40h] [rbp-29h]
  int v66; // [rsp+40h] [rbp-29h]
  int v67; // [rsp+48h] [rbp-21h] BYREF
  int v68; // [rsp+4Ch] [rbp-1Dh]
  int v69; // [rsp+50h] [rbp-19h]
  int v70; // [rsp+54h] [rbp-15h]
  int v71; // [rsp+58h] [rbp-11h]
  __int64 v72; // [rsp+60h] [rbp-9h]
  _QWORD v73[2]; // [rsp+68h] [rbp-1h] BYREF
  struct _NT_TIB *v74; // [rsp+78h] [rbp+Fh]
  _QWORD v75[3]; // [rsp+80h] [rbp+17h] BYREF

  v64 = 0;
  v7 = 0LL;
  v9 = a3;
  SmartObjStackRefBase<tagMENU>::Init(v73, 0LL);
  v74 = 0LL;
  v69 = 0;
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)a2) || !a4 )
  {
LABEL_111:
    v7 = 0LL;
    goto LABEL_112;
  }
  if ( **a1 )
  {
    v11 = *(_QWORD *)(**a1 + 16);
    if ( (_QWORD *)v11 != a4 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10);
      v75[0] = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = v75;
      v75[1] = v11;
      if ( v11 )
        _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
    }
  }
  else
  {
    v11 = (__int64)a4;
  }
  if ( v9 < 0 )
  {
    if ( **a1 && (unsigned int)(v9 + 4) <= 1 )
      MNDrawArrow(0LL, (__int64)a1, v9);
    for ( i = *(_QWORD **)(a4[2] + 608LL); i && *(_QWORD **)(*i + 8LL) != a4; i = (_QWORD *)i[6] )
      ;
    goto LABEL_16;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(**a2 + 40) + 40LL) & 1) == 0 )
  {
    SysMenuPtr = xxxGetSysMenuPtr(a4, v10);
    v74 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v73, SysMenuPtr);
    if ( SmartObjStackRef<tagMENU>::operator==((__int64)a2, (__int64)v73) )
    {
      v19 = v74;
      if ( !v74 )
        v19 = *(struct _NT_TIB **)v73[0];
      MNPositionSysMenu((__int64)a4, v19, v17, v18);
      v64 = 1;
    }
  }
  v20 = (__int64)a2[2];
  if ( !v20 )
    v20 = **a2;
  v7 = (_DWORD **)MNGetpItemFromIndex(v20, v9);
  if ( v7 )
  {
    v15 = (_QWORD *)*(unsigned int *)(*(_QWORD *)(**a2 + 40) + 40LL);
    if ( ((unsigned __int8)v15 & 1) != 0 || (*(_BYTE *)(a4[5] + 31LL) & 0x20) == 0 )
    {
      v15 = *v7;
      if ( (**v7 & 0x800) == 0 )
      {
        if ( (*((_DWORD *)v15 + 1) & 0x80) == a5 )
          goto LABEL_106;
        v21 = 96;
        if ( a5 && **a1 && (*(_DWORD *)(**a2 + 124) & 3) != 0 )
        {
          if ( v9 >= *(_DWORD *)(**a2 + 116) )
          {
            v22 = (__int64)a2[2];
            if ( !v22 )
              v22 = **a2;
            v23 = MNGetpItemFromIndex(v22, *(_DWORD *)(v22 + 116));
            LODWORD(v14) = *(_DWORD *)(**a2 + 116);
            v24 = (*v7)[17] + (*v7)[19] - *(_DWORD *)(**a2 + 68) - *(_DWORD *)(*(_QWORD *)v23 + 68LL);
            while ( v24 > 0 && (int)v14 < *(_DWORD *)(*(_QWORD *)(**a2 + 40) + 44LL) )
            {
              v25 = *(_QWORD *)v23;
              v23 += 96LL;
              v24 -= *(_DWORD *)(v25 + 76);
              LODWORD(v14) = v14 + 1;
            }
            if ( (int)v14 >= *(_DWORD *)(*(_QWORD *)(**a2 + 40) + 44LL) )
              LODWORD(v14) = *(_DWORD *)(*(_QWORD *)(**a2 + 40) + 44LL);
          }
          if ( (unsigned int)xxxMNSetTop(a1, v14) )
            xxxInternalUpdateWindow((struct tagWND *)v11, 1u);
          v26 = (__int64)a2[2];
          if ( !v26 )
            v26 = **a2;
          if ( (unsigned int)MNGetpItemIndex(v26, (__int64)v7) == -1 )
            goto LABEL_106;
        }
        v27 = *v7;
        v28 = (*v7)[16];
        v29 = (*v7)[17];
        v70 = v28 + (*v7)[18];
        v65 = v28;
        v71 = v29 + *((_DWORD *)v27 + 19);
        v30 = *a2;
        LODWORD(v72) = v29;
        if ( (*(_DWORD *)(*(_QWORD *)(*v30 + 40) + 40LL) & 1) != 0 )
        {
          DC = (HDC)_GetDC(v11);
        }
        else
        {
          DCEx = _GetDCEx(v11, 0LL, 65537LL);
          v34 = *(_QWORD *)(v11 + 40);
          DC = (HDC)DCEx;
          if ( (*(_BYTE *)(v34 + 30) & 4) != 0 && !v64 )
          {
            if ( (*(_DWORD *)(v34 + 232) & 0x8000000) != 0 )
            {
              WindowDpiLastNotify = GetWindowDpiLastNotify(v11);
            }
            else if ( (*(_DWORD *)(v34 + 288) & 0xF) == 0
                   && (v36 = *(_QWORD *)(*(_QWORD *)(v11 + 16) + 456LL)) != 0
                   && (*(_DWORD *)(**(_QWORD **)(v36 + 8) + 64LL) & 1) != 0 )
            {
              WindowDpiLastNotify = 96;
            }
            else
            {
              WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v11 + 16) + 424LL) + 284LL);
            }
            v37 = *(_DWORD *)(v34 + 88);
            v62 = *(_DWORD *)(v34 + 96);
            v63 = v62 - v37 - GetDpiDependentMetric(14LL, WindowDpiLastNotify, v33);
            v39 = *(_QWORD *)(v11 + 40);
            if ( (*(_DWORD *)(v39 + 232) & 0x8000000) != 0 )
            {
              v40 = GetWindowDpiLastNotify(v11);
            }
            else if ( (*(_DWORD *)(v39 + 288) & 0xF) == 0
                   && (v41 = *(_QWORD *)(*(_QWORD *)(v11 + 16) + 456LL)) != 0
                   && (*(_DWORD *)(**(_QWORD **)(v41 + 8) + 64LL) & 1) != 0 )
            {
              v40 = 96;
            }
            else
            {
              v40 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v11 + 16) + 424LL) + 284LL);
            }
            DpiDependentMetric = GetDpiDependentMetric(15LL, v40, v38);
            if ( v70 > v63
              || v71 > *(_DWORD *)(*(_QWORD *)(v11 + 40) + 100LL)
                     - *(_DWORD *)(*(_QWORD *)(v11 + 40) + 92LL)
                     - DpiDependentMetric )
            {
              GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
              v43 = *(_DWORD **)(v11 + 40);
              v44 = v43[22];
              v45 = (unsigned int)(v43[23] + v72);
              v61 = v43[25] - DpiDependentMetric;
              v69 = 1;
              GreIntersectVisRect(DC, (unsigned int)(v44 + v65), v45, (unsigned int)(v44 + v63), v61);
              GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
            }
          }
        }
        TextAlign = GreGetTextAlign(DC);
        v47 = TextAlign;
        v66 = TextAlign;
        if ( (**v7 & 0x2000) != 0 )
          GreSetTextAlign(DC, TextAlign | 0x100);
        GetDPIMETRICS((struct tagWND *)v11);
        v67 = 0;
        v68 = 0;
        v72 = GreSelectFont(DC);
        GreGetDCPoint(DC, 4LL, &v67);
        v49 = *v7;
        if ( a5 )
          *((_DWORD *)v49 + 1) |= 0x80u;
        else
          *((_DWORD *)v49 + 1) &= ~0x80u;
        if ( !v64 && (*((_QWORD *)*v7 + 12) != 1LL || (*(_DWORD *)(*(_QWORD *)(**a2 + 40) + 40LL) & 1) != 0) )
        {
          if ( (*(_DWORD *)(**a2 + 124) & 3) != 0 )
          {
            v50 = (__int64)a2[2];
            if ( !v50 )
              v50 = **a2;
            v51 = MNGetpItemFromIndex(v50, *(_DWORD *)(v50 + 116));
            GreSetViewportOrg(DC, v67, v68 - *(_DWORD *)(*(_QWORD *)v51 + 68LL));
          }
          v52 = **a2;
          if ( *(_QWORD *)(*(_QWORD *)(v52 + 40) + 24LL) && !(unsigned int)MNDrawHilite((__int64)a2, (__int64)v7) )
          {
            v53 = (__int64)a2[2];
            if ( !v53 )
              v53 = **a2;
            if ( !(unsigned int)MNIsOwnerDrawItem(v53, v7) )
            {
              v54 = GreSetBkMode(DC, 1);
              v55 = (__int64)a2[2];
              if ( !v55 )
                v55 = **a2;
              MNEraseBackground(DC, v55, (*v7)[16], (*v7)[17], (*v7)[18], (*v7)[19]);
              GreSetBkMode(DC, v54);
              v47 = v66;
            }
          }
          if ( v11 )
          {
            v57 = *(_QWORD *)(v11 + 40);
            if ( (*(_DWORD *)(v57 + 232) & 0x8000000) != 0 )
            {
              v21 = GetWindowDpiLastNotify(v11);
            }
            else if ( (*(_DWORD *)(v57 + 288) & 0xF) != 0
                   || (v58 = *(_QWORD *)(*(_QWORD *)(v11 + 16) + 456LL)) == 0
                   || (*(_DWORD *)(**(_QWORD **)(v58 + 8) + 64LL) & 1) == 0 )
            {
              v21 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v11 + 16) + 424LL) + 284LL);
            }
          }
          else if ( (W32GetCurrentThreadDpiAwarenessContext(v52, v48) & 0xF) != 0 )
          {
            v21 = *(unsigned __int16 *)(PsGetCurrentProcessWin32Process(v56) + 284);
          }
          xxxDrawMenuItem(DC, v21, a2, (__int64)v7, 1, v11);
        }
        if ( v69 )
          RecalcDCVisRgn(DC);
        GreSelectFont(DC);
        GreSetViewportOrg(DC, v67, v68);
        GreSetTextAlign(DC, v47);
        _ReleaseDC(DC);
        v9 = a3;
      }
      if ( a5 )
      {
        for ( i = *(_QWORD **)(a4[2] + 608LL); i && *(_QWORD **)(*i + 8LL) != a4; i = (_QWORD *)i[6] )
          ;
LABEL_16:
        xxxSendMenuSelect((_DWORD)a4, v11, (_DWORD)a2, v9, (__int64)i);
      }
    }
  }
LABEL_106:
  if ( (_QWORD *)v11 != a4 )
    ThreadUnlock1(v15, v14);
  v59 = (__int64)a2[2];
  if ( !v59 )
    v59 = **a2;
  if ( (unsigned int)MNGetpItemIndex(v59, (__int64)v7) == -1 )
    goto LABEL_111;
LABEL_112:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v73, v10);
  return v7;
}
