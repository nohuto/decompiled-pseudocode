/*
 * XREFs of NtUserBuildHwndList @ 0x1C00CBEB0
 * Callers:
 *     <none>
 * Callees:
 *     MapDesktop @ 0x1C0019DE0 (MapDesktop.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x1C00CC700 (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 *     GetThreadDesktopWindow @ 0x1C010B1CC (GetThreadDesktopWindow.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserBuildHwndList(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        volatile void *Address,
        unsigned int *a8)
{
  struct tagBWL *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int v14; // ecx
  unsigned __int64 v15; // rbx
  int v16; // r14d
  __int64 v17; // rdx
  __int64 CurrentProcessWin32Process; // rsi
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 CurrentProcess; // rax
  int v23; // eax
  unsigned __int64 v24; // rcx
  _QWORD *v25; // rbx
  int v26; // ebx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rsi
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  int v36; // edx
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  PVOID v40; // rdx
  __int64 ThreadDesktopWindow; // rax
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rcx
  int v47; // edx
  __int64 v48; // rsi
  __int64 v49; // rsi
  __int64 v50; // rax
  __int64 v51; // rsi
  struct tagWND *v52; // rdx
  _QWORD *v53; // rax
  __int64 v54; // rdx
  unsigned __int16 *v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  _QWORD *v58; // r13
  _QWORD *v59; // r12
  _QWORD *v60; // r15
  unsigned __int64 v61; // rsi
  __int64 v62; // rbx
  struct _KTHREAD *CurrentThread; // r14
  __int64 v64; // r14
  unsigned __int64 v65; // rsi
  __int64 *v66; // rax
  __int64 v67; // rcx
  char *v68; // r12
  unsigned int v69; // esi
  _DWORD *v70; // r8
  struct tagBWL *v71; // rdx
  struct tagBWL *v72; // rcx
  struct tagBWL *v73; // rcx
  __int64 v75; // [rsp+20h] [rbp-98h]
  struct tagBWL *v76; // [rsp+28h] [rbp-90h]
  PVOID Object[2]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v78; // [rsp+40h] [rbp-78h]
  __int64 v79; // [rsp+48h] [rbp-70h] BYREF
  __int64 v80; // [rsp+50h] [rbp-68h]
  PVOID v81; // [rsp+58h] [rbp-60h]
  __int64 v82; // [rsp+60h] [rbp-58h]
  unsigned __int16 *v83; // [rsp+70h] [rbp-48h]
  int v84; // [rsp+C8h] [rbp+10h]
  int v86; // [rsp+D8h] [rbp+20h]

  v11 = 0LL;
  v79 = 0LL;
  v80 = 0LL;
  v81 = 0LL;
  v82 = 0LL;
  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  if ( gpresUser && (unsigned int)UserIsUserCritSecInExclusive(v13) && (++gdwInAtomicOperation, gpAtomickCheckStacks) )
  {
    v86 = ++gdwAtomicCheckSerial;
    v14 = 0;
    v12 = gdwAtomicCheckLogSize;
    if ( gdwAtomicCheckLogSize )
    {
      while ( *(_DWORD *)(((unsigned __int64)v14 << 6) + gpAtomickCheckStacks) )
      {
        if ( ++v14 >= gdwAtomicCheckLogSize )
          goto LABEL_10;
      }
      v15 = (unsigned __int64)v14 << 6;
      *(_DWORD *)(gpAtomickCheckStacks + v15) = gdwAtomicCheckSerial;
      *(_DWORD *)(gpAtomickCheckStacks + v15 + 4) = (unsigned int)PsGetCurrentThreadId();
      *(_DWORD *)(gpAtomickCheckStacks + v15 + 8) = (MEMORY[0xFFFFF78000000320]
                                                   * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      RtlWalkFrameChain((PVOID *)(v15 + gpAtomickCheckStacks + 16LL), 6u, 0x200u);
    }
  }
  else
  {
    v86 = v84;
  }
LABEL_10:
  v16 = 2 * (*gpsi & 4 | 1);
  if ( a4 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(gpsi, v12);
    v21 = *(unsigned int *)(CurrentProcessWin32Process + 812);
    if ( (v21 & 0x30) != 0
      || (CurrentProcess = PsGetCurrentProcess(v21, v17, v19, v20), (unsigned int)IsProcessDwm(CurrentProcess))
      || *(int *)(CurrentProcessWin32Process + 12) < 0
      || *(_QWORD *)CurrentProcessWin32Process == gpepCSRSS
      || (v23 = 0, (*(_DWORD *)(CurrentProcessWin32Process + 812) & 0x800) != 0) )
    {
      v23 = 1;
    }
    if ( !v23 )
      LOBYTE(v16) = v16 | 0x20;
  }
  if ( a2 )
  {
    v25 = (_QWORD *)ValidateHwnd(a2);
    if ( !v25 )
    {
      v26 = -1073741816;
      goto LABEL_108;
    }
  }
  else
  {
    v25 = 0LL;
  }
  if ( a5 )
  {
    v27 = PtiFromThreadId(a5);
    v31 = v27;
    if ( !v27 )
      goto LABEL_27;
    v32 = *(_QWORD *)(v27 + 448);
    if ( !v32 )
      goto LABEL_27;
    v25 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v32 + 8) + 24LL) + 112LL);
  }
  else
  {
    v31 = 0LL;
  }
  if ( a1 )
  {
    if ( (int)ValidateHdesk(a1, 1LL, 1LL, Object) < 0 )
    {
      v26 = -1073741816;
      goto LABEL_108;
    }
    v82 = 0LL;
    v81 = Object[0];
    LODWORD(v79) = 1;
    v80 = PsGetCurrentProcess(v24, v33, v34, v35);
    v26 = MapDesktop((__int64)&v79, v36);
    LODWORD(v75) = v26;
    if ( v26 < 0 )
    {
      UserSetLastError(6LL, v37, v38, v39);
      goto LABEL_95;
    }
    v40 = Object[0];
    v25 = *(_QWORD **)(*(_QWORD *)(*((_QWORD *)Object[0] + 1) + 24LL) + 112LL);
  }
  else
  {
    v40 = 0LL;
    Object[0] = 0LL;
  }
  if ( v25 )
  {
    if ( a3 )
    {
      LOBYTE(v16) = v16 | 1;
      v25 = (_QWORD *)v25[14];
    }
    goto LABEL_42;
  }
  if ( !v40 )
  {
    ThreadDesktopWindow = GetThreadDesktopWindow(v31);
    if ( ThreadDesktopWindow )
    {
      v25 = *(_QWORD **)(ThreadDesktopWindow + 112);
      goto LABEL_42;
    }
LABEL_27:
    v26 = -1073741816;
    UserSetLastError(87LL, v28, v29, v30);
    goto LABEL_108;
  }
LABEL_42:
  v11 = pbwlCache;
  v76 = pbwlCache;
  if ( pbwlCache )
  {
    pbwlCache = 0LL;
  }
  else
  {
    v42 = Win32AllocPool(296LL, 1819767637LL);
    v11 = (struct tagBWL *)v42;
    v76 = (struct tagBWL *)v42;
    if ( !v42 )
    {
LABEL_94:
      v26 = -1073741816;
      UserSetLastError(8LL, v43, v44, v45);
      v11 = 0LL;
      goto LABEL_95;
    }
    *(_QWORD *)(v42 + 16) = v42 + 280;
  }
  *((_QWORD *)v11 + 1) = (char *)v11 + 32;
  *((_QWORD *)v11 + 3) = v31;
  if ( v25 )
  {
    do
    {
      v46 = *((_QWORD *)v11 + 3);
      if ( (v16 & 0x20) == 0 || (v47 = *(_DWORD *)(v25[5] + 236LL), (unsigned int)(v47 - 1) <= 1) || v47 == 16 )
      {
        if ( !v46 || v46 == v25[2] )
        {
          **((_QWORD **)v11 + 1) = *v25;
          *((_QWORD *)v11 + 1) += 8LL;
          v48 = *((_QWORD *)v11 + 1);
          if ( v48 == *((_QWORD *)v11 + 2) )
          {
            v49 = v48 - (_QWORD)v11;
            v50 = UserReAllocPool(
                    v11,
                    (unsigned int)v49 + 8LL,
                    (unsigned int)v49 + 72LL,
                    1819767637LL,
                    v75,
                    v76,
                    Object[0]);
            if ( !v50 )
              break;
            v51 = v50 + v49;
            *(_QWORD *)(v50 + 8) = v51;
            *(_QWORD *)(v50 + 16) = v51 + 64;
            v11 = (struct tagBWL *)v50;
          }
        }
      }
      if ( (v16 & 1) != 0 )
      {
        v52 = (struct tagWND *)v25[14];
        if ( v52 )
        {
          v11 = InternalBuildHwndList(v11, v52, 3u);
          if ( *((_QWORD *)v11 + 1) >= *((_QWORD *)v11 + 2) )
            break;
        }
      }
      v25 = (_QWORD *)v25[11];
    }
    while ( v25 );
    v76 = v11;
  }
  v53 = (_QWORD *)*((_QWORD *)v11 + 1);
  if ( (unsigned __int64)v53 >= *((_QWORD *)v11 + 2) )
  {
    Win32FreePool(v11);
    goto LABEL_94;
  }
  *v53 = 1LL;
  if ( (v16 & 8) == 0 )
    goto LABEL_87;
  v54 = Win32AllocPool(*((_QWORD *)v11 + 2) - (_QWORD)v11 + 8LL, 1819767637LL);
  v78 = v54;
  v58 = (_QWORD *)v54;
  if ( !v54 )
    goto LABEL_87;
  v59 = (_QWORD *)((char *)v11 + 32);
  v60 = (_QWORD *)((char *)v11 + 32);
  v61 = *((_QWORD *)v11 + 4);
  if ( v61 == 1 )
    goto LABEL_83;
  do
  {
    v62 = 0LL;
    CurrentThread = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v55, v54, v56, v57) )
      PsGetThreadWin32Thread(CurrentThread);
    v54 = (unsigned __int16)v61;
    v55 = (unsigned __int16 *)gpsi;
    if ( (unsigned __int64)(unsigned __int16)v61 < *(_QWORD *)(gpsi + 8LL) )
    {
      v64 = gSharedInfo[1] + (unsigned int)(unsigned __int16)v61 * LODWORD(gSharedInfo[2]);
      v55 = (unsigned __int16 *)HMPkheFromPhe(v64);
      v83 = v55;
      v65 = v61 >> 16;
      if ( (_WORD)v65 != *(_WORD *)(v64 + 26) && (_WORD)v65 != 0xFFFF )
      {
        if ( (_WORD)v65 || !PsGetCurrentProcessWow64Process(v55) )
          goto LABEL_76;
        v55 = v83;
      }
      if ( (*(_BYTE *)(v64 + 25) & 1) == 0 && *(_BYTE *)(v64 + 24) == 1 )
        v62 = *(_QWORD *)v55;
    }
LABEL_76:
    if ( v62 )
    {
      while ( 1 )
      {
        v55 = *(unsigned __int16 **)(*(_QWORD *)(v62 + 136) + 8LL);
        if ( (v55[5] & 1) != 0 )
          break;
        v54 = *v55;
        v55 = (unsigned __int16 *)gpsi;
        if ( (_WORD)v54 == *(_WORD *)(gpsi + 898LL) )
          break;
        v62 = *(_QWORD *)(v62 + 120);
        if ( !v62 )
          goto LABEL_80;
      }
      *v58++ = *v60;
    }
    else
    {
LABEL_80:
      *v59++ = *v60;
    }
    v61 = *++v60;
  }
  while ( *v60 != 1LL );
  v11 = v76;
  v54 = v78;
LABEL_83:
  *v58 = 0LL;
  v66 = (__int64 *)v54;
  v67 = *(_QWORD *)v54;
  if ( *(_QWORD *)v54 )
  {
    v68 = (char *)v59 - v54;
    do
    {
      *(__int64 *)((char *)v66++ + (_QWORD)v68) = v67;
      v67 = *v66;
    }
    while ( *v66 );
  }
  Win32FreePool(v54);
LABEL_87:
  *((_QWORD *)v11 + 3) = gptiCurrent;
  *(_QWORD *)v11 = gpbwlList;
  gpbwlList = v11;
  v78 = (__int64)v11;
  v69 = ((*((_QWORD *)v11 + 1) - (_QWORD)v11 - 32LL) >> 3) + 1;
  ProbeForWrite(Address, 8LL * a6, 4u);
  v70 = a8;
  if ( (unsigned __int64)a8 >= MmUserProbeAddress )
    v70 = (_DWORD *)MmUserProbeAddress;
  *v70 = *v70;
  if ( v69 > a6 )
  {
    v26 = -1073741789;
  }
  else
  {
    memmove((void *)Address, (char *)v11 + 32, 8LL * v69);
    v26 = 0;
  }
  *a8 = v69;
LABEL_95:
  if ( v11 )
  {
    v71 = (struct tagBWL *)gpbwlList;
    v72 = (struct tagBWL *)gpbwlList;
    if ( gpbwlList )
    {
      while ( v72 != v11 )
      {
        v71 = v72;
        v72 = *(struct tagBWL **)v72;
        if ( !v72 )
          goto LABEL_106;
      }
      *(_QWORD *)v71 = *(_QWORD *)v11;
      v73 = pbwlCache;
      if ( pbwlCache )
      {
        if ( (__int64)((*((_QWORD *)v11 + 2) - (_QWORD)v11 - 32LL) & 0xFFFFFFFFFFFFFFF8uLL) <= (__int64)((*((_QWORD *)pbwlCache + 2) - (_QWORD)pbwlCache - 32LL) & 0xFFFFFFFFFFFFFFF8uLL) )
          v73 = v11;
        else
          pbwlCache = v11;
        Win32FreePool(v73);
      }
      else
      {
        pbwlCache = v11;
      }
    }
  }
LABEL_106:
  v24 = (unsigned __int64)Object[0];
  if ( Object[0] )
    ObfDereferenceObject(Object[0]);
LABEL_108:
  if ( gpresUser )
  {
    if ( (unsigned int)UserIsUserCritSecInExclusive(v24) )
    {
      --gdwInAtomicOperation;
      if ( gpAtomickCheckStacks )
      {
        v24 = 0LL;
        if ( gdwAtomicCheckLogSize )
        {
          while ( *(_DWORD *)(((unsigned __int64)(unsigned int)v24 << 6) + gpAtomickCheckStacks) != v86 )
          {
            v24 = (unsigned int)(v24 + 1);
            if ( (unsigned int)v24 >= gdwAtomicCheckLogSize )
              goto LABEL_116;
          }
          *(_DWORD *)(((unsigned __int64)(unsigned int)v24 << 6) + gpAtomickCheckStacks) = 0;
        }
      }
    }
  }
LABEL_116:
  UserSessionSwitchLeaveCrit(v24);
  return (unsigned int)v26;
}
