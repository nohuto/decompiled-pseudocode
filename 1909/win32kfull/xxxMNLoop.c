/*
 * XREFs of xxxMNLoop @ 0x1C0220940
 * Callers:
 *     xxxSysCommand @ 0x1C0111880 (xxxSysCommand.c)
 *     xxxMNKeyFilter @ 0x1C024850C (xxxMNKeyFilter.c)
 *     xxxTrackPopupMenuEx @ 0x1C024C438 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     SlowAppThreadInShellFrame @ 0x1C0009FA0 (SlowAppThreadInShellFrame.c)
 *     _GetMenuState @ 0x1C000BD6C (_GetMenuState.c)
 *     xxxInternalGetMessage @ 0x1C000DC44 (xxxInternalGetMessage.c)
 *     xxxSendNotifyMessage @ 0x1C001FA80 (xxxSendNotifyMessage.c)
 *     xxxDispatchMessage @ 0x1C002ADC8 (xxxDispatchMessage.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxSendMessage @ 0x1C003C880 (xxxSendMessage.c)
 *     xxxGetSysMenuPtr @ 0x1C004A6F8 (xxxGetSysMenuPtr.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     xxxCallMsgFilter @ 0x1C00DD700 (xxxCallMsgFilter.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E0868 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00E0C84 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     _GetKeyState @ 0x1C00EBC40 (_GetKeyState.c)
 *     _IsChild @ 0x1C00F5DAC (_IsChild.c)
 *     IsShellFrameHangResilient @ 0x1C00FB04C (IsShellFrameHangResilient.c)
 *     FindNCHit @ 0x1C0108614 (FindNCHit.c)
 *     _PostMessage @ 0x1C01312B0 (_PostMessage.c)
 *     xxxTranslateMessage @ 0x1C0134F10 (xxxTranslateMessage.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     TryDetachShellFrame @ 0x1C01E39D8 (TryDetachShellFrame.c)
 *     xxxWaitMessageEx @ 0x1C01E42E0 (xxxWaitMessageEx.c)
 *     MNFlushDestroyedPopups @ 0x1C02103F0 (MNFlushDestroyedPopups.c)
 *     xxxMNStartMenu @ 0x1C0210998 (xxxMNStartMenu.c)
 *     xxxEndMenuLoop @ 0x1C021FD50 (xxxEndMenuLoop.c)
 *     xxxHandleMenuMessages @ 0x1C021FF24 (xxxHandleMenuMessages.c)
 *     xxxMNReleaseCapture @ 0x1C0225FA4 (xxxMNReleaseCapture.c)
 */

