/*
 * XREFs of xxxSetWindowData @ 0x1C0065ECC
 * Callers:
 *     xxxSetWindowLongPtr @ 0x1C00666A0 (xxxSetWindowLongPtr.c)
 *     xxxSetWindowLong @ 0x1C006782C (xxxSetWindowLong.c)
 * Callees:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C000C2E4 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     GetWindowCloakStateComponentUIAware @ 0x1C000CCBC (GetWindowCloakStateComponentUIAware.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@PEAX@Z @ 0x1C000CD3C (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@.c)
 *     SetOrClrWF @ 0x1C000DA60 (SetOrClrWF.c)
 *     IsWindowShellCloaked @ 0x1C000ED34 (IsWindowShellCloaked.c)
 *     xxxClientWOWGetProcModule @ 0x1C001B1E4 (xxxClientWOWGetProcModule.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxSetWindowStyle @ 0x1C002C580 (xxxSetWindowStyle.c)
 *     IsParentBandValid @ 0x1C0041150 (IsParentBandValid.c)
 *     _GetDesktopWindow @ 0x1C0043A0C (_GetDesktopWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0069C30 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     MapClientNeuterToClientPfn @ 0x1C0069E6C (MapClientNeuterToClientPfn.c)
 *     ?LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C006BABC (-LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     xxxInheritWindowMonitor @ 0x1C006F3B0 (xxxInheritWindowMonitor.c)
 *     _GetProp @ 0x1C0072450 (_GetProp.c)
 *     zzzSetWindowCompositionCloak @ 0x1C0072E2C (zzzSetWindowCompositionCloak.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     HMValidateHandleNoRip @ 0x1C00B6440 (HMValidateHandleNoRip.c)
 *     GetCPD @ 0x1C00F86FC (GetCPD.c)
 *     MapClientToServerPfn @ 0x1C00FC6AC (MapClientToServerPfn.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00FE500 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ValidateOwnerDepth @ 0x1C011C720 (ValidateOwnerDepth.c)
 *     ?UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z @ 0x1C012456C (-UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z.c)
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C012553C (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     MapServerToClientPfn @ 0x1C01568E0 (MapServerToClientPfn.c)
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02C1D60 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

unsigned __int64 __fastcall xxxSetWindowData(struct tagWND *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  struct _KTHREAD *CurrentThread; // r12
  unsigned __int64 v5; // rbx
  __int64 v6; // r13
  int v9; // esi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned __int64 v16; // rsi
  __int64 v17; // rax
  __int16 v18; // cx
  unsigned __int8 v19; // r11
  __int64 v20; // r10
  __int64 CPD; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // r13
  __int64 v25; // rax
  __int64 v26; // r10
  __int64 v27; // rax
  __int64 DesktopWindow; // rax
  __int64 v29; // rsi
  __int64 v30; // r12
  __int64 v31; // r13
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r14
  __int64 CurrentProcessWin32Process; // rax
  __int64 v36; // rdx
  __int64 v37; // r15
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rax
  BOOL v42; // eax
  struct tagWND *v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // rcx
  __int64 v47; // rcx
  unsigned int WindowCloakStateComponentUIAware; // eax
  struct tagWND *v49; // rcx
  __int64 v50; // r8
  int *v51; // rdx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rax
  unsigned __int64 *v55; // rax
  __int64 v56; // rax
  __int64 v57; // rcx
  unsigned __int8 v58; // al
  char v59; // al
  signed __int32 v61[8]; // [rsp+8h] [rbp-A9h] BYREF
  unsigned __int64 **v62; // [rsp+28h] [rbp-89h]
  __int64 v63; // [rsp+30h] [rbp-81h] BYREF
  __int64 v64; // [rsp+38h] [rbp-79h] BYREF
  __int64 v65; // [rsp+40h] [rbp-71h]
  __int128 v66; // [rsp+48h] [rbp-69h]
  __int64 v67; // [rsp+58h] [rbp-59h]
  __int128 v68; // [rsp+68h] [rbp-49h] BYREF
  __int128 v69; // [rsp+78h] [rbp-39h] BYREF
  _QWORD v70[3]; // [rsp+88h] [rbp-29h] BYREF
  _QWORD v71[3]; // [rsp+A0h] [rbp-11h] BYREF
  int v72; // [rsp+B8h] [rbp+7h] BYREF
  __int64 v73[3]; // [rsp+D0h] [rbp+1Fh] BYREF

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
  v64 = 0LL;
  v63 = gSmartObjNullRef;
  v64 = *(_QWORD *)(v6 + 1448);
  *(_QWORD *)(v6 + 1448) = &v64;
  v65 = 0LL;
  if ( v9 == -40 )
  {
    if ( PsGetCurrentProcessWin32Process(v12) == *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) )
    {
      v57 = *((_QWORD *)a1 + 5);
      v58 = *(_BYTE *)(v57 + 234);
      v16 = ((unsigned __int64)v58 >> 2) & 1;
      if ( a3 )
        v59 = v58 | 4;
      else
        v59 = v58 & 0xFB;
      *(_BYTE *)(v57 + 234) = v59;
      goto LABEL_102;
    }
    goto LABEL_96;
  }
  if ( v9 == -21 )
  {
    v56 = *((_QWORD *)a1 + 5);
    v16 = *(_QWORD *)(v56 + 216);
    *(_QWORD *)(v56 + 216) = a3;
    goto LABEL_102;
  }
  if ( ((v9 + 20) & 0xFFFFFFFB) == 0 )
  {
    v16 = (int)xxxSetWindowStyle(a1, v9, a3);
    goto LABEL_102;
  }
  switch ( v9 )
  {
    case -12:
      v54 = *((_QWORD *)a1 + 5);
      if ( (*(_BYTE *)(v54 + 31) & 0xC0) == 0x40 )
      {
        v16 = *((_QWORD *)a1 + 18);
        *(_QWORD *)(v54 + 152) = a3;
        *((_QWORD *)a1 + 18) = a3;
      }
      else
      {
        v55 = (unsigned __int64 *)*((_QWORD *)a1 + 18);
        v16 = 0LL;
        if ( v55 )
          v16 = *v55;
        if ( a3 )
        {
          ValidateHmenu(a3);
          v65 = 0LL;
          SmartObjStackRefBase<tagMENU>::operator=(&v63);
          if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator==(&v63) )
            v16 = 0LL;
          else
            LockWndMenuWorker(a1, 0LL, &v63);
        }
        else
        {
          UnlockWndMenuWorker(a1, 0);
        }
      }
      goto LABEL_102;
    case -8:
      DesktopWindow = GetDesktopWindow((__int64)a1);
      v29 = *((_QWORD *)a1 + 10);
      v30 = DesktopWindow;
      v67 = DesktopWindow;
      *(_QWORD *)&v66 = v29;
      if ( v29 == DesktopWindow )
        v31 = *((_QWORD *)a1 + 12);
      else
        v31 = v29;
      v32 = 96LL;
      if ( v29 != v30 )
        v32 = 80LL;
      v62 = (unsigned __int64 **)((char *)a1 + v32);
      v34 = ValidateHwnd(a3);
      if ( !v34 && a3 )
        goto LABEL_41;
      if ( v29 == v30 )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v33);
        if ( (unsigned int)ShouldSetNoOwner(CurrentProcessWin32Process, v34) )
          v34 = 0LL;
      }
      if ( !IsParentBandValid((__int64)a1, v34) )
      {
LABEL_41:
        v14 = 87LL;
        goto LABEL_97;
      }
      if ( v34 && GetProp(a1, (unsigned __int16)gatomBrokeredForeground, 1LL) )
        goto LABEL_96;
      v37 = v67;
      if ( v29 == v67 )
      {
        if ( !v34 )
          goto LABEL_54;
        if ( GetProp(v34, (unsigned __int16)gatomBrokeredForeground, 1LL) )
          goto LABEL_96;
      }
      if ( v34 )
      {
        v38 = *(_QWORD *)(v34 + 40);
        if ( *(char *)(v38 + 20) < 0 || *(char *)(v38 + 19) < 0 )
          goto LABEL_96;
      }
LABEL_54:
      if ( *v62 )
        v16 = **v62;
      else
        v16 = 0LL;
      v39 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v36);
      v70[0] = *(_QWORD *)(v39 + 416);
      *(_QWORD *)(v39 + 416) = v70;
      v70[1] = v34;
      if ( v34 )
        _InterlockedAdd((volatile signed __int32 *)(v34 + 8), 1u);
      if ( (_QWORD)v66 != v37 )
      {
        v53 = -(__int64)(xxxSetParentWorker(a1, (struct tagWND *)v34, 0LL, 0) != 0LL);
        v16 &= v53;
        goto LABEL_83;
      }
      v41 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v40);
      v71[0] = *(_QWORD *)(v41 + 416);
      *(_QWORD *)(v41 + 416) = v71;
      v71[1] = v31;
      if ( v31 )
        _InterlockedAdd((volatile signed __int32 *)(v31 + 8), 1u);
      xxxHandleOwnerSwitch(a1, (struct tagWND *)v34, (struct tagWND *)v31);
      v42 = IsParentBandValid((__int64)a1, v34);
      v43 = a1;
      if ( v42 )
      {
        if ( (unsigned int)ValidateOwnerDepth(a1, v34) )
        {
          v44 = *((unsigned int *)&gSharedInfo + 4);
          v45 = *((_QWORD *)&gSharedInfo + 1);
          v46 = (unsigned int)v44 * (unsigned __int16)*(_DWORD *)a1;
          if ( (*(_BYTE *)(v46 + v45 + 25) & 1) != 0 )
          {
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v46);
          }
          else
          {
            if ( !v34 )
            {
              HMAssignmentUnlock(v62);
              goto LABEL_73;
            }
            v47 = (unsigned int)v44 * (unsigned __int16)*(_DWORD *)v34;
            if ( (*(_BYTE *)(v47 + v45 + 25) & 1) == 0 )
            {
              *(_QWORD *)&v66 = v62;
              *((_QWORD *)&v66 + 1) = v34;
              v68 = v66;
              HMAssignmentLock(&v68);
              WindowCloakStateComponentUIAware = GetWindowCloakStateComponentUIAware((struct tagWND *)v34);
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
                  v69 = *(_OWORD *)LockPointer(v73, (__int64)a1 + 96, *((_QWORD *)a1 + 12));
                  HMAssignmentLock(&v69);
                  xxxInheritWindowMonitor(a1);
LABEL_81:
                  ThreadUnlock1(v47, v44);
LABEL_83:
                  ThreadUnlock1(v53, v52);
                  goto LABEL_102;
                }
                v72 = 0;
                v51 = &v72;
                v50 = 2LL;
                v49 = a1;
              }
              zzzSetWindowCompositionCloak(v49, v51, v50);
              goto LABEL_73;
            }
          }
          if ( v34 )
          {
            v47 = *((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)*(_DWORD *)v34;
            LOBYTE(v47) = *(_BYTE *)(v47 + *((_QWORD *)&gSharedInfo + 1) + 25);
            if ( (v47 & 1) != 0 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v47);
          }
LABEL_80:
          v16 = 0LL;
          goto LABEL_81;
        }
        v43 = a1;
      }
      xxxHandleOwnerSwitch(v43, (struct tagWND *)v31, (struct tagWND *)v34);
      UserSetLastError(87LL);
      goto LABEL_80;
    case -6:
      v27 = *((_QWORD *)a1 + 5);
      v16 = *(_QWORD *)(v27 + 32);
      *(_QWORD *)(v27 + 32) = a3;
      goto LABEL_102;
    case -4:
      if ( PsGetCurrentProcessWin32Process(v12) == *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) )
      {
        v17 = *((_QWORD *)a1 + 5);
        v18 = *(_WORD *)(v17 + 42);
        if ( v18 >= 0 )
        {
          v19 = *(_BYTE *)(v17 + 18);
          if ( (v19 & 4) != 0 )
          {
            v16 = MapServerToClientPfn(*(_QWORD *)(v17 + 120), a4);
            if ( !v16 )
              goto LABEL_103;
            goto LABEL_25;
          }
          if ( (v18 & 0x2FFF) == 0x2A5 )
          {
            v16 = *(_QWORD *)(v17 + 120);
          }
          else
          {
            v16 = MapClientNeuterToClientPfn(*((_QWORD *)a1 + 14), *(_QWORD *)(v17 + 120), a4);
            if ( v16 != v20 )
            {
LABEL_25:
              if ( (a3 & 0xFFFF0000) == 0xFFFF0000 )
              {
                LOBYTE(v11) = 7;
                v22 = HMValidateHandleNoRip(a3, v11);
                if ( v22 )
                {
                  v23 = *(_QWORD *)(v22 + 40);
                  a3 = *(_QWORD *)(v23 + 16);
                  a4 = *(_WORD *)(v23 + 24) & 2;
                }
              }
              v24 = MapClientToServerPfn(a3);
              if ( v24 )
              {
                SetOrClrWF(0, (__int64)a1, 0x208u, 1);
                SetOrClrWF(1, (__int64)a1, 0x204u, 1);
                *(_QWORD *)(*((_QWORD *)a1 + 5) + 120LL) = v24;
                _InterlockedOr(v61, 0);
              }
              else
              {
                SetOrClrWF(a4 != 0, (__int64)a1, 0x208u, 1);
                if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 18LL) & 4) != 0 )
                  SetOrClrWF(0, (__int64)a1, 0x204u, 1);
                v25 = MapClientNeuterToClientPfn(*((_QWORD *)a1 + 14), a3, a4);
                *(_QWORD *)(v26 + 120) = v25;
                _InterlockedOr(v61, 0);
                *(_WORD *)(*((_QWORD *)a1 + 5) + 40LL) = xxxClientWOWGetProcModule(*(_QWORD *)(*((_QWORD *)a1 + 5)
                                                                                             + 120LL));
              }
              goto LABEL_102;
            }
          }
          if ( a4 != ((v19 >> 3) & 1) )
          {
            CPD = GetCPD(a1, 34 - (unsigned int)(a4 != 0), v16);
            if ( CPD )
              v16 = CPD;
          }
          goto LABEL_25;
        }
      }
LABEL_96:
      v14 = 5LL;
      goto LABEL_97;
    case -2:
      v15 = *((_QWORD *)a1 + 5);
      v16 = *(_QWORD *)(v15 + 240);
      *(_QWORD *)(v15 + 240) = a3;
LABEL_102:
      v5 = v16;
      goto LABEL_103;
  }
  v14 = 1413LL;
LABEL_97:
  UserSetLastError(v14);
LABEL_103:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v63, v11);
  return v5;
}
