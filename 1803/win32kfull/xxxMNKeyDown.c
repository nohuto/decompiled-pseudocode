/*
 * XREFs of xxxMNKeyDown @ 0x1C01E6E10
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C01E2BFC (xxxHandleMenuMessages.c)
 *     xxxMNChar @ 0x1C01E5D78 (xxxMNChar.c)
 *     xxxMNKeyDown @ 0x1C01E6E10 (xxxMNKeyDown.c)
 *     xxxMenuWindowProc @ 0x1C01E96E0 (xxxMenuWindowProc.c)
 * Callees:
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0021B08 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0021B98 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00263B8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     xxxSendMessage @ 0x1C003F318 (xxxSendMessage.c)
 *     HMValidateHandleNoRip @ 0x1C006CF60 (HMValidateHandleNoRip.c)
 *     _GetSubMenu @ 0x1C00C28DC (_GetSubMenu.c)
 *     ?GetMenuInheritedContextHelpId@@YAKAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C01E3E44 (-GetMenuInheritedContextHelpId@@YAKAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x1C01E4874 (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITE.c)
 *     LockPopupMenu @ 0x1C01E51B4 (LockPopupMenu.c)
 *     MNGetpItem @ 0x1C01E52D8 (MNGetpItem.c)
 *     UnlockPopupMenu @ 0x1C01E55D8 (UnlockPopupMenu.c)
 *     xxxMNCancel @ 0x1C01E59BC (xxxMNCancel.c)
 *     xxxMNCloseHierarchy @ 0x1C01E61D0 (xxxMNCloseHierarchy.c)
 *     xxxMNKeyDown @ 0x1C01E6E10 (xxxMNKeyDown.c)
 *     xxxMNOpenHierarchy @ 0x1C01E7B08 (xxxMNOpenHierarchy.c)
 *     xxxMNSelectItem @ 0x1C01E8994 (xxxMNSelectItem.c)
 *     xxxMNSetCapture @ 0x1C01E9068 (xxxMNSetCapture.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C01E945C (xxxMNSwitchToAlternateMenu.c)
 *     xxxSendHelpMessage @ 0x1C0206B18 (xxxSendHelpMessage.c)
 *     MNFindItemInColumn @ 0x1C0206BA0 (MNFindItemInColumn.c)
 *     MNFindNextValidItem @ 0x1C0206CB0 (MNFindNextValidItem.c)
 */

_QWORD *__fastcall xxxMNKeyDown(__int64 **a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rdx
  int v6; // ecx
  int v7; // r8d
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rsi
  int MenuInheritedContextHelpId; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned int v17; // eax
  unsigned int v18; // edi
  int v19; // eax
  _BOOL8 v20; // r9
  __int64 v21; // r8
  int v22; // eax
  __int64 v23; // rdx
  _QWORD *v24; // rcx
  __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rcx
  _QWORD *SubMenu; // rax
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rax
  int v40; // eax
  __int64 v41; // rcx
  __int64 *v42; // rax
  __int64 *v43; // rax
  __int64 *v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 *v49; // rax
  __int64 v50; // rdx
  __int64 *v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  _QWORD *v56; // rdx
  __int64 v57; // rbx
  __int64 ThreadWin32Thread; // rax
  _QWORD *v59; // r8
  int v60; // ecx
  int v62; // [rsp+30h] [rbp-D0h]
  __int64 v63; // [rsp+30h] [rbp-D0h]
  __int64 v64; // [rsp+30h] [rbp-D0h]
  unsigned int v65; // [rsp+38h] [rbp-C8h]
  __int64 v66; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v67; // [rsp+48h] [rbp-B8h]
  _QWORD v68[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v69; // [rsp+68h] [rbp-98h]
  unsigned __int64 v70; // [rsp+78h] [rbp-88h]
  _QWORD v71[2]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v72[2]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v73; // [rsp+A0h] [rbp-60h]
  __int128 v74; // [rsp+B0h] [rbp-50h]
  _QWORD v75[3]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v76[3]; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD v77[4]; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v78; // [rsp+110h] [rbp+10h] BYREF
  __int128 v79; // [rsp+120h] [rbp+20h] BYREF
  _QWORD v80[3]; // [rsp+130h] [rbp+30h] BYREF
  _QWORD v81[7]; // [rsp+148h] [rbp+48h] BYREF
  BOOL v83; // [rsp+198h] [rbp+98h]
  __int64 v85; // [rsp+1A8h] [rbp+A8h]

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v68, 0LL);
  v6 = *(_DWORD *)(a2 + 8);
  v7 = a3;
  if ( (v6 & 8) != 0 && a3 != 112 )
  {
    if ( (v6 & 0x80u) != 0 && a3 == 27 )
      *(_DWORD *)(a2 + 8) = v6 | 0x2000;
    return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v68, v5);
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
            goto LABEL_114;
        }
        else if ( !v60 )
        {
          xxxMNDismissWithNotify(a2, (__int64)a1, (__int64)v59, *(_DWORD *)(**a1 + 80), 0LL);
          return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v68, v5);
        }
      }
      goto LABEL_117;
    case 0x12u:
