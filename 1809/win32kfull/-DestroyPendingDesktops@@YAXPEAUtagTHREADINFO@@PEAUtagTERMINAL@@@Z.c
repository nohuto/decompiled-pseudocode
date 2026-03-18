/*
 * XREFs of ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00097E0
 * Callers:
 *     ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00BC348 (-xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 * Callees:
 *     xxxCleanupMotherDesktopWindow @ 0x1C0009158 (xxxCleanupMotherDesktopWindow.c)
 *     ?UnInitializeWindowGroupFunctionality@WindowGroupingFeature@@YAX_K@Z @ 0x1C0009C90 (-UnInitializeWindowGroupFunctionality@WindowGroupingFeature@@YAX_K@Z.c)
 *     xxxDestroyWindow @ 0x1C001BB70 (xxxDestroyWindow.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     PopAndFreeW32ThreadLock @ 0x1C0037100 (PopAndFreeW32ThreadLock.c)
 *     ClearWakeBit @ 0x1C00372BC (ClearWakeBit.c)
 *     _DestroyMenu @ 0x1C006C6D0 (_DestroyMenu.c)
 *     xxxSetWindowPos @ 0x1C0071C80 (xxxSetWindowPos.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     xxxSetThreadDesktop @ 0x1C00B0F18 (xxxSetThreadDesktop.c)
 *     DwmAsyncShellWindowChange @ 0x1C00C96C4 (DwmAsyncShellWindowChange.c)
 *     xxxSwitchDesktop @ 0x1C00D513C (xxxSwitchDesktop.c)
 *     RemoteDisableScreen @ 0x1C00EA398 (RemoteDisableScreen.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FBDF8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00FE500 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     UnlockDesktopMenu @ 0x1C0136274 (UnlockDesktopMenu.c)
 */

