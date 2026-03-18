/*
 * XREFs of xxxMNKeyDown @ 0x1C020CD34
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C0208A7C (xxxHandleMenuMessages.c)
 *     xxxMNChar @ 0x1C020BCC8 (xxxMNChar.c)
 *     xxxMNKeyDown @ 0x1C020CD34 (xxxMNKeyDown.c)
 *     xxxMenuWindowProc @ 0x1C020F6B0 (xxxMenuWindowProc.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxSendMessage @ 0x1C002CE20 (xxxSendMessage.c)
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     _GetSubMenu @ 0x1C00A6A3C (_GetSubMenu.c)
 *     HMValidateHandleNoRip @ 0x1C00B6440 (HMValidateHandleNoRip.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FBDF8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0102A84 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C010CEAC (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ?GetMenuInheritedContextHelpId@@YAKAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C0209D14 (-GetMenuInheritedContextHelpId@@YAKAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x1C020A770 (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITE.c)
 *     LockPopupMenu @ 0x1C020B0D8 (LockPopupMenu.c)
 *     MNGetpItem @ 0x1C020B204 (MNGetpItem.c)
 *     UnlockPopupMenu @ 0x1C020B508 (UnlockPopupMenu.c)
 *     xxxMNCancel @ 0x1C020B900 (xxxMNCancel.c)
 *     xxxMNCloseHierarchy @ 0x1C020C100 (xxxMNCloseHierarchy.c)
 *     xxxMNKeyDown @ 0x1C020CD34 (xxxMNKeyDown.c)
 *     xxxMNOpenHierarchy @ 0x1C020DA04 (xxxMNOpenHierarchy.c)
 *     xxxMNSelectItem @ 0x1C020E8F4 (xxxMNSelectItem.c)
 *     xxxMNSetCapture @ 0x1C020F000 (xxxMNSetCapture.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C020F408 (xxxMNSwitchToAlternateMenu.c)
 *     xxxSendHelpMessage @ 0x1C022FC9C (xxxSendHelpMessage.c)
 *     MNFindItemInColumn @ 0x1C022FD24 (MNFindItemInColumn.c)
 *     MNFindNextValidItem @ 0x1C022FE34 (MNFindNextValidItem.c)
 */

_QWORD *__fastcall xxxMNKeyDown(__int64 **a1, __int64 a2, unsigned int a3)
{
  int v6; // r15d
  __int64 v7; // rdx
  int v8; // ecx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rsi
  int MenuInheritedContextHelpId; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  unsigned int v18; // edi
  int v19; // r13d
  int v20; // eax
  __int64 v21; // r9
  __int64 v22; // r8
  int v23; // eax
  __int64 v24; // rdx
  _QWORD *v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rcx
  _QWORD *SubMenu; // rax
  __int64 v30; // r15
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // r15
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rsi
  __int64 v40; // rdx
  __int64 v41; // rax
  int v42; // r12d
  __int64 v43; // rcx
  __int64 *v44; // rax
  __int64 *v45; // rax
  __int64 *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 *v50; // rax
  __int64 v51; // rdx
  __int64 *v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rdx
  __int64 v55; // rcx
  _QWORD *v56; // rdx
  __int64 v57; // rbx
  __int64 ThreadWin32Thread; // rax
  _QWORD *v59; // r8
  int v60; // ecx
  int v62; // [rsp+30h] [rbp-D0h]
  __int64 v63; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v64; // [rsp+40h] [rbp-C0h]
  __int128 v65; // [rsp+50h] [rbp-B0h]
  _QWORD v66[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v67; // [rsp+70h] [rbp-90h]
  unsigned __int64 v68; // [rsp+80h] [rbp-80h]
  _QWORD v69[2]; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v70[2]; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v71[3]; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v72[3]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v73[3]; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v74; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v75; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v76[3]; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v77[9]; // [rsp+128h] [rbp+28h] BYREF
  __int64 v78; // [rsp+188h] [rbp+88h]
  int v79; // [rsp+190h] [rbp+90h]
  int v80; // [rsp+198h] [rbp+98h]

  v6 = 0;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v66, 0LL);
  v8 = *(_DWORD *)(a2 + 8);
  if ( (v8 & 8) != 0 && a3 != 112 )
  {
    if ( (v8 & 0x80u) != 0 && a3 == 27 )
      *(_DWORD *)(a2 + 8) = v8 | 0x2000;
    return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v66, v7);
  }
  switch ( a3 )
  {
    case 0xDu:
      if ( *(_DWORD *)(**a1 + 80) < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) + 44LL) )
      {
        v59 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 40) + 88LL) + 96LL * *(unsigned int *)(**a1 + 80));
        v60 = *(_DWORD *)(*v59 + 4LL) & 3;
        if ( v59[2] )
        {
          if ( !v60 )
            goto LABEL_116;
        }
        else if ( !v60 )
        {
          xxxMNDismissWithNotify(a2, (__int64)a1, (__int64)v59, *(_DWORD *)(**a1 + 80), 0LL);
          return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v66, v7);
        }
      }
      goto LABEL_119;
    case 0x12u:
LABEL_15:
      if ( (v8 & 0x100) == 0 )
      {
        xxxMNCancel(a2, 0, 0, 0LL);
        if ( a3 == 18 )
          *(_DWORD *)(a2 + 8) &= ~0x20u;
      }
      return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v66, v7);
    case 0x1Bu:
      if ( (*(_DWORD *)**a1 & 1) == 0 )
      {
        v56 = (_QWORD *)**a1;
        if ( v56 != (_QWORD *)v56[8]
          && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 64) + 8LL) + 40LL) + 31LL) & 0x20) == 0 )
        {
          if ( (*(_DWORD *)**a1 & 2) != 0 )
          {
            v56 = (_QWORD *)**a1;
            if ( v56[4] == v56[1] )
            {
              SmartObjStackRefBase<tagPOPUPMENU>::Init(v69, *(_QWORD *)(**a1 + 64));
              **(_DWORD **)v69[0] &= ~0x400u;
              if ( (*(_DWORD *)(a2 + 8) & 0x100) != 0 )
                xxxMNCancel(a2, 0, 0, 0LL);
              else
                xxxMNCloseHierarchy(*(_QWORD *)v69[0], a2);
              v25 = v69;
LABEL_55:
              SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v25, v24);
              return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v66, v7);
            }
          }
          v57 = *(_QWORD *)(**a1 + 32);
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)v56);
          v63 = *(_QWORD *)(ThreadWin32Thread + 416);
          *(_QWORD *)(ThreadWin32Thread + 416) = &v63;
          v64 = v57;
          if ( v57 )
            _InterlockedAdd((volatile signed __int32 *)(v57 + 8), 1u);
          goto LABEL_64;
        }
      }
LABEL_119:
      xxxMNCancel(a2, 0, 0, 0LL);
      return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v66, v7);
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
            return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v66, v7);
          goto LABEL_15;
        }
        v9 = MNGetpItem((__int64)a1, *(_DWORD *)(**a1 + 80));
        v7 = **a1;
        if ( !*(_QWORD *)(v7 + 8) || !v9 )
          return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v66, v7);
        v10 = **a1;
        v11 = *(_QWORD *)(v10 + 8);
        v12 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10);
        v63 = *(_QWORD *)(v12 + 416);
        *(_QWORD *)(v12 + 416) = &v63;
        v64 = v11;
        _InterlockedAdd((volatile signed __int32 *)(v11 + 8), 1u);
        v13 = **a1;
        MenuInheritedContextHelpId = GetMenuInheritedContextHelpId(a1);
        xxxSendHelpMessage(*(_QWORD *)(v13 + 8), MenuInheritedContextHelpId);
LABEL_21:
        ThreadUnlock1(v16, v15);
        return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v66, v7);
      }
LABEL_22:
      if ( (*(_DWORD *)**a1 & 1) == 0 )
      {
        v17 = -1LL;
        if ( a3 != 38 )
          v17 = 1LL;
        MNFindNextValidItem(*(_QWORD *)(**a1 + 40), *(unsigned int *)(**a1 + 80), v17, 0LL);
        goto LABEL_61;
      }
