/*
 * XREFs of xxxMNInvertItem @ 0x1C024A2A4
 * Callers:
 *     xxxMNSelectItem @ 0x1C0226024 (xxxMNSelectItem.c)
 *     xxxHiliteMenuItem @ 0x1C024D170 (xxxHiliteMenuItem.c)
 * Callees:
 *     MNIsOwnerDrawItem @ 0x1C00289B0 (MNIsOwnerDrawItem.c)
 *     GetWindowDpiLastNotify @ 0x1C0033D78 (GetWindowDpiLastNotify.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C003B1B0 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0042A18 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetDpiDependentMetric @ 0x1C004A0E8 (GetDpiDependentMetric.c)
 *     xxxGetSysMenuPtr @ 0x1C004A6F8 (xxxGetSysMenuPtr.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0061278 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E0868 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00E0C84 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NAEBV0@@Z @ 0x1C01021C8 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NAEBV0@@Z.c)
 *     GreGetTextAlign @ 0x1C010AB68 (GreGetTextAlign.c)
 *     GreSetViewportOrg @ 0x1C012897C (GreSetViewportOrg.c)
 *     GreSetTextAlign @ 0x1C0128AB8 (GreSetTextAlign.c)
 *     ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C0128B34 (-GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z.c)
 *     xxxDrawMenuItem @ 0x1C01297F4 (xxxDrawMenuItem.c)
 *     ?MNDrawHilite@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0129B1C (-MNDrawHilite@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     MNGetpItemFromIndex @ 0x1C012A5A4 (MNGetpItemFromIndex.c)
 *     MNGetpItemIndex @ 0x1C012A92C (MNGetpItemIndex.c)
 *     GreSelectFont @ 0x1C012B530 (GreSelectFont.c)
 *     GreSetBkMode @ 0x1C012B54C (GreSetBkMode.c)
 *     MNPositionSysMenu @ 0x1C015576C (MNPositionSysMenu.c)
 *     xxxMNSetTop @ 0x1C02268C4 (xxxMNSetTop.c)
 *     ?RecalcDCVisRgn@@YAXPEAUHDC__@@@Z @ 0x1C0249498 (-RecalcDCVisRgn@@YAXPEAUHDC__@@@Z.c)
 *     MNDrawArrow @ 0x1C0249B68 (MNDrawArrow.c)
 *     MNEraseBackground @ 0x1C0249E18 (MNEraseBackground.c)
 *     xxxSendMenuSelect @ 0x1C024BC54 (xxxSendMenuSelect.c)
 */

