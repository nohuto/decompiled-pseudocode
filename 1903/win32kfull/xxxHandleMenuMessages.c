/*
 * XREFs of xxxHandleMenuMessages @ 0x1C0220464
 * Callers:
 *     xxxMNLoop @ 0x1C0220E80 (xxxMNLoop.c)
 *     xxxCallHandleMenuMessages @ 0x1C02230F0 (xxxCallHandleMenuMessages.c)
 * Callees:
 *     xxxTranslateMessage @ 0x1C00136B0 (xxxTranslateMessage.c)
 *     _PostMessage @ 0x1C0015330 (_PostMessage.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     PtInRect @ 0x1C0026FB4 (PtInRect.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C0096C2C (safe_cast_fnid_to_PMENUWND.c)
 *     xxxSendMessage @ 0x1C009BAB0 (xxxSendMessage.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C011022C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C01154C4 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     IsPointerPrimary @ 0x1C01F3258 (IsPointerPrimary.c)
 *     ?AdjustMouseCoordinates@@YAXPEAUtagWND@@PEA_J@Z @ 0x1C0220154 (-AdjustMouseCoordinates@@YAXPEAUtagWND@@PEA_J@Z.c)
 *     ?xxxMNRemoveMessage@@YAHII@Z @ 0x1C0220204 (-xxxMNRemoveMessage@@YAHII@Z.c)
 *     GetMenuStateWindow @ 0x1C0222B40 (GetMenuStateWindow.c)
 *     IsMFMWFPWindow @ 0x1C0222B70 (IsMFMWFPWindow.c)
 *     LockMFMWFPWindow @ 0x1C0222B98 (LockMFMWFPWindow.c)
 *     UnlockMFMWFPWindow @ 0x1C0223004 (UnlockMFMWFPWindow.c)
 *     xxxMNButtonDown @ 0x1C022321C (xxxMNButtonDown.c)
 *     xxxMNButtonUp @ 0x1C022331C (xxxMNButtonUp.c)
 *     xxxMNCancel @ 0x1C0223434 (xxxMNCancel.c)
 *     xxxMNChar @ 0x1C0223788 (xxxMNChar.c)
 *     xxxMNDoubleClick @ 0x1C0224190 (xxxMNDoubleClick.c)
 *     xxxMNFindWindowFromPoint @ 0x1C0224500 (xxxMNFindWindowFromPoint.c)
 *     xxxMNKeyDown @ 0x1C02248B0 (xxxMNKeyDown.c)
 *     xxxMNMouseMove @ 0x1C0225318 (xxxMNMouseMove.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C0227184 (xxxMNSwitchToAlternateMenu.c)
 */

