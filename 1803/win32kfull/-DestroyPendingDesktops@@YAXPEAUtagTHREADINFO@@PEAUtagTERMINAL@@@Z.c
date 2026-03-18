/*
 * XREFs of ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C010889C
 * Callers:
 *     ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C000DCE0 (-xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 * Callees:
 *     xxxSetThreadDesktop @ 0x1C000EEA8 (xxxSetThreadDesktop.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00262F8 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00263B8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     xxxSetWindowPos @ 0x1C0034CE4 (xxxSetWindowPos.c)
 *     _DestroyMenu @ 0x1C00507F0 (_DestroyMenu.c)
 *     UnlockDesktopMenu @ 0x1C0050900 (UnlockDesktopMenu.c)
 *     PopAndFreeW32ThreadLock @ 0x1C005D3C0 (PopAndFreeW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C005D730 (PushW32ThreadLock.c)
 *     xxxDestroyWindow @ 0x1C00711E0 (xxxDestroyWindow.c)
 *     RemoteDisableScreen @ 0x1C00BB240 (RemoteDisableScreen.c)
 *     xxxSwitchDesktop @ 0x1C00BFEDC (xxxSwitchDesktop.c)
 *     DwmAsyncShellWindowChange @ 0x1C00F17E8 (DwmAsyncShellWindowChange.c)
 *     ?UnInitializeWindowGroupFunctionality@WindowGroupingFeature@@YAX_K@Z @ 0x1C0108CEC (-UnInitializeWindowGroupFunctionality@WindowGroupingFeature@@YAX_K@Z.c)
 *     xxxCleanupMotherDesktopWindow @ 0x1C0108D28 (xxxCleanupMotherDesktopWindow.c)
 */

void __fastcall DestroyPendingDesktops(struct tagTHREADINFO *a1, struct tagTERMINAL *a2)
{
  __int64 v4; // rdi
  __int64 v5; // r14
  void *v6; // rcx
  __int64 v7; // rdx
  _QWORD *j; // rdx
  _DWORD *v9; // rsi
  __int64 v10; // r12
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rdx
  unsigned __int64 v14; // rdx
  WindowGroupingFeature ***v15; // rcx
  _QWORD *v16; // rcx
  _QWORD *v17; // rcx
  ULONG_PTR v18; // rbx
  ULONG_PTR v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // r10
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 *v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rdx
  PVOID v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 i; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 **v43; // rax
  __int64 v44; // rbx
  void *v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rax
  _QWORD v48[2]; // [rsp+48h] [rbp-59h] BYREF
  __int64 v49; // [rsp+58h] [rbp-49h]
  _QWORD v50[3]; // [rsp+60h] [rbp-41h] BYREF
  _QWORD v51[3]; // [rsp+78h] [rbp-29h] BYREF
  _QWORD v52[3]; // [rsp+90h] [rbp-11h] BYREF
  _QWORD v53[3]; // [rsp+A8h] [rbp+7h] BYREF
  _QWORD v54[3]; // [rsp+C0h] [rbp+1Fh] BYREF

  SmartObjStackRefBase<tagMENU>::Init(v48, 0LL);
  v49 = 0LL;
  while ( 1 )
  {
    v4 = *((_QWORD *)a2 + 6);
    if ( !v4 )
      break;
    PushW32ThreadLock(*((_QWORD *)a2 + 6), v54, UserDereferenceObject);
    ObfReferenceObject((PVOID)v4);
    v5 = *(_QWORD *)(v4 + 40);
    PushW32ThreadLock(v5, v53, UserDereferenceObject);
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
          RemoteDisableScreen(grpdeskRitInput, v7);
          goto LABEL_7;
        }
        v33 = grpdeskLogon;
      }
      else
      {
        v33 = *(PVOID *)(v5 + 16);
        if ( v33 == (PVOID)v4 )
          v33 = *(PVOID *)(v4 + 32);
        if ( !v33 )
          *(_WORD *)(*((_QWORD *)a1 + 55) + 6LL) &= 0xC3F8u;
      }
      PushW32ThreadLock((__int64)v33, v51, UserDereferenceObject);
      if ( v33 )
        ObfReferenceObject(v33);
      xxxSwitchDesktop(v5, (__int64)v33, 0, 0);
      PopAndFreeW32ThreadLock((__int64)v51, v34);
    }
    else if ( v4 == *((_QWORD *)a1 + 56) )
    {
      v35 = 0LL;
      for ( i = grpWinStaList; i; i = *(_QWORD *)(i + 8) )
      {
        if ( (*(_DWORD *)(i + 32) & 0x10) == 0 && *(struct tagTERMINAL **)(i + 24) == a2 && *(_QWORD *)(i + 16) )
        {
          v35 = *(_QWORD *)(i + 16);
          do
          {
            if ( v35 != v4 )
              break;
            v35 = *(_QWORD *)(v35 + 32);
          }
          while ( v35 );
          break;
        }
      }
      xxxSetThreadDesktop(0LL, v35);
    }
