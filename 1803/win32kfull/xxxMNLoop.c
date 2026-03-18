/*
 * XREFs of xxxMNLoop @ 0x1C01E3580
 * Callers:
 *     xxxSysCommand @ 0x1C00F50F8 (xxxSysCommand.c)
 *     xxxMNKeyFilter @ 0x1C0206EB8 (xxxMNKeyFilter.c)
 *     xxxTrackPopupMenuEx @ 0x1C020ABF4 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     SlowAppThreadInShellFrame @ 0x1C0006CF8 (SlowAppThreadInShellFrame.c)
 *     _GetMenuState @ 0x1C000B0C4 (_GetMenuState.c)
 *     xxxInternalGetMessage @ 0x1C000DD88 (xxxInternalGetMessage.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxDispatchMessage @ 0x1C0023E5C (xxxDispatchMessage.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00262F8 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00263B8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     xxxGetSysMenuPtr @ 0x1C0039F88 (xxxGetSysMenuPtr.c)
 *     xxxSendMessage @ 0x1C003F318 (xxxSendMessage.c)
 *     xxxSendNotifyMessage @ 0x1C0060D20 (xxxSendNotifyMessage.c)
 *     _PostMessage @ 0x1C006DAA0 (_PostMessage.c)
 *     _GetKeyState @ 0x1C00ECA24 (_GetKeyState.c)
 *     xxxTranslateMessage @ 0x1C00F4EDC (xxxTranslateMessage.c)
 *     _IsChild @ 0x1C00F6964 (_IsChild.c)
 *     IsShellFrameHangResilient @ 0x1C00F767C (IsShellFrameHangResilient.c)
 *     FindNCHit @ 0x1C01013E8 (FindNCHit.c)
 *     xxxCallMsgFilter @ 0x1C0129564 (xxxCallMsgFilter.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     TryDetachShellFrame @ 0x1C01AC074 (TryDetachShellFrame.c)
 *     xxxWaitMessageEx @ 0x1C01AC5FC (xxxWaitMessageEx.c)
 *     MNFlushDestroyedPopups @ 0x1C01D50C0 (MNFlushDestroyedPopups.c)
 *     xxxMNStartMenu @ 0x1C01D5620 (xxxMNStartMenu.c)
 *     xxxEndMenuLoop @ 0x1C01E2A70 (xxxEndMenuLoop.c)
 *     xxxHandleMenuMessages @ 0x1C01E2BFC (xxxHandleMenuMessages.c)
 *     xxxMNReleaseCapture @ 0x1C01E8950 (xxxMNReleaseCapture.c)
 */

