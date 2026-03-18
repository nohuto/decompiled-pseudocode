/*
 * XREFs of xxxMNKeyDown @ 0x1C0224370
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C021FF24 (xxxHandleMenuMessages.c)
 *     xxxMNChar @ 0x1C0223248 (xxxMNChar.c)
 *     xxxMNKeyDown @ 0x1C0224370 (xxxMNKeyDown.c)
 *     xxxMenuWindowProc @ 0x1C0226F00 (xxxMenuWindowProc.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxSendMessage @ 0x1C003C880 (xxxSendMessage.c)
 *     HMValidateHandleNoRip @ 0x1C00559FC (HMValidateHandleNoRip.c)
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E0868 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00EB5EC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C00EFC04 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     _GetSubMenu @ 0x1C012E4C0 (_GetSubMenu.c)
 *     ?GetMenuInheritedContextHelpId@@YAKAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C0221274 (-GetMenuInheritedContextHelpId@@YAKAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x1C0221D34 (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITE.c)
 *     LockPopupMenu @ 0x1C02226BC (LockPopupMenu.c)
 *     MNGetpItem @ 0x1C02227EC (MNGetpItem.c)
 *     UnlockPopupMenu @ 0x1C0222AF8 (UnlockPopupMenu.c)
 *     xxxMNCancel @ 0x1C0222EF4 (xxxMNCancel.c)
 *     xxxMNCloseHierarchy @ 0x1C02236C0 (xxxMNCloseHierarchy.c)
 *     xxxMNKeyDown @ 0x1C0224370 (xxxMNKeyDown.c)
 *     xxxMNOpenHierarchy @ 0x1C02250D0 (xxxMNOpenHierarchy.c)
 *     xxxMNSelectItem @ 0x1C0226024 (xxxMNSelectItem.c)
 *     xxxMNSetCapture @ 0x1C02267B8 (xxxMNSetCapture.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C0226C44 (xxxMNSwitchToAlternateMenu.c)
 *     xxxSendHelpMessage @ 0x1C024814C (xxxSendHelpMessage.c)
 *     MNFindItemInColumn @ 0x1C02481DC (MNFindItemInColumn.c)
 *     MNFindNextValidItem @ 0x1C02482EC (MNFindNextValidItem.c)
 */

_QWORD *__fastcall xxxMNKeyDown(__int64 **a1, __int64 a2, unsigned int a3)
{
  int v6; // r15d
  __int64 v7; // rdx
  __int64 v8; // r8
  int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rsi
  int MenuInheritedContextHelpId; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r8
  unsigned int v20; // edi
  int v21; // r13d
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // r9
  __int64 v25; // r8
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // r8
  _QWORD *v29; // rcx
  __int64 v30; // rbx
  __int64 v31; // rax
  __int64 *v32; // rax
  __int64 v33; // rcx
  __int64 *SubMenu; // rax
  __int64 v35; // r15
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rdx
  __int64 v41; // r8
  _QWORD *v42; // r15
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // rax
  __int64 v46; // rsi
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // rax
  int v50; // r12d
  __int64 v51; // rcx
  __int64 *v52; // rax
  __int64 *v53; // rax
  __int64 *v54; // rax
  __int64 v55; // rdx
  __int64 v56; // r8
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 *v60; // rax
  __int64 v61; // rdx
  __int64 v62; // r8
  __int64 *v63; // rax
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  _QWORD *v69; // rdx
  __int64 v70; // rbx
  __int64 ThreadWin32Thread; // rax
  _QWORD *v72; // r8
  int v73; // ecx
  __int64 v75; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v76; // [rsp+38h] [rbp-C8h]
  __int64 v77; // [rsp+40h] [rbp-C0h]
  int v78; // [rsp+48h] [rbp-B8h]
  _QWORD v79[2]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v80[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v81; // [rsp+70h] [rbp-90h]
  __int128 v82; // [rsp+78h] [rbp-88h]
  __int64 v83; // [rsp+88h] [rbp-78h] BYREF
  __int64 v84; // [rsp+90h] [rbp-70h]
  __int64 v85; // [rsp+98h] [rbp-68h]
  __int64 v86; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD *v87; // [rsp+A8h] [rbp-58h]
  __int64 v88; // [rsp+B0h] [rbp-50h]
  _QWORD v89[3]; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v90; // [rsp+D0h] [rbp-30h]
  __int128 v91; // [rsp+E0h] [rbp-20h]
  _QWORD v92[3]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v93[3]; // [rsp+108h] [rbp+8h] BYREF
  _QWORD v94[4]; // [rsp+120h] [rbp+20h] BYREF
  __int128 v95; // [rsp+140h] [rbp+40h] BYREF
  _OWORD v96[4]; // [rsp+150h] [rbp+50h] BYREF
  __int64 v97; // [rsp+1A8h] [rbp+A8h]
  int v98; // [rsp+1B0h] [rbp+B0h]
  int v99; // [rsp+1B8h] [rbp+B8h]

  v75 = 0LL;
  v76 = 0LL;
  v77 = 0LL;
  v6 = 0;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v79, 0LL);
  v9 = *(_DWORD *)(a2 + 8);
  if ( (v9 & 8) != 0 && a3 != 112 )
  {
    if ( (v9 & 0x80u) != 0 && a3 == 27 )
      *(_DWORD *)(a2 + 8) = v9 | 0x2000;
    return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v79, v7, v8);
  }
  switch ( a3 )
  {
    case 0xDu:
      if ( *(_DWORD *)(**a1 + 80) < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) + 44LL) )
      {
        v72 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 40) + 88LL) + 96LL * *(unsigned int *)(**a1 + 80));
        v73 = *(_DWORD *)(*v72 + 4LL) & 3;
        if ( v72[2] )
        {
          if ( !v73 )
            goto LABEL_116;
        }
        else if ( !v73 )
        {
          xxxMNDismissWithNotify(a2, (__int64)a1, (__int64)v72, *(_DWORD *)(**a1 + 80));
          return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v79, v7, v8);
        }
      }
      goto LABEL_119;
    case 0x12u:
