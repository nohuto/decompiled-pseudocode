/*
 * XREFs of ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C000BDB0
 * Callers:
 *     ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C000DB5C (-xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 * Callees:
 *     xxxCleanupMotherDesktopWindow @ 0x1C000B050 (xxxCleanupMotherDesktopWindow.c)
 *     xxxSetThreadDesktop @ 0x1C000D458 (xxxSetThreadDesktop.c)
 *     ?GetDesktopName@@YAPEBGPEAUtagDESKTOP@@@Z @ 0x1C000E238 (-GetDesktopName@@YAPEBGPEAUtagDESKTOP@@@Z.c)
 *     WPP_RECORDER_SF_Sq @ 0x1C000E3E0 (WPP_RECORDER_SF_Sq.c)
 *     ?UnInitializeWindowGroupFunctionality@WindowGroupingFeature@@YAX_K@Z @ 0x1C000E874 (-UnInitializeWindowGroupFunctionality@WindowGroupingFeature@@YAX_K@Z.c)
 *     WPP_RECORDER_SF_qqS @ 0x1C000EE2C (WPP_RECORDER_SF_qqS.c)
 *     DwmAsyncShellWindowChange @ 0x1C0010A4C (DwmAsyncShellWindowChange.c)
 *     PushW32ThreadLock @ 0x1C001EF30 (PushW32ThreadLock.c)
 *     _DestroyMenu @ 0x1C0028870 (_DestroyMenu.c)
 *     WPP_RECORDER_SF_q @ 0x1C002BE9C (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_ @ 0x1C002D084 (WPP_RECORDER_SF_.c)
 *     xxxDestroyWindow @ 0x1C0035BC0 (xxxDestroyWindow.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxSetWindowPos @ 0x1C006C7B4 (xxxSetWindowPos.c)
 *     ClearWakeBit @ 0x1C00720F0 (ClearWakeBit.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00724C0 (PopAndFreeW32ThreadLock.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E0868 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00E0C84 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     RemoteDisableScreen @ 0x1C010E540 (RemoteDisableScreen.c)
 *     UnlockDesktopMenu @ 0x1C011B560 (UnlockDesktopMenu.c)
 *     xxxSwitchDesktop @ 0x1C0137CE8 (xxxSwitchDesktop.c)
 */

