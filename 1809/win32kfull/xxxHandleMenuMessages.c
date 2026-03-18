/*
 * XREFs of xxxHandleMenuMessages @ 0x1C0208A7C
 * Callers:
 *     xxxMNLoop @ 0x1C0209440 (xxxMNLoop.c)
 *     xxxCallHandleMenuMessages @ 0x1C020B5C0 (xxxCallHandleMenuMessages.c)
 * Callees:
 *     safe_cast_fnid_to_PMENUWND @ 0x1C001CBC8 (safe_cast_fnid_to_PMENUWND.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxSendMessage @ 0x1C002CE20 (xxxSendMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     PtInRect @ 0x1C006EFD8 (PtInRect.c)
 *     _PostMessage @ 0x1C00DC980 (_PostMessage.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0102A84 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C010CEAC (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     xxxTranslateMessage @ 0x1C0110150 (xxxTranslateMessage.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     IsPointerPrimary @ 0x1C01DD638 (IsPointerPrimary.c)
 *     ?AdjustMouseCoordinates@@YAXPEAUtagWND@@PEA_J@Z @ 0x1C02087A4 (-AdjustMouseCoordinates@@YAXPEAUtagWND@@PEA_J@Z.c)
 *     ?xxxMNRemoveMessage@@YAHII@Z @ 0x1C0208854 (-xxxMNRemoveMessage@@YAHII@Z.c)
 *     GetMenuStateWindow @ 0x1C020B01C (GetMenuStateWindow.c)
 *     IsMFMWFPWindow @ 0x1C020B04C (IsMFMWFPWindow.c)
 *     LockMFMWFPWindow @ 0x1C020B074 (LockMFMWFPWindow.c)
 *     UnlockMFMWFPWindow @ 0x1C020B4D4 (UnlockMFMWFPWindow.c)
 *     xxxMNButtonDown @ 0x1C020B6E8 (xxxMNButtonDown.c)
 *     xxxMNButtonUp @ 0x1C020B7E8 (xxxMNButtonUp.c)
 *     xxxMNCancel @ 0x1C020B900 (xxxMNCancel.c)
 *     xxxMNChar @ 0x1C020BCC8 (xxxMNChar.c)
 *     xxxMNDoubleClick @ 0x1C020C670 (xxxMNDoubleClick.c)
 *     xxxMNFindWindowFromPoint @ 0x1C020C99C (xxxMNFindWindowFromPoint.c)
 *     xxxMNKeyDown @ 0x1C020CD34 (xxxMNKeyDown.c)
 *     xxxMNMouseMove @ 0x1C020D738 (xxxMNMouseMove.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C020F408 (xxxMNSwitchToAlternateMenu.c)
 */