__int64 __fastcall xxxMNLoop(__int64 **a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // r12d
  int v12; // eax
  __int16 KeyState; // ax
  __int64 v14; // rdx
  __int64 v15; // r8
  _DWORD *v16; // rcx
  _QWORD *v17; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  int v23; // eax
  __int64 *v24; // rax
  int v25; // eax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // rdx
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // r8
  int v33; // ebx
  int v34; // eax
  _QWORD *v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  bool v40; // zf
  __int64 v41; // rdx
  __int64 v42; // r8
  struct tagTHREADINFO *v43; // rax
  _QWORD *v44; // rbx
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 SysMenuPtr; // rax
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // [rsp+38h] [rbp-29h] BYREF
  _QWORD *v54; // [rsp+40h] [rbp-21h]
  __int64 v55; // [rsp+48h] [rbp-19h]
  _QWORD v56[2]; // [rsp+50h] [rbp-11h] BYREF
  __int64 v57; // [rsp+60h] [rbp-1h]
  __int64 v58[6]; // [rsp+68h] [rbp+7h] BYREF
  int v59; // [rsp+D0h] [rbp+6Fh] BYREF

  memset(v58, 0, sizeof(v58));
  *(_DWORD *)(a2 + 8) |= 4u;
  v53 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v11 = 1;
  *(_DWORD *)(a2 + 24) = 0;
  *(_DWORD *)(a2 + 12) = *(_DWORD *)(gptiCurrent + 756LL);
  *(_DWORD *)(a2 + 16) = *(_DWORD *)(gptiCurrent + 760LL);
  *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 396LL) &= ~0x40u;
  v12 = *(_DWORD *)(a2 + 8);
  if ( (v12 & 1) == 0 )
  {
    KeyState = GetKeyState(((*(_DWORD *)**a1 & 0x40) != 0) + 1, v8, v9, v10);
    v16 = (_DWORD *)**a1;
    if ( KeyState >= 0 )
    {
      if ( (*v16 & 0x800) == 0 && *(_QWORD *)(**a1 + 8) )
      {
        v17 = *(_QWORD **)(**a1 + 8);
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14, v15);
        v53 = *(_QWORD *)(ThreadWin32Thread + 408);
        *(_QWORD *)(ThreadWin32Thread + 408) = &v53;
        v54 = v17;
        HMLockObject(v17);
        if ( (*(_DWORD *)**a1 & 8) == 0 || (v19 = 1LL, (*(_DWORD *)**a1 & 4) != 0) )
          v19 = 0LL;
        xxxSendNotifyMessage(*(struct tagWND **)(**a1 + 8), 0x212u, v19, 0LL, 1);
        ThreadUnlock1(v21, v20, v22);
      }
      goto LABEL_81;
    }
    if ( (*v16 & 8) == 0 && !xxxMNStartMenu((__int64 *)a1, a2, -1) )
    {
LABEL_81:
      *(_DWORD *)(a2 + 8) &= 0xFFFFFEFB;
      xxxEndMenuLoop(a2, **a1);
      xxxMNReleaseCapture(a2);
      xxxInternalGetMessage((int)v58, 0, 512, 512, 2, 0);
      return *(unsigned int *)(a2 + 24);
    }
    if ( (*(_DWORD *)**a1 & 0x40) != 0 )
    {
      v58[2] = 2LL;
      v23 = a4 != 0 ? 518 : 516;
    }
    else
    {
      v58[2] = 1LL;
      v23 = a4 != 0 ? 515 : 513;
    }
    LODWORD(v58[1]) = v23;
    v24 = *a1;
    v58[3] = a3;
    if ( *(_QWORD *)(*v24 + 16) )
      v58[0] = **(_QWORD **)(**a1 + 16);
    else
      v58[0] = 0LL;
    xxxHandleMenuMessages((__int64)v58, a2, a1);
    v12 = *(_DWORD *)(a2 + 8);
  }
  if ( (v12 & 0x100) == 0 )
  {
    while ( 1 )
    {
      if ( (v12 & 4) == 0 )
        goto LABEL_81;
      if ( !(unsigned int)xxxInternalGetMessage((int)v58, 0, 0, 0, 2, 0) )
        goto LABEL_60;
      if ( (*(_DWORD *)(a2 + 8) & 4) == 0 )
        goto LABEL_81;
      if ( (*(_DWORD *)**a1 & 0x8000) != 0 )
        goto LABEL_81;
      if ( (*(_DWORD *)**a1 & 8) == 0 )
      {
        v29 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 128LL);
        if ( v29 != *(_QWORD *)(**a1 + 8)
          && (!v29
           || !(unsigned int)IsChild(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 128LL), *(_QWORD *)(**a1 + 8))) )
        {
          goto LABEL_81;
        }
      }
      if ( (*(_DWORD *)**a1 & 1) == 0 )
        goto LABEL_37;
      v30 = v58[1];
      if ( LODWORD(v58[1]) == 515 )
        break;
LABEL_38:
      if ( v30 == 513 || v30 == 516 || v30 == 161 || v30 == 164 )
      {
        v33 = 1;
        goto LABEL_47;
      }