__int64 *__fastcall xxxMNInvertItem(__int64 **a1, __int64 **a2, signed int a3, _QWORD *a4, unsigned int a5)
{
  __int64 *v7; // r13
  signed int v9; // r15d
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rsi
  __int64 ThreadWin32Thread; // rax
  _QWORD *i; // rcx
  __int64 SysMenuPtr; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  _DWORD *v21; // rcx
  __int64 v22; // r8
  signed int v23; // edx
  __int64 v24; // rcx
  __int64 v25; // r11
  int v26; // r10d
  __int64 v27; // rax
  __int64 v28; // rcx
  _DWORD *v29; // rcx
  int v30; // edx
  int v31; // r8d
  __int64 *v32; // rax
  HDC DC; // r15
  __int64 DCEx; // rax
  __int64 v35; // rdx
  unsigned int WindowDpiLastNotify; // eax
  __int64 v37; // rax
  int v38; // ebx
  __int64 v39; // rcx
  unsigned int v40; // eax
  __int64 v41; // rax
  int DpiDependentMetric; // ebx
  _DWORD *v43; // rax
  int v44; // ecx
  __int64 v45; // r8
  int TextAlign; // eax
  __int64 v47; // rdx
  __int64 v48; // r8
  int v49; // ebx
  __int64 v50; // r8
  __int64 v51; // rdx
  int v52; // ecx
  unsigned int v53; // ecx
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rcx
  int v58; // ebx
  __int64 v59; // rdx
  __int64 v60; // rdx
  __int64 v61; // rcx
  unsigned int v62; // eax
  __int64 v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rcx
  int v67; // [rsp+28h] [rbp-41h]
  int v68; // [rsp+38h] [rbp-31h]
  int v69; // [rsp+38h] [rbp-31h]
  int v70; // [rsp+3Ch] [rbp-2Dh]
  int v71; // [rsp+40h] [rbp-29h]
  int v72; // [rsp+40h] [rbp-29h]
  __int64 v73; // [rsp+48h] [rbp-21h] BYREF
  int v74; // [rsp+50h] [rbp-19h]
  int v75; // [rsp+54h] [rbp-15h]
  int v76; // [rsp+58h] [rbp-11h]
  __int64 v77; // [rsp+60h] [rbp-9h]
  _QWORD v78[2]; // [rsp+68h] [rbp-1h] BYREF
  _QWORD *v79; // [rsp+78h] [rbp+Fh]
  __int64 v80; // [rsp+80h] [rbp+17h] BYREF
  __int64 v81; // [rsp+88h] [rbp+1Fh]
  __int64 v82; // [rsp+90h] [rbp+27h]

  v7 = 0LL;
  v70 = 0;
  v9 = a3;
  SmartObjStackRefBase<tagMENU>::Init(v78, 0LL);
  v79 = 0LL;
  v74 = 0;
  v73 = 0LL;
  v80 = 0LL;
  v81 = 0LL;
  v82 = 0LL;
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)a2) || !a4 )
  {
LABEL_113:
    v7 = 0LL;
    goto LABEL_114;
  }
  if ( **a1 )
  {
    v12 = *(_QWORD *)(**a1 + 16);
    if ( (_QWORD *)v12 != a4 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, v11);
      v80 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v80;
      v81 = v12;
      if ( v12 )
        HMLockObject(v12);
    }
  }
  else
  {
    v12 = (__int64)a4;
  }
  if ( v9 < 0 )
  {
    if ( **a1 && (unsigned int)(v9 + 4) <= 1 )
      MNDrawArrow(0LL, a1, (unsigned int)v9);
    for ( i = *(_QWORD **)(a4[2] + 600LL); i && *(_QWORD **)(*i + 8LL) != a4; i = (_QWORD *)i[6] )
      ;
LABEL_107:
    xxxSendMenuSelect((_DWORD)a4, v12, (_DWORD)a2, v9, (__int64)i);
    goto LABEL_108;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(**a2 + 40) + 40LL) & 1) == 0 )
  {
    SysMenuPtr = xxxGetSysMenuPtr(a4, v10, v11);
    v79 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v78, SysMenuPtr);
    if ( SmartObjStackRef<tagMENU>::operator==((__int64)a2, (__int64)v78) )
    {
      v18 = v79;
      if ( !v79 )
        v18 = *(_QWORD **)v78[0];
      MNPositionSysMenu((__int64)a4, v18, v16, v17);
      v70 = 1;
    }
  }
  v19 = (__int64)a2[2];
  if ( !v19 )
    v19 = **a2;
  v7 = (__int64 *)MNGetpItemFromIndex(v19, v9);
  if ( v7 )
  {
    v21 = (_DWORD *)*(unsigned int *)(*(_QWORD *)(**a2 + 40) + 40LL);
    if ( ((unsigned __int8)v21 & 1) != 0 || (*(_BYTE *)(a4[5] + 31LL) & 0x20) == 0 )
    {
      v21 = (_DWORD *)*v7;
      v20 = a5;
      if ( (*(_DWORD *)*v7 & 0x800) != 0 )
      {
LABEL_102:
        if ( !(_DWORD)v20 )
          goto LABEL_108;
        for ( i = *(_QWORD **)(a4[2] + 600LL); i && *(_QWORD **)(*i + 8LL) != a4; i = (_QWORD *)i[6] )
          ;
        goto LABEL_107;
      }
      if ( (v21[1] & 0x80) != a5 )
      {
        if ( !a5 || !**a1 || (*(_DWORD *)(**a2 + 124) & 3) == 0 )
          goto LABEL_47;
        if ( v9 >= *(_DWORD *)(**a2 + 116) )
        {
          v24 = (__int64)a2[2];
          if ( !v24 )
            v24 = **a2;
          v25 = MNGetpItemFromIndex(v24, *(_DWORD *)(v24 + 116));
          v23 = *(_DWORD *)(**a2 + 116);
          v26 = *(_DWORD *)(*v7 + 68)
              + *(_DWORD *)(*v7 + 76)
              - *(_DWORD *)(**a2 + 68)
              - *(_DWORD *)(*(_QWORD *)v25 + 68LL);
          while ( v26 > 0 && v23 < *(_DWORD *)(*(_QWORD *)(**a2 + 40) + 44LL) )
          {
            v27 = *(_QWORD *)v25;
            v25 += 96LL;
            v26 -= *(_DWORD *)(v27 + 76);
            ++v23;
          }
          if ( v23 >= *(_DWORD *)(*(_QWORD *)(**a2 + 40) + 44LL) )
            v23 = *(_DWORD *)(*(_QWORD *)(**a2 + 40) + 44LL);
        }
        else
        {
          v23 = v9;
        }
        if ( (unsigned int)xxxMNSetTop(a1, v23) )
          xxxInternalUpdateWindow((struct tagWND *)v12, 1u);
        v28 = (__int64)a2[2];
        if ( !v28 )
          v28 = **a2;
        if ( (unsigned int)MNGetpItemIndex(v28, (__int64)v7) != -1 )
        {
LABEL_47:
          v29 = (_DWORD *)*v7;
          v30 = *(_DWORD *)(*v7 + 64);
          v31 = *(_DWORD *)(*v7 + 68);
          v75 = v30 + *(_DWORD *)(*v7 + 72);
          v71 = v30;
          v76 = v31 + v29[19];
          v32 = *a2;
          LODWORD(v77) = v31;
          if ( (*(_DWORD *)(*(_QWORD *)(*v32 + 40) + 40LL) & 1) != 0 )
          {
            DC = (HDC)_GetDC(v12);
          }
          else
          {
            DCEx = _GetDCEx(v12, 0LL, 65537LL);
            v35 = *(_QWORD *)(v12 + 40);
            DC = (HDC)DCEx;
            if ( (*(_BYTE *)(v35 + 30) & 4) != 0 && !v70 )
            {
              if ( (*(_DWORD *)(v35 + 232) & 0x8000000) != 0 )
              {
                WindowDpiLastNotify = GetWindowDpiLastNotify(v12);
              }
              else if ( (*(_DWORD *)(v35 + 288) & 0xF) == 0
                     && (v37 = *(_QWORD *)(*(_QWORD *)(v12 + 16) + 448LL)) != 0
                     && (*(_DWORD *)(**(_QWORD **)(v37 + 8) + 64LL) & 1) != 0 )
              {
                WindowDpiLastNotify = 96;
              }
              else
              {
                WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v12 + 16) + 416LL) + 284LL);
              }
              v38 = *(_DWORD *)(v35 + 88);
              v68 = *(_DWORD *)(v35 + 96);
              v69 = v68 - v38 - GetDpiDependentMetric(14LL, WindowDpiLastNotify);
              v39 = *(_QWORD *)(v12 + 40);
              if ( (*(_DWORD *)(v39 + 232) & 0x8000000) != 0 )
              {
                v40 = GetWindowDpiLastNotify(v12);
              }
              else if ( (*(_DWORD *)(v39 + 288) & 0xF) == 0
                     && (v41 = *(_QWORD *)(*(_QWORD *)(v12 + 16) + 448LL)) != 0
                     && (*(_DWORD *)(**(_QWORD **)(v41 + 8) + 64LL) & 1) != 0 )
              {
                v40 = 96;
              }
              else
              {
                v40 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v12 + 16) + 416LL) + 284LL);
              }
              DpiDependentMetric = GetDpiDependentMetric(15LL, v40);
              if ( v75 > v69
                || v76 > *(_DWORD *)(*(_QWORD *)(v12 + 40) + 100LL)
                       - *(_DWORD *)(*(_QWORD *)(v12 + 40) + 92LL)
                       - DpiDependentMetric )
              {
                GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
                v43 = *(_DWORD **)(v12 + 40);
                v44 = v43[22];
                v45 = (unsigned int)(v43[23] + v77);
                v67 = v43[25] - DpiDependentMetric;
                v74 = 1;
                GreIntersectVisRect(DC, (unsigned int)(v44 + v71), v45, (unsigned int)(v44 + v69), v67);
                GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
              }
            }
          }
          TextAlign = GreGetTextAlign(DC);
          v49 = TextAlign;
          v72 = TextAlign;
          if ( (*(_DWORD *)*v7 & 0x2000) != 0 )
            GreSetTextAlign(DC, TextAlign | 0x100);
          GetDPIMETRICS((struct tagWND *)v12, v47, v48);
          v73 = 0LL;
          v77 = GreSelectFont(DC);
          GreGetDCPoint(DC, 4LL, &v73);
          v51 = *v7;
          v52 = *(_DWORD *)(*v7 + 4);
          if ( a5 )
            v53 = v52 | 0x80;
          else
            v53 = v52 & 0xFFFFFF7F;
          *(_DWORD *)(v51 + 4) = v53;
          if ( v70 || *(_QWORD *)(*v7 + 96) == 1LL && (*(_DWORD *)(*(_QWORD *)(**a2 + 40) + 40LL) & 1) == 0 )
            goto LABEL_99;
          if ( (*(_DWORD *)(**a2 + 124) & 3) != 0 )
          {
            v54 = (__int64)a2[2];
            if ( !v54 )
              v54 = **a2;
            v55 = MNGetpItemFromIndex(v54, *(_DWORD *)(v54 + 116));
            GreSetViewportOrg(DC, v73, HIDWORD(v73) - *(_DWORD *)(*(_QWORD *)v55 + 68LL));
          }
          v56 = **a2;
          if ( *(_QWORD *)(*(_QWORD *)(v56 + 40) + 24LL) && !(unsigned int)MNDrawHilite((__int64)a2, (__int64)v7) )
          {
            v57 = (__int64)a2[2];
            if ( !v57 )
              v57 = **a2;
            if ( !(unsigned int)MNIsOwnerDrawItem(v57, (_DWORD **)v7) )
            {
              v58 = GreSetBkMode(DC, 1);
              v59 = (__int64)a2[2];
              if ( !v59 )
                v59 = **a2;
              MNEraseBackground(
                DC,
                v59,
                *(_DWORD *)(*v7 + 64),
                *(_DWORD *)(*v7 + 68),
                *(_DWORD *)(*v7 + 72),
                *(_DWORD *)(*v7 + 76));
              GreSetBkMode(DC, v58);
              v49 = v72;
            }
          }
          if ( v12 )
          {
            v63 = *(_QWORD *)(v12 + 40);
            if ( (*(_DWORD *)(v63 + 232) & 0x8000000) != 0 )
            {
              v62 = GetWindowDpiLastNotify(v12);
              goto LABEL_98;
            }
            if ( (*(_DWORD *)(v63 + 288) & 0xF) != 0
              || (v64 = *(_QWORD *)(*(_QWORD *)(v12 + 16) + 448LL)) == 0
              || (*(_DWORD *)(**(_QWORD **)(v64 + 8) + 64LL) & 1) == 0 )
            {
              v62 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v12 + 16) + 416LL) + 284LL);
              goto LABEL_98;
            }
          }
          else if ( (W32GetCurrentThreadDpiAwarenessContext(v56, v51, v50) & 0xF) != 0 )
          {
            v62 = *(unsigned __int16 *)(PsGetCurrentProcessWin32Process(v61, v60) + 284);
LABEL_98:
            xxxDrawMenuItem(DC, v62, a2, (__int64)v7, 1, v12);
LABEL_99:
            if ( v74 )
              RecalcDCVisRgn(DC);
            GreSelectFont(DC);
            GreSetViewportOrg(DC, v73, SHIDWORD(v73));
            GreSetTextAlign(DC, v49);
            _ReleaseDC(DC);
            v20 = a5;
            v9 = a3;
            goto LABEL_102;
          }
          v62 = 96;
          goto LABEL_98;
        }
      }
    }
  }
LABEL_108:
  if ( (_QWORD *)v12 != a4 )
    ThreadUnlock1(v21, v20, v22);
  v65 = (__int64)a2[2];
  if ( !v65 )
    v65 = **a2;
  if ( (unsigned int)MNGetpItemIndex(v65, (__int64)v7) == -1 )
    goto LABEL_113;
LABEL_114:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v78, v10, v11);
  return v7;
}