LABEL_15:
      if ( (v9 & 0x100) == 0 )
      {
        xxxMNCancel(a2, 0, 0, 0LL);
        if ( a3 == 18 )
          *(_DWORD *)(a2 + 8) &= ~0x20u;
      }
      return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v79, v7, v8);
    case 0x1Bu:
      if ( (*(_DWORD *)**a1 & 1) == 0 )
      {
        v69 = (_QWORD *)**a1;
        if ( v69 != (_QWORD *)v69[8]
          && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 64) + 8LL) + 40LL) + 31LL) & 0x20) == 0 )
        {
          if ( (*(_DWORD *)**a1 & 2) != 0 )
          {
            v69 = (_QWORD *)**a1;
            if ( v69[4] == v69[1] )
            {
              SmartObjStackRefBase<tagPOPUPMENU>::Init(v80, *(_QWORD *)(**a1 + 64));
              **(_DWORD **)v80[0] &= ~0x400u;
              if ( (*(_DWORD *)(a2 + 8) & 0x100) != 0 )
                xxxMNCancel(a2, 0, 0, 0LL);
              else
                xxxMNCloseHierarchy(*(_QWORD *)v80[0], a2);
              v29 = v80;
LABEL_55:
              SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v29, v27, v28);
              return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v79, v7, v8);
            }
          }
          v70 = *(_QWORD *)(**a1 + 32);
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)v69, v8);
          v75 = *(_QWORD *)(ThreadWin32Thread + 408);
          *(_QWORD *)(ThreadWin32Thread + 408) = &v75;
          v76 = v70;
          if ( v70 )
            HMLockObject(v70);
          goto LABEL_64;
        }
      }
LABEL_119:
      xxxMNCancel(a2, 0, 0, 0LL);
      return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v79, v7, v8);
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
            return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v79, v7, v8);
          goto LABEL_15;
        }
        v10 = MNGetpItem((__int64)a1, *(_DWORD *)(**a1 + 80));
        v7 = **a1;
        if ( !*(_QWORD *)(v7 + 8) || !v10 )
          return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v79, v7, v8);
        v11 = **a1;
        v12 = *(_QWORD *)(v11 + 8);
        v13 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v8);
        v75 = *(_QWORD *)(v13 + 408);
        *(_QWORD *)(v13 + 408) = &v75;
        v76 = v12;
        HMLockObject(v12);
        v14 = **a1;
        MenuInheritedContextHelpId = GetMenuInheritedContextHelpId(a1);
        xxxSendHelpMessage(*(_QWORD *)(v14 + 8), MenuInheritedContextHelpId);
LABEL_21:
        ThreadUnlock1(v17, v16, v18);
        return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v79, v7, v8);
      }
LABEL_22:
      if ( (*(_DWORD *)**a1 & 1) == 0 )
      {
        v19 = -1LL;
        if ( a3 != 38 )
          v19 = 1LL;
        MNFindNextValidItem(*(_QWORD *)(**a1 + 40), *(unsigned int *)(**a1 + 80), v19, 0LL);
        goto LABEL_61;
      }