void __fastcall DestroyPendingDesktops(struct tagTHREADINFO *a1, struct tagTERMINAL *a2)
{
  int v4; // edx
  int v5; // ecx
  char *v6; // rbx
  __int64 v7; // rdi
  const unsigned __int16 *DesktopName; // rax
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  __int64 v12; // r14
  void *v13; // rcx
  __int64 v14; // rdx
  int v15; // ecx
  __int64 v16; // r8
  _QWORD *j; // rdx
  _DWORD *v18; // rsi
  __int64 v19; // r15
  unsigned __int64 v20; // rdx
  WindowGroupingFeature ***v21; // rcx
  _QWORD *v22; // rcx
  _QWORD *v23; // rcx
  __int64 v24; // rbx
  __int64 v25; // rbx
  __int64 v26; // rcx
  __int64 v27; // rcx
  struct tagDESKTOP *v28; // rbx
  const unsigned __int16 *v29; // rax
  int v30; // edx
  int v31; // ecx
  int v32; // r8d
  int v33; // r9d
  __int64 v34; // rbx
  __int64 v35; // rbx
  int v36; // edx
  int v37; // ecx
  __int64 v38; // rcx
  struct tagDESKTOP *v39; // rbx
  const unsigned __int16 *v40; // rax
  int v41; // edx
  int v42; // ecx
  int v43; // r8d
  __int64 v44; // rax
  __int64 i; // rcx
  __int64 v46; // rdx
  void *v47; // rax
  __int64 v48; // rcx
  int v49; // [rsp+28h] [rbp-79h]
  _QWORD v50[2]; // [rsp+48h] [rbp-59h] BYREF
  __int64 v51; // [rsp+58h] [rbp-49h]
  __int64 v52; // [rsp+60h] [rbp-41h] BYREF
  __int64 v53; // [rsp+68h] [rbp-39h]
  __int64 v54; // [rsp+70h] [rbp-31h]
  _QWORD v55[3]; // [rsp+78h] [rbp-29h] BYREF
  _QWORD v56[3]; // [rsp+90h] [rbp-11h] BYREF
  _QWORD v57[3]; // [rsp+A8h] [rbp+7h] BYREF
  _QWORD v58[3]; // [rsp+C0h] [rbp+1Fh] BYREF

  SmartObjStackRefBase<tagMENU>::Init(v50, 0LL);
  v51 = 0LL;
  v6 = (char *)a2 + 48;
  v7 = *((_QWORD *)a2 + 6);
  memset(v58, 0, sizeof(v58));
  memset(v57, 0, sizeof(v57));
  v52 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  memset(v56, 0, sizeof(v56));
  while ( v7 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      DesktopName = GetDesktopName((struct tagDESKTOP *)v7);
      WPP_RECORDER_SF_Sq(v10, v9, v11, 10, v49, (__int64)DesktopName, v7);
    }
    PushW32ThreadLock(v7, v58, UserDereferenceObject);
    ObfReferenceObject((PVOID)v7);
    v12 = *(_QWORD *)(v7 + 40);
    PushW32ThreadLock(v12, v57, UserDereferenceObject);
    v13 = *(void **)(v7 + 40);
    if ( v13 )
      ObfReferenceObject(v13);
    LockObjectAssignment(v6, *(_QWORD *)(v7 + 32));
    UnlockObjectAssignment(v7 + 32);
    if ( v7 == grpdeskRitInput )
    {
      memset(v55, 0, sizeof(v55));
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v14) = 4;
        WPP_RECORDER_SF_(v15, v14, 8, 11, (__int64)&WPP_402c5f24833438052b5cb2c912b968aa_Traceguids);
      }
      if ( (*(_DWORD *)(v12 + 32) & 1) != 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v14) = 4;
          WPP_RECORDER_SF_(v15, v14, 8, 12, (__int64)&WPP_402c5f24833438052b5cb2c912b968aa_Traceguids);
        }
        if ( gspdeskDisconnect
          && ((PVOID)v7 == grpdeskLogon || !grpdeskLogon || (*((_DWORD *)grpdeskLogon + 12) & 2) != 0) )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v14) = 4;
            WPP_RECORDER_SF_(v15, v14, 8, 13, (__int64)&WPP_402c5f24833438052b5cb2c912b968aa_Traceguids);
          }
          RemoteDisableScreen(grpdeskRitInput, v14, v16, gbDesktopLocked);
          goto LABEL_8;
        }
        v39 = (struct tagDESKTOP *)grpdeskLogon;
      }
      else
      {
        v39 = *(struct tagDESKTOP **)(v12 + 16);
        if ( v39 == (struct tagDESKTOP *)v7 )
          v39 = *(struct tagDESKTOP **)(v7 + 32);
        if ( !v39 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v14) = 4;
            WPP_RECORDER_SF_(v15, v14, 8, 14, (__int64)&WPP_402c5f24833438052b5cb2c912b968aa_Traceguids);
          }
          ClearWakeBit(a1, 15367LL, 0LL);
        }
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v40 = GetDesktopName(v39);
        WPP_RECORDER_SF_Sq(v42, v41, v43, 15, v49, (__int64)v40, (char)v39);
      }
      PushW32ThreadLock(v39, v55, UserDereferenceObject);
      if ( v39 )
        ObfReferenceObject(v39);
      xxxSwitchDesktop(v12, v39, 0LL, 0LL);
      PopAndFreeW32ThreadLock(v55);
    }
    else if ( v7 == *((_QWORD *)a1 + 56) )
    {
      for ( i = grpWinStaList; i; i = *(_QWORD *)(i + 8) )
      {
        if ( (*(_DWORD *)(i + 32) & 0x10) == 0 && *(struct tagTERMINAL **)(i + 24) == a2 && *(_QWORD *)(i + 16) )
        {
          v46 = *(_QWORD *)(i + 16);
          do
          {
            if ( v46 != v7 )
              break;
            v46 = *(_QWORD *)(v46 + 32);
          }
          while ( v46 );
          break;
        }
      }
      xxxSetThreadDesktop(0LL);
    }