LABEL_15:
      if ( (v6 & 0x100) == 0 )
      {
        xxxMNCancel(a2, 0, 0, 0LL);
        if ( a3 == 18 )
          *(_DWORD *)(a2 + 8) &= ~0x20u;
      }
      return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v68, v5);
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
              SmartObjStackRefBase<tagPOPUPMENU>::Init(v71, *(_QWORD *)(**a1 + 64));
              **(_DWORD **)v71[0] &= ~0x400u;
              if ( (*(_DWORD *)(a2 + 8) & 0x100) != 0 )
                xxxMNCancel(a2, 0, 0, 0LL);
              else
                xxxMNCloseHierarchy(*(_QWORD *)v71[0], a2);
              v24 = v71;
LABEL_54:
              SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v24, v23);
              return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v68, v5);
            }
          }
          v57 = *(_QWORD *)(**a1 + 32);
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)v56);
          v66 = *(_QWORD *)(ThreadWin32Thread + 408);
          *(_QWORD *)(ThreadWin32Thread + 408) = &v66;
          v67 = v57;
          if ( v57 )
            _InterlockedAdd((volatile signed __int32 *)(v57 + 8), 1u);
          goto LABEL_63;
        }
      }
LABEL_117:
      xxxMNCancel(a2, 0, 0, 0LL);
      return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v68, v5);
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
            return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v68, v5);
          goto LABEL_15;
        }
        v8 = MNGetpItem((__int64)a1, *(_DWORD *)(**a1 + 80));
        v5 = **a1;
        if ( !*(_QWORD *)(v5 + 8) || !v8 )
          return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v68, v5);
        v9 = **a1;
        v10 = *(_QWORD *)(v9 + 8);
        v11 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9);
        v66 = *(_QWORD *)(v11 + 408);
        *(_QWORD *)(v11 + 408) = &v66;
        v67 = v10;
        _InterlockedAdd((volatile signed __int32 *)(v10 + 8), 1u);
        v12 = **a1;
        MenuInheritedContextHelpId = GetMenuInheritedContextHelpId(a1);
        xxxSendHelpMessage(*(_QWORD *)(v12 + 8), MenuInheritedContextHelpId);
LABEL_21:
        ThreadUnlock1(v15, v14, v16);
        return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v68, v5);
      }
LABEL_22:
      if ( (*(_DWORD *)**a1 & 1) == 0 )
      {
        v17 = -1;
        if ( a3 != 38 )
          v17 = 1;
        MNFindNextValidItem(*(_QWORD *)(**a1 + 40), *(unsigned int *)(**a1 + 80), v17, 0LL);
        goto LABEL_60;
      }