LABEL_7:
    if ( (PVOID)v4 == gspdeskShouldBeForeground )
    {
      for ( j = *(_QWORD **)(v5 + 16); j && (j == gspdeskDisconnect || j == grpdeskLogon); j = (_QWORD *)j[4] )
        ;
      LockObjectAssignment(&gspdeskShouldBeForeground, j);
    }
    v9 = (_DWORD *)*((_QWORD *)a1 + 56);
    v10 = *((_QWORD *)a1 + 73);
    PushW32ThreadLock((__int64)v9, v52, UserDereferenceObject);
    if ( v9 )
      ObfReferenceObject(v9);
    xxxSetThreadDesktop(0LL, v4);
    HMAssignmentUnlock(v4 + 88);
    HMAssignmentUnlock(v4 + 96);
    HMAssignmentUnlock(v4 + 184);
    *(_DWORD *)(v4 + 48) &= 0xFFFFFA3F;
    v11 = *(_QWORD *)(v4 + 56);
    if ( v11 )
    {
      v49 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(v48, v11);
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 56) + 40LL) + 40LL) &= ~0x80u;
      if ( UnlockDesktopMenu((__int64 *)(v4 + 56)) )
      {
        v37 = v49;
        if ( !v49 )
          v37 = *(_QWORD *)v48[0];
        DestroyMenu(v37);
      }
    }
    v12 = *(_QWORD *)(v4 + 64);
    if ( v12 )
    {
      v49 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(v48, v12);
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 64) + 40LL) + 40LL) &= ~0x80u;
      if ( UnlockDesktopMenu((__int64 *)(v4 + 64)) )
      {
        v38 = v49;
        if ( !v49 )
          v38 = *(_QWORD *)v48[0];
        DestroyMenu(v38);
      }
    }
    v13 = *(_QWORD *)(v4 + 72);
    if ( v13 )
    {
      v49 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(v48, v13);
      if ( UnlockDesktopMenu((__int64 *)(v4 + 72)) )
      {
        v39 = v49;
        if ( !v49 )
          v39 = *(_QWORD *)v48[0];
        DestroyMenu(v39);
      }
    }
    v14 = *(_QWORD *)(v4 + 80);
    if ( v14 )
    {
      v49 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(v48, v14);
      if ( UnlockDesktopMenu((__int64 *)(v4 + 80)) )
      {
        v40 = v49;
        if ( !v49 )
          v40 = *(_QWORD *)v48[0];
        DestroyMenu(v40);
      }
    }
    v15 = *(WindowGroupingFeature ****)(v4 + 8);
    if ( v15 )
    {
      WindowGroupingFeature::UnInitializeWindowGroupFunctionality(**v15, v14);
      v16 = *(_QWORD **)(v4 + 8);
      if ( v16[3] == gspwndFullScreen )
      {
        HMAssignmentUnlock(&gspwndFullScreen);
        v16 = *(_QWORD **)(v4 + 8);
      }
      if ( v16[21] )
      {
        if ( (unsigned int)IsWindowDesktopComposed(v16[21]) )
        {
          v43 = *(__int64 ***)(v4 + 8);
          v44 = **v43;
          v45 = (void *)ReferenceDwmApiPort(*v43, v41, v42);
          DwmAsyncShellWindowChange(v45, 0LL, v44);
        }
        v46 = *(_QWORD *)(v4 + 8) + 168LL;
        *(_QWORD *)(**(_QWORD **)(v4 + 8) + 24LL) = 0LL;
        HMAssignmentUnlock(v46);
        v16 = *(_QWORD **)(v4 + 8);
      }
      if ( v16[23] )
      {
        HMAssignmentUnlock(v16 + 23);
        v16 = *(_QWORD **)(v4 + 8);
      }
      if ( v16[24] )
      {
        *(_QWORD *)(*v16 + 24LL) = 0LL;
        HMAssignmentUnlock(v16 + 24);
        v16 = *(_QWORD **)(v4 + 8);
      }
      v17 = v16 + 25;
      if ( *v17 )
      {
        *(_QWORD *)(*(v17 - 25) + 40LL) = 0LL;
        HMAssignmentUnlock(v17);
      }
    }
    v18 = *(_QWORD *)(v4 + 104);
    if ( v18 && HMAssignmentUnlock(v4 + 104) )
      xxxDestroyWindow(v18);
    v19 = *(_QWORD *)(v4 + 112);
    if ( v19 && HMAssignmentUnlock(v4 + 112) )
      xxxDestroyWindow(v19);
    v20 = *(_QWORD *)(v4 + 264);
    if ( v20 )
    {
      Win32FreePool(v20);
      *(_QWORD *)(v4 + 264) = 0LL;
    }
    v21 = *((_QWORD *)a2 + 1);
    if ( v21 )
    {
      v22 = v21 + 24;
      if ( *(_QWORD *)(v21 + 24) == v4 )
      {
        if ( (*(_DWORD *)a2 & 2) != 0 )
        {
          v47 = grpWinStaList;
          if ( grpWinStaList )
          {
            while ( 1 )
            {
              v47 = *(_QWORD *)(v47 + 8);
              if ( !v47 )
                break;
              v23 = *(_QWORD *)(v47 + 16);
              if ( v23 )
                goto LABEL_41;
            }
          }
        }
        else
        {
          v23 = *(_QWORD *)(v5 + 16);
          if ( v23 )
          {
LABEL_41:
            LockObjectAssignment(v22, v23);
            goto LABEL_42;
          }
        }
        if ( a2 == gTermIO )
          xxxCleanupMotherDesktopWindow(a2);
      }
    }