__int64 __fastcall xxxHandleMenuMessages(__int64 a1, __int64 a2, _QWORD **a3)
{
  _DWORD **v3; // rax
  __int64 v8; // r12
  unsigned int v9; // eax
  unsigned int v10; // r14d
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // eax
  __int16 v15; // ecx^2
  __int64 v16; // r8
  __int64 v17; // r13
  __int64 v18; // rdx
  __int64 v19; // rax
  int v20; // eax
  unsigned int v21; // r12d
  __int64 v22; // rdx
  _DWORD *v23; // rcx
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
  __int64 ThreadWin32Thread; // rax
  unsigned int v45; // eax
  unsigned int v46; // eax
  unsigned int v47; // eax
  unsigned int v48; // eax
  int v49; // eax
  unsigned int v50; // eax
  __int16 v51; // ecx^2
  __int64 v52; // r8
  ULONG_PTR v53; // r14
  int v54; // r13d
  __int64 v55; // rax
  __int64 v56; // rbx
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  bool v60; // zf
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rbx
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  ULONG_PTR v67; // rcx
  unsigned int v68; // [rsp+28h] [rbp-49h] BYREF
  __int64 v69; // [rsp+30h] [rbp-41h] BYREF
  int v70; // [rsp+38h] [rbp-39h]
  _QWORD v71[2]; // [rsp+40h] [rbp-31h] BYREF
  __int64 v72; // [rsp+50h] [rbp-21h] BYREF
  __int64 v73; // [rsp+58h] [rbp-19h]
  __int64 v74; // [rsp+60h] [rbp-11h] BYREF
  __int64 v75; // [rsp+68h] [rbp-9h]
  __int64 v76; // [rsp+78h] [rbp+7h] BYREF
  ULONG_PTR v77; // [rsp+80h] [rbp+Fh]
  __int64 v78; // [rsp+90h] [rbp+1Fh]
  _QWORD v79[3]; // [rsp+98h] [rbp+27h] BYREF

  v3 = (_DWORD **)*a3;
  v78 = a1;
  if ( !*((_QWORD *)*v3 + 5) )
    return 0LL;
  v8 = *(_QWORD *)(a1 + 24);
  v9 = *(_DWORD *)(a1 + 8);
  v10 = *(_DWORD *)(a1 + 16);
  v69 = v8;
  if ( v9 > 0x105 )
  {
    if ( v9 > 0x203 )
    {
      v45 = v9 - 516;
      if ( !v45 )
      {
LABEL_12:
        if ( (*(_DWORD *)**a3 & 0x40) != 0 )
          goto LABEL_13;
LABEL_139:
        *(_DWORD *)(a2 + 20) = -1;
        AdjustMouseCoordinates(*(struct tagWND **)(**a3 + 16LL), &v69);
        if ( xxxMNFindWindowFromPoint(a3, &v68, (unsigned int)v69) )
        {
          v60 = (*(_DWORD *)(a2 + 8) & 0x100) == 0;
LABEL_141:
          if ( v60 )
            xxxMNRemoveMessage(*(_DWORD *)(a1 + 8), 0);
          return 1LL;
        }
LABEL_83:
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
            && IsPointerPrimary(gptiCurrent, v10)
            && !xxxMNFindWindowFromPoint(a3, &v68, (unsigned int)v8) )
          {
            xxxMNCancel(a2, 0LL, 0LL, 0LL);
          }
          return 0LL;
        }
        goto LABEL_139;
      }
      goto LABEL_96;
    }
    if ( v9 == 515 )
    {
LABEL_75:
      *(_DWORD *)(a2 + 20) = -1;
      AdjustMouseCoordinates(*(struct tagWND **)(**a3 + 16LL), &v69);
      v42 = xxxMNFindWindowFromPoint(a3, &v68, (unsigned int)v69);
      if ( !v42 && !v68 )
        goto LABEL_83;
      if ( (*(_DWORD *)**a3 & 2) != 0 && v42 == 4294967291LL )
      {
        xxxMNSwitchToAlternateMenu(a3, a2);
        v42 = 0xFFFFFFFFLL;
      }
      if ( v42 == 0xFFFFFFFFLL )
      {
        xxxMNDoubleClick(a2, a3, v68);
        return 1LL;
      }
      if ( !(unsigned int)IsMFMWFPWindow(v42) )
        goto LABEL_83;
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v43);
      v76 = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = &v76;
      v77 = v42;
      if ( v42 )
        _InterlockedIncrement((volatile signed __int32 *)(v42 + 8));
      v31 = v42;
LABEL_87:
      xxxSendMessage(v31);