LABEL_114:
      xxxMNOpenHierarchy(a1, a2);
      return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v68, v5);
    }
  }
  v18 = 1;
  v62 = (*(_DWORD *)**a1 >> 22) & 1 ^ (*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 26LL) >> 6) & 1;
  if ( v62 )
  {
    v19 = 39;
    if ( a3 != 37 )
      v19 = 37;
    v7 = v19;
    a3 = v19;
  }
  if ( (*(_DWORD *)**a1 & 1) == 0
    && v7 == 39
    && !*(_QWORD *)(**a1 + 24)
    && (xxxMNOpenHierarchy(a1, a2) == -1 || (*(_DWORD *)**a1 & 0x20) != 0) )
  {
    return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v68, v5);
  }
  if ( *(_QWORD *)(**a1 + 24) )
  {
    v83 = 1;
    if ( a3 == 37 && (*(_DWORD *)**a1 & 1) == 0 )
    {
      xxxMNCloseHierarchy(**a1, a2);
      return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v68, v5);
    }
  }
  else
  {
    v83 = (*(_DWORD *)**a1 & 0x400) != 0;
  }
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v68, **a1);
  v20 = (*(_DWORD *)**a1 & 2) != 0 && **a1 == *(_QWORD *)(**a1 + 64);
  v21 = 0xFFFFFFFFLL;
  if ( a3 != 37 )
    v21 = 1LL;
  v65 = MNFindItemInColumn(*(_QWORD *)(**a1 + 40), *(unsigned int *)(**a1 + 80), v21, v20);
  v5 = v65;
  if ( v65 == -1 )
  {
    if ( (*(_DWORD *)**a1 & 2) != 0 && *(_QWORD *)(**a1 + 32) == *(_QWORD *)(**a1 + 8) )
    {
      if ( v62 )
      {
        v22 = 39;
        if ( a3 != 37 )
          v22 = 37;
        a3 = v22;
      }
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v72, *(_QWORD *)(**a1 + 64));
      xxxMNKeyDown(v72, a2, a3);
      v24 = v72;
      goto LABEL_54;
    }
    v5 = **a1;
    if ( v5 == *(_QWORD *)(v5 + 64) )
    {
      if ( (*(_DWORD *)v5 & 1) == 0 )
        return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v68, v5);
      v5 = 0xFFFFFFFFLL;
      goto LABEL_58;
    }
    v25 = *(_QWORD *)(v5 + 32);
    v26 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5);
    v66 = *(_QWORD *)(v26 + 408);
    *(_QWORD *)(v26 + 408) = &v66;
    v67 = v25;
    if ( v25 )
      _InterlockedAdd((volatile signed __int32 *)(v25 + 8), 1u);
LABEL_63:
    xxxSendMessage(*(_QWORD *)(**a1 + 32));
    goto LABEL_21;
  }
LABEL_58:
  if ( (*(_DWORD *)**a1 & 1) == 0 )
  {
    if ( (_DWORD)v5 == -1 )
      return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v68, v5);