LABEL_116:
      xxxMNOpenHierarchy(a1, a2);
      return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v79, v7, v8);
    }
  }
  v20 = 1;
  v21 = 39;
  v22 = **a1;
  v78 = (*(_DWORD *)v22 >> 22) & 1;
  v99 = (*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v22 + 16) + 40LL) + 26LL) >> 6) & 1;
  if ( v99 != v78 )
  {
    v23 = 39;
    if ( a3 != 37 )
      v23 = 37;
    a3 = v23;
  }
  if ( (*(_DWORD *)**a1 & 1) != 0
    || a3 != 39
    || *(_QWORD *)(**a1 + 24)
    || xxxMNOpenHierarchy(a1, a2) != -1 && (*(_DWORD *)**a1 & 0x20) == 0 )
  {
    if ( *(_QWORD *)(**a1 + 24) )
    {
      v98 = 1;
      if ( a3 == 37 && (*(_DWORD *)**a1 & 1) == 0 )
      {
        xxxMNCloseHierarchy(**a1, a2);
        return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v79, v7, v8);
      }
    }
    else
    {
      if ( (*(_DWORD *)**a1 & 0x400) != 0 )
        v6 = 1;
      v98 = v6;
    }
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v79, **a1);
    if ( (*(_DWORD *)**a1 & 2) == 0 || (v24 = 1LL, **a1 != *(_QWORD *)(**a1 + 64)) )
      v24 = 0LL;
    v25 = 0xFFFFFFFFLL;
    if ( a3 != 37 )
      v25 = 1LL;
    v26 = MNFindItemInColumn(*(_QWORD *)(**a1 + 40), *(unsigned int *)(**a1 + 80), v25, v24);
    v7 = 0xFFFFFFFFLL;
    if ( v26 != -1 )
    {
LABEL_59:
      if ( (*(_DWORD *)**a1 & 1) == 0 )
      {
        if ( v26 == -1 )
          return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v79, v7, v8);
LABEL_61:
        xxxMNSelectItem(a1, a2);
        return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v79, v7, v8);
      }
      if ( v26 == -1 )
      {
        if ( *(_QWORD *)(**a1 + 8) && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(**a1 + 8) + 40LL) + 30LL) & 8) != 0 )
        {
          v83 = 0LL;
          v84 = 0LL;
          v85 = 0LL;
          v86 = 0LL;
          v87 = 0LL;
          v88 = 0LL;
          v32 = *a1;
          v82 = 0LL;
          v33 = **a1;
          if ( (*(_DWORD *)*v32 & 4) != 0 )
            SubMenu = (__int64 *)GetSubMenu(*(_QWORD *)(v33 + 40));
          else
            SubMenu = *(__int64 **)(v33 + 40);
          if ( SubMenu )
            v81 = *SubMenu;
          else
            v81 = 0LL;
          v35 = *(_QWORD *)(**a1 + 8);
          v36 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v7, v8);
          v75 = *(_QWORD *)(v36 + 408);
          *(_QWORD *)(v36 + 408) = &v75;
          v76 = v35;
          if ( v35 )
            HMLockObject(v35);
          xxxSendMessage(*(_QWORD *)(**a1 + 8));
          ThreadUnlock1(v38, v37, v39);
          LOBYTE(v40) = 1;
          v42 = (_QWORD *)HMValidateHandleNoSecure(*((unsigned __int64 *)&v82 + 1), v40, v41);
          if ( v42 )
          {
            if ( v42[2] == gptiCurrent )
            {
              v97 = HMValidateHandleNoRip(v82, 2);
              if ( v97 )
              {
                v45 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v43, v44);
                v46 = v97;
                v83 = *(_QWORD *)(v45 + 408);
                *(_QWORD *)(v45 + 408) = &v83;
                v84 = v97;
                HMLockObject(v97);
                v49 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v47, v48);
                v86 = *(_QWORD *)(v49 + 408);
                *(_QWORD *)(v49 + 408) = &v86;
                v87 = v42;
                HMLockObject(v42);
                v50 = v98;
                if ( (*(_BYTE *)(v42[5] + 31LL) & 0x20) != 0 )
                  v50 = 1;
                xxxMNSelectItem(a1, a2);
                *(_DWORD *)(a2 + 8) |= 2u;
                UnlockPopupMenu((__int64)a1, (__int64 *)(**a1 + 48));
                *(_DWORD *)**a1 &= ~0x80u;
                v51 = v42[20];
                if ( v51 && GetSubMenu(v51) == v97 )
                  v46 = v42[20];
                UnlockPopupMenu((__int64)a1, (__int64 *)(**a1 + 40));
                v52 = *a1;
                *((_QWORD *)&v90 + 1) = v42;
                *(_QWORD *)&v90 = *v52 + 8;
                v95 = v90;
                HMAssignmentLock(&v95);
                v53 = *a1;
                *((_QWORD *)&v91 + 1) = v42;
                *(_QWORD *)&v91 = *v53 + 16;
                v96[0] = v91;
                HMAssignmentLock(v96);
                SmartObjStackRefBase<tagMENU>::Init(v92, v46);
                v54 = *a1;
                v92[2] = 0LL;
                LockPopupMenu((__int64)a1, (__int64 *)(*v54 + 40), (__int64)v92);
                SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v92, v55, v56);
                if ( (*(_DWORD *)(a2 + 8) & 0x100) == 0 )
                {
                  *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 396LL) &= ~0x100000u;
                  xxxMNSetCapture(a1, a2);
                }
                if ( (*(_BYTE *)(v42[5] + 31LL) & 0x40) == 0 )
                {
                  v58 = **a1;
                  if ( *(_QWORD *)(v58 + 40) )
                  {
                    if ( v42[21] == *(_QWORD *)(**a1 + 40) )
                    {
                      SmartObjStackRefBase<tagMENU>::Init(v93, v42[20]);
                      v60 = *a1;
                      v93[2] = 0LL;
                      LockPopupMenu((__int64)a1, (__int64 *)(*v60 + 48), (__int64)v93);
                      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v93, v61, v62);
                      *(_DWORD *)(a2 + 8) &= ~2u;
                    }
                    else
                    {
                      SmartObjStackRefBase<tagMENU>::Init(v94, v42[21]);
                      v63 = *a1;
                      v94[2] = 0LL;
                      LockPopupMenu((__int64)a1, (__int64 *)(*v63 + 48), (__int64)v94);
                      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v94, v64, v65);
                    }
                  }
                }
                ThreadUnlock1(v58, v57, v59);
                ThreadUnlock1(v67, v66, v68);
                *(_DWORD *)**a1 ^= (*(_DWORD *)**a1 ^ (2 * *(_DWORD *)(a2 + 8))) & 4;