LABEL_116:
      xxxMNOpenHierarchy(a1, a2);
      return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v66, v7);
    }
  }
  v18 = 1;
  v19 = 39;
  v62 = (*(_DWORD *)**a1 >> 22) & 1;
  v80 = (*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 26LL) >> 6) & 1;
  if ( v80 != v62 )
  {
    v20 = 39;
    if ( a3 != 37 )
      v20 = 37;
    a3 = v20;
  }
  if ( (*(_DWORD *)**a1 & 1) != 0
    || a3 != 39
    || *(_QWORD *)(**a1 + 24)
    || xxxMNOpenHierarchy(a1, a2) != -1 && (*(_DWORD *)**a1 & 0x20) == 0 )
  {
    if ( *(_QWORD *)(**a1 + 24) )
    {
      v79 = 1;
      if ( a3 == 37 && (*(_DWORD *)**a1 & 1) == 0 )
      {
        xxxMNCloseHierarchy(**a1, a2);
        return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v66, v7);
      }
    }
    else
    {
      if ( (*(_DWORD *)**a1 & 0x400) != 0 )
        v6 = 1;
      v79 = v6;
    }
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v66, **a1);
    if ( (*(_DWORD *)**a1 & 2) == 0 || (v21 = 1LL, **a1 != *(_QWORD *)(**a1 + 64)) )
      v21 = 0LL;
    v22 = 0xFFFFFFFFLL;
    if ( a3 != 37 )
      v22 = 1LL;
    v23 = MNFindItemInColumn(*(_QWORD *)(**a1 + 40), *(unsigned int *)(**a1 + 80), v22, v21);
    v7 = 0xFFFFFFFFLL;
    if ( v23 != -1 )
    {
LABEL_59:
      if ( (*(_DWORD *)**a1 & 1) == 0 )
      {
        if ( v23 == -1 )
          return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v66, v7);
LABEL_61:
        xxxMNSelectItem(a1, a2);
        return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v66, v7);
      }
      if ( v23 == -1 )
      {
        if ( *(_QWORD *)(**a1 + 8) && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(**a1 + 8) + 40LL) + 30LL) & 8) != 0 )
        {
          v68 = 0LL;
          v67 = 0LL;
          v28 = **a1;
          if ( (*(_DWORD *)v28 & 4) != 0 )
            SubMenu = (_QWORD *)GetSubMenu(*(_QWORD *)(v28 + 40));
          else
            SubMenu = *(_QWORD **)(v28 + 40);
          if ( SubMenu )
            *(_QWORD *)&v67 = *SubMenu;
          else
            *(_QWORD *)&v67 = 0LL;
          v30 = *(_QWORD *)(**a1 + 8);
          v31 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v7);
          v63 = *(_QWORD *)(v31 + 416);
          *(_QWORD *)(v31 + 416) = &v63;
          v64 = v30;
          if ( v30 )
            _InterlockedAdd((volatile signed __int32 *)(v30 + 8), 1u);
          xxxSendMessage(*(_QWORD *)(**a1 + 8));
          ThreadUnlock1(v33, v32);
          LOBYTE(v34) = 1;
          v36 = HMValidateHandleNoSecure(v68, v34);
          if ( v36 )
          {
            if ( *(_QWORD *)(v36 + 16) == gptiCurrent )
            {
              LOBYTE(v35) = 2;
              v78 = HMValidateHandleNoRip(*((__int64 *)&v67 + 1), v35);
              if ( v78 )
              {
                v38 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v37);
                v39 = v78;
                v76[0] = *(_QWORD *)(v38 + 416);
                *(_QWORD *)(v38 + 416) = v76;
                v76[1] = v78;
                _InterlockedAdd((volatile signed __int32 *)(v78 + 8), 1u);
                v41 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v40);
                v77[0] = *(_QWORD *)(v41 + 416);
                *(_QWORD *)(v41 + 416) = v77;
                v77[1] = v36;
                _InterlockedAdd((volatile signed __int32 *)(v36 + 8), 1u);
                v42 = v79;
                if ( (*(_BYTE *)(*(_QWORD *)(v36 + 40) + 31LL) & 0x20) != 0 )
                  v42 = 1;
                xxxMNSelectItem(a1, a2);
                *(_DWORD *)(a2 + 8) |= 2u;
                UnlockPopupMenu((__int64)a1, (__int64 *)(**a1 + 48));
                *(_DWORD *)**a1 &= ~0x80u;
                v43 = *(_QWORD *)(v36 + 136);
                if ( v43 && GetSubMenu(v43) == v78 )
                  v39 = *(_QWORD *)(v36 + 136);
                UnlockPopupMenu((__int64)a1, (__int64 *)(**a1 + 40));
                v44 = *a1;
                *((_QWORD *)&v65 + 1) = v36;
                *(_QWORD *)&v65 = *v44 + 8;
                v74 = v65;
                HMAssignmentLock(&v74);
                v45 = *a1;
                *((_QWORD *)&v65 + 1) = v36;
                *(_QWORD *)&v65 = *v45 + 16;
                v75 = v65;
                HMAssignmentLock(&v75);
                SmartObjStackRefBase<tagMENU>::Init(v71, v39);
                v46 = *a1;
                v71[2] = 0LL;
                LockPopupMenu((__int64)a1, (__int64 *)(*v46 + 40), (__int64)v71);
                SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v71, v47);
                if ( (*(_DWORD *)(a2 + 8) & 0x100) == 0 )
                {
                  *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 388LL) &= ~0x100000u;
                  xxxMNSetCapture(a1, a2);
                }
                if ( (*(_BYTE *)(*(_QWORD *)(v36 + 40) + 31LL) & 0x40) == 0 )
                {
                  v49 = **a1;
                  if ( *(_QWORD *)(v49 + 40) )
                  {
                    if ( *(_QWORD *)(v36 + 144) == *(_QWORD *)(**a1 + 40) )
                    {
                      SmartObjStackRefBase<tagMENU>::Init(v72, *(_QWORD *)(v36 + 136));
                      v50 = *a1;
                      v72[2] = 0LL;
                      LockPopupMenu((__int64)a1, (__int64 *)(*v50 + 48), (__int64)v72);
                      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v72, v51);
                      *(_DWORD *)(a2 + 8) &= ~2u;
                    }
                    else
                    {
                      SmartObjStackRefBase<tagMENU>::Init(v73, *(_QWORD *)(v36 + 144));
                      v52 = *a1;
                      v73[2] = 0LL;
                      LockPopupMenu((__int64)a1, (__int64 *)(*v52 + 48), (__int64)v73);
                      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v73, v53);
                    }
                  }
                }
                ThreadUnlock1(v49, v48);
                ThreadUnlock1(v55, v54);
                *(_DWORD *)**a1 ^= (*(_DWORD *)**a1 ^ (2 * *(_DWORD *)(a2 + 8))) & 4;
