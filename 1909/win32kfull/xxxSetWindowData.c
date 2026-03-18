/*
 * XREFs of xxxSetWindowData @ 0x1C00ABB50
 * Callers:
 *     xxxSetWindowLong @ 0x1C00A8474 (xxxSetWindowLong.c)
 *     ?xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z @ 0x1C00AB5F8 (-xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z.c)
 * Callees:
 *     IsWindowShellCloaked @ 0x1C0017094 (IsWindowShellCloaked.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C0017CC4 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     zzzSetWindowCompositionCloak @ 0x1C0019FCC (zzzSetWindowCompositionCloak.c)
 *     GetWindowCloakStateComponentUIAware @ 0x1C001ABAC (GetWindowCloakStateComponentUIAware.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@PEAX@Z @ 0x1C001AC2C (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@.c)
 *     MapClientNeuterToClientPfn @ 0x1C001EFB4 (MapClientNeuterToClientPfn.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     MapClientToServerPfn @ 0x1C0036A08 (MapClientToServerPfn.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxSetWindowStyle @ 0x1C003C020 (xxxSetWindowStyle.c)
 *     xxxClientWOWGetProcModule @ 0x1C0051758 (xxxClientWOWGetProcModule.c)
 *     HMValidateHandleNoRip @ 0x1C00559FC (HMValidateHandleNoRip.c)
 *     GetCPD @ 0x1C005FF0C (GetCPD.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0061278 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     IsParentBandValid @ 0x1C0061334 (IsParentBandValid.c)
 *     xxxInheritWindowMonitor @ 0x1C0068FC8 (xxxInheritWindowMonitor.c)
 *     _GetProp @ 0x1C00692EC (_GetProp.c)
 *     _GetDesktopWindow @ 0x1C006C4B0 (_GetDesktopWindow.c)
 *     SetOrClrWF @ 0x1C008990C (SetOrClrWF.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00E0C84 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C00E554C (-LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     ValidateOwnerDepth @ 0x1C00FEF34 (ValidateOwnerDepth.c)
 *     ?UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z @ 0x1C010954C (-UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z.c)
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C010A194 (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     MapServerToClientPfn @ 0x1C015E238 (MapServerToClientPfn.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4960 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxSetWindowData(struct tagWND *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  struct _KTHREAD *CurrentThread; // r12
  __int64 v5; // rbx
  __int64 v6; // r13
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
  __int64 *CPD; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // r13
  __int64 v27; // rax
  __int64 v28; // r10
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 DesktopWindow; // rax
  struct tagWND *v33; // rsi
  __int64 v34; // r12
  bool v35; // zf
  struct tagWND *v36; // r13
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // r14
  __int64 CurrentProcessWin32Process; // rax
  struct tagWND *v41; // r15
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  BOOL v45; // eax
  struct tagWND *v46; // rcx
  int v47; // eax
  unsigned int WindowCloakStateComponentUIAware; // eax
  struct tagWND *v49; // rcx
  unsigned int v50; // r8d
  _QWORD *v51; // rdx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // rdx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // rax
  __int64 *v62; // rax
  __int64 v63; // rax
  __int64 v64; // rcx
  unsigned __int8 v65; // al
  char v66; // al
  signed __int32 v68[8]; // [rsp+8h] [rbp-A9h] BYREF
  __int64 **v69; // [rsp+28h] [rbp-89h]
  __int64 v70; // [rsp+30h] [rbp-81h] BYREF
  __int64 v71; // [rsp+38h] [rbp-79h] BYREF
  __int64 v72; // [rsp+40h] [rbp-71h]
  __int128 v73; // [rsp+48h] [rbp-69h] BYREF
  struct tagWND *v74; // [rsp+58h] [rbp-59h]
  __int64 v75; // [rsp+60h] [rbp-51h] BYREF
  __int64 v76; // [rsp+68h] [rbp-49h]
  __int64 v77; // [rsp+70h] [rbp-41h]
  __int64 v78; // [rsp+78h] [rbp-39h] BYREF
  struct tagWND *v79; // [rsp+80h] [rbp-31h]
  __int64 v80; // [rsp+88h] [rbp-29h]
  __int128 v81; // [rsp+98h] [rbp-19h]
  _QWORD v82[4]; // [rsp+A8h] [rbp-9h] BYREF
  __int128 v83; // [rsp+C8h] [rbp+17h] BYREF
  __int64 v84; // [rsp+D8h] [rbp+27h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  v6 = 0LL;
  v8 = a3;
  v9 = a2;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v6 = *ThreadWin32Thread;
  }
  v71 = 0LL;
  v70 = gSmartObjNullRef;
  v71 = *(_QWORD *)(v6 + 1472);
  *(_QWORD *)(v6 + 1472) = &v71;
  v72 = 0LL;
  v78 = 0LL;
  v79 = 0LL;
  v80 = 0LL;
  v75 = 0LL;
  v76 = 0LL;
  v77 = 0LL;
  if ( v9 == -40 )
  {
    if ( PsGetCurrentProcessWin32Process(v12, v11) == *(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL) )
    {
      v64 = *((_QWORD *)a1 + 5);
      v65 = *(_BYTE *)(v64 + 234);
      v18 = ((unsigned __int64)v65 >> 2) & 1;
      if ( v8 )
        v66 = v65 | 4;
      else
        v66 = v65 & 0xFB;
      *(_BYTE *)(v64 + 234) = v66;
      goto LABEL_102;
    }
    goto LABEL_96;
  }
  if ( v9 == -21 )
  {
    v63 = *((_QWORD *)a1 + 5);
    v18 = *(_QWORD *)(v63 + 216);
    *(_QWORD *)(v63 + 216) = v8;
    goto LABEL_102;
  }
  if ( ((v9 + 20) & 0xFFFFFFFB) == 0 )
  {
    v18 = (int)xxxSetWindowStyle(a1, v9, v8);
    goto LABEL_102;
  }
  switch ( v9 )
  {
    case -12:
      v61 = *((_QWORD *)a1 + 5);
      if ( (*(_BYTE *)(v61 + 31) & 0xC0) == 0x40 )
      {
        v18 = *((_QWORD *)a1 + 21);
        *(_QWORD *)(v61 + 152) = v8;
        *((_QWORD *)a1 + 21) = v8;
      }
      else
      {
        v62 = (__int64 *)*((_QWORD *)a1 + 21);
        v18 = 0LL;
        if ( v62 )
          v18 = *v62;
        if ( v8 )
        {
          ValidateHmenu(v8);
          v72 = 0LL;
          SmartObjStackRefBase<tagMENU>::operator=(&v70);
          if ( SmartObjStackRef<tagMENU>::operator==((__int64)&v70) )
            v18 = 0LL;
          else
            LockWndMenuWorker(a1, 0LL, &v70);
        }
        else
        {
          UnlockWndMenuWorker(a1, 0);
        }
      }
      goto LABEL_102;
    case -8:
      DesktopWindow = GetDesktopWindow((__int64)a1);
      v33 = (struct tagWND *)*((_QWORD *)a1 + 13);
      v34 = DesktopWindow;
      *(_QWORD *)&v73 = DesktopWindow;
      v74 = v33;
      v35 = v33 == (struct tagWND *)DesktopWindow;
      if ( v33 == (struct tagWND *)DesktopWindow )
        v36 = (struct tagWND *)*((_QWORD *)a1 + 15);
      else
        v36 = v33;
      v37 = 120LL;
      if ( !v35 )
        v37 = 104LL;
      v69 = (__int64 **)((char *)a1 + v37);
      v39 = ValidateHwnd(v8);
      if ( !v39 && v8 )
        goto LABEL_41;
      if ( v33 == (struct tagWND *)v34 )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v38, v11);
        if ( (unsigned int)ShouldSetNoOwner(CurrentProcessWin32Process, v39) )
          v39 = 0LL;
      }
      if ( !IsParentBandValid((__int64)a1, v39) )
      {
LABEL_41:
        v16 = 87LL;
        goto LABEL_97;
      }
      if ( v39 && GetProp((__int64)a1, WORD2(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink), 1LL) )
        goto LABEL_96;
      v41 = (struct tagWND *)v73;
      if ( v33 == (struct tagWND *)v73 )
      {
        if ( !v39 )
          goto LABEL_54;
        if ( GetProp(v39, WORD2(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink), 1LL) )
          goto LABEL_96;
      }
      if ( v39 )
      {
        v42 = *(_QWORD *)(v39 + 40);
        if ( *(char *)(v42 + 20) < 0 || *(char *)(v42 + 19) < 0 )
          goto LABEL_96;
      }
LABEL_54:
      if ( *v69 )
        v18 = **v69;
      else
        v18 = 0LL;
      v43 = W32GetThreadWin32Thread(KeGetCurrentThread());
      v75 = *(_QWORD *)(v43 + 408);
      *(_QWORD *)(v43 + 408) = &v75;
      v76 = v39;
      if ( v39 )
        HMLockObject(v39);
      if ( v74 != v41 )
      {
        v59 = -(__int64)(xxxSetParentWorker(a1, (struct tagWND *)v39, 0LL, 0) != 0LL);
        v18 &= v59;
        goto LABEL_83;
      }
      v44 = W32GetThreadWin32Thread(KeGetCurrentThread());
      v78 = *(_QWORD *)(v44 + 408);
      *(_QWORD *)(v44 + 408) = &v78;
      v79 = v36;
      if ( v36 )
        HMLockObject(v36);
      xxxHandleOwnerSwitch(a1, (struct tagWND *)v39, v36);
      v45 = IsParentBandValid((__int64)a1, v39);
      v46 = a1;
      if ( v45 && (v47 = ValidateOwnerDepth(a1, v39), v46 = a1, v47) )
      {
        if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) == 0 )
        {
          if ( !v39 )
          {
            HMAssignmentUnlock(v69);
            goto LABEL_73;
          }
          if ( (*(_BYTE *)(_HMPheFromObject(v39) + 25) & 1) == 0 )
          {
            *((_QWORD *)&v81 + 1) = v39;
            memset(v82, 0, 24);
            *(_QWORD *)&v81 = v69;
            v73 = v81;
            HMAssignmentLock(&v73);
            WindowCloakStateComponentUIAware = GetWindowCloakStateComponentUIAware((struct tagWND *)v39);
            v49 = a1;
            if ( WindowCloakStateComponentUIAware )
            {
              v50 = WindowCloakStateComponentUIAware;
              v51 = 0LL;
            }
            else
            {
              if ( !(unsigned int)IsWindowShellCloaked(a1, 1) )
              {
LABEL_73:
                v83 = *(_OWORD *)LockPointer(&v84, (__int64)a1 + 120, *((_QWORD *)a1 + 15));
                HMAssignmentLock(&v83);
                xxxInheritWindowMonitor(a1, (__int64 *)v39, 0);
LABEL_81:
                ThreadUnlock1(v53, v52, v54);
LABEL_83:
                ThreadUnlock1(v59, v58, v60);
                goto LABEL_102;
              }
              v50 = 2;
              v51 = v82;
              v49 = a1;
            }
            zzzSetWindowCompositionCloak((__int64)v49, (__int64)v51, v50);
            goto LABEL_73;
          }
        }
        if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v53);
        if ( v39 && (*(_BYTE *)(_HMPheFromObject(v39) + 25) & 1) != 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v53);
      }
      else
      {
        xxxHandleOwnerSwitch(v46, v36, (struct tagWND *)v39);
        UserSetLastError(87LL, v55, v56, v57);
      }
      v18 = 0LL;
      goto LABEL_81;
    case -6:
      v31 = *((_QWORD *)a1 + 5);
      v18 = *(_QWORD *)(v31 + 32);
      *(_QWORD *)(v31 + 32) = v8;
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
            v18 = MapServerToClientPfn(*(_QWORD *)(v19 + 120), a4, v13);
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
            v18 = MapClientNeuterToClientPfn(*((_QWORD *)a1 + 17), *(_QWORD *)(v19 + 120), a4);
            if ( v18 != v22 )
            {
LABEL_25:
              if ( (v8 & 0xFFFF0000) == 0xFFFF0000 )
              {
                v24 = HMValidateHandleNoRip(v8, 7);
                if ( v24 )
                {
                  v25 = *(_QWORD *)(v24 + 40);
                  v8 = *(_QWORD *)(v25 + 16);
                  a4 = *(_WORD *)(v25 + 24) & 2;
                }
              }
              v26 = MapClientToServerPfn(v8);
              if ( v26 )
              {
                SetOrClrWF(0, (__int64)a1, 0x208u, 1);
                SetOrClrWF(1, (__int64)a1, 0x204u, 1);
                *(_QWORD *)(*((_QWORD *)a1 + 5) + 120LL) = v26;
                _InterlockedOr(v68, 0);
              }
              else
              {
                SetOrClrWF(a4 != 0, (__int64)a1, 0x208u, 1);
                if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 18LL) & 4) != 0 )
                  SetOrClrWF(0, (__int64)a1, 0x204u, 1);
                v27 = MapClientNeuterToClientPfn(*((_QWORD *)a1 + 17), v8, a4);
                *(_QWORD *)(v28 + 120) = v27;
                _InterlockedOr(v68, 0);
                *(_WORD *)(*((_QWORD *)a1 + 5) + 40LL) = xxxClientWOWGetProcModule(
                                                           *(_QWORD *)(*((_QWORD *)a1 + 5) + 120LL),
                                                           v29,
                                                           v30);
              }
              goto LABEL_102;
            }
          }
          if ( a4 != ((v21 >> 3) & 1) )
          {
            CPD = GetCPD((__int64)a1, 34 - (unsigned int)(a4 != 0), v18);
            if ( CPD )
              v18 = (__int64)CPD;
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
  UserSetLastError(v16, v11, v13, v14);
LABEL_103:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v70, v11, v13);
  return v5;
}