LABEL_138:
      ThreadUnlock1(v23, v22);
      return 1LL;
    }
    v32 = v9 - 262;
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
LABEL_64:
      v36 = *(_DWORD *)(a2 + 8);
      if ( (v36 & 0x400) != 0 && (v36 & 8) != 0 && (v36 & 0x80u) == 0 && (v36 & 0x40) == 0 )
      {
        if ( *(_QWORD *)(a2 + 64) )
        {
          v37 = *(_QWORD *)(a2 + 56);
          v72 = v37;
          v73 = v37;
          v38 = *(_DWORD *)(gpsi + 2168LL);
          v39 = *(_DWORD *)(gpsi + 2172LL);
          HIDWORD(v72) = HIDWORD(v37) - v39;
          HIDWORD(v73) = v39 + HIDWORD(v37);
          LODWORD(v72) = v37 - v38;
          LODWORD(v73) = v37 + v38;
          LODWORD(v69) = (__int16)v8;
          HIDWORD(v69) = SWORD1(v8);
          if ( !PtInRect(&v72, v69) )
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
      xxxMNMouseMove(a3, a2, (unsigned int)v8);
      return 1LL;
    }
    goto LABEL_73;
  }
  if ( v9 == 261 )
  {
    if ( v10 == 18 || v10 == 121 )
      return 1LL;
    goto LABEL_54;
  }
  if ( v9 > 0xA5 )
  {
    v24 = v9 - 166;
    if ( !v24 )
      goto LABEL_139;
    v25 = v24 - 90;
    if ( !v25 )
    {
LABEL_32:
      v28 = *(_DWORD *)(a2 + 8);
      if ( (v28 & 8) != 0 && v10 != 112 )
      {
        if ( (v28 & 0x80u) != 0 && v10 == 27 )
          *(_DWORD *)(a2 + 8) = v28 | 0x2000;
        return 1LL;
      }
      *(_DWORD *)(a2 + 20) = 1;
      if ( v10 == 3 )
      {
LABEL_46:
        if ( !*(_QWORD *)(**a3 + 56LL) )
        {
          xxxMNKeyDown(a3, a2, v10);
          return 1LL;
        }
        goto LABEL_47;
      }
      if ( v10 == 9 )
      {
        if ( (*(_DWORD *)**a3 & 1) != 0 && !*(_QWORD *)(**a3 + 56LL) )
          goto LABEL_83;
      }
      else if ( v10 == 13 || v10 == 18 || v10 == 27 || v10 > 0x24 && (v10 <= 0x28 || v10 == 112 || v10 == 121) )
      {
        goto LABEL_46;
      }
LABEL_54:
      if ( (*(_DWORD *)(a2 + 8) & 0x100) == 0 )
        xxxTranslateMessage(a1, 0LL);
      return 1LL;
    }
    v26 = v25 - 1;
    if ( !v26 )
      goto LABEL_54;
    v27 = v26 - 1;
    if ( v27 )
    {
      if ( v27 != 2 )
        return 0LL;
      goto LABEL_32;
    }
LABEL_73:
    if ( !*(_QWORD *)(**a3 + 56LL) )
    {
      xxxMNChar(a3, a2, v10);
      return 1LL;
    }
LABEL_47:
    v29 = *(_QWORD *)(**a3 + 56LL);
    v30 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
    v74 = *(_QWORD *)(v30 + 416);
    *(_QWORD *)(v30 + 416) = &v74;
    v75 = v29;
    _InterlockedIncrement((volatile signed __int32 *)(v29 + 8));
    v31 = *(_QWORD *)(**a3 + 56LL);
    goto LABEL_87;
  }
  if ( v9 == 165 )
  {
LABEL_96:
    if ( (*(_DWORD *)**a3 & 0x40) == 0 )
    {
      if ( (*(_DWORD *)(a2 + 8) & 8) == 0 )
      {
        if ( *(_DWORD *)(a1 + 8) == 517 && (*(_DWORD *)**a3 & 0x800) == 0 )
        {
          SmartObjStackRefBase<tagPOPUPMENU>::Init(v71, 0LL);
          v61 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(**a3 + 56LL));
          if ( v61 )
          {
            SmartObjStackRefBase<tagPOPUPMENU>::operator=(v71, *(_QWORD *)(v61 + 8));
            if ( *(_QWORD *)v71[0] )
            {
              if ( *(int *)(*(_QWORD *)v71[0] + 80LL) >= 0 && *(_QWORD *)(*(_QWORD *)v71[0] + 8LL) )
              {
                v63 = *(_QWORD *)(*(_QWORD *)v71[0] + 8LL);
                v64 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v62);
                v79[0] = *(_QWORD *)(v64 + 416);
                *(_QWORD *)(v64 + 416) = v79;
                v79[1] = v63;
                _InterlockedIncrement((volatile signed __int32 *)(v63 + 8));
                xxxSendMessage(*(_QWORD *)(*(_QWORD *)v71[0] + 8LL));
                ThreadUnlock1(v66, v65);
              }
            }
          }
          SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v71, v62);
        }
        return 0LL;
      }
      v60 = (*(_DWORD *)(a2 + 8) & 0x100) == 0;
      goto LABEL_141;
    }
    goto LABEL_97;
  }
  v11 = v9 - 160;
  if ( !v11 )
    goto LABEL_64;
  v12 = v11 - 1;
  if ( !v12 )
  {
LABEL_13:
    *(_DWORD *)(a2 + 20) = -1;
    AdjustMouseCoordinates(*(struct tagWND **)(**a3 + 16LL), &v69);
    v15 = WORD1(v69);
    v16 = (unsigned int)v69;
    *(_DWORD *)(a2 + 12) = (__int16)v69;
    *(_DWORD *)(a2 + 16) = v15;
    v17 = xxxMNFindWindowFromPoint(a3, &v68, v16);
    v70 = IsMFMWFPWindow(v17);
    if ( v70 )
    {
      v19 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v18);
      v76 = *(_QWORD *)(v19 + 416);
      *(_QWORD *)(v19 + 416) = &v76;
      v77 = v17;
      if ( v17 )
        _InterlockedIncrement((volatile signed __int32 *)(v17 + 8));
    }
    v20 = *(_DWORD *)(a2 + 8);
    v21 = v68;
    if ( (v20 & 0x400) != 0 )
    {
      *(_QWORD *)(a2 + 56) = *(_QWORD *)(a2 + 12);
      *(_DWORD *)(a2 + 72) = v21;
      LockMFMWFPWindow(a2 + 64, v17);
      v20 = *(_DWORD *)(a2 + 8);
    }
    if ( (v20 & 0x500) != 0 )
      *(_DWORD *)(a2 + 76) = ((v10 & 2) != 0) + 1;
    if ( v17 || v21 )
    {
      if ( (*(_DWORD *)**a3 & 2) != 0 && v17 == 4294967291LL )
      {
        xxxMNSwitchToAlternateMenu(a3, a2);
        v17 = 0xFFFFFFFFLL;
      }
      if ( v17 == 0xFFFFFFFFLL )
      {
        xxxMNButtonDown(a3, a2, v68, 1LL);
        goto LABEL_135;
      }
      if ( (unsigned int)IsMFMWFPWindow(v17) )
      {
        xxxSendMessage(v67);
LABEL_135:
        if ( (*(_DWORD *)(a2 + 8) & 0x100) == 0 )
          xxxMNRemoveMessage(*(_DWORD *)(v78 + 8), 516);
        goto LABEL_137;
      }
    }
