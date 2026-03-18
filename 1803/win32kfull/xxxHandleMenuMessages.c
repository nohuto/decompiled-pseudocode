/*
 * XREFs of xxxHandleMenuMessages @ 0x1C01E2BFC
 * Callers:
 *     xxxMNLoop @ 0x1C01E3580 (xxxMNLoop.c)
 *     xxxCallHandleMenuMessages @ 0x1C01E5680 (xxxCallHandleMenuMessages.c)
 * Callees:
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0021B08 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0021B98 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     xxxSendMessage @ 0x1C003F318 (xxxSendMessage.c)
 *     _PostMessage @ 0x1C006DAA0 (_PostMessage.c)
 *     PtInRect @ 0x1C00749C4 (PtInRect.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C00F4D38 (safe_cast_fnid_to_PMENUWND.c)
 *     xxxTranslateMessage @ 0x1C00F4EDC (xxxTranslateMessage.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     IsPointerPrimary @ 0x1C01BA8A0 (IsPointerPrimary.c)
 *     ?AdjustMouseCoordinates@@YAXPEAUtagWND@@PEA_J@Z @ 0x1C01E2934 (-AdjustMouseCoordinates@@YAXPEAUtagWND@@PEA_J@Z.c)
 *     ?xxxMNRemoveMessage@@YAHII@Z @ 0x1C01E29E4 (-xxxMNRemoveMessage@@YAHII@Z.c)
 *     GetMenuStateWindow @ 0x1C01E5100 (GetMenuStateWindow.c)
 *     IsMFMWFPWindow @ 0x1C01E5130 (IsMFMWFPWindow.c)
 *     LockMFMWFPWindow @ 0x1C01E5158 (LockMFMWFPWindow.c)
 *     UnlockMFMWFPWindow @ 0x1C01E55A8 (UnlockMFMWFPWindow.c)
 *     xxxMNButtonDown @ 0x1C01E57A4 (xxxMNButtonDown.c)
 *     xxxMNButtonUp @ 0x1C01E58A4 (xxxMNButtonUp.c)
 *     xxxMNCancel @ 0x1C01E59BC (xxxMNCancel.c)
 *     xxxMNChar @ 0x1C01E5D78 (xxxMNChar.c)
 *     xxxMNDoubleClick @ 0x1C01E6710 (xxxMNDoubleClick.c)
 *     xxxMNFindWindowFromPoint @ 0x1C01E6A2C (xxxMNFindWindowFromPoint.c)
 *     xxxMNKeyDown @ 0x1C01E6E10 (xxxMNKeyDown.c)
 *     xxxMNMouseMove @ 0x1C01E7844 (xxxMNMouseMove.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C01E945C (xxxMNSwitchToAlternateMenu.c)
 */