LABEL_42:
      *(_DWORD *)(gptiCurrent + 480LL) |= 0x200000u;
      v33 = 0;
      if ( !(unsigned int)xxxInternalGetMessage((int)v58, 0, v58[1], v58[1], 1, 0) )
      {
        v34 = *(_DWORD *)(gptiCurrent + 480LL);
        if ( (v34 & 0x200000) != 0 )
        {
          *(_DWORD *)(gptiCurrent + 480LL) = v34 & 0xFFDFFFFF;
LABEL_60:
          if ( (*(_DWORD *)(a2 + 8) & 4) == 0 || (*(_DWORD *)**a1 & 0x8000) != 0 )
            goto LABEL_81;
          if ( (*(_DWORD *)**a1 & 0x20000) != 0 )
          {
            MNFlushDestroyedPopups((_DWORD *)**a1);
            *(_DWORD *)**a1 &= ~0x20000u;
          }
          if ( v11 )
          {
            if ( *(_QWORD *)(**a1 + 8) )
            {
              v35 = *(_QWORD **)(**a1 + 8);
              v36 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v27, v28);
              v53 = *(_QWORD *)(v36 + 408);
              *(_QWORD *)(v36 + 408) = &v53;
              v54 = v35;
              HMLockObject(v35);
              xxxSendMessage(*(_QWORD *)(**a1 + 8));
              ThreadUnlock1(v38, v37, v39);
            }
            v11 = 0;
          }
          else
          {
            v40 = *(_QWORD *)(a2 + 96) == 0LL;
            v59 = 0;
            xxxWaitMessageEx(0x3CFFu, !v40, (enum SLEEP_STATUS *)&v59);
            if ( (unsigned int)IsShellFrameHangResilient(gptiCurrent, v41, v42) )
            {
              if ( v59 )
              {
                v43 = SlowAppThreadInShellFrame(gptiCurrent, 0LL, 0LL, 1);
                if ( v43 )
                  TryDetachShellFrame(gptiCurrent, (__int64)v43, v59 == 2, 0);
              }
            }
          }
          goto LABEL_72;
        }
      }
      *(_DWORD *)(gptiCurrent + 480LL) &= ~0x200000u;
LABEL_47:
      if ( (unsigned int)xxxCallMsgFilter((__int64)v58, 2) )
      {
        if ( v33 )
          xxxInternalGetMessage((int)v58, 0, v58[1], v58[1], 1, 0);
LABEL_59:
        v11 = 1;
        goto LABEL_72;
      }
      if ( !(unsigned int)xxxHandleMenuMessages((__int64)v58, a2, a1) )
      {
        xxxTranslateMessage((__int64)v58, 0LL, v28);
        xxxDispatchMessage((__int64)v58);
      }
      if ( (*(_DWORD *)(a2 + 8) & 4) == 0
        || (*(_DWORD *)**a1 & 0x8000) != 0
        || (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 396LL) & 0x40) != 0 )
      {
        goto LABEL_81;
      }
      if ( LODWORD(v58[1]) == 280 )
        goto LABEL_60;
      if ( LODWORD(v58[1]) != 275 && LODWORD(v58[1]) != 15 )
        goto LABEL_59;
LABEL_72:
      v12 = *(_DWORD *)(a2 + 8);
    }
    if ( !*(_QWORD *)(**a1 + 8) )
      goto LABEL_42;
    if ( (unsigned int)FindNCHit(*(_QWORD *)(**a1 + 8), v58[3]) == 2 )
    {
      SmartObjStackRefBase<tagMENU>::Init(v56, 0LL);
      v57 = 0LL;
      xxxInternalGetMessage((int)v58, 0, v58[1], v58[1], 1, 0);
      if ( (*(_DWORD *)(a2 + 8) & 4) == 0 || (*(_DWORD *)**a1 & 0x8000) != 0 )
        goto LABEL_80;
      if ( *(_QWORD *)(**a1 + 8) )
      {
        v44 = *(_QWORD **)(**a1 + 8);
        v45 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v31, v32);
        v53 = *(_QWORD *)(v45 + 408);
        *(_QWORD *)(v45 + 408) = &v53;
        v54 = v44;
        HMLockObject(v44);
        SysMenuPtr = xxxGetSysMenuPtr(v44, v46, v47);
        v57 = 0LL;
        SmartObjStackRefBase<tagMENU>::operator=(v56, SysMenuPtr);
        v49 = v57;
        if ( !v57 )
          v49 = *(_QWORD *)v56[0];
        if ( (GetMenuState(v49, 61728LL) & 3) == 0 )
          PostMessage((int)v44, 274, 61728, 0);
        ThreadUnlock1(v51, v50, v52);
LABEL_80:
        SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v56, v31, v32);
        goto LABEL_81;
      }
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v56, v31, v32);
    }
LABEL_37:
    v30 = v58[1];
    goto LABEL_38;
  }
  xxxMNReleaseCapture(a2);
  v25 = *(_DWORD *)(a2 + 8);
  if ( (v25 & 0x2000000) != 0 )
  {
    --guSFWLockCount;
    *(_DWORD *)(a2 + 8) = v25 & 0xFDFFFFFF;
  }
  return 0LL;
}