LABEL_133:
    xxxMNCancel(a2, 0LL, 0LL, 0LL);
    goto LABEL_137;
  }
  v13 = v12 - 1;
  if ( v13 )
  {
    v14 = v13 - 1;
    if ( v14 )
    {
      if ( v14 == 1 )
        goto LABEL_12;
      return 0LL;
    }
    goto LABEL_75;
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
  AdjustMouseCoordinates(*(struct tagWND **)(**a3 + 16LL), &v69);
  v51 = WORD1(v69);
  v52 = (unsigned int)v69;
  *(_DWORD *)(a2 + 12) = (__int16)v69;
  *(_DWORD *)(a2 + 16) = v51;
  v53 = xxxMNFindWindowFromPoint(a3, &v68, v52);
  v70 = IsMFMWFPWindow(v53);
  v54 = v70;
  if ( v70 )
  {
    v55 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22);
    v76 = *(_QWORD *)(v55 + 416);
    *(_QWORD *)(v55 + 416) = &v76;
    v77 = v53;
    if ( v53 )
      _InterlockedIncrement((volatile signed __int32 *)(v53 + 8));
  }
  v23 = (_DWORD *)**a3;
  if ( (*v23 & 2) != 0 )
  {
    if ( !v53 && !v68 )
      goto LABEL_133;
    if ( v53 == 0xFFFFFFFF )
    {
      if ( (*(_DWORD *)**a3 & 4) != 0 && (*(_DWORD *)**a3 & 0x80u) != 0 )
        goto LABEL_133;
LABEL_118:
      xxxMNButtonUp(a3, a2, v68, 0LL);
      goto LABEL_137;
    }
    goto LABEL_119;
  }
  if ( v53 || v68 || (*(_DWORD *)**a3 & 0x200) != 0 )
  {
    v23 = (_DWORD *)**a3;
    *v23 &= ~0x200u;
    if ( v53 == 0xFFFFFFFF )
      goto LABEL_118;
LABEL_119:
    if ( v54 )
      xxxSendMessage(v53);
    else
      *(_DWORD *)(a2 + 8) &= 0xFFFFFFB7;
    goto LABEL_137;
  }
  v56 = *(_QWORD *)(**a3 + 16LL);
  v57 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22);
  v74 = *(_QWORD *)(v57 + 416);
  *(_QWORD *)(v57 + 416) = &v74;
  v75 = v56;
  if ( v56 )
    _InterlockedIncrement((volatile signed __int32 *)(v56 + 8));
  xxxSendMessage(*(_QWORD *)(**a3 + 16LL));
  ThreadUnlock1(v59, v58);
LABEL_137:
  if ( v70 )
    goto LABEL_138;
  return 1LL;
}