LABEL_42:
    v24 = *(_QWORD *)(v4 + 8);
    if ( v24 )
    {
      v25 = *(_QWORD *)(v24 + 24);
      if ( v25 )
      {
        if ( (*(_BYTE *)(*(_QWORD *)(v25 + 40) + 31LL) & 0x10) != 0 )
        {
          v50[0] = *((_QWORD *)a1 + 51);
          *((_QWORD *)a1 + 51) = v50;
          v50[1] = v25;
          _InterlockedIncrement((volatile signed __int32 *)(v25 + 8));
          xxxSetWindowPos((struct tagWND *)v25, 0LL, 0LL, 0LL, 0, 0, 1183);
          ThreadUnlock1(v27, v26, v28);
          v24 = *(_QWORD *)(v4 + 8);
        }
        xxxDestroyWindow(*(_QWORD *)(v24 + 24));
        if ( v4 != grpdeskRitInput )
        {
          v29 = (__int64 *)(*(_QWORD *)(v4 + 8) + 24LL);
          *(_QWORD *)(**(_QWORD **)(v4 + 8) + 8LL) = 0LL;
          goto LABEL_48;
        }
        *(_DWORD *)(v4 + 48) |= 1u;
        if ( gspwndShouldBeForeground )
        {
          v29 = &gspwndShouldBeForeground;
LABEL_48:
          HMAssignmentUnlock(v29);
        }
        *(_DWORD *)(v4 + 48) |= 2u;
      }
    }
    if ( (*(_DWORD *)a2 & 2) == 0 || !v9 || (v9[12] & 6) == 0 )
      xxxSetThreadDesktop(v10, (__int64)v9);
    PopAndFreeW32ThreadLock((__int64)v52, v24);
    PopAndFreeW32ThreadLock((__int64)v53, v30);
    PopAndFreeW32ThreadLock((__int64)v54, v31);
  }
  KeSetEvent(gpevtDesktopDestroyed, 1, 0);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v48, v32);
}