LABEL_8:
    if ( v7 == gspdeskShouldBeForeground )
    {
      for ( j = *(_QWORD **)(v12 + 16); j && (j == gspdeskDisconnect || j == grpdeskLogon); j = (_QWORD *)j[4] )
        ;
      LockObjectAssignment(gspdeskShouldBeForeground, j);
    }
    v18 = (_DWORD *)*((_QWORD *)a1 + 56);
    v19 = *((_QWORD *)a1 + 73);
    PushW32ThreadLock(v18, v56, UserDereferenceObject);
    if ( v18 )
      ObfReferenceObject(v18);
    xxxSetThreadDesktop(0LL);
    HMAssignmentUnlock(v7 + 88);
    HMAssignmentUnlock(v7 + 96);
    HMAssignmentUnlock(v7 + 184);
    *(_DWORD *)(v7 + 48) &= 0xFFFFFA3F;
    if ( *(_QWORD *)(v7 + 56) )
    {
      v51 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(v50);
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 56) + 40LL) + 40LL) &= ~0x80u;
      if ( UnlockDesktopMenu(v7 + 56) )
        DestroyMenu();
    }
    if ( *(_QWORD *)(v7 + 64) )
    {
      v51 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(v50);
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 64) + 40LL) + 40LL) &= ~0x80u;
      if ( UnlockDesktopMenu(v7 + 64) )
        DestroyMenu();
    }
    if ( *(_QWORD *)(v7 + 72) )
    {
      v51 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(v50);
      if ( UnlockDesktopMenu(v7 + 72) )
        DestroyMenu();
    }
    v20 = *(_QWORD *)(v7 + 80);
    if ( v20 )
    {
      v51 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(v50);
      if ( UnlockDesktopMenu(v7 + 80) )
        DestroyMenu();
    }
    v21 = *(WindowGroupingFeature ****)(v7 + 8);
    if ( v21 )
    {
      WindowGroupingFeature::UnInitializeWindowGroupFunctionality(**v21, v20);
      v22 = *(_QWORD **)(v7 + 8);
      if ( v22[3] == gspwndFullScreen )
      {
        HMAssignmentUnlock(&gspwndFullScreen);
        v22 = *(_QWORD **)(v7 + 8);
      }
      if ( v22[21] )
      {
        if ( (unsigned int)IsWindowDesktopComposed(v22[21]) )
        {
          v47 = (void *)ReferenceDwmApiPort();
          DwmAsyncShellWindowChange(v47);
        }
        v48 = *(_QWORD *)(v7 + 8) + 168LL;
        *(_QWORD *)(**(_QWORD **)(v7 + 8) + 24LL) = 0LL;
        HMAssignmentUnlock(v48);
        v22 = *(_QWORD **)(v7 + 8);
      }
      if ( v22[23] )
      {
        HMAssignmentUnlock(v22 + 23);
        v22 = *(_QWORD **)(v7 + 8);
      }
      LODWORD(v20) = (_DWORD)v22 + 192;
      if ( v22[24] )
      {
        *(_QWORD *)(*v22 + 24LL) = 0LL;
        HMAssignmentUnlock(v22 + 24);
        v22 = *(_QWORD **)(v7 + 8);
      }
      v23 = v22 + 25;
      if ( *v23 )
      {
        *(_QWORD *)(*(v23 - 25) + 40LL) = 0LL;
        HMAssignmentUnlock(v23);
      }
    }
    v24 = *(_QWORD *)(v7 + 104);
    if ( v24 && HMAssignmentUnlock(v7 + 104) )
      xxxDestroyWindow(v24);
    v25 = *(_QWORD *)(v7 + 112);
    if ( v25 && HMAssignmentUnlock(v7 + 112) )
      xxxDestroyWindow(v25);
    v26 = *(_QWORD *)(v7 + 264);
    if ( v26 )
    {
      Win32FreePool(v26);
      *(_QWORD *)(v7 + 264) = 0LL;
    }
    v27 = *((_QWORD *)a2 + 1);
    if ( !v27 || *(_QWORD *)(v27 + 24) != v7 )
      goto LABEL_46;
    if ( (*(_DWORD *)a2 & 2) != 0 )
    {
      v44 = grpWinStaList;
      if ( grpWinStaList )
      {
        while ( 1 )
        {
          v44 = *(_QWORD *)(v44 + 8);
          if ( !v44 )
            break;
          v28 = *(struct tagDESKTOP **)(v44 + 16);
          if ( v28 )
            goto LABEL_43;
        }
      }
LABEL_73:
      if ( a2 == (struct tagTERMINAL *)gTermIO )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(
            v27,
            v20,
            8,
            16,
            (__int64)&WPP_402c5f24833438052b5cb2c912b968aa_Traceguids,
            *((_QWORD *)a2 + 1));
        xxxCleanupMotherDesktopWindow((__int64)a2);
      }
      goto LABEL_46;
    }
    v28 = *(struct tagDESKTOP **)(v12 + 16);
    if ( !v28 )
      goto LABEL_73;
