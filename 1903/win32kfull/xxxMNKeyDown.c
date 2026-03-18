/*
 * XREFs of xxxMNKeyDown @ 0x1C02248B0
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C0220464 (xxxHandleMenuMessages.c)
 *     xxxMNChar @ 0x1C0223788 (xxxMNChar.c)
 *     xxxMNKeyDown @ 0x1C02248B0 (xxxMNKeyDown.c)
 *     xxxMenuWindowProc @ 0x1C0227440 (xxxMenuWindowProc.c)
 * Callees:
 *     _GetSubMenu @ 0x1C000C820 (_GetSubMenu.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     xxxSendMessage @ 0x1C009BAB0 (xxxSendMessage.c)
 *     HMValidateHandleNoRip @ 0x1C00B4C50 (HMValidateHandleNoRip.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C0106608 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C011022C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C01154C4 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ?GetMenuInheritedContextHelpId@@YAKAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C02217B4 (-GetMenuInheritedContextHelpId@@YAKAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x1C0222274 (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITE.c)
 *     LockPopupMenu @ 0x1C0222BFC (LockPopupMenu.c)
 *     MNGetpItem @ 0x1C0222D2C (MNGetpItem.c)
 *     UnlockPopupMenu @ 0x1C0223038 (UnlockPopupMenu.c)
 *     xxxMNCancel @ 0x1C0223434 (xxxMNCancel.c)
 *     xxxMNCloseHierarchy @ 0x1C0223C00 (xxxMNCloseHierarchy.c)
 *     xxxMNKeyDown @ 0x1C02248B0 (xxxMNKeyDown.c)
 *     xxxMNOpenHierarchy @ 0x1C0225610 (xxxMNOpenHierarchy.c)
 *     xxxMNSelectItem @ 0x1C0226564 (xxxMNSelectItem.c)
 *     xxxMNSetCapture @ 0x1C0226CF8 (xxxMNSetCapture.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C0227184 (xxxMNSwitchToAlternateMenu.c)
 *     xxxSendHelpMessage @ 0x1C024888C (xxxSendHelpMessage.c)
 *     MNFindItemInColumn @ 0x1C024891C (MNFindItemInColumn.c)
 *     MNFindNextValidItem @ 0x1C0248A2C (MNFindNextValidItem.c)
 */

_QWORD *__fastcall xxxMNKeyDown(__int64 **a1, __int64 a2, unsigned int a3)
{
  int v6; // r15d
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // ecx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rsi
  int MenuInheritedContextHelpId; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r8
  unsigned int v21; // edi
  int v22; // r13d
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // r9
  __int64 v26; // r8
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  _QWORD *v31; // rcx
  __int64 v32; // rbx
  __int64 v33; // rax
  __int64 *v34; // rax
  __int64 v35; // rcx
  __int64 *SubMenu; // rax
  __int64 v37; // r15
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  _QWORD *v48; // r15
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rax
  __int64 v53; // rsi
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rax
  int v58; // r12d
  __int64 v59; // rcx
  __int64 *v60; // rax
  __int64 *v61; // rax
  __int64 *v62; // rax
  __int64 v63; // rdx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 *v69; // rax
  __int64 v70; // rdx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 *v73; // rax
  __int64 v74; // rdx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  _QWORD *v80; // rdx
  __int64 v81; // rbx
  __int64 ThreadWin32Thread; // rax
  _QWORD *v83; // r8
  int v84; // ecx
  __int64 v86; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v87; // [rsp+38h] [rbp-C8h]
  __int64 v88; // [rsp+40h] [rbp-C0h]
  int v89; // [rsp+48h] [rbp-B8h]
  _QWORD v90[2]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v91[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v92; // [rsp+70h] [rbp-90h]
  __int128 v93; // [rsp+78h] [rbp-88h]
  __int64 v94; // [rsp+88h] [rbp-78h] BYREF
  __int64 v95; // [rsp+90h] [rbp-70h]
  __int64 v96; // [rsp+98h] [rbp-68h]
  __int64 v97; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD *v98; // [rsp+A8h] [rbp-58h]
  __int64 v99; // [rsp+B0h] [rbp-50h]
  _QWORD v100[3]; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v101; // [rsp+D0h] [rbp-30h]
  __int128 v102; // [rsp+E0h] [rbp-20h]
  _QWORD v103[3]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v104[3]; // [rsp+108h] [rbp+8h] BYREF
  _QWORD v105[4]; // [rsp+120h] [rbp+20h] BYREF
  __int128 v106; // [rsp+140h] [rbp+40h] BYREF
  _OWORD v107[4]; // [rsp+150h] [rbp+50h] BYREF
  __int64 v108; // [rsp+1A8h] [rbp+A8h]
  int v109; // [rsp+1B0h] [rbp+B0h]
  int v110; // [rsp+1B8h] [rbp+B8h]

  v86 = 0LL;
  v87 = 0LL;
  v88 = 0LL;
  v6 = 0;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v90, 0LL);
  v10 = *(_DWORD *)(a2 + 8);
  if ( (v10 & 8) != 0 && a3 != 112 )
  {
    if ( (v10 & 0x80u) != 0 && a3 == 27 )
      *(_DWORD *)(a2 + 8) = v10 | 0x2000;
    return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v90, v7, v8, v9);
  }
  switch ( a3 )
  {
    case 0xDu:
      if ( *(_DWORD *)(**a1 + 80) < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) + 44LL) )
      {
        v83 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 40) + 88LL) + 96LL * *(unsigned int *)(**a1 + 80));
        v84 = *(_DWORD *)(*v83 + 4LL) & 3;
        if ( v83[2] )
        {
          if ( !v84 )
            goto LABEL_116;
        }
        else if ( !v84 )
        {
          xxxMNDismissWithNotify(a2, (__int64)a1, (__int64)v83, *(_DWORD *)(**a1 + 80));
          return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v90, v7, v8, v9);
        }
      }
      goto LABEL_119;
    case 0x12u:
LABEL_15:
      if ( (v10 & 0x100) == 0 )
      {
        xxxMNCancel(a2, 0, 0, 0LL);
        if ( a3 == 18 )
          *(_DWORD *)(a2 + 8) &= ~0x20u;
      }
      return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v90, v7, v8, v9);
    case 0x1Bu:
      if ( (*(_DWORD *)**a1 & 1) == 0 )
      {
        v80 = (_QWORD *)**a1;
        if ( v80 != (_QWORD *)v80[8]
          && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 64) + 8LL) + 40LL) + 31LL) & 0x20) == 0 )
        {
          if ( (*(_DWORD *)**a1 & 2) != 0 )
          {
            v80 = (_QWORD *)**a1;
            if ( v80[4] == v80[1] )
            {
              SmartObjStackRefBase<tagPOPUPMENU>::Init(v91, *(_QWORD *)(**a1 + 64));
              **(_DWORD **)v91[0] &= ~0x400u;
              if ( (*(_DWORD *)(a2 + 8) & 0x100) != 0 )
                xxxMNCancel(a2, 0, 0, 0LL);
              else
                xxxMNCloseHierarchy(*(_QWORD *)v91[0], a2);
              v31 = v91;
LABEL_55:
              SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v31, v28, v29, v30);
              return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v90, v7, v8, v9);
            }
          }
          v81 = *(_QWORD *)(**a1 + 32);
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)v80, v8, v9);
          v86 = *(_QWORD *)(ThreadWin32Thread + 408);
          *(_QWORD *)(ThreadWin32Thread + 408) = &v86;
          v87 = v81;
          if ( v81 )
            HMLockObject(v81);
          goto LABEL_64;
        }
      }
LABEL_119:
      xxxMNCancel(a2, 0, 0, 0LL);
      return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v90, v7, v8, v9);
  }
  if ( a3 != 37 )
  {
    if ( a3 == 38 )
      goto LABEL_22;
    if ( a3 != 39 )
    {
      if ( a3 != 40 )
      {
        if ( a3 != 112 )
        {
          if ( a3 != 121 )
            return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v90, v7, v8, v9);
          goto LABEL_15;
        }
        v11 = MNGetpItem((__int64)a1, *(_DWORD *)(**a1 + 80));
        v7 = **a1;
        if ( !*(_QWORD *)(v7 + 8) || !v11 )
          return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v90, v7, v8, v9);
        v12 = **a1;
        v13 = *(_QWORD *)(v12 + 8);
        v14 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12, v8, v9);
        v86 = *(_QWORD *)(v14 + 408);
        *(_QWORD *)(v14 + 408) = &v86;
        v87 = v13;
        HMLockObject(v13);
        v15 = **a1;
        MenuInheritedContextHelpId = GetMenuInheritedContextHelpId(a1);
        xxxSendHelpMessage(*(_QWORD *)(v15 + 8), MenuInheritedContextHelpId);
LABEL_21:
        ThreadUnlock1(v18, v17, v19);
        return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v90, v7, v8, v9);
      }
LABEL_22:
      if ( (*(_DWORD *)**a1 & 1) == 0 )
      {
        v20 = -1LL;
        if ( a3 != 38 )
          v20 = 1LL;
        MNFindNextValidItem(*(_QWORD *)(**a1 + 40), *(unsigned int *)(**a1 + 80), v20, 0LL);
        goto LABEL_61;
      }
