/*
 * XREFs of ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C000ED9C
 * Callers:
 *     ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C000E3DC (-xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 * Callees:
 *     DwmAsyncShellWindowChange @ 0x1C000B3CC (DwmAsyncShellWindowChange.c)
 *     ?GetDesktopName@@YAPEBGPEAUtagDESKTOP@@@Z @ 0x1C000F474 (-GetDesktopName@@YAPEBGPEAUtagDESKTOP@@@Z.c)
 *     WPP_RECORDER_SF_Sq @ 0x1C000F4DC (WPP_RECORDER_SF_Sq.c)
 *     ?UnInitializeWindowGroupFunctionality@WindowGroupingFeature@@YAX_K@Z @ 0x1C000F974 (-UnInitializeWindowGroupFunctionality@WindowGroupingFeature@@YAX_K@Z.c)
 *     WPP_RECORDER_SF_qqS @ 0x1C000FF2C (WPP_RECORDER_SF_qqS.c)
 *     xxxSetThreadDesktop @ 0x1C00189F8 (xxxSetThreadDesktop.c)
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     _DestroyMenu @ 0x1C0022400 (_DestroyMenu.c)
 *     WPP_RECORDER_SF_q @ 0x1C0025A2C (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_ @ 0x1C0026C14 (WPP_RECORDER_SF_.c)
 *     xxxSwitchDesktop @ 0x1C0081EE8 (xxxSwitchDesktop.c)
 *     xxxDestroyWindow @ 0x1C0094E90 (xxxDestroyWindow.c)
 *     xxxSetWindowPos @ 0x1C00CB0E4 (xxxSetWindowPos.c)
 *     ClearWakeBit @ 0x1C00D0A20 (ClearWakeBit.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00D0DF0 (PopAndFreeW32ThreadLock.c)
 *     UnlockDesktopMenu @ 0x1C00E12C8 (UnlockDesktopMenu.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C0106608 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0106A24 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     RemoteDisableScreen @ 0x1C0133A40 (RemoteDisableScreen.c)
 *     xxxCleanupMotherDesktopWindow @ 0x1C01415E0 (xxxCleanupMotherDesktopWindow.c)
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
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rdx
  unsigned __int64 v23; // rdx
  WindowGroupingFeature ***v24; // rcx
  _QWORD *v25; // rcx
  _QWORD *v26; // rcx
  __int64 v27; // rbx
  __int64 v28; // rbx
  __int64 v29; // rcx
  __int64 v30; // rcx
  struct tagDESKTOP *v31; // rbx
  const unsigned __int16 *v32; // rax
  int v33; // edx
  int v34; // ecx
  int v35; // r8d
  int v36; // r9d
  __int64 v37; // rbx
  __int64 v38; // rbx
  int v39; // edx
  int v40; // ecx
  __int64 v41; // rcx
  struct tagDESKTOP *v42; // rbx
  const unsigned __int16 *v43; // rax
  int v44; // edx
  int v45; // ecx
  int v46; // r8d
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 i; // rcx
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 **v52; // rax
  __int64 v53; // rbx
  void *v54; // rax
  __int64 v55; // rcx
  int v56; // [rsp+28h] [rbp-79h]
  _QWORD v57[2]; // [rsp+48h] [rbp-59h] BYREF
  __int64 v58; // [rsp+58h] [rbp-49h]
  __int64 v59; // [rsp+60h] [rbp-41h] BYREF
  __int64 v60; // [rsp+68h] [rbp-39h]
  __int64 v61; // [rsp+70h] [rbp-31h]
  _QWORD v62[3]; // [rsp+78h] [rbp-29h] BYREF
  _QWORD v63[3]; // [rsp+90h] [rbp-11h] BYREF
  _QWORD v64[3]; // [rsp+A8h] [rbp+7h] BYREF
  _QWORD v65[3]; // [rsp+C0h] [rbp+1Fh] BYREF

  SmartObjStackRefBase<tagMENU>::Init(v57, 0LL);
  v58 = 0LL;
  v6 = (char *)a2 + 48;
  v7 = *((_QWORD *)a2 + 6);
  memset(v65, 0, sizeof(v65));
  memset(v64, 0, sizeof(v64));
  v59 = 0LL;
  v60 = 0LL;
  v61 = 0LL;
  memset(v63, 0, sizeof(v63));
  while ( v7 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      DesktopName = GetDesktopName((struct tagDESKTOP *)v7);
      WPP_RECORDER_SF_Sq(v10, v9, v11, 10, v56, (__int64)DesktopName, v7);
    }
    PushW32ThreadLock(v7, v65, UserDereferenceObject);
    ObfReferenceObject((PVOID)v7);
    v12 = *(_QWORD *)(v7 + 40);
    PushW32ThreadLock(v12, v64, UserDereferenceObject);
    v13 = *(void **)(v7 + 40);
    if ( v13 )
      ObfReferenceObject(v13);
    LockObjectAssignment(v6, *(_QWORD *)(v7 + 32));
    UnlockObjectAssignment(v7 + 32);
    if ( v7 == grpdeskRitInput )
    {
      memset(v62, 0, sizeof(v62));
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v14) = 4;
        WPP_RECORDER_SF_(v15, v14, 8, 11, (__int64)&WPP_514f6d50daca38afcf86702a8eadf7c9_Traceguids);
      }
      if ( (*(_DWORD *)(v12 + 32) & 1) != 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v14) = 4;
          WPP_RECORDER_SF_(v15, v14, 8, 12, (__int64)&WPP_514f6d50daca38afcf86702a8eadf7c9_Traceguids);
        }
        if ( gspdeskDisconnect
          && ((PVOID)v7 == grpdeskLogon || !grpdeskLogon || (*((_DWORD *)grpdeskLogon + 12) & 2) != 0) )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v14) = 4;
            WPP_RECORDER_SF_(v15, v14, 8, 13, (__int64)&WPP_514f6d50daca38afcf86702a8eadf7c9_Traceguids);
          }
          RemoteDisableScreen(grpdeskRitInput, v14, v16, gbDesktopLocked);
          goto LABEL_8;
        }
        v42 = (struct tagDESKTOP *)grpdeskLogon;
      }
      else
      {
        v42 = *(struct tagDESKTOP **)(v12 + 16);
        if ( v42 == (struct tagDESKTOP *)v7 )
          v42 = *(struct tagDESKTOP **)(v7 + 32);
        if ( !v42 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v14) = 4;
            WPP_RECORDER_SF_(v15, v14, 8, 14, (__int64)&WPP_514f6d50daca38afcf86702a8eadf7c9_Traceguids);
          }
          ClearWakeBit(a1, 15367LL, 0LL);
        }
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v43 = GetDesktopName(v42);
        WPP_RECORDER_SF_Sq(v45, v44, v46, 15, v56, (__int64)v43, (char)v42);
      }
      PushW32ThreadLock(v42, v62, UserDereferenceObject);
      if ( v42 )
        ObfReferenceObject(v42);
      xxxSwitchDesktop(v12, v42, 0LL, 0LL);
      PopAndFreeW32ThreadLock(v62);
    }
    else if ( v7 == *((_QWORD *)a1 + 56) )
    {
      v48 = 0LL;
      for ( i = grpWinStaList; i; i = *(_QWORD *)(i + 8) )
      {
        if ( (*(_DWORD *)(i + 32) & 0x10) == 0 && *(struct tagTERMINAL **)(i + 24) == a2 && *(_QWORD *)(i + 16) )
        {
          v48 = *(_QWORD *)(i + 16);
          do
          {
            if ( v48 != v7 )
              break;
            v48 = *(_QWORD *)(v48 + 32);
          }
          while ( v48 );
          break;
        }
      }
      xxxSetThreadDesktop(0LL, v48);
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
    PushW32ThreadLock(v18, v63, UserDereferenceObject);
    if ( v18 )
      ObfReferenceObject(v18);
    xxxSetThreadDesktop(0LL, v7);
    HMAssignmentUnlock(v7 + 88);
    HMAssignmentUnlock(v7 + 96);
    HMAssignmentUnlock(v7 + 184);
    *(_DWORD *)(v7 + 48) &= 0xFFFFFA3F;
    v20 = *(_QWORD *)(v7 + 56);
    if ( v20 )
    {
      v58 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(v57, v20);
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 56) + 40LL) + 40LL) &= ~0x80u;
      if ( UnlockDesktopMenu(v7 + 56) )
        DestroyMenu();
    }
    v21 = *(_QWORD *)(v7 + 64);
    if ( v21 )
    {
      v58 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(v57, v21);
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 64) + 40LL) + 40LL) &= ~0x80u;
      if ( UnlockDesktopMenu(v7 + 64) )
        DestroyMenu();
    }
    v22 = *(_QWORD *)(v7 + 72);
    if ( v22 )
    {
      v58 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(v57, v22);
      if ( UnlockDesktopMenu(v7 + 72) )
        DestroyMenu();
    }
    v23 = *(_QWORD *)(v7 + 80);
    if ( v23 )
    {
      v58 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(v57, v23);
      if ( UnlockDesktopMenu(v7 + 80) )
        DestroyMenu();
    }
    v24 = *(WindowGroupingFeature ****)(v7 + 8);
    if ( v24 )
    {
      WindowGroupingFeature::UnInitializeWindowGroupFunctionality(**v24, v23);
      v25 = *(_QWORD **)(v7 + 8);
      if ( v25[3] == gspwndFullScreen )
      {
        HMAssignmentUnlock(&gspwndFullScreen);
        v25 = *(_QWORD **)(v7 + 8);
      }
      if ( v25[21] )
      {
        if ( (unsigned int)IsWindowDesktopComposed(v25[21]) )
        {
          v52 = *(__int64 ***)(v7 + 8);
          v53 = **v52;
          v54 = (void *)ReferenceDwmApiPort(*v52, v50, v51);
          DwmAsyncShellWindowChange(v54, 0LL, v53);
        }
        v55 = *(_QWORD *)(v7 + 8) + 168LL;
        *(_QWORD *)(**(_QWORD **)(v7 + 8) + 24LL) = 0LL;
        HMAssignmentUnlock(v55);
        v25 = *(_QWORD **)(v7 + 8);
      }
      if ( v25[23] )
      {
        HMAssignmentUnlock(v25 + 23);
        v25 = *(_QWORD **)(v7 + 8);
      }
      LODWORD(v23) = (_DWORD)v25 + 192;
      if ( v25[24] )
      {
        *(_QWORD *)(*v25 + 24LL) = 0LL;
        HMAssignmentUnlock(v25 + 24);
        v25 = *(_QWORD **)(v7 + 8);
      }
      v26 = v25 + 25;
      if ( *v26 )
      {
        *(_QWORD *)(*(v26 - 25) + 40LL) = 0LL;
        HMAssignmentUnlock(v26);
      }
    }
    v27 = *(_QWORD *)(v7 + 104);
    if ( v27 && HMAssignmentUnlock(v7 + 104) )
      xxxDestroyWindow(v27);
    v28 = *(_QWORD *)(v7 + 112);
    if ( v28 && HMAssignmentUnlock(v7 + 112) )
      xxxDestroyWindow(v28);
    v29 = *(_QWORD *)(v7 + 264);
    if ( v29 )
    {
      Win32FreePool(v29);
      *(_QWORD *)(v7 + 264) = 0LL;
    }
    v30 = *((_QWORD *)a2 + 1);
    if ( !v30 || *(_QWORD *)(v30 + 24) != v7 )
      goto LABEL_46;
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
          v31 = *(struct tagDESKTOP **)(v47 + 16);
          if ( v31 )
            goto LABEL_43;
        }
      }
LABEL_73:
      if ( a2 == (struct tagTERMINAL *)gTermIO[0] )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(
            v30,
            v23,
            8,
            16,
            (__int64)&WPP_514f6d50daca38afcf86702a8eadf7c9_Traceguids,
            *((_QWORD *)a2 + 1));
        xxxCleanupMotherDesktopWindow(a2);
      }
      goto LABEL_46;
    }
    v31 = *(struct tagDESKTOP **)(v12 + 16);
    if ( !v31 )
      goto LABEL_73;
LABEL_43:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v32 = GetDesktopName(v31);
      WPP_RECORDER_SF_qqS(v34, v33, v35, v36, v56, *((_QWORD *)a2 + 1), (char)v31, (__int64)v32);
    }
    LockObjectAssignment(*((_QWORD *)a2 + 1) + 24LL, v31);
LABEL_46:
    v37 = *(_QWORD *)(v7 + 8);
    if ( v37 )
    {
      v38 = *(_QWORD *)(v37 + 24);
      if ( v38 )
      {
        if ( (*(_BYTE *)(*(_QWORD *)(v38 + 40) + 31LL) & 0x10) != 0 )
        {
          v59 = *((_QWORD *)a1 + 51);
          *((_QWORD *)a1 + 51) = &v59;
          v60 = v38;
          HMLockObject(v38);
          xxxSetWindowPos((struct tagWND *)v38, 0, 0, 1183);
          ThreadUnlock1();
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v23) = 4;
          WPP_RECORDER_SF_(v30, v23, 8, 18, (__int64)&WPP_514f6d50daca38afcf86702a8eadf7c9_Traceguids);
        }
        xxxDestroyWindow(*(_QWORD *)(*(_QWORD *)(v7 + 8) + 24LL));
        if ( v7 == grpdeskRitInput )
        {
          *(_DWORD *)(v7 + 48) |= 1u;
          if ( gspwndShouldBeForeground )
            HMAssignmentUnlock(&gspwndShouldBeForeground);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_q(v40, v39, 8, 19, (__int64)&WPP_514f6d50daca38afcf86702a8eadf7c9_Traceguids, v7);
        }
        else
        {
          v41 = *(_QWORD *)(v7 + 8) + 24LL;
          *(_QWORD *)(**(_QWORD **)(v7 + 8) + 8LL) = 0LL;
          HMAssignmentUnlock(v41);
        }
        *(_DWORD *)(v7 + 48) |= 2u;
      }
    }
    if ( (*(_DWORD *)a2 & 2) == 0 || !v18 || (v18[12] & 6) == 0 )
      xxxSetThreadDesktop(v19, v18);
    PopAndFreeW32ThreadLock(v63);
    PopAndFreeW32ThreadLock(v64);
    PopAndFreeW32ThreadLock(v65);
    v6 = (char *)a2 + 48;
    v7 = *((_QWORD *)a2 + 6);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_(v5, v4, 8, 20, (__int64)&WPP_514f6d50daca38afcf86702a8eadf7c9_Traceguids);
  }
  KeSetEvent(gpevtDesktopDestroyed, 1, 0);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v57);
}
