/*
 * XREFs of fnHkINLPCBTCREATESTRUCT @ 0x1C0094764
 * Callers:
 *     xxxHkCallHook @ 0x1C0043F00 (xxxHkCallHook.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001EF30 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0037780 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004ECF4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004ED94 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004EDCC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004F434 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0053454 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C00534F4 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C00578F4 (-CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C005799C (-CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     GetThreadDesktopWindow @ 0x1C00E576C (GetThreadDesktopWindow.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall fnHkINLPCBTCREATESTRUCT(int a1, __int64 a2, _QWORD *a3, __int64 a4, int a5)
{
  unsigned int v8; // r14d
  _QWORD *ThreadDesktopWindow; // r15
  unsigned __int8 *v10; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // r8
  __int64 v13; // rdi
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  unsigned int v16; // eax
  __int64 v17; // r14
  _QWORD *v18; // r12
  _OWORD *v19; // rax
  void **v20; // r9
  unsigned int v21; // r8d
  CHAR *v22; // rdx
  unsigned int v23; // r8d
  int v24; // eax
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rcx
  int v31; // edi
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rcx
  __int64 *v38; // rcx
  __int64 v39; // rdi
  __int64 v40; // rdx
  ULONG64 v41; // rcx
  __int128 v42; // xmm4
  __int128 v43; // xmm5
  __int128 v44; // xmm2
  __int128 v45; // xmm3
  int v47; // edx
  unsigned int v48; // eax
  CHAR *v49; // rdx
  void **v50; // r9
  struct _CAPTUREBUF *v51; // rcx
  unsigned int v52; // r8d
  int v53; // eax
  unsigned int v54; // r8d
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // rax
  CHAR *v57; // rax
  int v58; // r8d
  PVOID *v59; // rdx
  char v60; // [rsp+30h] [rbp-4E8h] BYREF
  _BYTE v61[3]; // [rsp+31h] [rbp-4E7h] BYREF
  unsigned int v62; // [rsp+34h] [rbp-4E4h]
  unsigned int v63; // [rsp+38h] [rbp-4E0h]
  unsigned __int8 *v64; // [rsp+40h] [rbp-4D8h]
  CHAR v65; // [rsp+48h] [rbp-4D0h]
  __int16 v66; // [rsp+4Ch] [rbp-4CCh]
  int v67; // [rsp+58h] [rbp-4C0h] BYREF
  int v68[6]; // [rsp+70h] [rbp-4A8h] BYREF
  __int64 v69; // [rsp+88h] [rbp-490h]
  unsigned __int64 v70; // [rsp+90h] [rbp-488h] BYREF
  unsigned int v71; // [rsp+98h] [rbp-480h]
  _QWORD *v72; // [rsp+B0h] [rbp-468h]
  __int64 v73; // [rsp+B8h] [rbp-460h]
  __int128 v74; // [rsp+C0h] [rbp-458h]
  ULONG_PTR RegionSize; // [rsp+D0h] [rbp-448h] BYREF
  __int64 v76; // [rsp+D8h] [rbp-440h] BYREF
  _QWORD *v77; // [rsp+E0h] [rbp-438h]
  __int64 v78; // [rsp+E8h] [rbp-430h]
  __int128 v79; // [rsp+F0h] [rbp-428h]
  __int64 v80; // [rsp+100h] [rbp-418h]
  _QWORD v81[11]; // [rsp+108h] [rbp-410h] BYREF
  _OWORD v82[8]; // [rsp+160h] [rbp-3B8h] BYREF
  __int128 v83; // [rsp+1E0h] [rbp-338h]
  __int64 v84; // [rsp+210h] [rbp-308h]
  _DWORD v85[44]; // [rsp+220h] [rbp-2F8h] BYREF
  unsigned __int8 v86[512]; // [rsp+2D0h] [rbp-248h] BYREF

  v73 = a4;
  v72 = a3;
  v62 = 0;
  v63 = 0;
  v8 = 0;
  memset(v82, 0, 0x58uLL);
  ThreadDesktopWindow = (_QWORD *)GetThreadDesktopWindow(0LL);
  memset(v85, 0, 0xA8uLL);
  v10 = (unsigned __int8 *)v85;
  v76 = 0LL;
  v77 = 0LL;
  v78 = 0LL;
  v79 = 0uLL;
  v80 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  *(_QWORD *)&v74 = ThreadWin32Thread;
  if ( ThreadDesktopWindow )
    v69 = ThreadDesktopWindow[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v69 = 0LL;
  v13 = *a3;
  v14 = *(_QWORD *)(v13 + 56);
  if ( v14 )
  {
    v47 = *(_DWORD *)(v13 + 84);
    if ( (unsigned int)v47 >> 31 != a5 || v14 >= (unsigned __int64)MmSystemRangeStart )
    {
      v48 = *(_DWORD *)(v13 + 80);
      if ( v48 + 2 < v48 )
        goto LABEL_61;
      v62 = v48 + 2;
      if ( v47 < 0 && !a5 )
      {
        v55 = 2LL * (v48 + 2);
        if ( v55 > 0xFFFFFFFF )
          goto LABEL_61;
        v62 = v55;
      }
      v8 = 1;
    }
  }
  v15 = *(_QWORD *)(v13 + 64);
  if ( (v15 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    v12 = *(unsigned int *)(v13 + 100);
    if ( *(_DWORD *)(v13 + 100) >> 31 != a5 || v15 >= (unsigned __int64)MmSystemRangeStart )
    {
      v16 = *(_DWORD *)(v13 + 96);
      if ( v16 + 2 < v16 )
        goto LABEL_61;
      v63 = v16 + 2;
      if ( (int)v12 < 0 && !a5 )
      {
        v56 = 2LL * (v16 + 2);
        if ( v56 > 0xFFFFFFFF )
          goto LABEL_61;
        v63 = v56;
      }
      ++v8;
    }
  }
  v12 = v62 + v63;
  if ( (unsigned int)v12 < v62 )
    goto LABEL_61;
  v71 = v62 + v63;
  if ( v8 )
  {
    v10 = AllocCallbackMessage(168, v8, v12, v86, 1, 0x200uLL);
    v64 = v10;
    if ( !v10 )
      return 0LL;
  }
  else
  {
    v10 = (unsigned __int8 *)v85;
    v64 = (unsigned __int8 *)v85;
    memset(&v85[1], 0, 0xA4uLL);
    v85[0] = 168;
  }
  W32GetThreadWin32Thread(KeGetCurrentThread());
  memset(v81, 0, 24);
  if ( v10 != (unsigned __int8 *)v85 && v10 != v86 )
    PushW32ThreadLock((__int64)v10, v81, (__int64)Win32FreePool);
  v17 = v69;
  *((_QWORD *)v10 + 5) = v69;
  *((_DWORD *)v10 + 12) = a1;
  *((_QWORD *)v10 + 7) = a2;
  v18 = v72;
  *(_DWORD *)(*v72 + 52LL) = 0;
  *(_DWORD *)(*v18 + 76LL) = 0;
  v19 = (_OWORD *)*v18;
  *((_OWORD *)v10 + 4) = *(_OWORD *)*v18;
  *((_OWORD *)v10 + 5) = v19[1];
  *((_OWORD *)v10 + 6) = v19[2];
  *((_OWORD *)v10 + 7) = v19[3];
  *((_OWORD *)v10 + 8) = v19[4];
  if ( v62 )
  {
    if ( *(int *)(v13 + 84) < 0 )
    {
      v57 = *(CHAR **)(v13 + 56);
      v65 = *v57;
      if ( v65 == -1 )
      {
        if ( a5 )
        {
          v54 = 3;
          v49 = v57;
        }
        else
        {
          v67 = ((unsigned __int16)(*(_DWORD *)v57 >> 8) << 16) | 0xFFFF;
          v54 = 4;
          v49 = (CHAR *)&v67;
        }
        v50 = (void **)(v10 + 120);
        v51 = (struct _CAPTUREBUF *)v10;
      }
      else
      {
        v50 = (void **)(v10 + 120);
        v58 = *(_DWORD *)(v13 + 80);
        v49 = *(CHAR **)(v13 + 88);
        v51 = (struct _CAPTUREBUF *)v10;
        if ( !a5 )
        {
          if ( (int)CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v10, v49, 2 * v58 + 2, v50) < 0 )
            goto LABEL_61;
          goto LABEL_17;
        }
        v54 = v58 + 1;
      }
    }
    else
    {
      v49 = *(CHAR **)(v13 + 56);
      v66 = *(_WORD *)v49;
      v50 = (void **)(v10 + 120);
      v51 = (struct _CAPTUREBUF *)v10;
      if ( v66 == -1 )
      {
        if ( a5 )
        {
          ++v49;
          v54 = 3;
        }
        else
        {
          v54 = 4;
        }
      }
      else
      {
        v52 = *(_DWORD *)(v13 + 80);
        v49 = *(CHAR **)(v13 + 88);
        if ( a5 )
        {
          v53 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v10, (PCWCH)v49, (v52 >> 1) + 1, v50);
          goto LABEL_60;
        }
        v54 = v52 + 2;
      }
    }
    v53 = CaptureCallbackData(v51, v49, v54, v50);
LABEL_60:
    if ( v53 < 0 )
      goto LABEL_61;
  }
LABEL_17:
  if ( v63 )
  {
    v20 = (void **)(v10 + 128);
    v21 = *(_DWORD *)(v13 + 96);
    v22 = *(CHAR **)(v13 + 104);
    if ( *(int *)(v13 + 100) < 0 )
    {
      if ( a5 )
      {
        v23 = v21 + 1;
        goto LABEL_21;
      }
      v24 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v10, v22, 2 * v21 + 2, v20);
    }
    else
    {
      if ( !a5 )
      {
        v23 = v21 + 2;
LABEL_21:
        v24 = CaptureCallbackData((struct _CAPTUREBUF *)v10, v22, v23, v20);
        goto LABEL_22;
      }
      v24 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v10, (PCWCH)v22, (v21 >> 1) + 1, v20);
    }
LABEL_22:
    if ( v24 < 0 )
      goto LABEL_61;
  }
  *((_QWORD *)v10 + 18) = v18[1];
  *((_QWORD *)v10 + 19) = v73;
  *((_DWORD *)v10 + 40) = a5;
  v25 = W32GetThreadWin32Thread(KeGetCurrentThread());
  v76 = *(_QWORD *)(v25 + 408);
  *(_QWORD *)(v25 + 408) = &v76;
  v77 = ThreadDesktopWindow;
  if ( ThreadDesktopWindow )
    HMLockObject(ThreadDesktopWindow);
  v27 = v74;
  v28 = *(_QWORD *)(v74 + 472);
  v74 = *(_OWORD *)(v28 + 64);
  v79 = v74;
  v80 = *(_QWORD *)(v28 + 80);
  *(_QWORD *)(v28 + 72) = v17;
  if ( ThreadDesktopWindow )
    v29 = *ThreadDesktopWindow;
  else
    v29 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v27 + 472) + 64LL) = v29;
  if ( ThreadDesktopWindow )
    v30 = *(_QWORD *)(ThreadDesktopWindow[5] + 224LL);
  else
    v30 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v27 + 472) + 80LL) = v30;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v61,
    gdwInAtomicOperation,
    v26);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v60);
  EtwTraceBeginCallback(42LL);
  *((_QWORD *)v10 + 2) = 0LL;
  v31 = KeUserModeCallback(42LL, v10, *(unsigned int *)v10, &v70, v68);
  EtwTraceEndCallback(42LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v60);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v61,
    v32,
    v33);
  ThreadUnlock1(v35, v34, v36);
  v37 = *(_QWORD *)(v27 + 472);
  *(_OWORD *)(v37 + 64) = v74;
  *(_QWORD *)(v37 + 80) = v80;
  if ( v31 >= 0 && v68[0] == 24 )
  {
    v38 = (__int64 *)v70;
    if ( v70 + 8 < v70 || v70 + 8 > MmUserProbeAddress )
      v38 = (__int64 *)MmUserProbeAddress;
    v39 = *v38;
    v81[6] = *v38;
    v40 = *(_QWORD *)(gptiCurrent + 504LL);
    if ( !v40 || (*(_DWORD *)(v40 + 84) & 1) == 0 || *(_OWORD **)(v40 + 96) != v82 )
    {
      v41 = *(_QWORD *)(v70 + 16);
      if ( v41 + 88 < v41 || v41 + 88 > MmUserProbeAddress )
        v41 = MmUserProbeAddress;
      v42 = *(_OWORD *)v41;
      v43 = *(_OWORD *)(v41 + 16);
      v83 = *(_OWORD *)(v41 + 32);
      v44 = *(_OWORD *)(v41 + 48);
      v45 = *(_OWORD *)(v41 + 64);
      v84 = *(_QWORD *)(v41 + 80);
      v82[0] = v42;
      v82[1] = v43;
      v82[2] = v83;
      v82[3] = v44;
      v82[4] = v45;
      *(_QWORD *)&v82[5] = v84;
      v18[1] = v84;
      *(_OWORD *)(*v18 + 32LL) = v83;
      goto LABEL_42;
    }
  }
LABEL_61:
  v39 = 0LL;
LABEL_42:
  if ( v10 != (unsigned __int8 *)v85 && v10 != v86 )
  {
    v59 = (PVOID *)(v10 + 32);
    if ( *((_QWORD *)v10 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v59, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v81, (__int64)v59, v12);
  }
  return v39;
}
