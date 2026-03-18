/*
 * XREFs of fnHkINLPCBTCREATESTRUCT @ 0x1C0107828
 * Callers:
 *     xxxHkCallHook @ 0x1C002AC90 (xxxHkCallHook.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00198F4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0019994 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00199CC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C001A5C8 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C001A674 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C001A718 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0023060 (PopAndFreeAlwaysW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     ?CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0107EF4 (-CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     GetThreadDesktopWindow @ 0x1C0109EB8 (GetThreadDesktopWindow.c)
 *     ?CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0124A84 (-CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall fnHkINLPCBTCREATESTRUCT(int a1, __int64 a2, _QWORD *a3, __int64 a4, int a5)
{
  unsigned int v8; // r14d
  __int64 ThreadDesktopWindow; // r15
  unsigned __int8 *v10; // rbx
  __int64 v11; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rdi
  unsigned __int64 v14; // rcx
  unsigned int v15; // edx
  unsigned __int64 v16; // rcx
  int v17; // r9d
  unsigned int v18; // ecx
  unsigned int v19; // r8d
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // r14
  _QWORD *v23; // r12
  _OWORD *v24; // rax
  void **v25; // r9
  unsigned int v26; // r8d
  CHAR *v27; // rdx
  unsigned int v28; // r8d
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rcx
  int v35; // edi
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 *v40; // rcx
  __int64 v41; // rdi
  __int64 v42; // rdx
  ULONG64 v43; // rcx
  __int128 v44; // xmm4
  __int128 v45; // xmm5
  __int128 v46; // xmm2
  __int128 v47; // xmm3
  int v49; // r9d
  unsigned int v50; // ecx
  unsigned int v51; // r8d
  CHAR *v52; // rdx
  void **v53; // r9
  struct _CAPTUREBUF *v54; // rcx
  unsigned int v55; // r8d
  unsigned int v56; // r8d
  int v57; // eax
  unsigned __int64 v58; // rcx
  int v59; // eax
  unsigned __int64 v60; // rcx
  int v61; // eax
  CHAR *v62; // rax
  int v63; // r8d
  PVOID *v64; // rdx
  char v65; // [rsp+30h] [rbp-4E8h] BYREF
  _BYTE v66[3]; // [rsp+31h] [rbp-4E7h] BYREF
  unsigned int v67; // [rsp+34h] [rbp-4E4h]
  unsigned int v68; // [rsp+38h] [rbp-4E0h]
  unsigned __int8 *v69; // [rsp+40h] [rbp-4D8h]
  CHAR v70; // [rsp+48h] [rbp-4D0h]
  __int16 v71; // [rsp+4Ch] [rbp-4CCh]
  int v72; // [rsp+58h] [rbp-4C0h] BYREF
  int v73[6]; // [rsp+70h] [rbp-4A8h] BYREF
  __int64 v74; // [rsp+88h] [rbp-490h]
  unsigned __int64 v75; // [rsp+90h] [rbp-488h] BYREF
  unsigned int v76; // [rsp+98h] [rbp-480h]
  _QWORD *v77; // [rsp+B0h] [rbp-468h]
  __int64 v78; // [rsp+B8h] [rbp-460h]
  __int128 v79; // [rsp+C0h] [rbp-458h]
  ULONG_PTR RegionSize; // [rsp+D0h] [rbp-448h] BYREF
  __int64 v81; // [rsp+D8h] [rbp-440h] BYREF
  __int64 v82; // [rsp+E0h] [rbp-438h]
  __int64 v83; // [rsp+E8h] [rbp-430h]
  __int128 v84; // [rsp+F0h] [rbp-428h]
  __int64 v85; // [rsp+100h] [rbp-418h]
  __int64 v86; // [rsp+120h] [rbp-3F8h]
  _QWORD v87[3]; // [rsp+148h] [rbp-3D0h] BYREF
  _OWORD v88[5]; // [rsp+160h] [rbp-3B8h] BYREF
  __int64 v89; // [rsp+1B0h] [rbp-368h]
  __int128 v90; // [rsp+1E0h] [rbp-338h]
  __int64 v91; // [rsp+210h] [rbp-308h]
  _DWORD v92[44]; // [rsp+220h] [rbp-2F8h] BYREF
  unsigned __int8 v93[512]; // [rsp+2D0h] [rbp-248h] BYREF

  v78 = a4;
  v77 = a3;
  v67 = 0;
  v68 = 0;
  v8 = 0;
  ThreadDesktopWindow = GetThreadDesktopWindow(0LL);
  v10 = (unsigned __int8 *)v92;
  v81 = 0LL;
  v82 = 0LL;
  v83 = 0LL;
  v84 = 0uLL;
  v85 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11);
  *(_QWORD *)&v79 = ThreadWin32Thread;
  if ( ThreadDesktopWindow )
    v74 = *(_QWORD *)(ThreadDesktopWindow + 40) - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v74 = 0LL;
  v13 = *a3;
  v14 = *(_QWORD *)(v13 + 56);
  if ( !v14
    || (v49 = *(_DWORD *)(v13 + 84), (unsigned int)v49 >> 31 == a5) && v14 < (unsigned __int64)MmSystemRangeStart )
  {
    v15 = -1;
  }
  else
  {
    v50 = *(_DWORD *)(v13 + 80);
    v15 = -1;
    v51 = -1;
    if ( v50 + 2 >= v50 )
      v51 = v50 + 2;
    v67 = v51;
    if ( v50 + 2 < v50 )
      goto LABEL_68;
    if ( v49 < 0 && !a5 )
    {
      v58 = 2LL * v51;
      v59 = -1;
      if ( v58 <= 0xFFFFFFFF )
        v59 = 2 * v51;
      v67 = v59;
      if ( v58 > 0xFFFFFFFF )
        goto LABEL_68;
    }
    v8 = 1;
  }
  v16 = *(_QWORD *)(v13 + 64);
  if ( (v16 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    v17 = *(_DWORD *)(v13 + 100);
    if ( (unsigned int)v17 >> 31 != a5 || v16 >= (unsigned __int64)MmSystemRangeStart )
    {
      v18 = *(_DWORD *)(v13 + 96);
      v19 = -1;
      if ( v18 + 2 >= v18 )
        v19 = v18 + 2;
      v68 = v19;
      if ( v18 + 2 < v18 )
        goto LABEL_68;
      if ( v17 < 0 && !a5 )
      {
        v60 = 2LL * v19;
        v61 = -1;
        if ( v60 <= 0xFFFFFFFF )
          v61 = 2 * v19;
        v68 = v61;
        if ( v60 > 0xFFFFFFFF )
          goto LABEL_68;
      }
      ++v8;
    }
  }
  if ( v67 + v68 >= v67 )
    v15 = v67 + v68;
  v76 = v15;
  if ( v67 + v68 >= v67 )
  {
    if ( v8 )
    {
      v10 = AllocCallbackMessage(168, v8, v15, v93, 1, 0x200uLL);
      v69 = v10;
      if ( !v10 )
        return 0LL;
    }
    else
    {
      v10 = (unsigned __int8 *)v92;
      v69 = (unsigned __int8 *)v92;
      memset(v92, 0, 0xA8uLL);
      v92[0] = 168;
    }
    W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v20);
    if ( v10 != (unsigned __int8 *)v92 && v10 != v93 )
      PushW32ThreadLock((__int64)v10, v87, (__int64)Win32FreePool);
    v22 = v74;
    *((_QWORD *)v10 + 5) = v74;
    *((_DWORD *)v10 + 12) = a1;
    *((_QWORD *)v10 + 7) = a2;
    v23 = v77;
    *(_DWORD *)(*v77 + 52LL) = 0;
    *(_DWORD *)(*v23 + 76LL) = 0;
    v24 = (_OWORD *)*v23;
    *((_OWORD *)v10 + 4) = *(_OWORD *)*v23;
    *((_OWORD *)v10 + 5) = v24[1];
    *((_OWORD *)v10 + 6) = v24[2];
    *((_OWORD *)v10 + 7) = v24[3];
    *((_OWORD *)v10 + 8) = v24[4];
    if ( !v67 )
      goto LABEL_22;
    if ( *(int *)(v13 + 84) < 0 )
    {
      v62 = *(CHAR **)(v13 + 56);
      v70 = *v62;
      if ( v70 == -1 )
      {
        if ( a5 )
        {
          v56 = 3;
          v52 = v62;
        }
        else
        {
          v72 = ((unsigned __int16)(*(_DWORD *)v62 >> 8) << 16) | 0xFFFF;
          v56 = 4;
          v52 = (CHAR *)&v72;
        }
        v53 = (void **)(v10 + 120);
        v54 = (struct _CAPTUREBUF *)v10;
      }
      else
      {
        v53 = (void **)(v10 + 120);
        v63 = *(_DWORD *)(v13 + 80);
        v52 = *(CHAR **)(v13 + 88);
        v54 = (struct _CAPTUREBUF *)v10;
        if ( !a5 )
        {
          if ( (int)CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v10, v52, 2 * v63 + 2, v53) < 0 )
            goto LABEL_68;
          goto LABEL_22;
        }
        v56 = v63 + 1;
      }
    }
    else
    {
      v52 = *(CHAR **)(v13 + 56);
      v71 = *(_WORD *)v52;
      v53 = (void **)(v10 + 120);
      v54 = (struct _CAPTUREBUF *)v10;
      if ( v71 == -1 )
      {
        if ( a5 )
        {
          ++v52;
          v56 = 3;
        }
        else
        {
          v56 = 4;
        }
      }
      else
      {
        v55 = *(_DWORD *)(v13 + 80);
        v52 = *(CHAR **)(v13 + 88);
        if ( a5 )
        {
          v57 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v10, (PCWCH)v52, (v55 >> 1) + 1, v53);
LABEL_67:
          if ( v57 < 0 )
            goto LABEL_68;
LABEL_22:
          if ( !v68 )
          {
LABEL_28:
            *((_QWORD *)v10 + 18) = v23[1];
            *((_QWORD *)v10 + 19) = v78;
            *((_DWORD *)v10 + 40) = a5;
            v30 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v21);
            v81 = *(_QWORD *)(v30 + 416);
            *(_QWORD *)(v30 + 416) = &v81;
            v82 = ThreadDesktopWindow;
            if ( ThreadDesktopWindow )
              _InterlockedIncrement((volatile signed __int32 *)(ThreadDesktopWindow + 8));
            v31 = v79;
            v32 = *(_QWORD *)(v79 + 480);
            v79 = *(_OWORD *)(v32 + 64);
            v84 = v79;
            v85 = *(_QWORD *)(v32 + 80);
            *(_QWORD *)(v32 + 72) = v22;
            if ( ThreadDesktopWindow )
              v33 = *(_QWORD *)ThreadDesktopWindow;
            else
              v33 = 0LL;
            *(_QWORD *)(*(_QWORD *)(v31 + 480) + 64LL) = v33;
            if ( ThreadDesktopWindow )
              v34 = *(_QWORD *)(*(_QWORD *)(ThreadDesktopWindow + 40) + 224LL);
            else
              v34 = 0LL;
            *(_QWORD *)(*(_QWORD *)(v31 + 480) + 80LL) = v34;
            if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
              KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
            ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
              (ReleaseAndReacquirePerObjectLocks *)v66,
              gdwInAtomicOperation);
            LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v65);
            EtwTraceBeginCallback(42LL);
            *((_QWORD *)v10 + 2) = 0LL;
            v35 = KeUserModeCallback(42LL, v10, *(unsigned int *)v10, &v75, v73);
            EtwTraceEndCallback(42LL);
            LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v65);
            ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
              (ReleaseAndReacquirePerObjectLocks *)v66,
              v36);
            ThreadUnlock1(v38, v37);
            v39 = *(_QWORD *)(v31 + 480);
            *(_OWORD *)(v39 + 64) = v79;
            *(_QWORD *)(v39 + 80) = v85;
            if ( v35 >= 0 && v73[0] == 24 )
            {
              v40 = (__int64 *)v75;
              if ( v75 + 8 < v75 || v75 + 8 > MmUserProbeAddress )
                v40 = (__int64 *)MmUserProbeAddress;
              v41 = *v40;
              v86 = *v40;
              v42 = *(_QWORD *)(gptiCurrent + 512LL);
              if ( !v42 || (*(_DWORD *)(v42 + 84) & 1) == 0 || *(_OWORD **)(v42 + 96) != v88 )
              {
                v43 = *(_QWORD *)(v75 + 16);
                if ( v43 + 88 < v43 || v43 + 88 > MmUserProbeAddress )
                  v43 = MmUserProbeAddress;
                v44 = *(_OWORD *)v43;
                v45 = *(_OWORD *)(v43 + 16);
                v90 = *(_OWORD *)(v43 + 32);
                v46 = *(_OWORD *)(v43 + 48);
                v47 = *(_OWORD *)(v43 + 64);
                v91 = *(_QWORD *)(v43 + 80);
                v88[0] = v44;
                v88[1] = v45;
                v88[2] = v90;
                v88[3] = v46;
                v88[4] = v47;
                v89 = v91;
                v23[1] = v91;
                *(_OWORD *)(*v23 + 32LL) = v90;
                goto LABEL_47;
              }
            }
            goto LABEL_68;
          }
          v25 = (void **)(v10 + 128);
          v26 = *(_DWORD *)(v13 + 96);
          v27 = *(CHAR **)(v13 + 104);
          if ( *(int *)(v13 + 100) < 0 )
          {
            if ( a5 )
            {
              v28 = v26 + 1;
              goto LABEL_26;
            }
            v29 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v10, v27, 2 * v26 + 2, v25);
          }
          else
          {
            if ( !a5 )
            {
              v28 = v26 + 2;
LABEL_26:
              v29 = CaptureCallbackData((struct _CAPTUREBUF *)v10, (unsigned __int64)v27, v28, v25);
              goto LABEL_27;
            }
            v29 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v10, (PCWCH)v27, (v26 >> 1) + 1, v25);
          }
LABEL_27:
          if ( v29 < 0 )
            goto LABEL_68;
          goto LABEL_28;
        }
        v56 = v55 + 2;
      }
    }
    v57 = CaptureCallbackData(v54, (unsigned __int64)v52, v56, v53);
    goto LABEL_67;
  }
LABEL_68:
  v41 = 0LL;
LABEL_47:
  if ( v10 != (unsigned __int8 *)v92 && v10 != v93 )
  {
    v64 = (PVOID *)(v10 + 32);
    if ( *((_QWORD *)v10 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v64, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v87, (__int64)v64);
  }
  return v41;
}