__int64 __fastcall xxxHandleMenuMessages(__int64 a1, __int64 a2, _QWORD **a3)
{
  __int64 v7; // r15
  unsigned int v8; // eax
  unsigned int v9; // r14d
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax
  __int16 v14; // ecx^2
  __int64 v15; // r8
  __int64 v16; // r12
  __int64 v17; // rdx
  __int64 ThreadWin32Thread; // rax
  int v19; // eax
  unsigned int v20; // r15d
  __int64 v21; // rdx
  _DWORD *v22; // rcx
  __int64 v23; // r8
  unsigned int v24; // eax
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // eax
  int v28; // eax
  __int64 v29; // rbx
  __int64 v30; // rax
  ULONG_PTR v31; // rcx
  unsigned int v32; // eax
  unsigned int v33; // eax
  unsigned int v34; // eax
  unsigned int v35; // eax
  int v36; // r10d
  __int64 v37; // r9
  int v38; // edx
  int v39; // r8d
  struct tagWND *MenuStateWindow; // rax
  int v41; // r10d
  __int64 v42; // r14
  __int64 v43; // rdx
  __int64 v44; // rax
  unsigned int v45; // eax
  unsigned int v46; // eax
  unsigned int v47; // eax
  unsigned int v48; // eax
  int v49; // eax
  unsigned int v50; // eax
  __int16 v51; // ecx^2
  __int64 v52; // r8
  ULONG_PTR v53; // r14
  int v54; // r12d
  __int64 v55; // rax
  __int64 v56; // rbx
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  bool v61; // zf
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rbx
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  ULONG_PTR v69; // rcx
  unsigned int v70; // [rsp+28h] [rbp-59h] BYREF
  __int64 v71; // [rsp+30h] [rbp-51h] BYREF
  int v72; // [rsp+38h] [rbp-49h]
  _QWORD v73[2]; // [rsp+40h] [rbp-41h] BYREF
  __int64 v74; // [rsp+50h] [rbp-31h] BYREF
  __int64 v75; // [rsp+58h] [rbp-29h]
  __int64 v76; // [rsp+60h] [rbp-21h] BYREF
  __int64 v77; // [rsp+68h] [rbp-19h]
  __int64 v78; // [rsp+78h] [rbp-9h] BYREF
  ULONG_PTR v79; // [rsp+80h] [rbp-1h]
  _QWORD v80[3]; // [rsp+90h] [rbp+Fh] BYREF

  if ( !*(_QWORD *)(**a3 + 40LL) )
    return 0LL;
  v7 = *(_QWORD *)(a1 + 24);
  v8 = *(_DWORD *)(a1 + 8);
  v9 = *(_DWORD *)(a1 + 16);
  v71 = v7;
  if ( v8 <= 0x105 )
  {
    if ( v8 == 261 )
    {
      if ( v9 == 18 || v9 == 121 )
        return 1LL;
      goto LABEL_56;
    }
    if ( v8 <= 0xA5 )
    {
      if ( v8 != 165 )
      {
        v10 = v8 - 160;
        if ( v10 )
        {
          v11 = v10 - 1;
          if ( !v11 )
          {
LABEL_13:
            *(_DWORD *)(a2 + 20) = -1;
            AdjustMouseCoordinates(*(struct tagWND **)(**a3 + 16LL), &v71);
            v14 = WORD1(v71);
            v15 = (unsigned int)v71;
            *(_DWORD *)(a2 + 12) = (__int16)v71;
            *(_DWORD *)(a2 + 16) = v14;
            v16 = xxxMNFindWindowFromPoint(a3, &v70, v15);
            v72 = IsMFMWFPWindow(v16);
            if ( v72 )
            {
              ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17);
              v78 = *(_QWORD *)(ThreadWin32Thread + 408);
              *(_QWORD *)(ThreadWin32Thread + 408) = &v78;
              v79 = v16;
              if ( v16 )
                _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
            }
            v19 = *(_DWORD *)(a2 + 8);
            v20 = v70;
            if ( (v19 & 0x400) != 0 )
            {
              *(_QWORD *)(a2 + 56) = *(_QWORD *)(a2 + 12);
              *(_DWORD *)(a2 + 72) = v20;
              LockMFMWFPWindow(a2 + 64, v16);
              v19 = *(_DWORD *)(a2 + 8);
            }
            if ( (v19 & 0x500) != 0 )
              *(_DWORD *)(a2 + 76) = ((v9 & 2) != 0) + 1;
            if ( v16 || v20 )
            {
              if ( (*(_DWORD *)**a3 & 2) != 0 && v16 == 4294967291LL )
              {
                xxxMNSwitchToAlternateMenu(a3, a2);
                v16 = 0xFFFFFFFFLL;
              }
              if ( v16 == 0xFFFFFFFFLL )
              {
                xxxMNButtonDown(a3, a2, v70, 1LL);
                goto LABEL_135;
              }
              if ( (unsigned int)IsMFMWFPWindow(v16) )
              {
                xxxSendMessage(v69);
LABEL_135:
                if ( (*(_DWORD *)(a2 + 8) & 0x100) == 0 )
                  xxxMNRemoveMessage(*(_DWORD *)(a1 + 8), 516);
                goto LABEL_137;
              }
            }
LABEL_133:
            xxxMNCancel(a2, 0LL, 0LL, 0LL);
            goto LABEL_137;
          }
          v12 = v11 - 1;
          if ( v12 )
          {
            v13 = v12 - 1;
            if ( v13 )
            {
              if ( v13 == 1 )
                goto LABEL_12;
              return 0LL;
            }
            goto LABEL_77;
          }
LABEL_97:
          v49 = *(_DWORD *)(a2 + 8);
          if ( (v49 & 8) == 0 )
            return 1LL;
          if ( (v49 & 0x400) != 0 )
          {
            UnlockMFMWFPWindow(a2 + 64);
            v50 = *(_DWORD *)(a2 + 8) & 0xFFFFFF7F;
            *(_DWORD *)(a2 + 8) = v50;
            if ( (v50 & 0x2000) != 0 )
            {
              *(_DWORD *)(a2 + 8) = v50 & 0xFFFFDFF7;
              return 1LL;
            }
          }
          AdjustMouseCoordinates(*(struct tagWND **)(**a3 + 16LL), &v71);
          v51 = WORD1(v71);
          v52 = (unsigned int)v71;
          *(_DWORD *)(a2 + 12) = (__int16)v71;
          *(_DWORD *)(a2 + 16) = v51;
          v53 = xxxMNFindWindowFromPoint(a3, &v70, v52);
          v72 = IsMFMWFPWindow(v53);
          v54 = v72;
          if ( v72 )
          {
            v55 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v21);
            v78 = *(_QWORD *)(v55 + 408);
            *(_QWORD *)(v55 + 408) = &v78;
            v79 = v53;
            if ( v53 )
              _InterlockedIncrement((volatile signed __int32 *)(v53 + 8));
          }
          v22 = (_DWORD *)**a3;
          if ( (*v22 & 2) != 0 )
          {
            if ( !v53 && !v70 )
              goto LABEL_133;
            if ( v53 == 0xFFFFFFFF )
            {
              if ( (*(_DWORD *)**a3 & 4) != 0 && (*(_DWORD *)**a3 & 0x80u) != 0 )
                goto LABEL_133;
LABEL_118:
              xxxMNButtonUp(a3, a2, v70, 0LL);
              goto LABEL_137;
            }
          }
          else
          {
            if ( !v53 && !v70 && (*(_DWORD *)**a3 & 0x200) == 0 )
            {
              v56 = *(_QWORD *)(**a3 + 16LL);
              v57 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v21);
              v76 = *(_QWORD *)(v57 + 408);
              *(_QWORD *)(v57 + 408) = &v76;
              v77 = v56;
              if ( v56 )
                _InterlockedIncrement((volatile signed __int32 *)(v56 + 8));
              xxxSendMessage(*(_QWORD *)(**a3 + 16LL));
              ThreadUnlock1(v59, v58, v60);
LABEL_137:
              if ( !v72 )
                return 1LL;
              goto LABEL_49;
            }
            v22 = (_DWORD *)**a3;
            *v22 &= ~0x200u;
            if ( v53 == 0xFFFFFFFF )
              goto LABEL_118;
          }
          if ( v54 )
            xxxSendMessage(v53);
          else
            *(_DWORD *)(a2 + 8) &= 0xFFFFFFB7;
          goto LABEL_137;
        }
        goto LABEL_66;
      }