LABEL_116:
      xxxMNOpenHierarchy(a1, a2);
      return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v90, v7, v8, v9);
    }
  }
  v21 = 1;
  v22 = 39;
  v23 = **a1;
  v89 = (*(_DWORD *)v23 >> 22) & 1;
  v110 = (*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v23 + 16) + 40LL) + 26LL) >> 6) & 1;
  if ( v110 != v89 )
  {
    v24 = 39;
    if ( a3 != 37 )
      v24 = 37;
    a3 = v24;
  }
  if ( (*(_DWORD *)**a1 & 1) != 0
    || a3 != 39
    || *(_QWORD *)(**a1 + 24)
    || xxxMNOpenHierarchy(a1, a2) != -1 && (*(_DWORD *)**a1 & 0x20) == 0 )
  {
    if ( *(_QWORD *)(**a1 + 24) )
    {
      v109 = 1;
      if ( a3 == 37 && (*(_DWORD *)**a1 & 1) == 0 )
      {
        xxxMNCloseHierarchy(**a1, a2);
        return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v90, v7, v8, v9);
      }
    }
    else
    {
      if ( (*(_DWORD *)**a1 & 0x400) != 0 )
        v6 = 1;
      v109 = v6;
    }
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v90, **a1);
    if ( (*(_DWORD *)**a1 & 2) == 0 || (v25 = 1LL, **a1 != *(_QWORD *)(**a1 + 64)) )
      v25 = 0LL;
    v26 = 0xFFFFFFFFLL;
    if ( a3 != 37 )
      v26 = 1LL;
    v27 = MNFindItemInColumn(*(_QWORD *)(**a1 + 40), *(unsigned int *)(**a1 + 80), v26, v25);
    v7 = 0xFFFFFFFFLL;
    if ( v27 != -1 )
    {
LABEL_59:
      if ( (*(_DWORD *)**a1 & 1) == 0 )
      {
        if ( v27 == -1 )
          return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v90, v7, v8, v9);
LABEL_61:
        xxxMNSelectItem(a1, a2);
        return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v90, v7, v8, v9);
      }
      if ( v27 == -1 )
      {
        if ( *(_QWORD *)(**a1 + 8) && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(**a1 + 8) + 40LL) + 30LL) & 8) != 0 )
        {
          v94 = 0LL;
          v95 = 0LL;
          v96 = 0LL;
          v97 = 0LL;
          v98 = 0LL;
          v99 = 0LL;
          v34 = *a1;
          v93 = 0LL;
          v35 = **a1;
          if ( (*(_DWORD *)*v34 & 4) != 0 )
            SubMenu = (__int64 *)GetSubMenu(*(_QWORD *)(v35 + 40));
          else
            SubMenu = *(__int64 **)(v35 + 40);
          if ( SubMenu )
            v92 = *SubMenu;
          else
            v92 = 0LL;
          v37 = *(_QWORD *)(**a1 + 8);
          v38 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v7, v8, v9);
          v86 = *(_QWORD *)(v38 + 408);
          *(_QWORD *)(v38 + 408) = &v86;
          v87 = v37;
          if ( v37 )
            HMLockObject(v37);
          xxxSendMessage(*(_QWORD *)(**a1 + 8));
          ThreadUnlock1(v40, v39, v41);
          LOBYTE(v42) = 1;
          v48 = (_QWORD *)HMValidateHandleNoSecure(*((unsigned __int64 *)&v93 + 1), v42, v43, v44);
          if ( v48 )
          {
            if ( v48[2] == gptiCurrent )
            {
              LOBYTE(v45) = 2;
              v108 = HMValidateHandleNoRip(v93, v45, v46, v47);
              if ( v108 )
              {
                v52 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v49, v50, v51);
                v53 = v108;
                v94 = *(_QWORD *)(v52 + 408);
                *(_QWORD *)(v52 + 408) = &v94;
                v95 = v108;
                HMLockObject(v108);
                v57 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v54, v55, v56);
                v97 = *(_QWORD *)(v57 + 408);
                *(_QWORD *)(v57 + 408) = &v97;
                v98 = v48;
                HMLockObject(v48);
                v58 = v109;
                if ( (*(_BYTE *)(v48[5] + 31LL) & 0x20) != 0 )
                  v58 = 1;
                xxxMNSelectItem(a1, a2);
                *(_DWORD *)(a2 + 8) |= 2u;
                UnlockPopupMenu((__int64)a1, (__int64 *)(**a1 + 48));
                *(_DWORD *)**a1 &= ~0x80u;
                v59 = v48[20];
                if ( v59 && GetSubMenu(v59) == v108 )
                  v53 = v48[20];
                UnlockPopupMenu((__int64)a1, (__int64 *)(**a1 + 40));
                v60 = *a1;
                *((_QWORD *)&v101 + 1) = v48;
                *(_QWORD *)&v101 = *v60 + 8;
                v106 = v101;
                HMAssignmentLock(&v106);
                v61 = *a1;
                *((_QWORD *)&v102 + 1) = v48;
                *(_QWORD *)&v102 = *v61 + 16;
                v107[0] = v102;
                HMAssignmentLock(v107);
                SmartObjStackRefBase<tagMENU>::Init(v103, v53);
                v62 = *a1;
                v103[2] = 0LL;
                LockPopupMenu((__int64)a1, (__int64 *)(*v62 + 40), (__int64)v103);
                SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v103, v63, v64, v65);
                if ( (*(_DWORD *)(a2 + 8) & 0x100) == 0 )
                {
                  *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 396LL) &= ~0x100000u;
                  xxxMNSetCapture(a1, a2);
                }
                if ( (*(_BYTE *)(v48[5] + 31LL) & 0x40) == 0 )
                {
                  v67 = **a1;
                  if ( *(_QWORD *)(v67 + 40) )
                  {
                    if ( v48[21] == *(_QWORD *)(**a1 + 40) )
                    {
                      SmartObjStackRefBase<tagMENU>::Init(v104, v48[20]);
                      v69 = *a1;
                      v104[2] = 0LL;
                      LockPopupMenu((__int64)a1, (__int64 *)(*v69 + 48), (__int64)v104);
                      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v104, v70, v71, v72);
                      *(_DWORD *)(a2 + 8) &= ~2u;
                    }
                    else
                    {
                      SmartObjStackRefBase<tagMENU>::Init(v105, v48[21]);
                      v73 = *a1;
                      v105[2] = 0LL;
                      LockPopupMenu((__int64)a1, (__int64 *)(*v73 + 48), (__int64)v105);
                      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v105, v74, v75, v76);
                    }
                  }
                }
                ThreadUnlock1(v67, v66, v68);
                ThreadUnlock1(v78, v77, v79);
                *(_DWORD *)**a1 ^= (*(_DWORD *)**a1 ^ (2 * *(_DWORD *)(a2 + 8))) & 4;
