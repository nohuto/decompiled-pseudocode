/*
 * XREFs of xxxHandleMenuMessages @ 0x1C021FF24
 * Callers:
 *     xxxMNLoop @ 0x1C0220940 (xxxMNLoop.c)
 *     xxxCallHandleMenuMessages @ 0x1C0222BB0 (xxxCallHandleMenuMessages.c)
 * Callees:
 *     PtInRect @ 0x1C002D424 (PtInRect.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C003795C (safe_cast_fnid_to_PMENUWND.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxSendMessage @ 0x1C003C880 (xxxSendMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00EB5EC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C00EFC04 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     _PostMessage @ 0x1C01312B0 (_PostMessage.c)
 *     xxxTranslateMessage @ 0x1C0134F10 (xxxTranslateMessage.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     IsPointerPrimary @ 0x1C01F30D8 (IsPointerPrimary.c)
 *     ?AdjustMouseCoordinates@@YAXPEAUtagWND@@PEA_J@Z @ 0x1C021FC14 (-AdjustMouseCoordinates@@YAXPEAUtagWND@@PEA_J@Z.c)
 *     ?xxxMNRemoveMessage@@YAHII@Z @ 0x1C021FCC4 (-xxxMNRemoveMessage@@YAHII@Z.c)
 *     GetMenuStateWindow @ 0x1C0222600 (GetMenuStateWindow.c)
 *     IsMFMWFPWindow @ 0x1C0222630 (IsMFMWFPWindow.c)
 *     LockMFMWFPWindow @ 0x1C0222658 (LockMFMWFPWindow.c)
 *     UnlockMFMWFPWindow @ 0x1C0222AC4 (UnlockMFMWFPWindow.c)
 *     xxxMNButtonDown @ 0x1C0222CDC (xxxMNButtonDown.c)
 *     xxxMNButtonUp @ 0x1C0222DDC (xxxMNButtonUp.c)
 *     xxxMNCancel @ 0x1C0222EF4 (xxxMNCancel.c)
 *     xxxMNChar @ 0x1C0223248 (xxxMNChar.c)
 *     xxxMNDoubleClick @ 0x1C0223C50 (xxxMNDoubleClick.c)
 *     xxxMNFindWindowFromPoint @ 0x1C0223FC0 (xxxMNFindWindowFromPoint.c)
 *     xxxMNKeyDown @ 0x1C0224370 (xxxMNKeyDown.c)
 *     xxxMNMouseMove @ 0x1C0224DD8 (xxxMNMouseMove.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C0226C44 (xxxMNSwitchToAlternateMenu.c)
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
  __int64 v18; // r8
  __int64 v19; // rax
  int v20; // eax
  unsigned int v21; // r15d
  __int64 v22; // rdx
  _DWORD *v23; // rcx
  __int64 v24; // r8
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // eax
  unsigned int v28; // eax
  int v29; // eax
  __int64 v30; // rbx
  __int64 v31; // rax
  ULONG_PTR v32; // rcx
  unsigned int v33; // eax
  unsigned int v34; // eax
  unsigned int v35; // eax
  unsigned int v36; // eax
  int v37; // r9d
  int v38; // eax
  int v39; // edx
  __int64 MenuStateWindow; // rax
  int v41; // r9d
  __int64 v42; // r14
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 ThreadWin32Thread; // rax
  unsigned int v46; // eax
  unsigned int v47; // eax
  unsigned int v48; // eax
  unsigned int v49; // eax
  int v50; // eax
  unsigned int v51; // eax
  __int16 v52; // ecx^2
  __int64 v53; // r8
  ULONG_PTR v54; // r14
  int v55; // r12d
  __int64 v56; // rax
  __int64 v57; // rbx
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  bool v62; // zf
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // rbx
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  ULONG_PTR v71; // rcx
  unsigned int v72; // [rsp+28h] [rbp-59h] BYREF
  __int64 v73; // [rsp+30h] [rbp-51h] BYREF
  int v74; // [rsp+38h] [rbp-49h]
  __int64 v75; // [rsp+40h] [rbp-41h] BYREF
  __int64 v76; // [rsp+48h] [rbp-39h]
  _QWORD v77[2]; // [rsp+50h] [rbp-31h] BYREF
  __int64 v78; // [rsp+60h] [rbp-21h] BYREF
  __int64 v79; // [rsp+68h] [rbp-19h]
  __int64 v80; // [rsp+70h] [rbp-11h]
  __int64 v81; // [rsp+78h] [rbp-9h] BYREF
  ULONG_PTR v82; // [rsp+80h] [rbp-1h]
  __int64 v83; // [rsp+88h] [rbp+7h]
  __int64 v84; // [rsp+90h] [rbp+Fh] BYREF
  __int64 v85; // [rsp+98h] [rbp+17h]
  __int64 v86; // [rsp+A0h] [rbp+1Fh]

  v81 = 0LL;
  v82 = 0LL;
  v83 = 0LL;
  v78 = 0LL;
  v79 = 0LL;
  v80 = 0LL;
  if ( !*(_QWORD *)(**a3 + 40LL) )
    return 0LL;
  v7 = *(_QWORD *)(a1 + 24);
  v8 = *(_DWORD *)(a1 + 8);
  v9 = *(_DWORD *)(a1 + 16);
  v73 = v7;
  if ( v8 > 0x105 )
  {
    if ( v8 > 0x203 )
    {
      v46 = v8 - 516;
      if ( !v46 )
      {
LABEL_12:
        if ( (*(_DWORD *)**a3 & 0x40) != 0 )
          goto LABEL_13;
LABEL_139:
        *(_DWORD *)(a2 + 20) = -1;
        AdjustMouseCoordinates(*(struct tagWND **)(**a3 + 16LL), &v73);
        if ( xxxMNFindWindowFromPoint(a3, &v72, (unsigned int)v73) )
        {
          v62 = (*(_DWORD *)(a2 + 8) & 0x100) == 0;
LABEL_141:
          if ( v62 )
            xxxMNRemoveMessage(*(_DWORD *)(a1 + 8), 0);
          return 1LL;
        }
LABEL_83:
        xxxMNCancel(a2);
        return 1LL;
      }
      v47 = v46 - 1;
      if ( v47 )
      {
        v48 = v47 - 1;
        if ( v48 )
        {
          v49 = v48 - 60;
          if ( (!v49 || v49 == 4)
            && IsPointerPrimary(gptiCurrent, *(_WORD *)(a1 + 16))
            && !xxxMNFindWindowFromPoint(a3, &v72, (unsigned int)v7) )
          {
            xxxMNCancel(a2);
          }
          return 0LL;
        }
        goto LABEL_139;
      }
      goto LABEL_96;
    }
    if ( v8 == 515 )
    {
LABEL_75:
      *(_DWORD *)(a2 + 20) = -1;
      AdjustMouseCoordinates(*(struct tagWND **)(**a3 + 16LL), &v73);
      v42 = xxxMNFindWindowFromPoint(a3, &v72, (unsigned int)v73);
      if ( !v42 && !v72 )
        goto LABEL_83;
      if ( (*(_DWORD *)**a3 & 2) != 0 && v42 == 4294967291LL )
      {
        xxxMNSwitchToAlternateMenu(a3, a2);
        v42 = 0xFFFFFFFFLL;
      }
      if ( v42 == 0xFFFFFFFFLL )
      {
        xxxMNDoubleClick(a2, a3, v72);
        return 1LL;
      }
      if ( !(unsigned int)IsMFMWFPWindow(v42) )
        goto LABEL_83;
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v43, v44);
      v81 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v81;
      v82 = v42;
      if ( v42 )
        HMLockObject(v42);
      v32 = v42;
LABEL_87:
      xxxSendMessage(v32);
LABEL_138:
      ThreadUnlock1(v23, v22, v24);
      return 1LL;
    }
    v33 = v8 - 262;
    if ( v33 )
    {
      v34 = v33 - 18;
      if ( !v34 )
        return 1LL;
      v35 = v34 - 232;
      if ( v35 )
      {
        v36 = v35 - 1;
        if ( !v36 )
          goto LABEL_13;
        if ( v36 != 1 )
          return 0LL;
        goto LABEL_97;
      }
LABEL_64:
      v37 = *(_DWORD *)(a2 + 8);
      if ( (v37 & 0x400) != 0 && (v37 & 8) != 0 && (v37 & 0x80u) == 0 && (v37 & 0x40) == 0 )
      {
        if ( *(_QWORD *)(a2 + 64) )
        {
          v75 = *(_QWORD *)(a2 + 56);
          v76 = v75;
          v38 = *(_DWORD *)(gpsi + 2168LL);
          LODWORD(v75) = v75 - v38;
          LODWORD(v76) = v38 + v76;
          v39 = *(_DWORD *)(gpsi + 2172LL);
          HIDWORD(v75) -= v39;
          HIDWORD(v76) += v39;
          LODWORD(v73) = (__int16)v7;
          HIDWORD(v73) = SWORD1(v7);
          if ( !PtInRect(&v75, v73) )
          {
            MenuStateWindow = GetMenuStateWindow(a2);
            if ( MenuStateWindow )
            {
              *(_DWORD *)(a2 + 8) = v41 | 0x80;
              PostMessage(MenuStateWindow, 500, 0, 0);
            }
          }
        }
      }
      xxxMNMouseMove(a3, a2, (unsigned int)v7);
      return 1LL;
    }
    goto LABEL_73;
  }
  if ( v8 == 261 )
  {
    if ( v9 == 18 || v9 == 121 )
      return 1LL;
    goto LABEL_54;
  }
  if ( v8 > 0xA5 )
  {
    v25 = v8 - 166;
    if ( !v25 )
      goto LABEL_139;
    v26 = v25 - 90;
    if ( !v26 )
    {
LABEL_32:
      v29 = *(_DWORD *)(a2 + 8);
      if ( (v29 & 8) != 0 && v9 != 112 )
      {
        if ( (v29 & 0x80u) != 0 && v9 == 27 )
          *(_DWORD *)(a2 + 8) = v29 | 0x2000;
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
          goto LABEL_83;
      }
      else if ( v9 == 13 || v9 == 18 || v9 == 27 || v9 > 0x24 && (v9 <= 0x28 || v9 == 112 || v9 == 121) )
      {
        goto LABEL_46;
      }
LABEL_54:
      if ( (*(_DWORD *)(a2 + 8) & 0x100) == 0 )
        xxxTranslateMessage(a1, 0LL, (__int64)a3);
      return 1LL;
    }
    v27 = v26 - 1;
    if ( !v27 )
      goto LABEL_54;
    v28 = v27 - 1;
    if ( v28 )
    {
      if ( v28 != 2 )
        return 0LL;
      goto LABEL_32;
    }
LABEL_73:
    if ( !*(_QWORD *)(**a3 + 56LL) )
    {
      xxxMNChar(a3, a2, v9);
      return 1LL;
    }
LABEL_47:
    v30 = *(_QWORD *)(**a3 + 56LL);
    v31 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, (__int64)a3);
    v78 = *(_QWORD *)(v31 + 408);
    *(_QWORD *)(v31 + 408) = &v78;
    v79 = v30;
    HMLockObject(v30);
    v32 = *(_QWORD *)(**a3 + 56LL);
    goto LABEL_87;
  }
  if ( v8 == 165 )
  {
LABEL_96:
    if ( (*(_DWORD *)**a3 & 0x40) == 0 )
    {
      if ( (*(_DWORD *)(a2 + 8) & 8) == 0 )
      {
        if ( *(_DWORD *)(a1 + 8) == 517 && (*(_DWORD *)**a3 & 0x800) == 0 )
        {
          SmartObjStackRefBase<tagPOPUPMENU>::Init(v77, 0LL);
          v63 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(**a3 + 56LL));
          if ( v63 )
          {
            SmartObjStackRefBase<tagPOPUPMENU>::operator=(v77, *(_QWORD *)(v63 + 8));
            if ( *(_QWORD *)v77[0] )
            {
              if ( *(int *)(*(_QWORD *)v77[0] + 80LL) >= 0 && *(_QWORD *)(*(_QWORD *)v77[0] + 8LL) )
              {
                v84 = 0LL;
                v85 = 0LL;
                v86 = 0LL;
                v66 = *(_QWORD *)(*(_QWORD *)v77[0] + 8LL);
                v67 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v64, v65);
                v84 = *(_QWORD *)(v67 + 408);
                *(_QWORD *)(v67 + 408) = &v84;
                v85 = v66;
                HMLockObject(v66);
                xxxSendMessage(*(_QWORD *)(*(_QWORD *)v77[0] + 8LL));
                ThreadUnlock1(v69, v68, v70);
              }
            }
          }
          SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v77, v64, v65);
        }
        return 0LL;
      }
      v62 = (*(_DWORD *)(a2 + 8) & 0x100) == 0;
      goto LABEL_141;
    }
    goto LABEL_97;
  }
  v10 = v8 - 160;
  if ( !v10 )
    goto LABEL_64;
  v11 = v10 - 1;
  if ( !v11 )
  {
LABEL_13:
    *(_DWORD *)(a2 + 20) = -1;
    AdjustMouseCoordinates(*(struct tagWND **)(**a3 + 16LL), &v73);
    v14 = WORD1(v73);
    v15 = (unsigned int)v73;
    *(_DWORD *)(a2 + 12) = (__int16)v73;
    *(_DWORD *)(a2 + 16) = v14;
    v16 = xxxMNFindWindowFromPoint(a3, &v72, v15);
    v74 = IsMFMWFPWindow(v16);
    if ( v74 )
    {
      v19 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17, v18);
      v81 = *(_QWORD *)(v19 + 408);
      *(_QWORD *)(v19 + 408) = &v81;
      v82 = v16;
      if ( v16 )
        HMLockObject(v16);
    }
    v20 = *(_DWORD *)(a2 + 8);
    v21 = v72;
    if ( (v20 & 0x400) != 0 )
    {
      *(_QWORD *)(a2 + 56) = *(_QWORD *)(a2 + 12);
      *(_DWORD *)(a2 + 72) = v21;
      LockMFMWFPWindow(a2 + 64, v16);
      v20 = *(_DWORD *)(a2 + 8);
    }
    if ( (v20 & 0x500) != 0 )
      *(_DWORD *)(a2 + 76) = ((v9 & 2) != 0) + 1;
    if ( v16 || v21 )
    {
      if ( (*(_DWORD *)**a3 & 2) != 0 && v16 == 4294967291LL )
      {
        xxxMNSwitchToAlternateMenu(a3, a2);
        v16 = 0xFFFFFFFFLL;
      }
      if ( v16 == 0xFFFFFFFFLL )
      {
        xxxMNButtonDown(a3, a2, v72, 1LL);
        goto LABEL_135;
      }
      if ( (unsigned int)IsMFMWFPWindow(v16) )
      {
        xxxSendMessage(v71);
LABEL_135:
        if ( (*(_DWORD *)(a2 + 8) & 0x100) == 0 )
          xxxMNRemoveMessage(*(_DWORD *)(a1 + 8), 516);
        goto LABEL_137;
      }
    }
LABEL_133:
    xxxMNCancel(a2);
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
    goto LABEL_75;
  }
LABEL_97:
  v50 = *(_DWORD *)(a2 + 8);
  if ( (v50 & 8) == 0 )
    return 1LL;
  if ( (v50 & 0x400) != 0 )
  {
    UnlockMFMWFPWindow(a2 + 64);
    v51 = *(_DWORD *)(a2 + 8) & 0xFFFFFF7F;
    *(_DWORD *)(a2 + 8) = v51;
    if ( (v51 & 0x2000) != 0 )
    {
      *(_DWORD *)(a2 + 8) = v51 & 0xFFFFDFF7;
      return 1LL;
    }
  }
  AdjustMouseCoordinates(*(struct tagWND **)(**a3 + 16LL), &v73);
  v52 = WORD1(v73);
  v53 = (unsigned int)v73;
  *(_DWORD *)(a2 + 12) = (__int16)v73;
  *(_DWORD *)(a2 + 16) = v52;
  v54 = xxxMNFindWindowFromPoint(a3, &v72, v53);
  v74 = IsMFMWFPWindow(v54);
  v55 = v74;
  if ( v74 )
  {
    v56 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22, v24);
    v81 = *(_QWORD *)(v56 + 408);
    *(_QWORD *)(v56 + 408) = &v81;
    v82 = v54;
    if ( v54 )
      HMLockObject(v54);
  }
  v23 = (_DWORD *)**a3;
  if ( (*v23 & 2) != 0 )
  {
    if ( !v54 && !v72 )
      goto LABEL_133;
    if ( v54 == 0xFFFFFFFF )
    {
      if ( (*(_DWORD *)**a3 & 4) != 0 && (*(_DWORD *)**a3 & 0x80u) != 0 )
        goto LABEL_133;
LABEL_118:
      xxxMNButtonUp(a3, a2, v72, 0LL);
      goto LABEL_137;
    }
    goto LABEL_119;
  }
  if ( v54 || v72 || (*(_DWORD *)**a3 & 0x200) != 0 )
  {
    v23 = (_DWORD *)**a3;
    *v23 &= ~0x200u;
    if ( v54 == 0xFFFFFFFF )
      goto LABEL_118;
LABEL_119:
    if ( v55 )
      xxxSendMessage(v54);
    else
      *(_DWORD *)(a2 + 8) &= 0xFFFFFFB7;
    goto LABEL_137;
  }
  v57 = *(_QWORD *)(**a3 + 16LL);
  v58 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22, v24);
  v78 = *(_QWORD *)(v58 + 408);
  *(_QWORD *)(v58 + 408) = &v78;
  v79 = v57;
  if ( v57 )
    HMLockObject(v57);
  xxxSendMessage(*(_QWORD *)(**a3 + 16LL));
  ThreadUnlock1(v60, v59, v61);
LABEL_137:
  if ( v74 )
    goto LABEL_138;
  return 1LL;
}