LABEL_96:
      if ( (*(_DWORD *)**a3 & 0x40) == 0 )
      {
        if ( (*(_DWORD *)(a2 + 8) & 8) == 0 )
        {
          if ( *(_DWORD *)(a1 + 8) == 517 && (*(_DWORD *)**a3 & 0x800) == 0 )
          {
            SmartObjStackRefBase<tagPOPUPMENU>::Init(v73, 0LL);
            v62 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(**a3 + 56LL));
            if ( v62 )
            {
              SmartObjStackRefBase<tagPOPUPMENU>::operator=(v73, *(_QWORD *)(v62 + 8));
              if ( *(_QWORD *)v73[0] )
              {
                if ( *(int *)(*(_QWORD *)v73[0] + 80LL) >= 0 && *(_QWORD *)(*(_QWORD *)v73[0] + 8LL) )
                {
                  v64 = *(_QWORD *)(*(_QWORD *)v73[0] + 8LL);
                  v65 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v63);
                  v80[0] = *(_QWORD *)(v65 + 408);
                  *(_QWORD *)(v65 + 408) = v80;
                  v80[1] = v64;
                  _InterlockedIncrement((volatile signed __int32 *)(v64 + 8));
                  xxxSendMessage(*(_QWORD *)(*(_QWORD *)v73[0] + 8LL));
                  ThreadUnlock1(v67, v66, v68);
                }
              }
            }
            SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v73, v63);
          }
          return 0LL;
        }
        v61 = (*(_DWORD *)(a2 + 8) & 0x100) == 0;
        goto LABEL_141;
      }
      goto LABEL_97;
    }
    v24 = v8 - 166;
    if ( !v24 )
      goto LABEL_139;
    v25 = v24 - 90;
    if ( !v25 )
    {
LABEL_32:
      v28 = *(_DWORD *)(a2 + 8);
      if ( (v28 & 8) != 0 && v9 != 112 )
      {
        if ( (v28 & 0x80u) != 0 && v9 == 27 )
          *(_DWORD *)(a2 + 8) = v28 | 0x2000;
        return 1LL;
      }
      *(_DWORD *)(a2 + 20) = 1;
      if ( v9 == 3 )
      {
LABEL_46:
        if ( !*(_QWORD *)(**a3 + 56LL) )
        {
          xxxMNKeyDown(a3, a2, v9);
          return 1LL;
        }
        goto LABEL_47;
      }
      if ( v9 == 9 )
      {
        if ( (*(_DWORD *)**a3 & 1) != 0 && !*(_QWORD *)(**a3 + 56LL) )
          goto LABEL_52;
      }
      else if ( v9 == 13 || v9 == 18 || v9 == 27 || v9 > 0x24 && (v9 <= 0x28 || v9 == 112 || v9 == 121) )
      {
        goto LABEL_46;
      }
LABEL_56:
      if ( (*(_DWORD *)(a2 + 8) & 0x100) == 0 )
        xxxTranslateMessage(a1, 0LL);
      return 1LL;
    }
    v26 = v25 - 1;
    if ( !v26 )
      goto LABEL_56;
    v27 = v26 - 1;
    if ( v27 )
    {
      if ( v27 != 2 )
        return 0LL;
      goto LABEL_32;
    }