__int64 __fastcall xxxMNLoop(__int64 **a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v8; // rdx
  int v9; // r12d
  int v10; // eax
  __int16 KeyState; // ax
  __int64 v12; // rdx
  _DWORD *v13; // rcx
  __int64 v14; // rbx
  __int64 ThreadWin32Thread; // rax
  unsigned __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // eax
  __int64 *v21; // rax
  int v22; // eax
  __int64 v24; // rdx
  __int64 v25; // rdx
  int v26; // eax
  __int64 v27; // rdx
  int v28; // ebx
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  bool v36; // zf
  struct tagTHREADINFO *v37; // rax
  __int64 v38; // rbx
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 SysMenuPtr; // rax
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // [rsp+38h] [rbp-29h] BYREF
  __int64 v47; // [rsp+40h] [rbp-21h]
  _QWORD v48[2]; // [rsp+50h] [rbp-11h] BYREF
  __int64 v49; // [rsp+60h] [rbp-1h]
  _QWORD v50[6]; // [rsp+68h] [rbp+7h] BYREF
  int v51; // [rsp+D0h] [rbp+6Fh] BYREF

  memset(v50, 0, sizeof(v50));
  *(_DWORD *)(a2 + 8) |= 4u;
  v9 = 1;
  *(_DWORD *)(a2 + 24) = 0;
  *(_DWORD *)(a2 + 12) = *(_DWORD *)(gptiCurrent + 748LL);
  *(_DWORD *)(a2 + 16) = *(_DWORD *)(gptiCurrent + 752LL);
  *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 388LL) &= ~0x40u;
  v10 = *(_DWORD *)(a2 + 8);
  if ( (v10 & 1) == 0 )
  {
    KeyState = GetKeyState((unsigned int)((*(_DWORD *)**a1 & 0x40) != 0) + 1, v8);
    v13 = (_DWORD *)**a1;
    if ( KeyState >= 0 )
    {
      if ( (*v13 & 0x800) == 0 && *(_QWORD *)(**a1 + 8) )
      {
        v14 = *(_QWORD *)(**a1 + 8);
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12);
        v46 = *(_QWORD *)(ThreadWin32Thread + 408);
        *(_QWORD *)(ThreadWin32Thread + 408) = &v46;
        v47 = v14;
        _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
        if ( (*(_DWORD *)**a1 & 8) == 0 || (v16 = 1LL, (*(_DWORD *)**a1 & 4) != 0) )
          v16 = 0LL;
        xxxSendNotifyMessage(*(struct tagWND **)(**a1 + 8), 0x212u, v16, 0LL, 1);
        ThreadUnlock1(v18, v17, v19);
      }
      goto LABEL_81;
    }
    if ( (*v13 & 8) == 0 && !xxxMNStartMenu((__int64 *)a1, a2, -1) )
    {
LABEL_81:
      *(_DWORD *)(a2 + 8) &= 0xFFFFFEFB;
      xxxEndMenuLoop(a2, **a1);
      xxxMNReleaseCapture(a2);
      xxxInternalGetMessage((int)v50, 0, 512, 512, 2, 0);
      return *(unsigned int *)(a2 + 24);
    }
    if ( (*(_DWORD *)**a1 & 0x40) != 0 )
    {
      v50[2] = 2LL;
      v20 = a4 != 0 ? 518 : 516;
    }
    else
    {
      v50[2] = 1LL;
      v20 = a4 != 0 ? 515 : 513;
    }
    LODWORD(v50[1]) = v20;
    v21 = *a1;
    v50[3] = a3;
    if ( *(_QWORD *)(*v21 + 16) )
      v50[0] = **(_QWORD **)(**a1 + 16);
    else
      v50[0] = 0LL;
    xxxHandleMenuMessages((__int64)v50, a2, a1);
    v10 = *(_DWORD *)(a2 + 8);
  }
  if ( (v10 & 0x100) == 0 )
  {
    while ( 1 )
    {
      if ( (v10 & 4) == 0 )
        goto LABEL_81;
      if ( !(unsigned int)xxxInternalGetMessage((int)v50, 0, 0, 0, 2, 0) )
        goto LABEL_60;
      if ( (*(_DWORD *)(a2 + 8) & 4) == 0 )
        goto LABEL_81;
      if ( (*(_DWORD *)**a1 & 0x8000) != 0 )
        goto LABEL_81;
      if ( (*(_DWORD *)**a1 & 8) == 0 )
      {
        v25 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 120LL);
        if ( v25 != *(_QWORD *)(**a1 + 8)
          && (!v25
           || !(unsigned int)IsChild(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 120LL), *(_QWORD *)(**a1 + 8))) )
        {
          goto LABEL_81;
        }
      }
      if ( (*(_DWORD *)**a1 & 1) == 0 )
        goto LABEL_37;
      v26 = v50[1];
      if ( LODWORD(v50[1]) == 515 )
        break;
LABEL_38:
      if ( v26 == 513 || v26 == 516 || v26 == 161 || v26 == 164 )
      {
        v28 = 1;
        goto LABEL_47;
      }
