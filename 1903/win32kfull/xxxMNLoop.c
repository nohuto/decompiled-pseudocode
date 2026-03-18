/*
 * XREFs of xxxMNLoop @ 0x1C0220E80
 * Callers:
 *     xxxSysCommand @ 0x1C0137980 (xxxSysCommand.c)
 *     xxxMNKeyFilter @ 0x1C0248C4C (xxxMNKeyFilter.c)
 *     xxxTrackPopupMenuEx @ 0x1C024CB78 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     SlowAppThreadInShellFrame @ 0x1C0009FB0 (SlowAppThreadInShellFrame.c)
 *     _GetMenuState @ 0x1C000C488 (_GetMenuState.c)
 *     xxxInternalGetMessage @ 0x1C000E4C4 (xxxInternalGetMessage.c)
 *     xxxTranslateMessage @ 0x1C00136B0 (xxxTranslateMessage.c)
 *     _PostMessage @ 0x1C0015330 (_PostMessage.c)
 *     xxxSendNotifyMessage @ 0x1C001CE70 (xxxSendNotifyMessage.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxDispatchMessage @ 0x1C0024958 (xxxDispatchMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     xxxSendMessage @ 0x1C009BAB0 (xxxSendMessage.c)
 *     xxxGetSysMenuPtr @ 0x1C00A9918 (xxxGetSysMenuPtr.c)
 *     xxxCallMsgFilter @ 0x1C0101B80 (xxxCallMsgFilter.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C0106608 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0106A24 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     _GetKeyState @ 0x1C0110D00 (_GetKeyState.c)
 *     _IsChild @ 0x1C011C2A8 (_IsChild.c)
 *     IsShellFrameHangResilient @ 0x1C01207DC (IsShellFrameHangResilient.c)
 *     FindNCHit @ 0x1C012D5D8 (FindNCHit.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     TryDetachShellFrame @ 0x1C01E3B58 (TryDetachShellFrame.c)
 *     xxxWaitMessageEx @ 0x1C01E4460 (xxxWaitMessageEx.c)
 *     MNFlushDestroyedPopups @ 0x1C0210930 (MNFlushDestroyedPopups.c)
 *     xxxMNStartMenu @ 0x1C0210ED8 (xxxMNStartMenu.c)
 *     xxxEndMenuLoop @ 0x1C0220290 (xxxEndMenuLoop.c)
 *     xxxHandleMenuMessages @ 0x1C0220464 (xxxHandleMenuMessages.c)
 *     xxxMNReleaseCapture @ 0x1C02264E4 (xxxMNReleaseCapture.c)
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
  __int64 v16; // r9
  _DWORD *v17; // rcx
  _QWORD *v18; // rbx
  __int64 ThreadWin32Thread; // rax
  unsigned __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  int v24; // eax
  __int64 *v25; // rax
  int v26; // eax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  int v36; // ebx
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  _QWORD *v41; // rbx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  bool v46; // zf
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  struct tagTHREADINFO *v50; // rax
  _QWORD *v51; // rbx
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 SysMenuPtr; // rax
  __int64 v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // [rsp+38h] [rbp-29h] BYREF
  _QWORD *v62; // [rsp+40h] [rbp-21h]
  __int64 v63; // [rsp+48h] [rbp-19h]
  _QWORD v64[2]; // [rsp+50h] [rbp-11h] BYREF
  __int64 v65; // [rsp+60h] [rbp-1h]
  __int64 v66[6]; // [rsp+68h] [rbp+7h] BYREF
  int v67; // [rsp+D0h] [rbp+6Fh] BYREF

  memset(v66, 0, sizeof(v66));
  *(_DWORD *)(a2 + 8) |= 4u;
  v61 = 0LL;
  v62 = 0LL;
  v63 = 0LL;
  v11 = 1;
  *(_DWORD *)(a2 + 24) = 0;
  *(_DWORD *)(a2 + 12) = *(_DWORD *)(gptiCurrent + 756LL);
  *(_DWORD *)(a2 + 16) = *(_DWORD *)(gptiCurrent + 760LL);
  *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 396LL) &= ~0x40u;
  v12 = *(_DWORD *)(a2 + 8);
  if ( (v12 & 1) == 0 )
  {
    KeyState = GetKeyState(((*(_DWORD *)**a1 & 0x40) != 0) + 1, v8, v9, v10);
    v17 = (_DWORD *)**a1;
    if ( KeyState >= 0 )
    {
      if ( (*v17 & 0x800) == 0 && *(_QWORD *)(**a1 + 8) )
      {
        v18 = *(_QWORD **)(**a1 + 8);
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14, v15, v16);
        v61 = *(_QWORD *)(ThreadWin32Thread + 408);
        *(_QWORD *)(ThreadWin32Thread + 408) = &v61;
        v62 = v18;
        HMLockObject(v18);
        if ( (*(_DWORD *)**a1 & 8) == 0 || (v20 = 1LL, (*(_DWORD *)**a1 & 4) != 0) )
          v20 = 0LL;
        xxxSendNotifyMessage(*(struct tagWND **)(**a1 + 8), 0x212u, v20, 0LL, 1);
        ThreadUnlock1(v22, v21, v23);
      }
      goto LABEL_81;
    }
    if ( (*v17 & 8) == 0 && !xxxMNStartMenu((__int64 *)a1, a2, -1) )
    {
LABEL_81:
      *(_DWORD *)(a2 + 8) &= 0xFFFFFEFB;
      xxxEndMenuLoop(a2, **a1);
      xxxMNReleaseCapture(a2);
      xxxInternalGetMessage((int)v66, 0, 512, 512, 2, 0);
      return *(unsigned int *)(a2 + 24);
    }
    if ( (*(_DWORD *)**a1 & 0x40) != 0 )
    {
      v66[2] = 2LL;
      v24 = a4 != 0 ? 518 : 516;
    }
    else
    {
      v66[2] = 1LL;
      v24 = a4 != 0 ? 515 : 513;
    }
    LODWORD(v66[1]) = v24;
    v25 = *a1;
    v66[3] = a3;
    if ( *(_QWORD *)(*v25 + 16) )
      v66[0] = **(_QWORD **)(**a1 + 16);
    else
      v66[0] = 0LL;
    xxxHandleMenuMessages((__int64)v66, a2, a1);
    v12 = *(_DWORD *)(a2 + 8);
  }
  if ( (v12 & 0x100) == 0 )
  {
    while ( 1 )
    {
      if ( (v12 & 4) == 0 )
        goto LABEL_81;
      if ( !(unsigned int)xxxInternalGetMessage((int)v66, 0, 0, 0, 2, 0) )
        goto LABEL_60;
      if ( (*(_DWORD *)(a2 + 8) & 4) == 0 )
        goto LABEL_81;
      if ( (*(_DWORD *)**a1 & 0x8000) != 0 )
        goto LABEL_81;
      if ( (*(_DWORD *)**a1 & 8) == 0 )
      {
        v31 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 128LL);
        if ( v31 != *(_QWORD *)(**a1 + 8)
          && (!v31
           || !(unsigned int)IsChild(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 128LL), *(_QWORD *)(**a1 + 8))) )
        {
          goto LABEL_81;
        }
      }
      if ( (*(_DWORD *)**a1 & 1) == 0 )
        goto LABEL_37;
      v32 = v66[1];
      if ( LODWORD(v66[1]) == 515 )
        break;
LABEL_38:
      if ( v32 == 513 || v32 == 516 || v32 == 161 || v32 == 164 )
      {
        v36 = 1;
        goto LABEL_47;
      }
LABEL_42:
      *(_DWORD *)(gptiCurrent + 480LL) |= 0x200000u;
      v36 = 0;
      if ( !(unsigned int)xxxInternalGetMessage((int)v66, 0, v66[1], v66[1], 1, 0) )
      {
        v37 = *(_DWORD *)(gptiCurrent + 480LL);
        if ( (v37 & 0x200000) != 0 )
        {
          *(_DWORD *)(gptiCurrent + 480LL) = v37 & 0xFFDFFFFF;
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
              v41 = *(_QWORD **)(**a1 + 8);
              v42 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v28, v29, v30);
              v61 = *(_QWORD *)(v42 + 408);
              *(_QWORD *)(v42 + 408) = &v61;
              v62 = v41;
              HMLockObject(v41);
              xxxSendMessage(*(_QWORD *)(**a1 + 8));
              ThreadUnlock1(v44, v43, v45);
            }
            v11 = 0;
          }
          else
          {
            v46 = *(_QWORD *)(a2 + 96) == 0LL;
            v67 = 0;
            xxxWaitMessageEx(0x3CFFu, !v46, (enum SLEEP_STATUS *)&v67);
            if ( (unsigned int)IsShellFrameHangResilient(gptiCurrent, v47, v48, v49) )
            {
              if ( v67 )
              {
                v50 = SlowAppThreadInShellFrame(gptiCurrent, 0LL, 0LL, 1);
                if ( v50 )
                  TryDetachShellFrame(gptiCurrent, (__int64)v50, v67 == 2, 0);
              }
            }
          }
          goto LABEL_72;
        }
      }
      *(_DWORD *)(gptiCurrent + 480LL) &= ~0x200000u;
LABEL_47:
      if ( (unsigned int)xxxCallMsgFilter((__int64)v66, 2) )
      {
        if ( v36 )
          xxxInternalGetMessage((int)v66, 0, v66[1], v66[1], 1, 0);
LABEL_59:
        v11 = 1;
        goto LABEL_72;
      }
      if ( !(unsigned int)xxxHandleMenuMessages((__int64)v66, a2, a1) )
      {
        xxxTranslateMessage((__int64)v66, 0);
        xxxDispatchMessage((__int64)v66, v38, v39, v40);
      }
      if ( (*(_DWORD *)(a2 + 8) & 4) == 0
        || (*(_DWORD *)**a1 & 0x8000) != 0
        || (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 396LL) & 0x40) != 0 )
      {
        goto LABEL_81;
      }
      if ( LODWORD(v66[1]) == 280 )
        goto LABEL_60;
      if ( LODWORD(v66[1]) != 275 && LODWORD(v66[1]) != 15 )
        goto LABEL_59;
LABEL_72:
      v12 = *(_DWORD *)(a2 + 8);
    }
    if ( !*(_QWORD *)(**a1 + 8) )
      goto LABEL_42;
    if ( (unsigned int)FindNCHit(*(_QWORD *)(**a1 + 8), v66[3]) == 2 )
    {
      SmartObjStackRefBase<tagMENU>::Init(v64, 0LL);
      v65 = 0LL;
      xxxInternalGetMessage((int)v66, 0, v66[1], v66[1], 1, 0);
      if ( (*(_DWORD *)(a2 + 8) & 4) == 0 || (*(_DWORD *)**a1 & 0x8000) != 0 )
        goto LABEL_80;
      if ( *(_QWORD *)(**a1 + 8) )
      {
        v51 = *(_QWORD **)(**a1 + 8);
        v52 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v33, v34, v35);
        v61 = *(_QWORD *)(v52 + 408);
        *(_QWORD *)(v52 + 408) = &v61;
        v62 = v51;
        HMLockObject(v51);
        SysMenuPtr = xxxGetSysMenuPtr(v51, v53, v54, v55);
        v65 = 0LL;
        SmartObjStackRefBase<tagMENU>::operator=(v64, SysMenuPtr);
        v57 = v65;
        if ( !v65 )
          v57 = *(_QWORD *)v64[0];
        if ( (GetMenuState(v57, 61728LL) & 3) == 0 )
          PostMessage((int)v51, 274, 61728, 0);
        ThreadUnlock1(v59, v58, v60);
LABEL_80:
        SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v64, v33, v34, v35);
        goto LABEL_81;
      }
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v64, v33, v34, v35);
    }
LABEL_37:
    v32 = v66[1];
    goto LABEL_38;
  }
  xxxMNReleaseCapture(a2);
  v26 = *(_DWORD *)(a2 + 8);
  if ( (v26 & 0x2000000) != 0 )
  {
    --guSFWLockCount;
    *(_DWORD *)(a2 + 8) = v26 & 0xFDFFFFFF;
  }
  return 0LL;
}
