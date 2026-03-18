/*
 * XREFs of xxxSetWindowData @ 0x1C0061928
 * Callers:
 *     ?xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z @ 0x1C0061558 (-xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z.c)
 *     xxxSetWindowLong @ 0x1C01007C4 (xxxSetWindowLong.c)
 * Callees:
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C0010D60 (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     MapClientNeuterToClientPfn @ 0x1C001F124 (MapClientNeuterToClientPfn.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     SetOrClrWF @ 0x1C0044F3C (SetOrClrWF.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     IsWindowShellCloaked @ 0x1C0088160 (IsWindowShellCloaked.c)
 *     GetWindowCloakStateComponentUIAware @ 0x1C008A3A4 (GetWindowCloakStateComponentUIAware.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     zzzSetWindowCompositionCloak @ 0x1C008B6E0 (zzzSetWindowCompositionCloak.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@PEAX@Z @ 0x1C008C59C (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C008E698 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     MapClientToServerPfn @ 0x1C0095CD0 (MapClientToServerPfn.c)
 *     xxxSetWindowStyle @ 0x1C009B250 (xxxSetWindowStyle.c)
 *     xxxClientWOWGetProcModule @ 0x1C00B08F8 (xxxClientWOWGetProcModule.c)
 *     HMValidateHandleNoRip @ 0x1C00B4C50 (HMValidateHandleNoRip.c)
 *     GetCPD @ 0x1C00BE82C (GetCPD.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00BFB98 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     IsParentBandValid @ 0x1C00BFC54 (IsParentBandValid.c)
 *     xxxInheritWindowMonitor @ 0x1C00C78F8 (xxxInheritWindowMonitor.c)
 *     _GetProp @ 0x1C00C7C1C (_GetProp.c)
 *     _GetDesktopWindow @ 0x1C00CADE0 (_GetDesktopWindow.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0106A24 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C010AFAC (-LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     ValidateOwnerDepth @ 0x1C0124560 (ValidateOwnerDepth.c)
 *     ?UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z @ 0x1C012E2BC (-UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z.c)
 *     MapServerToClientPfn @ 0x1C015D288 (MapServerToClientPfn.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4E10 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxSetWindowData(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // r12
  __int64 v5; // rbx
  __int64 v6; // r13
  unsigned int v7; // r14d
  __int64 v8; // r15
  int v9; // esi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 *ThreadWin32Thread; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rax
  __int16 v20; // cx
  unsigned __int8 v21; // r11
  __int64 v22; // r10
  __int64 CPD; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // r13
  __int64 v27; // rax
  __int64 v28; // r10
  __int64 v29; // rax
  __int64 DesktopWindow; // rax
  struct tagWND *v31; // rsi
  __int64 v32; // r12
  bool v33; // zf
  struct tagWND *v34; // r13
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r14
  __int64 CurrentProcessWin32Process; // rax
  struct tagWND *v40; // r15
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  int v44; // eax
  struct tagWND *v45; // rcx
  int v46; // eax
  unsigned int WindowCloakStateComponentUIAware; // eax
  struct tagWND *v48; // rcx
  __int64 v49; // r8
  _QWORD *v50; // rdx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // rax
  __int64 *v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rcx
  unsigned __int8 v62; // al
  char v63; // al
  signed __int32 v65[8]; // [rsp+8h] [rbp-A9h] BYREF
  __int64 **v66; // [rsp+28h] [rbp-89h]
  __int64 v67; // [rsp+30h] [rbp-81h] BYREF
  __int64 v68; // [rsp+38h] [rbp-79h] BYREF
  __int64 v69; // [rsp+40h] [rbp-71h]
  __int128 v70; // [rsp+48h] [rbp-69h] BYREF
  struct tagWND *v71; // [rsp+58h] [rbp-59h]
  __int64 v72; // [rsp+60h] [rbp-51h] BYREF
  __int64 v73; // [rsp+68h] [rbp-49h]
  __int64 v74; // [rsp+70h] [rbp-41h]
  __int64 v75; // [rsp+78h] [rbp-39h] BYREF
  struct tagWND *v76; // [rsp+80h] [rbp-31h]
  __int64 v77; // [rsp+88h] [rbp-29h]
  __int128 v78; // [rsp+98h] [rbp-19h]
  _QWORD v79[4]; // [rsp+A8h] [rbp-9h] BYREF
  __int128 v80; // [rsp+C8h] [rbp+17h] BYREF
  char v81[16]; // [rsp+D8h] [rbp+27h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  v6 = 0LL;
  v7 = a4;
  v8 = a3;
  v9 = a2;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3, a4) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v6 = *ThreadWin32Thread;
  }
  v68 = 0LL;
  v67 = gSmartObjNullRef;
  v68 = *(_QWORD *)(v6 + 1472);
  *(_QWORD *)(v6 + 1472) = &v68;
  v69 = 0LL;
  v75 = 0LL;
  v76 = 0LL;
  v77 = 0LL;
  v72 = 0LL;
  v73 = 0LL;
  v74 = 0LL;
  if ( v9 == -40 )
  {
    if ( PsGetCurrentProcessWin32Process(v12, v11) == *(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL) )
    {
      v61 = *((_QWORD *)a1 + 5);
      v62 = *(_BYTE *)(v61 + 234);
      v18 = ((unsigned __int64)v62 >> 2) & 1;
      if ( v8 )
        v63 = v62 | 4;
      else
        v63 = v62 & 0xFB;
      *(_BYTE *)(v61 + 234) = v63;
      goto LABEL_102;
    }
    goto LABEL_96;
  }
  if ( v9 == -21 )
  {
    v60 = *((_QWORD *)a1 + 5);
    v18 = *(_QWORD *)(v60 + 216);
    *(_QWORD *)(v60 + 216) = v8;
    goto LABEL_102;
  }
  if ( ((v9 + 20) & 0xFFFFFFFB) == 0 )
  {
    v18 = (int)xxxSetWindowStyle(a1);
    goto LABEL_102;
  }
  switch ( v9 )
  {
    case -12:
      v57 = *((_QWORD *)a1 + 5);
      if ( (*(_BYTE *)(v57 + 31) & 0xC0) == 0x40 )
      {
        v18 = *((_QWORD *)a1 + 21);
        *(_QWORD *)(v57 + 152) = v8;
        *((_QWORD *)a1 + 21) = v8;
      }
      else
      {
        v58 = (__int64 *)*((_QWORD *)a1 + 21);
        v18 = 0LL;
        if ( v58 )
          v18 = *v58;
        if ( v8 )
        {
          v59 = ValidateHmenu(v8);
          v69 = 0LL;
          SmartObjStackRefBase<tagMENU>::operator=(&v67, v59);
          if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator==(&v67) )
            v18 = 0LL;
          else
            LockWndMenuWorker(a1, 0LL, &v67);
        }
        else
        {
          UnlockWndMenuWorker(a1, 0);
        }
      }
      goto LABEL_102;
    case -8:
      DesktopWindow = GetDesktopWindow(a1);
      v31 = (struct tagWND *)*((_QWORD *)a1 + 13);
      v32 = DesktopWindow;
      *(_QWORD *)&v70 = DesktopWindow;
      v71 = v31;
      v33 = v31 == (struct tagWND *)DesktopWindow;
      if ( v31 == (struct tagWND *)DesktopWindow )
        v34 = (struct tagWND *)*((_QWORD *)a1 + 15);
      else
        v34 = v31;
      v35 = 120LL;
      if ( !v33 )
        v35 = 104LL;
      v66 = (__int64 **)((char *)a1 + v35);
      v38 = ValidateHwnd(v8);
      if ( !v38 && v8 )
        goto LABEL_41;
      if ( v31 == (struct tagWND *)v32 )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v37, v36);
        if ( (unsigned int)ShouldSetNoOwner(CurrentProcessWin32Process, v38) )
          v38 = 0LL;
      }
      if ( !(unsigned int)IsParentBandValid(a1, v38) )
      {
LABEL_41:
        v16 = 87LL;
        goto LABEL_97;
      }
      if ( v38 && GetProp(a1, WORD2(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink), 1LL) )
        goto LABEL_96;
      v40 = (struct tagWND *)v70;
      if ( v31 == (struct tagWND *)v70 )
      {
        if ( !v38 )
          goto LABEL_54;
        if ( GetProp(v38, WORD2(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink), 1LL) )
          goto LABEL_96;
      }
      if ( v38 )
      {
        v41 = *(_QWORD *)(v38 + 40);
        if ( *(char *)(v41 + 20) < 0 || *(char *)(v41 + 19) < 0 )
          goto LABEL_96;
      }
LABEL_54:
      if ( *v66 )
        v18 = **v66;
      else
        v18 = 0LL;
      v42 = W32GetThreadWin32Thread(KeGetCurrentThread());
      v72 = *(_QWORD *)(v42 + 408);
      *(_QWORD *)(v42 + 408) = &v72;
      v73 = v38;
      if ( v38 )
        HMLockObject(v38);
      if ( v71 != v40 )
      {
        v55 = -(__int64)(xxxSetParentWorker(a1, (struct tagWND *)v38, 0LL, 0) != 0LL);
        v18 &= v55;
        goto LABEL_83;
      }
      v43 = W32GetThreadWin32Thread(KeGetCurrentThread());
      v75 = *(_QWORD *)(v43 + 408);
      *(_QWORD *)(v43 + 408) = &v75;
      v76 = v34;
      if ( v34 )
        HMLockObject(v34);
      xxxHandleOwnerSwitch(a1, (struct tagWND *)v38, v34);
      v44 = IsParentBandValid(a1, v38);
      v45 = a1;
      if ( v44 && (v46 = ValidateOwnerDepth(a1, v38), v45 = a1, v46) )
      {
        if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) == 0 )
        {
          if ( !v38 )
          {
            HMAssignmentUnlock(v66);
            goto LABEL_73;
          }
          if ( (*(_BYTE *)(_HMPheFromObject(v38) + 25) & 1) == 0 )
          {
            *((_QWORD *)&v78 + 1) = v38;
            memset(v79, 0, 24);
            *(_QWORD *)&v78 = v66;
            v70 = v78;
            HMAssignmentLock(&v70);
            WindowCloakStateComponentUIAware = GetWindowCloakStateComponentUIAware((struct tagWND *)v38);
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
                v80 = *(_OWORD *)LockPointer(v81, (char *)a1 + 120, *((_QWORD *)a1 + 15));
                HMAssignmentLock(&v80);
                xxxInheritWindowMonitor(a1);
LABEL_81:
                ThreadUnlock1(v52, v51, v53);
LABEL_83:
                ThreadUnlock1(v55, v54, v56);
                goto LABEL_102;
              }
              v49 = 2LL;
              v50 = v79;
              v48 = a1;
            }
            zzzSetWindowCompositionCloak(v48, v50, v49);
            goto LABEL_73;
          }
        }
        if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v52);
        if ( v38 && (*(_BYTE *)(_HMPheFromObject(v38) + 25) & 1) != 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v52);
      }
      else
      {
        xxxHandleOwnerSwitch(v45, v34, (struct tagWND *)v38);
        UserSetLastError(87LL);
      }
      v18 = 0LL;
      goto LABEL_81;
    case -6:
      v29 = *((_QWORD *)a1 + 5);
      v18 = *(_QWORD *)(v29 + 32);
      *(_QWORD *)(v29 + 32) = v8;
      goto LABEL_102;
    case -4:
      if ( PsGetCurrentProcessWin32Process(v12, v11) == *(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL) )
      {
        v19 = *((_QWORD *)a1 + 5);
        v20 = *(_WORD *)(v19 + 42);
        if ( v20 >= 0 )
        {
          v21 = *(_BYTE *)(v19 + 18);
          if ( (v21 & 4) != 0 )
          {
            v18 = MapServerToClientPfn(*(_QWORD *)(v19 + 120), v7, v13);
            if ( !v18 )
              goto LABEL_103;
            goto LABEL_25;
          }
          if ( (v20 & 0x3FFF) == 0x2A5 )
          {
            v18 = *(_QWORD *)(v19 + 120);
          }
          else
          {
            v18 = MapClientNeuterToClientPfn(*((_QWORD *)a1 + 17), *(_QWORD *)(v19 + 120), v7);
            if ( v18 != v22 )
            {
LABEL_25:
              if ( (v8 & 0xFFFF0000) == 0xFFFF0000 )
              {
                LOBYTE(v11) = 7;
                v24 = HMValidateHandleNoRip(v8, v11, v13);
                if ( v24 )
                {
                  v25 = *(_QWORD *)(v24 + 40);
                  v8 = *(_QWORD *)(v25 + 16);
                  v7 = *(_WORD *)(v25 + 24) & 2;
                }
              }
              v26 = MapClientToServerPfn(v8);
              if ( v26 )
              {
                SetOrClrWF(0, (__int64)a1, 0x208u, 1);
                SetOrClrWF(1, (__int64)a1, 0x204u, 1);
                *(_QWORD *)(*((_QWORD *)a1 + 5) + 120LL) = v26;
                _InterlockedOr(v65, 0);
              }
              else
              {
                SetOrClrWF(v7 != 0, (__int64)a1, 0x208u, 1);
                if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 18LL) & 4) != 0 )
                  SetOrClrWF(0, (__int64)a1, 0x204u, 1);
                v27 = MapClientNeuterToClientPfn(*((_QWORD *)a1 + 17), v8, v7);
                *(_QWORD *)(v28 + 120) = v27;
                _InterlockedOr(v65, 0);
                *(_WORD *)(*((_QWORD *)a1 + 5) + 40LL) = xxxClientWOWGetProcModule(*(_QWORD *)(*((_QWORD *)a1 + 5)
                                                                                             + 120LL));
              }
              goto LABEL_102;
            }
          }
          if ( v7 != ((v21 >> 3) & 1) )
          {
            CPD = GetCPD(a1, 34 - (unsigned int)(v7 != 0), v18);
            if ( CPD )
              v18 = CPD;
          }
          goto LABEL_25;
        }
      }
LABEL_96:
      v16 = 5LL;
      goto LABEL_97;
    case -2:
      v17 = *((_QWORD *)a1 + 5);
      v18 = *(_QWORD *)(v17 + 240);
      *(_QWORD *)(v17 + 240) = v8;
LABEL_102:
      v5 = v18;
      goto LABEL_103;
  }
  v16 = 1413LL;
LABEL_97:
  UserSetLastError(v16);
LABEL_103:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v67, v11, v13, v14);
  return v5;
}