LABEL_97:
                if ( *(_QWORD *)(*(_QWORD *)v79[0] + 24LL) )
                  xxxMNCloseHierarchy(*(_QWORD *)v79[0], a2);
                xxxMNSelectItem(a1, a2);
                if ( v50 )
                  goto LABEL_116;
                return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v79, v7, v8);
              }
            }
          }
        }
        if ( !(unsigned int)xxxMNSwitchToAlternateMenu(a1, a2) )
          return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v79, v7, v8);
        if ( a3 != 39 )
          v20 = -1;
        if ( (unsigned int)MNFindNextValidItem(*(_QWORD *)(**a1 + 40), 0xFFFFFFFFLL, v20, 0LL) == -1 )
          return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v79, v7, v8);
      }
      v50 = v98;
      goto LABEL_97;
    }
    if ( (*(_DWORD *)**a1 & 2) != 0 )
    {
      v8 = **a1;
      if ( *(_QWORD *)(v8 + 32) == *(_QWORD *)(v8 + 8) )
      {
        if ( v99 != v78 )
        {
          if ( a3 != 37 )
            v21 = 37;
          a3 = v21;
        }
        SmartObjStackRefBase<tagPOPUPMENU>::Init(v89, *(_QWORD *)(**a1 + 64));
        xxxMNKeyDown(v89, a2, a3);
        v29 = v89;
        goto LABEL_55;
      }
    }
    v7 = **a1;
    if ( v7 == *(_QWORD *)(v7 + 64) )
    {
      if ( (*(_DWORD *)v7 & 1) == 0 )
        return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v79, v7, v8);
      v7 = 0xFFFFFFFFLL;
      goto LABEL_59;
    }
    v30 = *(_QWORD *)(v7 + 32);
    v31 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v7, v8);
    v75 = *(_QWORD *)(v31 + 408);
    *(_QWORD *)(v31 + 408) = &v75;
    v76 = v30;
    if ( v30 )
      HMLockObject(v30);
LABEL_64:
    xxxSendMessage(*(_QWORD *)(**a1 + 32));
    goto LABEL_21;
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v79, v7, v8);
}