LABEL_97:
                if ( *(_QWORD *)(*(_QWORD *)v66[0] + 24LL) )
                  xxxMNCloseHierarchy(*(_QWORD *)v66[0], a2);
                xxxMNSelectItem(a1, a2);
                if ( v42 )
                  goto LABEL_116;
                return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v66, v7);
              }
            }
          }
        }
        if ( !(unsigned int)xxxMNSwitchToAlternateMenu(a1, a2) )
          return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v66, v7);
        if ( a3 != 39 )
          v18 = -1;
        if ( (unsigned int)MNFindNextValidItem(*(_QWORD *)(**a1 + 40), 0xFFFFFFFFLL, v18, 0LL) == -1 )
          return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v66, v7);
      }
      v42 = v79;
      goto LABEL_97;
    }
    if ( (*(_DWORD *)**a1 & 2) != 0 && *(_QWORD *)(**a1 + 32) == *(_QWORD *)(**a1 + 8) )
    {
      if ( v80 != v62 )
      {
        if ( a3 != 37 )
          v19 = 37;
        a3 = v19;
      }
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v70, *(_QWORD *)(**a1 + 64));
      xxxMNKeyDown(v70, a2, a3);
      v25 = v70;
      goto LABEL_55;
    }
    v7 = **a1;
    if ( v7 == *(_QWORD *)(v7 + 64) )
    {
      if ( (*(_DWORD *)v7 & 1) == 0 )
        return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v66, v7);
      v7 = 0xFFFFFFFFLL;
      goto LABEL_59;
    }
    v26 = *(_QWORD *)(v7 + 32);
    v27 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v7);
    v63 = *(_QWORD *)(v27 + 416);
    *(_QWORD *)(v27 + 416) = &v63;
    v64 = v26;
    if ( v26 )
      _InterlockedAdd((volatile signed __int32 *)(v26 + 8), 1u);
LABEL_64:
    xxxSendMessage(*(_QWORD *)(**a1 + 32));
    goto LABEL_21;
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v66, v7);
}