LABEL_97:
                if ( *(_QWORD *)(*(_QWORD *)v90[0] + 24LL) )
                  xxxMNCloseHierarchy(*(_QWORD *)v90[0], a2);
                xxxMNSelectItem(a1, a2);
                if ( v58 )
                  goto LABEL_116;
                return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v90, v7, v8, v9);
              }
            }
          }
        }
        if ( !(unsigned int)xxxMNSwitchToAlternateMenu(a1, a2) )
          return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v90, v7, v8, v9);
        if ( a3 != 39 )
          v21 = -1;
        if ( (unsigned int)MNFindNextValidItem(*(_QWORD *)(**a1 + 40), 0xFFFFFFFFLL, v21, 0LL) == -1 )
          return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v90, v7, v8, v9);
      }
      v58 = v109;
      goto LABEL_97;
    }
    if ( (*(_DWORD *)**a1 & 2) != 0 )
    {
      v8 = **a1;
      if ( *(_QWORD *)(v8 + 32) == *(_QWORD *)(v8 + 8) )
      {
        if ( v110 != v89 )
        {
          if ( a3 != 37 )
            v22 = 37;
          a3 = v22;
        }
        SmartObjStackRefBase<tagPOPUPMENU>::Init(v100, *(_QWORD *)(**a1 + 64));
        xxxMNKeyDown(v100, a2, a3);
        v31 = v100;
        goto LABEL_55;
      }
    }
    v7 = **a1;
    if ( v7 == *(_QWORD *)(v7 + 64) )
    {
      if ( (*(_DWORD *)v7 & 1) == 0 )
        return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v90, v7, v8, v9);
      v7 = 0xFFFFFFFFLL;
      goto LABEL_59;
    }
    v32 = *(_QWORD *)(v7 + 32);
    v33 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v7, v8, v9);
    v86 = *(_QWORD *)(v33 + 408);
    *(_QWORD *)(v33 + 408) = &v86;
    v87 = v32;
    if ( v32 )
      HMLockObject(v32);
LABEL_64:
    xxxSendMessage(*(_QWORD *)(**a1 + 32));
    goto LABEL_21;
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v90, v7, v8, v9);
}