void __fastcall DestroyPendingDesktops(struct tagTHREADINFO *a1, struct tagTERMINAL *a2)
{
  __int64 v4; // rdi
  __int64 v5; // r14
  void *v6; // rcx
  _QWORD *j; // rdx
  _DWORD *v8; // rsi
  __int64 v9; // r12
  unsigned __int64 v10; // rdx
  WindowGroupingFeature ***v11; // rcx
  _QWORD *v12; // rcx
  _QWORD *v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // r10
  __int64 *v22; // rcx
  PVOID v23; // rbx
  __int64 i; // rcx
  __int64 v25; // rdx
  void *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  _QWORD v29[2]; // [rsp+48h] [rbp-59h] BYREF
  __int64 v30; // [rsp+58h] [rbp-49h]
  _QWORD v31[3]; // [rsp+60h] [rbp-41h] BYREF
  _BYTE v32[24]; // [rsp+78h] [rbp-29h] BYREF
  _BYTE v33[24]; // [rsp+90h] [rbp-11h] BYREF
  _BYTE v34[24]; // [rsp+A8h] [rbp+7h] BYREF
  _BYTE v35[24]; // [rsp+C0h] [rbp+1Fh] BYREF

  SmartObjStackRefBase<tagMENU>::Init(v29, 0LL);
  v30 = 0LL;
  while ( 1 )
  {
    v4 = *((_QWORD *)a2 + 6);
    if ( !v4 )
      break;
    PushW32ThreadLock(*((_QWORD *)a2 + 6), v35, UserDereferenceObject);
    ObfReferenceObject((PVOID)v4);
    v5 = *(_QWORD *)(v4 + 40);
    PushW32ThreadLock(v5, v34, UserDereferenceObject);
    v6 = *(void **)(v4 + 40);
    if ( v6 )
      ObfReferenceObject(v6);
    LockObjectAssignment((char *)a2 + 48, *(_QWORD *)(v4 + 32));
    UnlockObjectAssignment(v4 + 32);
    if ( v4 == grpdeskRitInput )
    {
      if ( (*(_DWORD *)(v5 + 32) & 1) != 0 )
      {
        if ( gspdeskDisconnect
          && ((PVOID)v4 == grpdeskLogon || !grpdeskLogon || (*((_DWORD *)grpdeskLogon + 12) & 2) != 0) )
        {
          RemoteDisableScreen();
          goto LABEL_7;
        }
        v23 = grpdeskLogon;
      }
      else
      {
        v23 = *(PVOID *)(v5 + 16);
        if ( v23 == (PVOID)v4 )
          v23 = *(PVOID *)(v4 + 32);
        if ( !v23 )
          ClearWakeBit(a1, 15367LL, 0LL);
      }
      PushW32ThreadLock(v23, v32, UserDereferenceObject);
      if ( v23 )
        ObfReferenceObject(v23);
      xxxSwitchDesktop(v5, v23, 0LL, 0LL);
      PopAndFreeW32ThreadLock(v32);
    }
    else if ( v4 == *((_QWORD *)a1 + 57) )
    {
      for ( i = grpWinStaList; i; i = *(_QWORD *)(i + 8) )
      {
        if ( (*(_DWORD *)(i + 32) & 0x10) == 0 && *(struct tagTERMINAL **)(i + 24) == a2 && *(_QWORD *)(i + 16) )
        {
          v25 = *(_QWORD *)(i + 16);
          do
          {
            if ( v25 != v4 )
              break;
            v25 = *(_QWORD *)(v25 + 32);
          }
          while ( v25 );
          break;
        }
      }
      xxxSetThreadDesktop(0LL);
    }
LABEL_7:
    if ( (PVOID)v4 == gspdeskShouldBeForeground )
    {
      for ( j = *(_QWORD **)(v5 + 16); j && (j == gspdeskDisconnect || j == grpdeskLogon); j = (_QWORD *)j[4] )
        ;
      LockObjectAssignment(&gspdeskShouldBeForeground, j);
    }
    v8 = (_DWORD *)*((_QWORD *)a1 + 57);
    v9 = *((_QWORD *)a1 + 74);
    PushW32ThreadLock(v8, v33, UserDereferenceObject);
    if ( v8 )
      ObfReferenceObject(v8);
    xxxSetThreadDesktop(0LL);
    HMAssignmentUnlock(v4 + 88);
    HMAssignmentUnlock(v4 + 96);
    HMAssignmentUnlock(v4 + 184);
    *(_DWORD *)(v4 + 48) &= 0xFFFFFA3F;
    if ( *(_QWORD *)(v4 + 56) )
    {
      v30 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(v29);
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 56) + 40LL) + 40LL) &= ~0x80u;
      if ( UnlockDesktopMenu(v4 + 56) )
        DestroyMenu();
    }
    if ( *(_QWORD *)(v4 + 64) )
    {
      v30 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(v29);
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 64) + 40LL) + 40LL) &= ~0x80u;
      if ( UnlockDesktopMenu(v4 + 64) )
        DestroyMenu();
    }
    if ( *(_QWORD *)(v4 + 72) )
    {
      v30 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(v29);
      if ( UnlockDesktopMenu(v4 + 72) )
        DestroyMenu();
    }
    v10 = *(_QWORD *)(v4 + 80);
    if ( v10 )
    {
      v30 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(v29);
      if ( UnlockDesktopMenu(v4 + 80) )
        DestroyMenu();
    }
    v11 = *(WindowGroupingFeature ****)(v4 + 8);
    if ( v11 )
    {
      WindowGroupingFeature::UnInitializeWindowGroupFunctionality(**v11, v10);
      v12 = *(_QWORD **)(v4 + 8);
      if ( v12[3] == gspwndFullScreen )
      {
        HMAssignmentUnlock(&gspwndFullScreen);
        v12 = *(_QWORD **)(v4 + 8);
      }
      if ( v12[21] )
      {
        if ( (unsigned int)IsWindowDesktopComposed(v12[21]) )
        {
          v26 = (void *)ReferenceDwmApiPort();
          DwmAsyncShellWindowChange(v26);
        }
        v27 = *(_QWORD *)(v4 + 8) + 168LL;
        *(_QWORD *)(**(_QWORD **)(v4 + 8) + 24LL) = 0LL;
        HMAssignmentUnlock(v27);
        v12 = *(_QWORD **)(v4 + 8);
      }
      if ( v12[23] )
      {
        HMAssignmentUnlock(v12 + 23);
        v12 = *(_QWORD **)(v4 + 8);
      }
      if ( v12[24] )
      {
        *(_QWORD *)(*v12 + 24LL) = 0LL;
        HMAssignmentUnlock(v12 + 24);
        v12 = *(_QWORD **)(v4 + 8);
      }
      v13 = v12 + 25;
      if ( *v13 )
      {
        *(_QWORD *)(*(v13 - 25) + 40LL) = 0LL;
        HMAssignmentUnlock(v13);
      }
    }
    v14 = *(_QWORD *)(v4 + 104);
    if ( v14 && HMAssignmentUnlock(v4 + 104) )
      xxxDestroyWindow(v14);
    v15 = *(_QWORD *)(v4 + 112);
    if ( v15 && HMAssignmentUnlock(v4 + 112) )
      xxxDestroyWindow(v15);
    v16 = *(_QWORD *)(v4 + 264);
    if ( v16 )
    {
      Win32FreePool(v16);
      *(_QWORD *)(v4 + 264) = 0LL;
    }
    v17 = *((_QWORD *)a2 + 1);
    if ( v17 )
    {
      v18 = v17 + 24;
      if ( *(_QWORD *)(v17 + 24) == v4 )
      {
        if ( (*(_DWORD *)a2 & 2) != 0 )
        {
          v28 = grpWinStaList;
          if ( grpWinStaList )
          {
            while ( 1 )
            {
              v28 = *(_QWORD *)(v28 + 8);
              if ( !v28 )
                break;
              v19 = *(_QWORD *)(v28 + 16);
              if ( v19 )
                goto LABEL_41;
            }
          }
        }
        else
        {
          v19 = *(_QWORD *)(v5 + 16);
          if ( v19 )
          {
LABEL_41:
            LockObjectAssignment(v18, v19);
            goto LABEL_42;
          }
        }
        if ( a2 == gTermIO )
          xxxCleanupMotherDesktopWindow((__int64)a2);
      }
    }