LABEL_42:
      *(_DWORD *)(gptiCurrent + 480LL) |= 0x200000u;
      v28 = 0;
      if ( !(unsigned int)xxxInternalGetMessage((int)v50, 0, v50[1], v50[1], 1, 0) )
      {
        v29 = *(_DWORD *)(gptiCurrent + 480LL);
        if ( (v29 & 0x200000) != 0 )
        {
          *(_DWORD *)(gptiCurrent + 480LL) = v29 & 0xFFDFFFFF;
LABEL_60:
          if ( (*(_DWORD *)(a2 + 8) & 4) == 0 || (*(_DWORD *)**a1 & 0x8000) != 0 )
            goto LABEL_81;
          if ( (*(_DWORD *)**a1 & 0x20000) != 0 )
          {
            MNFlushDestroyedPopups((_DWORD *)**a1);
            *(_DWORD *)**a1 &= ~0x20000u;
          }
          if ( v9 )
          {
            if ( *(_QWORD *)(**a1 + 8) )
            {
              v31 = *(_QWORD *)(**a1 + 8);
              v32 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24);
              v46 = *(_QWORD *)(v32 + 408);
              *(_QWORD *)(v32 + 408) = &v46;
              v47 = v31;
              _InterlockedAdd((volatile signed __int32 *)(v31 + 8), 1u);
              xxxSendMessage(*(_QWORD *)(**a1 + 8));
              ThreadUnlock1(v34, v33, v35);
            }
            v9 = 0;
          }
          else
          {
            v36 = *(_QWORD *)(a2 + 96) == 0LL;
            v51 = 0;
            xxxWaitMessageEx(0x3CFFu, !v36, (enum SLEEP_STATUS *)&v51);
            if ( (unsigned int)IsShellFrameHangResilient(gptiCurrent) )
            {
              if ( v51 )
              {
                v37 = SlowAppThreadInShellFrame(gptiCurrent, 0LL, 0LL, 1);
                if ( v37 )
                  TryDetachShellFrame(gptiCurrent, (__int64)v37, v51 == 2, 0);
              }
            }
          }
          goto LABEL_72;
        }
      }
      *(_DWORD *)(gptiCurrent + 480LL) &= ~0x200000u;
LABEL_47:
      if ( (unsigned int)xxxCallMsgFilter((__int64)v50, 2) )
      {
        if ( v28 )
          xxxInternalGetMessage((int)v50, 0, v50[1], v50[1], 1, 0);
LABEL_59:
        v9 = 1;
        goto LABEL_72;
      }
      if ( !(unsigned int)xxxHandleMenuMessages((__int64)v50, a2, a1) )
      {
        xxxTranslateMessage((__int64)v50, 0LL);
        xxxDispatchMessage((__int64)v50, v30);
      }
      if ( (*(_DWORD *)(a2 + 8) & 4) == 0
        || (*(_DWORD *)**a1 & 0x8000) != 0
        || (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 388LL) & 0x40) != 0 )
      {
        goto LABEL_81;
      }
      if ( LODWORD(v50[1]) == 280 )
        goto LABEL_60;
      if ( LODWORD(v50[1]) != 275 && LODWORD(v50[1]) != 15 )
        goto LABEL_59;
LABEL_72:
      v10 = *(_DWORD *)(a2 + 8);
    }
    if ( !*(_QWORD *)(**a1 + 8) )
      goto LABEL_42;
    if ( (unsigned int)FindNCHit(*(_QWORD *)(**a1 + 8), v50[3]) == 2 )
    {
      SmartObjStackRefBase<tagMENU>::Init(v48, 0LL);
      v49 = 0LL;
      xxxInternalGetMessage((int)v50, 0, v50[1], v50[1], 1, 0);
      if ( (*(_DWORD *)(a2 + 8) & 4) == 0 || (*(_DWORD *)**a1 & 0x8000) != 0 )
        goto LABEL_80;
      if ( *(_QWORD *)(**a1 + 8) )
      {
        v38 = *(_QWORD *)(**a1 + 8);
        v39 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v27);
        v46 = *(_QWORD *)(v39 + 408);
        *(_QWORD *)(v39 + 408) = &v46;
        v47 = v38;
        _InterlockedAdd((volatile signed __int32 *)(v38 + 8), 1u);
        SysMenuPtr = xxxGetSysMenuPtr((_QWORD *)v38, v40);
        v49 = 0LL;
        SmartObjStackRefBase<tagMENU>::operator=(v48, SysMenuPtr);
        v42 = v49;
        if ( !v49 )
          v42 = *(_QWORD *)v48[0];
        if ( (GetMenuState(v42, 61728LL) & 3) == 0 )
          PostMessage((struct tagWND *)v38, 0x112u, 0xF120uLL, 0LL);
        ThreadUnlock1(v44, v43, v45);
LABEL_80:
        SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v48, v27);
        goto LABEL_81;
      }
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v48, v27);
    }
LABEL_37:
    v26 = v50[1];
    goto LABEL_38;
  }
  xxxMNReleaseCapture(a2);
  v22 = *(_DWORD *)(a2 + 8);
  if ( (v22 & 0x2000000) != 0 )
  {
    --guSFWLockCount;
    *(_DWORD *)(a2 + 8) = v22 & 0xFDFFFFFF;
  }
  return 0LL;
}
