/*
 * XREFs of xxxMNLoop @ 0x1C0209440
 * Callers:
 *     xxxSysCommand @ 0x1C00DF300 (xxxSysCommand.c)
 *     xxxMNKeyFilter @ 0x1C0230040 (xxxMNKeyFilter.c)
 *     xxxTrackPopupMenuEx @ 0x1C0233EE8 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     xxxGetSysMenuPtr @ 0x1C0020FE8 (xxxGetSysMenuPtr.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxSendMessage @ 0x1C002CE20 (xxxSendMessage.c)
 *     xxxDispatchMessage @ 0x1C002DDC0 (xxxDispatchMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     xxxInternalGetMessage @ 0x1C00BC3F0 (xxxInternalGetMessage.c)
 *     _GetMenuState @ 0x1C00BC924 (_GetMenuState.c)
 *     xxxSendNotifyMessage @ 0x1C00D14F0 (xxxSendNotifyMessage.c)
 *     xxxCallMsgFilter @ 0x1C00D2880 (xxxCallMsgFilter.c)
 *     IsShellFrameHangResilient @ 0x1C00D7C8C (IsShellFrameHangResilient.c)
 *     _PostMessage @ 0x1C00DC980 (_PostMessage.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FBDF8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00FE500 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     _GetKeyState @ 0x1C0107788 (_GetKeyState.c)
 *     xxxTranslateMessage @ 0x1C0110150 (xxxTranslateMessage.c)
 *     FindNCHit @ 0x1C0123470 (FindNCHit.c)
 *     SlowAppThreadInShellFrame @ 0x1C012AEEC (SlowAppThreadInShellFrame.c)
 *     _IsChild @ 0x1C0154384 (_IsChild.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     TryDetachShellFrame @ 0x1C01CF278 (TryDetachShellFrame.c)
 *     xxxWaitMessageEx @ 0x1C01CF7DC (xxxWaitMessageEx.c)
 *     MNFlushDestroyedPopups @ 0x1C01F9C90 (MNFlushDestroyedPopups.c)
 *     xxxMNStartMenu @ 0x1C01FA218 (xxxMNStartMenu.c)
 *     xxxEndMenuLoop @ 0x1C02088E0 (xxxEndMenuLoop.c)
 *     xxxHandleMenuMessages @ 0x1C0208A7C (xxxHandleMenuMessages.c)
 *     xxxMNReleaseCapture @ 0x1C020E8B0 (xxxMNReleaseCapture.c)
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
  _DWORD *v15; // rcx
  __int64 v16; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // eax
  __int64 *v22; // rax
  int v23; // eax
  __int64 v25; // rdx
  __int64 v26; // rdx
  int v27; // eax
  __int64 v28; // rdx
  int v29; // ebx
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  bool v36; // zf
  struct tagTHREADINFO *v37; // rax
  __int64 v38; // rbx
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 SysMenuPtr; // rax
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // [rsp+38h] [rbp-29h] BYREF
  __int64 v46; // [rsp+40h] [rbp-21h]
  _QWORD v47[2]; // [rsp+50h] [rbp-11h] BYREF
  __int64 v48; // [rsp+60h] [rbp-1h]
  _QWORD v49[6]; // [rsp+68h] [rbp+7h] BYREF
  int v50; // [rsp+D0h] [rbp+6Fh] BYREF

  memset(v49, 0, sizeof(v49));
  *(_DWORD *)(a2 + 8) |= 4u;
  v11 = 1;
  *(_DWORD *)(a2 + 24) = 0;
  *(_DWORD *)(a2 + 12) = *(_DWORD *)(gptiCurrent + 764LL);
  *(_DWORD *)(a2 + 16) = *(_DWORD *)(gptiCurrent + 768LL);
  *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 388LL) &= ~0x40u;
  v12 = *(_DWORD *)(a2 + 8);
  if ( (v12 & 1) == 0 )
  {
    KeyState = GetKeyState(((*(_DWORD *)**a1 & 0x40) != 0) + 1, v8, v9, v10);
    v15 = (_DWORD *)**a1;
    if ( KeyState >= 0 )
    {
      if ( (*v15 & 0x800) == 0 && *(_QWORD *)(**a1 + 8) )
      {
        v16 = *(_QWORD *)(**a1 + 8);
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14);
        v45 = *(_QWORD *)(ThreadWin32Thread + 416);
        *(_QWORD *)(ThreadWin32Thread + 416) = &v45;
        v46 = v16;
        _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
        if ( (*(_DWORD *)**a1 & 8) == 0 || (v18 = 1LL, (*(_DWORD *)**a1 & 4) != 0) )
          v18 = 0LL;
        xxxSendNotifyMessage(*(struct tagWND **)(**a1 + 8), 0x212u, v18, 0LL, 1);
        ThreadUnlock1(v20, v19);
      }
      goto LABEL_81;
    }
    if ( (*v15 & 8) == 0 && !xxxMNStartMenu((__int64 *)a1, a2, -1) )
    {
LABEL_81:
      *(_DWORD *)(a2 + 8) &= 0xFFFFFEFB;
      xxxEndMenuLoop(a2, **a1);
      xxxMNReleaseCapture(a2);
      xxxInternalGetMessage((__int64)v49, 0LL, 0x200u, 0x200u, 2, 0);
      return *(unsigned int *)(a2 + 24);
    }
    if ( (*(_DWORD *)**a1 & 0x40) != 0 )
    {
      v49[2] = 2LL;
      v21 = a4 != 0 ? 518 : 516;
    }
    else
    {
      v49[2] = 1LL;
      v21 = a4 != 0 ? 515 : 513;
    }
    LODWORD(v49[1]) = v21;
    v22 = *a1;
    v49[3] = a3;
    if ( *(_QWORD *)(*v22 + 16) )
      v49[0] = **(_QWORD **)(**a1 + 16);
    else
      v49[0] = 0LL;
    xxxHandleMenuMessages((__int64)v49, a2, a1);
    v12 = *(_DWORD *)(a2 + 8);
  }
  if ( (v12 & 0x100) == 0 )
  {
    while ( 1 )
    {
      if ( (v12 & 4) == 0 )
        goto LABEL_81;
      if ( !(unsigned int)xxxInternalGetMessage((__int64)v49, 0LL, 0, 0, 2, 0) )
        goto LABEL_60;
      if ( (*(_DWORD *)(a2 + 8) & 4) == 0 )
        goto LABEL_81;
      if ( (*(_DWORD *)**a1 & 0x8000) != 0 )
        goto LABEL_81;
      if ( (*(_DWORD *)**a1 & 8) == 0 )
      {
        v26 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL);
        if ( v26 != *(_QWORD *)(**a1 + 8)
          && (!v26
           || !(unsigned int)IsChild(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL), *(_QWORD *)(**a1 + 8))) )
        {
          goto LABEL_81;
        }
      }
      if ( (*(_DWORD *)**a1 & 1) == 0 )
        goto LABEL_37;
      v27 = v49[1];
      if ( LODWORD(v49[1]) == 515 )
        break;
LABEL_38:
      if ( v27 == 513 || v27 == 516 || v27 == 161 || v27 == 164 )
      {
        v29 = 1;
        goto LABEL_47;
      }
LABEL_42:
      *(_DWORD *)(gptiCurrent + 488LL) |= 0x200000u;
      v29 = 0;
      if ( !(unsigned int)xxxInternalGetMessage((__int64)v49, 0LL, v49[1], v49[1], 1, 0) )
      {
        v30 = *(_DWORD *)(gptiCurrent + 488LL);
        if ( (v30 & 0x200000) != 0 )
        {
          *(_DWORD *)(gptiCurrent + 488LL) = v30 & 0xFFDFFFFF;
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
              v32 = *(_QWORD *)(**a1 + 8);
              v33 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v25);
              v45 = *(_QWORD *)(v33 + 416);
              *(_QWORD *)(v33 + 416) = &v45;
              v46 = v32;
              _InterlockedAdd((volatile signed __int32 *)(v32 + 8), 1u);
              xxxSendMessage(*(_QWORD *)(**a1 + 8));
              ThreadUnlock1(v35, v34);
            }
            v11 = 0;
          }
          else
          {
            v36 = *(_QWORD *)(a2 + 96) == 0LL;
            v50 = 0;
            xxxWaitMessageEx(0x3CFFu, !v36, (enum SLEEP_STATUS *)&v50);
            if ( (unsigned int)IsShellFrameHangResilient(gptiCurrent) )
            {
              if ( v50 )
              {
                v37 = SlowAppThreadInShellFrame(gptiCurrent, 0LL, 0LL, 1);
                if ( v37 )
                  TryDetachShellFrame(gptiCurrent, (__int64)v37, v50 == 2, 0);
              }
            }
          }
          goto LABEL_72;
        }
      }
      *(_DWORD *)(gptiCurrent + 488LL) &= ~0x200000u;
LABEL_47:
      if ( (unsigned int)xxxCallMsgFilter((__int64)v49, 2) )
      {
        if ( v29 )
          xxxInternalGetMessage((__int64)v49, 0LL, v49[1], v49[1], 1, 0);
LABEL_59:
        v11 = 1;
        goto LABEL_72;
      }
      if ( !(unsigned int)xxxHandleMenuMessages((__int64)v49, a2, a1) )
      {
        xxxTranslateMessage((__int64)v49, 0LL);
        xxxDispatchMessage((__int64)v49, v31);
      }
      if ( (*(_DWORD *)(a2 + 8) & 4) == 0
        || (*(_DWORD *)**a1 & 0x8000) != 0
        || (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 388LL) & 0x40) != 0 )
      {
        goto LABEL_81;
      }
      if ( LODWORD(v49[1]) == 280 )
        goto LABEL_60;
      if ( LODWORD(v49[1]) != 275 && LODWORD(v49[1]) != 15 )
        goto LABEL_59;
LABEL_72:
      v12 = *(_DWORD *)(a2 + 8);
    }
    if ( !*(_QWORD *)(**a1 + 8) )
      goto LABEL_42;
    if ( (unsigned int)FindNCHit(*(_QWORD *)(**a1 + 8), v49[3]) == 2 )
    {
      SmartObjStackRefBase<tagMENU>::Init(v47, 0LL);
      v48 = 0LL;
      xxxInternalGetMessage((__int64)v49, 0LL, v49[1], v49[1], 1, 0);
      if ( (*(_DWORD *)(a2 + 8) & 4) == 0 || (*(_DWORD *)**a1 & 0x8000) != 0 )
        goto LABEL_80;
      if ( *(_QWORD *)(**a1 + 8) )
      {
        v38 = *(_QWORD *)(**a1 + 8);
        v39 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v28);
        v45 = *(_QWORD *)(v39 + 416);
        *(_QWORD *)(v39 + 416) = &v45;
        v46 = v38;
        _InterlockedAdd((volatile signed __int32 *)(v38 + 8), 1u);
        SysMenuPtr = xxxGetSysMenuPtr((_QWORD *)v38, v40);
        v48 = 0LL;
        SmartObjStackRefBase<tagMENU>::operator=(v47, SysMenuPtr);
        v42 = v48;
        if ( !v48 )
          v42 = *(_QWORD *)v47[0];
        if ( (GetMenuState(v42, 61728LL) & 3) == 0 )
          PostMessage((struct tagWND *)v38, 0x112u, 0xF120uLL, 0LL);
        ThreadUnlock1(v44, v43);
LABEL_80:
        SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v47, v28);
        goto LABEL_81;
      }
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v47, v28);
    }
LABEL_37:
    v27 = v49[1];
    goto LABEL_38;
  }
  xxxMNReleaseCapture(a2);
  v23 = *(_DWORD *)(a2 + 8);
  if ( (v23 & 0x2000000) != 0 )
  {
    --guSFWLockCount;
    *(_DWORD *)(a2 + 8) = v23 & 0xFDFFFFFF;
  }
  return 0LL;
}