__int64 __fastcall xxxHandleMenuMessages(__int64 a1, __int64 a2, __int64 **a3)
{
  __int64 v6; // r9
  __int64 v8; // r15
  unsigned int v9; // eax
  unsigned int v10; // r14d
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // eax
  __int16 v15; // ecx^2
  __int64 v16; // r8
  __int64 v17; // r12
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  int v22; // eax
  unsigned int v23; // r15d
  __int64 v24; // rdx
  _DWORD *v25; // rcx
  __int64 v26; // r8
  unsigned int v27; // eax
  unsigned int v28; // eax
  unsigned int v29; // eax
  unsigned int v30; // eax
  int v31; // eax
  __int64 v32; // rbx
  __int64 v33; // rax
  ULONG_PTR v34; // rcx
  unsigned int v35; // eax
  unsigned int v36; // eax
  unsigned int v37; // eax
  unsigned int v38; // eax
  int v39; // r9d
  int v40; // eax
  int v41; // edx
  __int64 MenuStateWindow; // rax
  int v43; // r9d
  __int64 v44; // r14
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 ThreadWin32Thread; // rax
  unsigned int v49; // eax
  unsigned int v50; // eax
  unsigned int v51; // eax
  unsigned int v52; // eax
  int v53; // eax
  unsigned int v54; // eax
  __int16 v55; // ecx^2
  __int64 v56; // r8
  ULONG_PTR v57; // r14
  __int64 v58; // r9
  int v59; // r12d
  __int64 v60; // rax
  __int64 v61; // rbx
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  bool v66; // zf
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // rbx
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  ULONG_PTR v76; // rcx
  unsigned int v77; // [rsp+28h] [rbp-59h] BYREF
  __int64 v78; // [rsp+30h] [rbp-51h] BYREF
  int v79; // [rsp+38h] [rbp-49h]
  __int64 v80; // [rsp+40h] [rbp-41h] BYREF
  __int64 v81; // [rsp+48h] [rbp-39h]
  _QWORD v82[2]; // [rsp+50h] [rbp-31h] BYREF
  __int64 v83; // [rsp+60h] [rbp-21h] BYREF
  __int64 v84; // [rsp+68h] [rbp-19h]
  __int64 v85; // [rsp+70h] [rbp-11h]
  __int64 v86; // [rsp+78h] [rbp-9h] BYREF
  ULONG_PTR v87; // [rsp+80h] [rbp-1h]
  __int64 v88; // [rsp+88h] [rbp+7h]
  __int64 v89; // [rsp+90h] [rbp+Fh] BYREF
  __int64 v90; // [rsp+98h] [rbp+17h]
  __int64 v91; // [rsp+A0h] [rbp+1Fh]

  v86 = 0LL;
  v87 = 0LL;
  v88 = 0LL;
  v83 = 0LL;
  v84 = 0LL;
  v85 = 0LL;
  v6 = **a3;
  if ( !*(_QWORD *)(v6 + 40) )
    return 0LL;
  v8 = *(_QWORD *)(a1 + 24);
  v9 = *(_DWORD *)(a1 + 8);
  v10 = *(_DWORD *)(a1 + 16);
  v78 = v8;
  if ( v9 > 0x105 )
  {
    if ( v9 > 0x203 )
    {
      v49 = v9 - 516;
      if ( !v49 )
      {
LABEL_12:
        if ( (*(_DWORD *)**a3 & 0x40) != 0 )
          goto LABEL_13;
LABEL_139:
        *(_DWORD *)(a2 + 20) = -1;
        AdjustMouseCoordinates(*(struct tagWND **)(**a3 + 16), &v78, (__int64)a3, v6);
        if ( xxxMNFindWindowFromPoint(a3, &v77, (unsigned int)v78) )
        {
          v66 = (*(_DWORD *)(a2 + 8) & 0x100) == 0;
LABEL_141:
          if ( v66 )
            xxxMNRemoveMessage(*(_DWORD *)(a1 + 8), 0);
          return 1LL;
        }
LABEL_83:
        xxxMNCancel(a2);
        return 1LL;
      }
      v50 = v49 - 1;
      if ( v50 )
      {
        v51 = v50 - 1;
        if ( v51 )
        {
          v52 = v51 - 60;
          if ( (!v52 || v52 == 4)
            && IsPointerPrimary(gptiCurrent, *(_WORD *)(a1 + 16))
            && !xxxMNFindWindowFromPoint(a3, &v77, (unsigned int)v8) )
          {
            xxxMNCancel(a2);
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
      AdjustMouseCoordinates(*(struct tagWND **)(**a3 + 16), &v78, (__int64)a3, v6);
      v44 = xxxMNFindWindowFromPoint(a3, &v77, (unsigned int)v78);
      if ( !v44 && !v77 )
        goto LABEL_83;
      if ( (*(_DWORD *)**a3 & 2) != 0 && v44 == 4294967291LL )
      {
        xxxMNSwitchToAlternateMenu(a3, a2);
        v44 = 0xFFFFFFFFLL;
      }
      if ( v44 == 0xFFFFFFFFLL )
      {
        xxxMNDoubleClick(a2, a3, v77);
        return 1LL;
      }
      if ( !(unsigned int)IsMFMWFPWindow(v44) )
        goto LABEL_83;
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v45, v46, v47);
      v86 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v86;
      v87 = v44;
      if ( v44 )
        HMLockObject(v44);
      v34 = v44;
LABEL_87:
      xxxSendMessage(v34);
LABEL_138:
      ThreadUnlock1(v25, v24, v26);
      return 1LL;
    }
    v35 = v9 - 262;
    if ( v35 )
    {
      v36 = v35 - 18;
      if ( !v36 )
        return 1LL;
      v37 = v36 - 232;
      if ( v37 )
      {
        v38 = v37 - 1;
        if ( !v38 )
          goto LABEL_13;
        if ( v38 != 1 )
          return 0LL;
        goto LABEL_97;
      }
LABEL_64:
      v39 = *(_DWORD *)(a2 + 8);
      if ( (v39 & 0x400) != 0 && (v39 & 8) != 0 && (v39 & 0x80u) == 0 && (v39 & 0x40) == 0 )
      {
        if ( *(_QWORD *)(a2 + 64) )
        {
          v80 = *(_QWORD *)(a2 + 56);
          v81 = v80;
          v40 = *(_DWORD *)(gpsi + 2168LL);
          LODWORD(v80) = v80 - v40;
          LODWORD(v81) = v40 + v81;
          v41 = *(_DWORD *)(gpsi + 2172LL);
          HIDWORD(v80) -= v41;
          HIDWORD(v81) += v41;
          LODWORD(v78) = (__int16)v8;
          HIDWORD(v78) = SWORD1(v8);
          if ( !PtInRect(&v80, v78) )
          {
            MenuStateWindow = GetMenuStateWindow(a2);
            if ( MenuStateWindow )
            {
              *(_DWORD *)(a2 + 8) = v43 | 0x80;
              PostMessage(MenuStateWindow, 500, 0, 0);
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
    v27 = v9 - 166;
    if ( !v27 )
      goto LABEL_139;
    v28 = v27 - 90;
    if ( !v28 )
    {
LABEL_32:
      v31 = *(_DWORD *)(a2 + 8);
      if ( (v31 & 8) != 0 && v10 != 112 )
      {
        if ( (v31 & 0x80u) != 0 && v10 == 27 )
          *(_DWORD *)(a2 + 8) = v31 | 0x2000;
        return 1LL;
      }
      *(_DWORD *)(a2 + 20) = 1;
      if ( v10 == 3 )
      {
LABEL_46:
        if ( !*(_QWORD *)(**a3 + 56) )
        {
          xxxMNKeyDown(a3, a2, v10);
          return 1LL;
        }
        goto LABEL_47;
      }
      if ( v10 == 9 )
      {
        if ( (*(_DWORD *)**a3 & 1) != 0 && !*(_QWORD *)(**a3 + 56) )
          goto LABEL_83;
      }
      else if ( v10 == 13 || v10 == 18 || v10 == 27 || v10 > 0x24 && (v10 <= 0x28 || v10 == 112 || v10 == 121) )
      {
        goto LABEL_46;
      }
LABEL_54:
      if ( (*(_DWORD *)(a2 + 8) & 0x100) == 0 )
        xxxTranslateMessage(a1, 0);
      return 1LL;
    }
    v29 = v28 - 1;
    if ( !v29 )
      goto LABEL_54;
    v30 = v29 - 1;
    if ( v30 )
    {
      if ( v30 != 2 )
        return 0LL;
      goto LABEL_32;
    }
LABEL_73:
    if ( !*(_QWORD *)(**a3 + 56) )
    {
      xxxMNChar(a3, a2, v10);
      return 1LL;
    }
LABEL_47:
    v32 = *(_QWORD *)(**a3 + 56);
    v33 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, (__int64)a3, v6);
    v83 = *(_QWORD *)(v33 + 408);
    *(_QWORD *)(v33 + 408) = &v83;
    v84 = v32;
    HMLockObject(v32);
    v34 = *(_QWORD *)(**a3 + 56);
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
          SmartObjStackRefBase<tagPOPUPMENU>::Init(v82, 0LL);
          v67 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(**a3 + 56));
          if ( v67 )
          {
            SmartObjStackRefBase<tagPOPUPMENU>::operator=(v82, *(_QWORD *)(v67 + 8));
            if ( *(_QWORD *)v82[0] )
            {
              if ( *(int *)(*(_QWORD *)v82[0] + 80LL) >= 0 && *(_QWORD *)(*(_QWORD *)v82[0] + 8LL) )
              {
                v89 = 0LL;
                v90 = 0LL;
                v91 = 0LL;
                v71 = *(_QWORD *)(*(_QWORD *)v82[0] + 8LL);
                v72 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v68, v69, v70);
                v89 = *(_QWORD *)(v72 + 408);
                *(_QWORD *)(v72 + 408) = &v89;
                v90 = v71;
                HMLockObject(v71);
                xxxSendMessage(*(_QWORD *)(*(_QWORD *)v82[0] + 8LL));
                ThreadUnlock1(v74, v73, v75);
              }
            }
          }
          SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v82, v68, v69, v70);
        }
        return 0LL;
      }
      v66 = (*(_DWORD *)(a2 + 8) & 0x100) == 0;
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
    AdjustMouseCoordinates(*(struct tagWND **)(**a3 + 16), &v78, (__int64)a3, v6);
    v15 = WORD1(v78);
    v16 = (unsigned int)v78;
    *(_DWORD *)(a2 + 12) = (__int16)v78;
    *(_DWORD *)(a2 + 16) = v15;
    v17 = xxxMNFindWindowFromPoint(a3, &v77, v16);
    v79 = IsMFMWFPWindow(v17);
    if ( v79 )
    {
      v21 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v18, v19, v20);
      v86 = *(_QWORD *)(v21 + 408);
      *(_QWORD *)(v21 + 408) = &v86;
      v87 = v17;
      if ( v17 )
        HMLockObject(v17);
    }
    v22 = *(_DWORD *)(a2 + 8);
    v23 = v77;
    if ( (v22 & 0x400) != 0 )
    {
      *(_QWORD *)(a2 + 56) = *(_QWORD *)(a2 + 12);
      *(_DWORD *)(a2 + 72) = v23;
      LockMFMWFPWindow(a2 + 64, v17);
      v22 = *(_DWORD *)(a2 + 8);
    }
    if ( (v22 & 0x500) != 0 )
      *(_DWORD *)(a2 + 76) = ((v10 & 2) != 0) + 1;
    if ( v17 || v23 )
    {
      if ( (*(_DWORD *)**a3 & 2) != 0 && v17 == 4294967291LL )
      {
        xxxMNSwitchToAlternateMenu(a3, a2);
        v17 = 0xFFFFFFFFLL;
      }
      if ( v17 == 0xFFFFFFFFLL )
      {
        xxxMNButtonDown(a3, a2, v77, 1LL);
        goto LABEL_135;
      }
      if ( (unsigned int)IsMFMWFPWindow(v17) )
      {
        xxxSendMessage(v76);
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
  v53 = *(_DWORD *)(a2 + 8);
  if ( (v53 & 8) == 0 )
    return 1LL;
  if ( (v53 & 0x400) != 0 )
  {
    UnlockMFMWFPWindow(a2 + 64);
    v54 = *(_DWORD *)(a2 + 8) & 0xFFFFFF7F;
    *(_DWORD *)(a2 + 8) = v54;
    if ( (v54 & 0x2000) != 0 )
    {
      *(_DWORD *)(a2 + 8) = v54 & 0xFFFFDFF7;
      return 1LL;
    }
  }
  AdjustMouseCoordinates(*(struct tagWND **)(**a3 + 16), &v78, (__int64)a3, v6);
  v55 = WORD1(v78);
  v56 = (unsigned int)v78;
  *(_DWORD *)(a2 + 12) = (__int16)v78;
  *(_DWORD *)(a2 + 16) = v55;
  v57 = xxxMNFindWindowFromPoint(a3, &v77, v56);
  v79 = IsMFMWFPWindow(v57);
  v59 = v79;
  if ( v79 )
  {
    v60 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24, v26, v58);
    v86 = *(_QWORD *)(v60 + 408);
    *(_QWORD *)(v60 + 408) = &v86;
    v87 = v57;
    if ( v57 )
      HMLockObject(v57);
  }
  v25 = (_DWORD *)**a3;
  if ( (*v25 & 2) != 0 )
  {
    if ( !v57 && !v77 )
      goto LABEL_133;
    if ( v57 == 0xFFFFFFFF )
    {
      if ( (*(_DWORD *)**a3 & 4) != 0 && (*(_DWORD *)**a3 & 0x80u) != 0 )
        goto LABEL_133;
LABEL_118:
      xxxMNButtonUp(a3, a2, v77, 0LL);
      goto LABEL_137;
    }
    goto LABEL_119;
  }
  if ( v57 || v77 || (*(_DWORD *)**a3 & 0x200) != 0 )
  {
    v25 = (_DWORD *)**a3;
    *v25 &= ~0x200u;
    if ( v57 == 0xFFFFFFFF )
      goto LABEL_118;
LABEL_119:
    if ( v59 )
      xxxSendMessage(v57);
    else
      *(_DWORD *)(a2 + 8) &= 0xFFFFFFB7;
    goto LABEL_137;
  }
  v61 = *(_QWORD *)(**a3 + 16);
  v62 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24, v26, v58);
  v83 = *(_QWORD *)(v62 + 408);
  *(_QWORD *)(v62 + 408) = &v83;
  v84 = v61;
  if ( v61 )
    HMLockObject(v61);
  xxxSendMessage(*(_QWORD *)(**a3 + 16));
  ThreadUnlock1(v64, v63, v65);
LABEL_137:
  if ( v79 )
    goto LABEL_138;
  return 1LL;
}