LABEL_42:
    v20 = *(_QWORD *)(v4 + 8);
    if ( v20 )
    {
      v21 = *(_QWORD *)(v20 + 24);
      if ( v21 )
      {
        if ( (*(_BYTE *)(*(_QWORD *)(v21 + 40) + 31LL) & 0x10) != 0 )
        {
          v31[0] = *((_QWORD *)a1 + 52);
          *((_QWORD *)a1 + 52) = v31;
          v31[1] = v21;
          _InterlockedIncrement((volatile signed __int32 *)(v21 + 8));
          xxxSetWindowPos((struct tagWND *)v21, 0, 0, 1183);
          ThreadUnlock1();
          v20 = *(_QWORD *)(v4 + 8);
        }
        xxxDestroyWindow(*(_QWORD *)(v20 + 24));
        if ( v4 != grpdeskRitInput )
        {
          v22 = (__int64 *)(*(_QWORD *)(v4 + 8) + 24LL);
          *(_QWORD *)(**(_QWORD **)(v4 + 8) + 8LL) = 0LL;
          goto LABEL_48;
        }
        *(_DWORD *)(v4 + 48) |= 1u;
        if ( gspwndShouldBeForeground )
        {
          v22 = &gspwndShouldBeForeground;
LABEL_48:
          HMAssignmentUnlock(v22);
        }
        *(_DWORD *)(v4 + 48) |= 2u;
      }
    }
    if ( (*(_DWORD *)a2 & 2) == 0 || !v8 || (v8[12] & 6) == 0 )
      xxxSetThreadDesktop(v9);
    PopAndFreeW32ThreadLock(v33);
    PopAndFreeW32ThreadLock(v34);
    PopAndFreeW32ThreadLock(v35);
  }
  KeSetEvent(gpevtDesktopDestroyed, 1, 0);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v29);
}
