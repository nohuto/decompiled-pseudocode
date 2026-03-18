/*
 * XREFs of xxxSetWindowData @ 0x1C0025B98
 * Callers:
 *     xxxSetWindowLong @ 0x1C0025120 (xxxSetWindowLong.c)
 *     xxxSetWindowLongPtr @ 0x1C0025674 (xxxSetWindowLongPtr.c)
 * Callees:
 *     MapClientToServerPfn @ 0x1C0019ACC (MapClientToServerPfn.c)
 *     MapClientNeuterToClientPfn @ 0x1C002227C (MapClientNeuterToClientPfn.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00262C8 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C00262E4 (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00262F8 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     _GetDesktopWindow @ 0x1C002E65C (_GetDesktopWindow.c)
 *     xxxInheritWindowMonitor @ 0x1C0030244 (xxxInheritWindowMonitor.c)
 *     GetCPD @ 0x1C0030A18 (GetCPD.c)
 *     IsParentBandValid @ 0x1C0034A70 (IsParentBandValid.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     xxxSetWindowStyle @ 0x1C00442C0 (xxxSetWindowStyle.c)
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C00569F0 (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     HMValidateHandleNoRip @ 0x1C006CF60 (HMValidateHandleNoRip.c)
 *     zzzSetWindowCompositionCloak @ 0x1C006FAFC (zzzSetWindowCompositionCloak.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@PEAX@Z @ 0x1C0070A0C (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@.c)
 *     GetWindowCloakStateComponentUIAware @ 0x1C0073B50 (GetWindowCloakStateComponentUIAware.c)
 *     IsWindowShellCloaked @ 0x1C00C1194 (IsWindowShellCloaked.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00C11FC (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 *     ?LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C00EA614 (-LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     xxxClientWOWGetProcModule @ 0x1C00ED040 (xxxClientWOWGetProcModule.c)
 *     ValidateOwnerDepth @ 0x1C00FE9E8 (ValidateOwnerDepth.c)
 *     ?UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z @ 0x1C0103EEC (-UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z.c)
 *     MapServerToClientPfn @ 0x1C0134804 (MapServerToClientPfn.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02AFC0C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxSetWindowData(struct tagWND *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  struct _KTHREAD *CurrentThread; // r12
  __int64 v5; // rbx
  __int64 v6; // r13
  int v9; // esi
  __int64 v11; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rax
  __int16 v19; // cx
  unsigned __int8 v20; // r11
  __int64 v21; // r10
  __int64 CPD; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // r13
  __int64 v26; // rax
  __int64 v27; // r10
  __int64 v28; // rax
  __int64 DesktopWindow; // rax
  __int64 v30; // rsi
  __int64 v31; // r12
  __int64 v32; // r13
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // r14
  __int64 CurrentProcessWin32Process; // rax
  __int64 v37; // r15
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  int v41; // eax
  struct tagWND *v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // rcx
  __int64 v46; // rcx
  unsigned int WindowCloakStateComponentUIAware; // eax
  struct tagWND *v48; // rcx
  __int64 v49; // r8
  int *v50; // rdx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rax
  __int64 *v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rcx
  unsigned __int8 v59; // al
  char v60; // al
  signed __int32 v62[8]; // [rsp+8h] [rbp-A9h] BYREF
  __int64 **v63; // [rsp+28h] [rbp-89h]
  __int64 v64; // [rsp+30h] [rbp-81h] BYREF
  __int64 v65; // [rsp+38h] [rbp-79h] BYREF
  __int64 v66; // [rsp+40h] [rbp-71h]
  __int64 v67; // [rsp+48h] [rbp-69h]
  __int64 v68; // [rsp+50h] [rbp-61h]
  __int128 v69; // [rsp+58h] [rbp-59h]
  __int128 v70; // [rsp+68h] [rbp-49h] BYREF
  __int128 v71; // [rsp+78h] [rbp-39h] BYREF
  _QWORD v72[3]; // [rsp+88h] [rbp-29h] BYREF
  _QWORD v73[3]; // [rsp+A0h] [rbp-11h] BYREF
  int v74; // [rsp+B8h] [rbp+7h] BYREF
  char v75[24]; // [rsp+D0h] [rbp+1Fh] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  v6 = 0LL;
  v9 = a2;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v6 = *ThreadWin32Thread;
  }
  v65 = 0LL;
  v64 = gSmartObjNullRef;
  v65 = *(_QWORD *)(v6 + 1456);
  *(_QWORD *)(v6 + 1456) = &v65;
  v66 = 0LL;
  if ( v9 == -40 )
  {
    if ( PsGetCurrentProcessWin32Process(v11) == *(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL) )
    {
      v58 = *((_QWORD *)a1 + 5);
      v59 = *(_BYTE *)(v58 + 234);
      v15 = ((unsigned __int64)v59 >> 2) & 1;
      if ( a3 )
        v60 = v59 | 4;
      else
        v60 = v59 & 0xFB;
      *(_BYTE *)(v58 + 234) = v60;
      goto LABEL_102;
    }
    goto LABEL_96;
  }
  if ( v9 == -21 )
  {
    v57 = *((_QWORD *)a1 + 5);
    v15 = *(_QWORD *)(v57 + 216);
    *(_QWORD *)(v57 + 216) = a3;
    goto LABEL_102;
  }
  if ( ((v9 + 20) & 0xFFFFFFFB) == 0 )
  {
    v15 = (int)xxxSetWindowStyle((ULONG_PTR)a1);
    goto LABEL_102;
  }
  switch ( v9 )
  {
    case -12:
      v54 = *((_QWORD *)a1 + 5);
      if ( (*(_BYTE *)(v54 + 31) & 0xC0) == 0x40 )
      {
        v15 = *((_QWORD *)a1 + 18);
        *(_QWORD *)(v54 + 152) = a3;
        *((_QWORD *)a1 + 18) = a3;
      }
      else
      {
        v55 = (__int64 *)*((_QWORD *)a1 + 18);
        v15 = 0LL;
        if ( v55 )
          v15 = *v55;
        if ( a3 )
        {
          v56 = ValidateHmenu(a3);
          v66 = 0LL;
          SmartObjStackRefBase<tagMENU>::operator=(&v64, v56);
          if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator==(&v64) )
            v15 = 0LL;
          else
            LockWndMenuWorker(a1, 0LL, &v64);
        }
        else
        {
          UnlockWndMenuWorker(a1, 0);
        }
      }
      goto LABEL_102;
    case -8:
      DesktopWindow = GetDesktopWindow(a1);
      v30 = *((_QWORD *)a1 + 10);
      v31 = DesktopWindow;
      v67 = DesktopWindow;
      v68 = v30;
      if ( v30 == DesktopWindow )
        v32 = *((_QWORD *)a1 + 12);
      else
        v32 = v30;
      v33 = 96LL;
      if ( v30 != v31 )
        v33 = 80LL;
      v63 = (__int64 **)((char *)a1 + v33);
      v35 = ValidateHwnd(a3);
      if ( !v35 && a3 )
        goto LABEL_41;
      if ( v30 == v31 )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v34);
        if ( (unsigned int)ShouldSetNoOwner(CurrentProcessWin32Process, v35) )
          v35 = 0LL;
      }
      if ( !(unsigned int)IsParentBandValid(a1, v35) )
      {
LABEL_41:
        v13 = 87LL;
        goto LABEL_97;
      }
      if ( v35 && RealGetProp(*((_QWORD *)a1 + 15), (unsigned __int16)gatomBrokeredForeground, 1LL) )
        goto LABEL_96;
      v37 = v67;
      if ( v30 == v67 )
      {
        if ( !v35 )
          goto LABEL_54;
        if ( RealGetProp(*(_QWORD *)(v35 + 120), (unsigned __int16)gatomBrokeredForeground, 1LL) )
          goto LABEL_96;
      }
      if ( v35 )
      {
        v38 = *(_QWORD *)(v35 + 40);
        if ( *(char *)(v38 + 20) < 0 || *(char *)(v38 + 19) < 0 )
          goto LABEL_96;
      }
LABEL_54:
      if ( *v63 )
        v15 = **v63;
      else
        v15 = 0LL;
      v39 = W32GetThreadWin32Thread(KeGetCurrentThread());
      v72[0] = *(_QWORD *)(v39 + 408);
      *(_QWORD *)(v39 + 408) = v72;
      v72[1] = v35;
      if ( v35 )
        _InterlockedAdd((volatile signed __int32 *)(v35 + 8), 1u);
      if ( v68 != v37 )
      {
        v52 = -(__int64)(xxxSetParentWorker(a1, (struct tagWND *)v35, 0LL, 0) != 0LL);
        v15 &= v52;
        goto LABEL_83;
      }
      v40 = W32GetThreadWin32Thread(KeGetCurrentThread());
      v73[0] = *(_QWORD *)(v40 + 408);
      *(_QWORD *)(v40 + 408) = v73;
      v73[1] = v32;
      if ( v32 )
        _InterlockedAdd((volatile signed __int32 *)(v32 + 8), 1u);
      xxxHandleOwnerSwitch(a1, (struct tagWND *)v35, (struct tagWND *)v32);
      v41 = IsParentBandValid(a1, v35);
      v42 = a1;
      if ( v41 )
      {
        if ( (unsigned int)ValidateOwnerDepth(a1, v35) )
        {
          v43 = LODWORD(gSharedInfo[2]);
          v44 = gSharedInfo[1];
          v45 = (unsigned int)v43 * (unsigned __int16)*(_DWORD *)a1;
          if ( (*(_BYTE *)(v45 + v44 + 25) & 1) != 0 )
          {
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v45);
          }
          else
          {
            if ( !v35 )
            {
              HMAssignmentUnlock(v63);
              goto LABEL_73;
            }
            v46 = (unsigned int)v43 * (unsigned __int16)*(_DWORD *)v35;
            if ( (*(_BYTE *)(v46 + v44 + 25) & 1) == 0 )
            {
              *(_QWORD *)&v69 = v63;
              *((_QWORD *)&v69 + 1) = v35;
              v70 = v69;
              HMAssignmentLock(&v70);
              WindowCloakStateComponentUIAware = GetWindowCloakStateComponentUIAware((struct tagWND *)v35);
              v48 = a1;
              if ( WindowCloakStateComponentUIAware )
              {
                v49 = WindowCloakStateComponentUIAware;
                v50 = 0LL;
              }
              else
              {
                if ( !(unsigned int)IsWindowShellCloaked(a1) )
                {
LABEL_73:
                  v71 = *(_OWORD *)LockPointer(v75, (char *)a1 + 96, *((_QWORD *)a1 + 12));
                  HMAssignmentLock(&v71);
                  xxxInheritWindowMonitor(a1);
LABEL_81:
                  ThreadUnlock1(v46, v43, v44);
LABEL_83:
                  ThreadUnlock1(v52, v51, v53);
                  goto LABEL_102;
                }
                v74 = 0;
                v50 = &v74;
                v49 = 2LL;
                v48 = a1;
              }
              zzzSetWindowCompositionCloak(v48, v50, v49);
              goto LABEL_73;
            }
          }
          if ( v35 )
          {
            v46 = LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)v35;
            LOBYTE(v46) = *(_BYTE *)(v46 + gSharedInfo[1] + 25);
            if ( (v46 & 1) != 0 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v46);
          }
LABEL_80:
          v15 = 0LL;
          goto LABEL_81;
        }
        v42 = a1;
      }
      xxxHandleOwnerSwitch(v42, (struct tagWND *)v32, (struct tagWND *)v35);
      UserSetLastError(87LL);
      goto LABEL_80;
    case -6:
      v28 = *((_QWORD *)a1 + 5);
      v15 = *(_QWORD *)(v28 + 32);
      *(_QWORD *)(v28 + 32) = a3;
      goto LABEL_102;
    case -4:
      if ( PsGetCurrentProcessWin32Process(v11) == *(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL) )
      {
        v18 = *((_QWORD *)a1 + 5);
        v19 = *(_WORD *)(v18 + 42);
        if ( v19 >= 0 )
        {
          v20 = *(_BYTE *)(v18 + 18);
          if ( (v20 & 4) != 0 )
          {
            v15 = MapServerToClientPfn(*(_QWORD *)(v18 + 120), a4, v17);
            if ( !v15 )
              goto LABEL_103;
            goto LABEL_25;
          }
          if ( (v19 & 0x3FFF) == 0x2A5 )
          {
            v15 = *(_QWORD *)(v18 + 120);
          }
          else
          {
            v15 = MapClientNeuterToClientPfn(*((_QWORD *)a1 + 14), *(_QWORD *)(v18 + 120), a4);
            if ( v15 != v21 )
            {
LABEL_25:
              if ( (a3 & 0xFFFF0000) == 0xFFFF0000 )
              {
                LOBYTE(v16) = 7;
                v23 = HMValidateHandleNoRip(a3, v16, v17);
                if ( v23 )
                {
                  v24 = *(_QWORD *)(v23 + 40);
                  a3 = *(_QWORD *)(v24 + 16);
                  a4 = *(_WORD *)(v24 + 24) & 2;
                }
              }
              v25 = MapClientToServerPfn(a3);
              if ( v25 )
              {
                SetOrClrWF(0LL, a1, 520LL, 1LL);
                SetOrClrWF(1LL, a1, 516LL, 1LL);
                *(_QWORD *)(*((_QWORD *)a1 + 5) + 120LL) = v25;
                _InterlockedOr(v62, 0);
              }
              else
              {
                SetOrClrWF(a4 != 0, a1, 520LL, 1LL);
                if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 18LL) & 4) != 0 )
                  SetOrClrWF(0LL, a1, 516LL, 1LL);
                v26 = MapClientNeuterToClientPfn(*((_QWORD *)a1 + 14), a3, a4);
                *(_QWORD *)(v27 + 120) = v26;
                _InterlockedOr(v62, 0);
                *(_WORD *)(*((_QWORD *)a1 + 5) + 40LL) = xxxClientWOWGetProcModule(*(_QWORD *)(*((_QWORD *)a1 + 5)
                                                                                             + 120LL));
              }
              goto LABEL_102;
            }
          }
          if ( a4 != ((v20 >> 3) & 1) )
          {
            CPD = GetCPD(a1, 34 - (unsigned int)(a4 != 0), v15);
            if ( CPD )
              v15 = CPD;
          }
          goto LABEL_25;
        }
      }
LABEL_96:
      v13 = 5LL;
      goto LABEL_97;
    case -2:
      v14 = *((_QWORD *)a1 + 5);
      v15 = *(_QWORD *)(v14 + 240);
      *(_QWORD *)(v14 + 240) = a3;
LABEL_102:
      v5 = v15;
      goto LABEL_103;
  }
  v13 = 1413LL;
LABEL_97:
  UserSetLastError(v13);
LABEL_103:
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(&v64);
  return v5;
}
