/*
 * XREFs of fnHkINLPCBTCREATESTRUCT @ 0x1C0076C54
 * Callers:
 *     xxxHkCallHook @ 0x1C00A3130 (xxxHkCallHook.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0096A50 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00ADED4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADF74 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADFAC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00AE614 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C00B25F4 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C00B2694 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C00E3B50 (-CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C00E3BF8 (-CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     GetThreadDesktopWindow @ 0x1C010B1CC (GetThreadDesktopWindow.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall fnHkINLPCBTCREATESTRUCT(unsigned int a1, __int64 a2, _QWORD *a3, __int64 a4, unsigned int a5)
{
  unsigned int v8; // r14d
  _QWORD *ThreadDesktopWindow; // r15
  unsigned __int8 *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v15; // rdi
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  int v18; // r8d
  unsigned int v19; // eax
  unsigned __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r14
  _QWORD *v28; // r12
  _OWORD *v29; // rax
  void **v30; // r9
  unsigned int v31; // r8d
  CHAR *v32; // rdx
  unsigned int v33; // r8d
  int v34; // eax
  __int64 v35; // rax
  __int64 v36; // rsi
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rcx
  int v40; // edi
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rcx
  __int64 *v45; // rcx
  __int64 v46; // rdi
  __int64 v47; // rdx
  ULONG64 v48; // rcx
  __int128 v49; // xmm4
  __int128 v50; // xmm5
  __int128 v51; // xmm2
  __int128 v52; // xmm3
  int v54; // edx
  unsigned int v55; // eax
  CHAR *v56; // rdx
  void **v57; // r9
  struct _CAPTUREBUF *v58; // rcx
  unsigned int v59; // r8d
  int v60; // eax
  unsigned int v61; // r8d
  unsigned __int64 v62; // rax
  unsigned __int64 v63; // rax
  CHAR *v64; // rax
  int v65; // r8d
  char v66; // [rsp+30h] [rbp-4E8h] BYREF
  _BYTE v67[3]; // [rsp+31h] [rbp-4E7h] BYREF
  unsigned int v68; // [rsp+34h] [rbp-4E4h]
  unsigned int v69; // [rsp+38h] [rbp-4E0h]
  unsigned __int8 *v70; // [rsp+40h] [rbp-4D8h]
  CHAR v71; // [rsp+48h] [rbp-4D0h]
  __int16 v72; // [rsp+4Ch] [rbp-4CCh]
  int v73; // [rsp+58h] [rbp-4C0h] BYREF
  int v74[6]; // [rsp+70h] [rbp-4A8h] BYREF
  __int64 v75; // [rsp+88h] [rbp-490h]
  unsigned __int64 v76; // [rsp+90h] [rbp-488h] BYREF
  unsigned int v77; // [rsp+98h] [rbp-480h]
  _QWORD *v78; // [rsp+B0h] [rbp-468h]
  __int64 v79; // [rsp+B8h] [rbp-460h]
  __int128 v80; // [rsp+C0h] [rbp-458h]
  ULONG_PTR RegionSize; // [rsp+D0h] [rbp-448h] BYREF
  __int64 v82; // [rsp+D8h] [rbp-440h] BYREF
  _QWORD *v83; // [rsp+E0h] [rbp-438h]
  __int64 v84; // [rsp+E8h] [rbp-430h]
  __int128 v85; // [rsp+F0h] [rbp-428h]
  __int64 v86; // [rsp+100h] [rbp-418h]
  _QWORD v87[11]; // [rsp+108h] [rbp-410h] BYREF
  _OWORD v88[8]; // [rsp+160h] [rbp-3B8h] BYREF
  __int128 v89; // [rsp+1E0h] [rbp-338h]
  __int64 v90; // [rsp+210h] [rbp-308h]
  _DWORD v91[44]; // [rsp+220h] [rbp-2F8h] BYREF
  unsigned __int8 v92[512]; // [rsp+2D0h] [rbp-248h] BYREF

  v79 = a4;
  v78 = a3;
  v68 = 0;
  v69 = 0;
  v8 = 0;
  memset(v88, 0, 0x58uLL);
  ThreadDesktopWindow = (_QWORD *)GetThreadDesktopWindow(0LL);
  memset(v91, 0, 0xA8uLL);
  v10 = (unsigned __int8 *)v91;
  v82 = 0LL;
  v83 = 0LL;
  v84 = 0LL;
  v85 = 0uLL;
  v86 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v12, v13);
  *(_QWORD *)&v80 = ThreadWin32Thread;
  if ( ThreadDesktopWindow )
    v75 = ThreadDesktopWindow[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v75 = 0LL;
  v15 = *a3;
  v16 = *(_QWORD *)(v15 + 56);
  if ( v16 )
  {
    v54 = *(_DWORD *)(v15 + 84);
    if ( (unsigned int)v54 >> 31 != a5 || v16 >= (unsigned __int64)MmSystemRangeStart )
    {
      v55 = *(_DWORD *)(v15 + 80);
      if ( v55 + 2 < v55 )
        goto LABEL_61;
      v68 = v55 + 2;
      if ( v54 < 0 && !a5 )
      {
        v62 = 2LL * (v55 + 2);
        if ( v62 > 0xFFFFFFFF )
          goto LABEL_61;
        v68 = v62;
      }
      v8 = 1;
    }
  }
  v17 = *(_QWORD *)(v15 + 64);
  if ( (v17 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    v18 = *(_DWORD *)(v15 + 100);
    if ( (unsigned int)v18 >> 31 != a5 || v17 >= (unsigned __int64)MmSystemRangeStart )
    {
      v19 = *(_DWORD *)(v15 + 96);
      if ( v19 + 2 < v19 )
        goto LABEL_61;
      v69 = v19 + 2;
      if ( v18 < 0 && !a5 )
      {
        v63 = 2LL * (v19 + 2);
        if ( v63 > 0xFFFFFFFF )
          goto LABEL_61;
        v69 = v63;
      }
      ++v8;
    }
  }
  v20 = v68 + v69;
  if ( (unsigned int)v20 < v68 )
    goto LABEL_61;
  v77 = v68 + v69;
  if ( v8 )
  {
    v10 = (unsigned __int8 *)AllocCallbackMessage(0xA8u, v8, v20, v92, 1, 0x200uLL);
    v70 = v10;
    if ( !v10 )
      return 0LL;
  }
  else
  {
    v10 = (unsigned __int8 *)v91;
    v70 = (unsigned __int8 *)v91;
    memset(&v91[1], 0, 0xA4uLL);
    v91[0] = 168;
  }
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v21, v22, v23);
  memset(v87, 0, 24);
  if ( v10 != (unsigned __int8 *)v91 && v10 != v92 )
    PushW32ThreadLock((__int64)v10, v87, (__int64)Win32FreePool, v26);
  v27 = v75;
  *((_QWORD *)v10 + 5) = v75;
  *((_DWORD *)v10 + 12) = a1;
  *((_QWORD *)v10 + 7) = a2;
  v28 = v78;
  *(_DWORD *)(*v78 + 52LL) = 0;
  *(_DWORD *)(*v28 + 76LL) = 0;
  v29 = (_OWORD *)*v28;
  *((_OWORD *)v10 + 4) = *(_OWORD *)*v28;
  *((_OWORD *)v10 + 5) = v29[1];
  *((_OWORD *)v10 + 6) = v29[2];
  *((_OWORD *)v10 + 7) = v29[3];
  *((_OWORD *)v10 + 8) = v29[4];
  if ( v68 )
  {
    if ( *(int *)(v15 + 84) < 0 )
    {
      v64 = *(CHAR **)(v15 + 56);
      v71 = *v64;
      if ( v71 == -1 )
      {
        if ( a5 )
        {
          v61 = 3;
          v56 = v64;
        }
        else
        {
          v73 = ((unsigned __int16)(*(_DWORD *)v64 >> 8) << 16) | 0xFFFF;
          v61 = 4;
          v56 = (CHAR *)&v73;
        }
        v57 = (void **)(v10 + 120);
        v58 = (struct _CAPTUREBUF *)v10;
      }
      else
      {
        v57 = (void **)(v10 + 120);
        v65 = *(_DWORD *)(v15 + 80);
        v56 = *(CHAR **)(v15 + 88);
        v58 = (struct _CAPTUREBUF *)v10;
        if ( !a5 )
        {
          if ( (int)CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v10, v56, 2 * v65 + 2, v57) < 0 )
            goto LABEL_61;
          goto LABEL_17;
        }
        v61 = v65 + 1;
      }
    }
    else
    {
      v56 = *(CHAR **)(v15 + 56);
      v72 = *(_WORD *)v56;
      v57 = (void **)(v10 + 120);
      v58 = (struct _CAPTUREBUF *)v10;
      if ( v72 == -1 )
      {
        if ( a5 )
        {
          ++v56;
          v61 = 3;
        }
        else
        {
          v61 = 4;
        }
      }
      else
      {
        v59 = *(_DWORD *)(v15 + 80);
        v56 = *(CHAR **)(v15 + 88);
        if ( a5 )
        {
          v60 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v10, (PCWCH)v56, (v59 >> 1) + 1, v57);
          goto LABEL_60;
        }
        v61 = v59 + 2;
      }
    }
    v60 = CaptureCallbackData(v58, v56, v61, v57);
LABEL_60:
    if ( v60 < 0 )
      goto LABEL_61;
  }
LABEL_17:
  if ( v69 )
  {
    v30 = (void **)(v10 + 128);
    v31 = *(_DWORD *)(v15 + 96);
    v32 = *(CHAR **)(v15 + 104);
    if ( *(int *)(v15 + 100) < 0 )
    {
      if ( a5 )
      {
        v33 = v31 + 1;
        goto LABEL_21;
      }
      v34 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v10, v32, 2 * v31 + 2, v30);
    }
    else
    {
      if ( !a5 )
      {
        v33 = v31 + 2;
LABEL_21:
        v34 = CaptureCallbackData((struct _CAPTUREBUF *)v10, v32, v33, v30);
        goto LABEL_22;
      }
      v34 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v10, (PCWCH)v32, (v31 >> 1) + 1, v30);
    }
LABEL_22:
    if ( v34 < 0 )
      goto LABEL_61;
  }
  *((_QWORD *)v10 + 18) = v28[1];
  *((_QWORD *)v10 + 19) = v79;
  *((_DWORD *)v10 + 40) = a5;
  v35 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24, v25, v26);
  v82 = *(_QWORD *)(v35 + 408);
  *(_QWORD *)(v35 + 408) = &v82;
  v83 = ThreadDesktopWindow;
  if ( ThreadDesktopWindow )
    HMLockObject(ThreadDesktopWindow);
  v36 = v80;
  v37 = *(_QWORD *)(v80 + 472);
  v80 = *(_OWORD *)(v37 + 64);
  v85 = v80;
  v86 = *(_QWORD *)(v37 + 80);
  *(_QWORD *)(v37 + 72) = v27;
  if ( ThreadDesktopWindow )
    v38 = *ThreadDesktopWindow;
  else
    v38 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v36 + 472) + 64LL) = v38;
  if ( ThreadDesktopWindow )
    v39 = *(_QWORD *)(ThreadDesktopWindow[5] + 224LL);
  else
    v39 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v36 + 472) + 80LL) = v39;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v67);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v66);
  EtwTraceBeginCallback(42LL);
  *((_QWORD *)v10 + 2) = 0LL;
  v40 = KeUserModeCallback(42LL, v10, *(unsigned int *)v10, &v76, v74);
  EtwTraceEndCallback(42LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v66);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v67);
  ThreadUnlock1(v42, v41, v43);
  v44 = *(_QWORD *)(v36 + 472);
  *(_OWORD *)(v44 + 64) = v80;
  *(_QWORD *)(v44 + 80) = v86;
  if ( v40 >= 0 && v74[0] == 24 )
  {
    v45 = (__int64 *)v76;
    if ( v76 + 8 < v76 || v76 + 8 > MmUserProbeAddress )
      v45 = (__int64 *)MmUserProbeAddress;
    v46 = *v45;
    v87[6] = *v45;
    v47 = *(_QWORD *)(gptiCurrent + 504LL);
    if ( !v47 || (*(_DWORD *)(v47 + 84) & 1) == 0 || *(_OWORD **)(v47 + 96) != v88 )
    {
      v48 = *(_QWORD *)(v76 + 16);
      if ( v48 + 88 < v48 || v48 + 88 > MmUserProbeAddress )
        v48 = MmUserProbeAddress;
      v49 = *(_OWORD *)v48;
      v50 = *(_OWORD *)(v48 + 16);
      v89 = *(_OWORD *)(v48 + 32);
      v51 = *(_OWORD *)(v48 + 48);
      v52 = *(_OWORD *)(v48 + 64);
      v90 = *(_QWORD *)(v48 + 80);
      v88[0] = v49;
      v88[1] = v50;
      v88[2] = v89;
      v88[3] = v51;
      v88[4] = v52;
      *(_QWORD *)&v88[5] = v90;
      v28[1] = v90;
      *(_OWORD *)(*v28 + 32LL) = v89;
      goto LABEL_42;
    }
  }
LABEL_61:
  v46 = 0LL;
LABEL_42:
  if ( v10 != (unsigned __int8 *)v91 && v10 != v92 )
  {
    if ( *((_QWORD *)v10 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v10 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock(v87);
  }
  return v46;
}
