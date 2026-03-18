/*
 * XREFs of xxxMNInvertItem @ 0x1C0208B28
 * Callers:
 *     xxxMNSelectItem @ 0x1C01E8994 (xxxMNSelectItem.c)
 *     xxxHiliteMenuItem @ 0x1C020B944 (xxxHiliteMenuItem.c)
 * Callees:
 *     ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C000CED4 (-GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z.c)
 *     GreGetTextAlign @ 0x1C000CF4C (GreGetTextAlign.c)
 *     GreSetViewportOrg @ 0x1C000CF94 (GreSetViewportOrg.c)
 *     GreSetTextAlign @ 0x1C000D0B8 (GreSetTextAlign.c)
 *     xxxDrawMenuItem @ 0x1C001065C (xxxDrawMenuItem.c)
 *     ?MNDrawHilite@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0010A0C (-MNDrawHilite@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     GreSelectFont @ 0x1C00115F0 (GreSelectFont.c)
 *     GreSetBkMode @ 0x1C001160C (GreSetBkMode.c)
 *     MNGetpItemFromIndex @ 0x1C0013D3C (MNGetpItemFromIndex.c)
 *     MNIsOwnerDrawItem @ 0x1C0021310 (MNIsOwnerDrawItem.c)
 *     MNGetpItemIndex @ 0x1C00217A4 (MNGetpItemIndex.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NAEBV0@@Z @ 0x1C002624C (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NAEBV0@@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00262C8 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00262F8 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00263B8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C00383F0 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     GetDpiDependentMetric @ 0x1C0039CF0 (GetDpiDependentMetric.c)
 *     xxxGetSysMenuPtr @ 0x1C0039F88 (xxxGetSysMenuPtr.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C003F350 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetWindowDpiLastNotify @ 0x1C00724A0 (GetWindowDpiLastNotify.c)
 *     MNPositionSysMenu @ 0x1C012D1EC (MNPositionSysMenu.c)
 *     xxxMNSetTop @ 0x1C01E911C (xxxMNSetTop.c)
 *     ?RecalcDCVisRgn@@YAXPEAUHDC__@@@Z @ 0x1C0207DA4 (-RecalcDCVisRgn@@YAXPEAUHDC__@@@Z.c)
 *     MNDrawArrow @ 0x1C0208444 (MNDrawArrow.c)
 *     MNEraseBackground @ 0x1C02086EC (MNEraseBackground.c)
 *     xxxSendMenuSelect @ 0x1C020A438 (xxxSendMenuSelect.c)
 */

struct tagITEM *__fastcall xxxMNInvertItem(__int64 **a1, __int64 **a2, int a3, _QWORD *a4, int a5)
{
  struct tagITEM *v7; // r12
  int v9; // r15d
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 ThreadWin32Thread; // rax
  _QWORD *i; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 SysMenuPtr; // rax
  struct _NT_TIB *v18; // rdx
  __int64 v19; // rcx
  unsigned int v20; // r13d
  __int64 v21; // rcx
  __int64 v22; // r11
  int v23; // r10d
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rcx
  int v27; // edx
  int v28; // r8d
  __int64 *v29; // rax
  HDC DC; // r15
  __int64 DCEx; // rax
  __int64 v32; // rdx
  unsigned int WindowDpiLastNotify; // eax
  __int64 v34; // rax
  int v35; // ebx
  __int64 v36; // rcx
  unsigned int v37; // eax
  __int64 v38; // rax
  int DpiDependentMetric; // ebx
  _DWORD *v40; // rax
  int v41; // ecx
  __int64 v42; // r8
  int TextAlign; // eax
  int v44; // ebx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rcx
  int v53; // ebx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rcx
  int v60; // [rsp+28h] [rbp-41h]
  int v61; // [rsp+38h] [rbp-31h]
  int v62; // [rsp+38h] [rbp-31h]
  int v63; // [rsp+3Ch] [rbp-2Dh]
  int v64; // [rsp+40h] [rbp-29h]
  int v65; // [rsp+40h] [rbp-29h]
  int v66; // [rsp+48h] [rbp-21h] BYREF
  int v67; // [rsp+4Ch] [rbp-1Dh]
  int v68; // [rsp+50h] [rbp-19h]
  int v69; // [rsp+54h] [rbp-15h]
  int v70; // [rsp+58h] [rbp-11h]
  __int64 v71; // [rsp+60h] [rbp-9h]
  _QWORD v72[2]; // [rsp+68h] [rbp-1h] BYREF
  struct _NT_TIB *v73; // [rsp+78h] [rbp+Fh]
  _QWORD v74[3]; // [rsp+80h] [rbp+17h] BYREF