LABEL_75:
    if ( !*(_QWORD *)(**a3 + 56LL) )
    {
      xxxMNChar(a3, a2, v9);
      return 1LL;
    }
LABEL_47:
    v29 = *(_QWORD *)(**a3 + 56LL);
    v30 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
    v76 = *(_QWORD *)(v30 + 408);
    *(_QWORD *)(v30 + 408) = &v76;
    v77 = v29;
    _InterlockedIncrement((volatile signed __int32 *)(v29 + 8));
    v31 = *(_QWORD *)(**a3 + 56LL);
    goto LABEL_48;
  }
  if ( v8 > 0x203 )
  {
    v45 = v8 - 516;
    if ( !v45 )
    {
LABEL_12:
      if ( (*(_DWORD *)**a3 & 0x40) != 0 )
        goto LABEL_13;
LABEL_139:
      *(_DWORD *)(a2 + 20) = -1;
      AdjustMouseCoordinates(*(struct tagWND **)(**a3 + 16LL), &v71);
      if ( xxxMNFindWindowFromPoint(a3, &v70, (unsigned int)v71) )
      {
        v61 = (*(_DWORD *)(a2 + 8) & 0x100) == 0;
LABEL_141:
        if ( v61 )
          xxxMNRemoveMessage(*(_DWORD *)(a1 + 8), 0);
        return 1LL;
      }
LABEL_52:
      xxxMNCancel(a2, 0LL, 0LL, 0LL);
      return 1LL;
    }
    v46 = v45 - 1;
    if ( v46 )
    {
      v47 = v46 - 1;
      if ( v47 )
      {
        v48 = v47 - 60;
        if ( (!v48 || v48 == 4)
          && IsPointerPrimary(gptiCurrent, v9)
          && !xxxMNFindWindowFromPoint(a3, &v70, (unsigned int)v7) )
        {
          xxxMNCancel(a2, 0LL, 0LL, 0LL);
        }
        return 0LL;
      }
      goto LABEL_139;
    }
    goto LABEL_96;
  }
  if ( v8 != 515 )
  {
    v32 = v8 - 262;
    if ( v32 )
    {
      v33 = v32 - 18;
      if ( !v33 )
        return 1LL;
      v34 = v33 - 232;
      if ( v34 )
      {
        v35 = v34 - 1;
        if ( !v35 )
          goto LABEL_13;
        if ( v35 != 1 )
          return 0LL;
        goto LABEL_97;
      }
LABEL_66:
      v36 = *(_DWORD *)(a2 + 8);
      if ( (v36 & 0x400) != 0 && (v36 & 8) != 0 && (v36 & 0x80u) == 0 && (v36 & 0x40) == 0 )
      {
        if ( *(_QWORD *)(a2 + 64) )
        {
          v37 = *(_QWORD *)(a2 + 56);
          v74 = v37;
          v75 = v37;
          v38 = *(_DWORD *)(gpsi + 2168LL);
          v39 = *(_DWORD *)(gpsi + 2172LL);
          HIDWORD(v74) = HIDWORD(v37) - v39;
          HIDWORD(v75) = v39 + HIDWORD(v37);
          LODWORD(v74) = v37 - v38;
          LODWORD(v75) = v37 + v38;
          LODWORD(v71) = (__int16)v7;
          HIDWORD(v71) = SWORD1(v7);
          if ( !PtInRect(&v74, v71) )
          {
            MenuStateWindow = (struct tagWND *)GetMenuStateWindow(a2);
            if ( MenuStateWindow )
            {
              *(_DWORD *)(a2 + 8) = v41 | 0x80;
              PostMessage(MenuStateWindow, 0x1F4u, 0LL, 0LL);
            }
          }
        }
      }
      xxxMNMouseMove(a3, a2, (unsigned int)v7);
      return 1LL;
    }
    goto LABEL_75;
  }
LABEL_77:
  *(_DWORD *)(a2 + 20) = -1;
  AdjustMouseCoordinates(*(struct tagWND **)(**a3 + 16LL), &v71);
  v42 = xxxMNFindWindowFromPoint(a3, &v70, (unsigned int)v71);
  if ( !v42 && !v70 )
    goto LABEL_52;
  if ( (*(_DWORD *)**a3 & 2) != 0 && v42 == 4294967291LL )
  {
    xxxMNSwitchToAlternateMenu(a3, a2);
    v42 = 0xFFFFFFFFLL;
  }
  if ( v42 == 0xFFFFFFFFLL )
  {
    xxxMNDoubleClick(a2, a3, v70);
    return 1LL;
  }
  if ( !(unsigned int)IsMFMWFPWindow(v42) )
    goto LABEL_52;
  v44 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v43);
  v78 = *(_QWORD *)(v44 + 408);
  *(_QWORD *)(v44 + 408) = &v78;
  v79 = v42;
  if ( v42 )
    _InterlockedIncrement((volatile signed __int32 *)(v42 + 8));
  v31 = v42;
LABEL_48:
  xxxSendMessage(v31);
LABEL_49:
  ThreadUnlock1(v22, v21, v23);
  return 1LL;
}