LABEL_43:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v29 = GetDesktopName(v28);
      WPP_RECORDER_SF_qqS(v31, v30, v32, v33, v49, *((_QWORD *)a2 + 1), (char)v28, (__int64)v29);
    }
    LockObjectAssignment(*((_QWORD *)a2 + 1) + 24LL, v28);
LABEL_46:
    v34 = *(_QWORD *)(v7 + 8);
    if ( v34 )
    {
      v35 = *(_QWORD *)(v34 + 24);
      if ( v35 )
      {
        if ( (*(_BYTE *)(*(_QWORD *)(v35 + 40) + 31LL) & 0x10) != 0 )
        {
          v52 = *((_QWORD *)a1 + 51);
          *((_QWORD *)a1 + 51) = &v52;
          v53 = v35;
          HMLockObject(v35);
          xxxSetWindowPos((struct tagWND *)v35, 0, 0, 1183);
          ThreadUnlock1();
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v20) = 4;
          WPP_RECORDER_SF_(v27, v20, 8, 18, (__int64)&WPP_402c5f24833438052b5cb2c912b968aa_Traceguids);
        }
        xxxDestroyWindow(*(_QWORD *)(*(_QWORD *)(v7 + 8) + 24LL));
        if ( v7 == grpdeskRitInput )
        {
          *(_DWORD *)(v7 + 48) |= 1u;
          if ( gspwndShouldBeForeground )
            HMAssignmentUnlock(&gspwndShouldBeForeground);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_q(v37, v36, 8, 19, (__int64)&WPP_402c5f24833438052b5cb2c912b968aa_Traceguids, v7);
        }
        else
        {
          v38 = *(_QWORD *)(v7 + 8) + 24LL;
          *(_QWORD *)(**(_QWORD **)(v7 + 8) + 8LL) = 0LL;
          HMAssignmentUnlock(v38);
        }
        *(_DWORD *)(v7 + 48) |= 2u;
      }
    }
    if ( (*(_DWORD *)a2 & 2) == 0 || !v18 || (v18[12] & 6) == 0 )
      xxxSetThreadDesktop(v19);
    PopAndFreeW32ThreadLock(v56);
    PopAndFreeW32ThreadLock(v57);
    PopAndFreeW32ThreadLock(v58);
    v6 = (char *)a2 + 48;
    v7 = *((_QWORD *)a2 + 6);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_(v5, v4, 8, 20, (__int64)&WPP_402c5f24833438052b5cb2c912b968aa_Traceguids);
  }
  KeSetEvent(gpevtDesktopDestroyed, 1, 0);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v50);
}