LABEL_60:
    xxxMNSelectItem(a1, a2);
    return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v68, v5);
  }
  if ( (_DWORD)v5 == -1 )
  {
    if ( !*(_QWORD *)(**a1 + 8) || (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(**a1 + 8) + 40LL) + 30LL) & 8) == 0 )
      goto LABEL_94;
    v70 = 0LL;
    v69 = 0LL;
    v27 = **a1;
    if ( (*(_DWORD *)v27 & 4) != 0 )
      SubMenu = (_QWORD *)GetSubMenu(*(_QWORD *)(v27 + 40));
    else
      SubMenu = *(_QWORD **)(v27 + 40);
    if ( SubMenu )
      *(_QWORD *)&v69 = *SubMenu;
    else
      *(_QWORD *)&v69 = 0LL;
    v63 = *(_QWORD *)(**a1 + 8);
    v29 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5);
    v66 = *(_QWORD *)(v29 + 408);
    *(_QWORD *)(v29 + 408) = &v66;
    v67 = v63;
    if ( v63 )
      _InterlockedAdd((volatile signed __int32 *)(v63 + 8), 1u);
    xxxSendMessage(*(_QWORD *)(**a1 + 8));
    ThreadUnlock1(v31, v30, v32);
    LOBYTE(v33) = 1;
    v34 = HMValidateHandleNoSecure(v70, v33);
    v64 = v34;
    if ( v34
      && *(_QWORD *)(v34 + 16) == gptiCurrent
      && (LOBYTE(v35) = 2, (v85 = HMValidateHandleNoRip(*((__int64 *)&v69 + 1), v35)) != 0) )
    {
      v37 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v36);
      v80[0] = *(_QWORD *)(v37 + 408);
      *(_QWORD *)(v37 + 408) = v80;
      v80[1] = v85;
      _InterlockedAdd((volatile signed __int32 *)(v85 + 8), 1u);
      v39 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v38);
      v81[0] = *(_QWORD *)(v39 + 408);
      *(_QWORD *)(v39 + 408) = v81;
      v81[1] = v64;
      _InterlockedAdd((volatile signed __int32 *)(v64 + 8), 1u);
      v40 = v83;
      if ( (*(_BYTE *)(*(_QWORD *)(v64 + 40) + 31LL) & 0x20) != 0 )
        v40 = 1;
      v83 = v40;
      xxxMNSelectItem(a1, a2);
      *(_DWORD *)(a2 + 8) |= 2u;
      UnlockPopupMenu((__int64)a1, (__int64 *)(**a1 + 48));
      *(_DWORD *)**a1 &= ~0x80u;
      v41 = *(_QWORD *)(v64 + 136);
      if ( v41 && GetSubMenu(v41) == v85 )
        v85 = *(_QWORD *)(v64 + 136);
      UnlockPopupMenu((__int64)a1, (__int64 *)(**a1 + 40));
      v42 = *a1;
      *((_QWORD *)&v73 + 1) = v64;
      *(_QWORD *)&v73 = *v42 + 8;
      v78 = v73;
      HMAssignmentLock(&v78);
      v43 = *a1;
      *((_QWORD *)&v74 + 1) = v64;
      *(_QWORD *)&v74 = *v43 + 16;
      v79 = v74;
      HMAssignmentLock(&v79);
      SmartObjStackRefBase<tagMENU>::Init(v75, v85);
      v44 = *a1;
      v75[2] = 0LL;
      LockPopupMenu((__int64)a1, (__int64 *)(*v44 + 40), (__int64)v75);
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v75, v45);
      if ( (*(_DWORD *)(a2 + 8) & 0x100) == 0 )
      {
        *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 388LL) &= ~0x100000u;
        xxxMNSetCapture(a1, a2);
      }
      if ( (*(_BYTE *)(*(_QWORD *)(v64 + 40) + 31LL) & 0x40) == 0 )
      {
        v47 = **a1;
        if ( *(_QWORD *)(v47 + 40) )
        {
          if ( *(_QWORD *)(v64 + 144) == *(_QWORD *)(**a1 + 40) )
          {
            SmartObjStackRefBase<tagMENU>::Init(v76, *(_QWORD *)(v64 + 136));
            v49 = *a1;
            v76[2] = 0LL;
            LockPopupMenu((__int64)a1, (__int64 *)(*v49 + 48), (__int64)v76);
            SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v76, v50);
            *(_DWORD *)(a2 + 8) &= ~2u;
          }
          else
          {
            SmartObjStackRefBase<tagMENU>::Init(v77, *(_QWORD *)(v64 + 144));
            v51 = *a1;
            v77[2] = 0LL;
            LockPopupMenu((__int64)a1, (__int64 *)(*v51 + 48), (__int64)v77);
            SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v77, v52);
          }
        }
      }
      ThreadUnlock1(v47, v46, v48);
      ThreadUnlock1(v54, v53, v55);
      *(_DWORD *)**a1 ^= (*(_DWORD *)**a1 ^ (2 * *(_DWORD *)(a2 + 8))) & 4;
    }
    else
    {
LABEL_94:
      if ( !(unsigned int)xxxMNSwitchToAlternateMenu(a1, a2) )
        return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v68, v5);
      if ( a3 != 39 )
        v18 = -1;
      if ( (unsigned int)MNFindNextValidItem(*(_QWORD *)(**a1 + 40), 0xFFFFFFFFLL, v18, 0LL) == -1 )
        return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v68, v5);
    }
  }
  if ( *(_QWORD *)(*(_QWORD *)v68[0] + 24LL) )
    xxxMNCloseHierarchy(*(_QWORD *)v68[0], a2);
  xxxMNSelectItem(a1, a2);
  if ( v83 )
    goto LABEL_114;
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v68, v5);
}