  v63 = 0;
  v7 = 0LL;
  v9 = a3;
  SmartObjStackRefBase<tagMENU>::Init(v72, 0LL);
  v73 = 0LL;
  v68 = 0;
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
      v74[0] = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = v74;
      v74[1] = v11;
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
    for ( i = *(_QWORD **)(a4[2] + 600LL); i && *(_QWORD **)(*i + 8LL) != a4; i = (_QWORD *)i[6] )
      ;
    goto LABEL_16;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(**a2 + 40) + 40LL) & 1) == 0 )
  {
    SysMenuPtr = xxxGetSysMenuPtr(a4, v10);
    v73 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v72, SysMenuPtr);
    if ( SmartObjStackRef<tagMENU>::operator==((__int64)a2, (__int64)v72) )
    {
      v18 = v73;
      if ( !v73 )
        v18 = *(struct _NT_TIB **)v72[0];
      MNPositionSysMenu((__int64)a4, v18);
      v63 = 1;
    }
  }
  v19 = (__int64)a2[2];
  if ( !v19 )
    v19 = **a2;
  v7 = (struct tagITEM *)MNGetpItemFromIndex(v19, v9);
  if ( v7 )
  {
    v15 = *(unsigned int *)(*(_QWORD *)(**a2 + 40) + 40LL);
    if ( (v15 & 1) != 0 || (*(_BYTE *)(a4[5] + 31LL) & 0x20) == 0 )
    {
      v15 = *(_QWORD *)v7;
      if ( (**(_DWORD **)v7 & 0x800) == 0 )
      {
        if ( (*(_DWORD *)(v15 + 4) & 0x80) == a5 )
          goto LABEL_106;
        v20 = 96;
        if ( a5 && **a1 && (*(_DWORD *)(**a2 + 124) & 3) != 0 )
        {
          if ( v9 >= *(_DWORD *)(**a2 + 116) )
          {
            v21 = (__int64)a2[2];
            if ( !v21 )
              v21 = **a2;
            v22 = MNGetpItemFromIndex(v21, *(_DWORD *)(v21 + 116));
            LODWORD(v14) = *(_DWORD *)(**a2 + 116);
            v23 = *(_DWORD *)(*(_QWORD *)v7 + 68LL)
                + *(_DWORD *)(*(_QWORD *)v7 + 76LL)
                - *(_DWORD *)(**a2 + 68)
                - *(_DWORD *)(*(_QWORD *)v22 + 68LL);
            while ( v23 > 0 && (int)v14 < *(_DWORD *)(*(_QWORD *)(**a2 + 40) + 44LL) )
            {
              v24 = *(_QWORD *)v22;
              v22 += 96LL;
              v23 -= *(_DWORD *)(v24 + 76);
              LODWORD(v14) = v14 + 1;
            }
            if ( (int)v14 >= *(_DWORD *)(*(_QWORD *)(**a2 + 40) + 44LL) )
              LODWORD(v14) = *(_DWORD *)(*(_QWORD *)(**a2 + 40) + 44LL);
          }
          if ( (unsigned int)xxxMNSetTop(a1, v14) )
            xxxInternalUpdateWindow((struct tagWND *)v11, 1u);
          v25 = (__int64)a2[2];
          if ( !v25 )
            v25 = **a2;
          if ( (unsigned int)MNGetpItemIndex(v25, (__int64)v7) == -1 )
            goto LABEL_106;
        }
        v26 = *(_QWORD *)v7;
        v27 = *(_DWORD *)(*(_QWORD *)v7 + 64LL);
        v28 = *(_DWORD *)(*(_QWORD *)v7 + 68LL);
        v69 = v27 + *(_DWORD *)(*(_QWORD *)v7 + 72LL);
        v64 = v27;
        v70 = v28 + *(_DWORD *)(v26 + 76);
        v29 = *a2;
        LODWORD(v71) = v28;
        if ( (*(_DWORD *)(*(_QWORD *)(*v29 + 40) + 40LL) & 1) != 0 )
        {
          DC = (HDC)_GetDC(v11);
        }
        else
        {
          DCEx = _GetDCEx(v11, 0LL, 65537LL);
          v32 = *(_QWORD *)(v11 + 40);
          DC = (HDC)DCEx;
          if ( (*(_BYTE *)(v32 + 30) & 4) != 0 && !v63 )
          {
            if ( (*(_DWORD *)(v32 + 232) & 0x8000000) != 0 )
            {
              WindowDpiLastNotify = GetWindowDpiLastNotify(v11);
            }
            else if ( (*(_DWORD *)(v32 + 288) & 0xF) == 0
                   && (v34 = *(_QWORD *)(*(_QWORD *)(v11 + 16) + 448LL)) != 0
                   && (*(_DWORD *)(**(_QWORD **)(v34 + 8) + 52LL) & 1) != 0 )
            {
              WindowDpiLastNotify = 96;
            }
            else
            {
              WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v11 + 16) + 416LL) + 284LL);
            }
            v35 = *(_DWORD *)(v32 + 88);
            v61 = *(_DWORD *)(v32 + 96);
            v62 = v61 - v35 - GetDpiDependentMetric(14LL, WindowDpiLastNotify);
            v36 = *(_QWORD *)(v11 + 40);
            if ( (*(_DWORD *)(v36 + 232) & 0x8000000) != 0 )
            {
              v37 = GetWindowDpiLastNotify(v11);
            }
            else if ( (*(_DWORD *)(v36 + 288) & 0xF) == 0
                   && (v38 = *(_QWORD *)(*(_QWORD *)(v11 + 16) + 448LL)) != 0
                   && (*(_DWORD *)(**(_QWORD **)(v38 + 8) + 52LL) & 1) != 0 )
            {
              v37 = 96;
            }
            else
            {
              v37 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v11 + 16) + 416LL) + 284LL);
            }
            DpiDependentMetric = GetDpiDependentMetric(15LL, v37);
            if ( v69 > v62
              || v70 > *(_DWORD *)(*(_QWORD *)(v11 + 40) + 100LL)
                     - *(_DWORD *)(*(_QWORD *)(v11 + 40) + 92LL)
                     - DpiDependentMetric )
            {
              GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
              v40 = *(_DWORD **)(v11 + 40);
              v41 = v40[22];
              v42 = (unsigned int)(v40[23] + v71);
              v60 = v40[25] - DpiDependentMetric;
              v68 = 1;
              GreIntersectVisRect(DC, (unsigned int)(v41 + v64), v42, (unsigned int)(v41 + v62), v60);
              GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
            }
          }
        }
        TextAlign = GreGetTextAlign(DC);
        v44 = TextAlign;
        v65 = TextAlign;
        if ( (**(_DWORD **)v7 & 0x2000) != 0 )
          GreSetTextAlign(DC, TextAlign | 0x100);
        GetDPIMETRICS((struct tagWND *)v11);
        v66 = 0;
        v67 = 0;
        v71 = GreSelectFont(DC);
        GreGetDCPoint(DC, 4LL, &v66);
        v46 = *(_QWORD *)v7;
        if ( a5 )
          *(_DWORD *)(v46 + 4) |= 0x80u;
        else
          *(_DWORD *)(v46 + 4) &= ~0x80u;
        if ( !v63 && (*(_QWORD *)(*(_QWORD *)v7 + 96LL) != 1LL || (*(_DWORD *)(*(_QWORD *)(**a2 + 40) + 40LL) & 1) != 0) )
        {
          if ( (*(_DWORD *)(**a2 + 124) & 3) != 0 )
          {
            v47 = (__int64)a2[2];
            if ( !v47 )
              v47 = **a2;
            v48 = MNGetpItemFromIndex(v47, *(_DWORD *)(v47 + 116));
            GreSetViewportOrg(DC, v66, v67 - *(_DWORD *)(*(_QWORD *)v48 + 68LL));
          }
          v49 = **a2;
          if ( *(_QWORD *)(*(_QWORD *)(v49 + 40) + 24LL) && !(unsigned int)MNDrawHilite(a2, (__int64)v7) )
          {
            v52 = (__int64)a2[2];
            if ( !v52 )
              v52 = **a2;
            if ( !(unsigned int)MNIsOwnerDrawItem(v52, (_DWORD **)v7, v50, v51) )
            {
              v53 = GreSetBkMode(DC, 1);
              v54 = (__int64)a2[2];
              if ( !v54 )
                v54 = **a2;
              MNEraseBackground(
                DC,
                v54,
                *(_DWORD *)(*(_QWORD *)v7 + 64LL),
                *(_DWORD *)(*(_QWORD *)v7 + 68LL),
                *(_DWORD *)(*(_QWORD *)v7 + 72LL),
                *(_DWORD *)(*(_QWORD *)v7 + 76LL));
              GreSetBkMode(DC, v53);
              v44 = v65;
            }
          }
          if ( v11 )
          {
            v56 = *(_QWORD *)(v11 + 40);
            if ( (*(_DWORD *)(v56 + 232) & 0x8000000) != 0 )
            {
              v20 = GetWindowDpiLastNotify(v11);
            }
            else if ( (*(_DWORD *)(v56 + 288) & 0xF) != 0
                   || (v57 = *(_QWORD *)(*(_QWORD *)(v11 + 16) + 448LL)) == 0
                   || (*(_DWORD *)(**(_QWORD **)(v57 + 8) + 52LL) & 1) == 0 )
            {
              v20 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v11 + 16) + 416LL) + 284LL);
            }
          }
          else if ( (W32GetCurrentThreadDpiAwarenessContext(v49, v45) & 0xF) != 0 )
          {
            v20 = *(unsigned __int16 *)(PsGetCurrentProcessWin32Process(v55) + 284);
          }
          xxxDrawMenuItem(DC, v20, a2, v7, 1, v11);
        }
        if ( v68 )
          RecalcDCVisRgn(DC);
        GreSelectFont(DC);
        GreSetViewportOrg(DC, v66, v67);
        GreSetTextAlign(DC, v44);
        _ReleaseDC(DC);
        v9 = a3;
      }
      if ( a5 )
      {
        for ( i = *(_QWORD **)(a4[2] + 600LL); i && *(_QWORD **)(*i + 8LL) != a4; i = (_QWORD *)i[6] )
          ;
LABEL_16:
        xxxSendMenuSelect((_DWORD)a4, v11, (_DWORD)a2, v9, (__int64)i);
      }
    }
  }
LABEL_106:
  if ( (_QWORD *)v11 != a4 )
    ThreadUnlock1(v15, v14, v16);
  v58 = (__int64)a2[2];
  if ( !v58 )
    v58 = **a2;
  if ( (unsigned int)MNGetpItemIndex(v58, (__int64)v7) == -1 )
    goto LABEL_111;
LABEL_112:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v72, v10);
  return v7;
}
