/*
 * XREFs of fnHkINLPCBTCREATESTRUCT @ 0x1C005202C
 * Callers:
 *     xxxHkCallHook @ 0x1C0042460 (xxxHkCallHook.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C001B160 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C0020920 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00209AC (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C0020A2C (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0020B54 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020BF8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020C50 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     ?CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C00526D8 (-CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0052A10 (-CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     PushW32ThreadLock @ 0x1C005D730 (PushW32ThreadLock.c)
 *     GetThreadDesktopWindow @ 0x1C00F06E0 (GetThreadDesktopWindow.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
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
  int v17; // r8d
  unsigned int v18; // ecx
  unsigned int v19; // r9d
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
  __int64 v39; // r8
  __int64 v40; // rcx
  __int64 *v41; // rcx
  __int64 v42; // rdi
  __int64 v43; // rdx
  ULONG64 v44; // rcx
  __int128 v45; // xmm5
  __int128 v46; // xmm6
  __int128 v47; // xmm2
  __int128 v48; // xmm0
  int v50; // r9d
  unsigned int v51; // ecx
  unsigned int v52; // r8d
  CHAR *v53; // rdx
  void **v54; // r9
  struct _CAPTUREBUF *v55; // rcx
  unsigned int v56; // r8d
  unsigned int v57; // r8d
  int v58; // eax
  unsigned __int64 v59; // rcx
  int v60; // eax
  unsigned __int64 v61; // rcx
  int v62; // eax
  CHAR *v63; // rax
  int v64; // r8d
  char v65; // [rsp+30h] [rbp-4F8h] BYREF
  _BYTE v66[3]; // [rsp+31h] [rbp-4F7h] BYREF
  unsigned int v67; // [rsp+34h] [rbp-4F4h]
  unsigned int v68; // [rsp+38h] [rbp-4F0h]
  unsigned __int8 *v69; // [rsp+40h] [rbp-4E8h]
  CHAR v70; // [rsp+48h] [rbp-4E0h]
  __int16 v71; // [rsp+4Ch] [rbp-4DCh]
  int v72; // [rsp+58h] [rbp-4D0h] BYREF
  int v73[6]; // [rsp+70h] [rbp-4B8h] BYREF
  __int64 v74; // [rsp+88h] [rbp-4A0h]
  unsigned __int64 v75; // [rsp+90h] [rbp-498h] BYREF
  __int128 v76; // [rsp+98h] [rbp-490h]
  __int64 v77; // [rsp+A8h] [rbp-480h]
  unsigned int v78; // [rsp+B0h] [rbp-478h]
  _QWORD *v79; // [rsp+C8h] [rbp-460h]
  __int64 v80; // [rsp+D0h] [rbp-458h]
  __int64 v81; // [rsp+D8h] [rbp-450h]
  ULONG_PTR RegionSize; // [rsp+E0h] [rbp-448h] BYREF
  __int64 v83; // [rsp+E8h] [rbp-440h] BYREF
  __int64 v84; // [rsp+F0h] [rbp-438h]
  __int64 v85; // [rsp+F8h] [rbp-430h]
  __int64 v86; // [rsp+118h] [rbp-410h]
  _BYTE v87[32]; // [rsp+140h] [rbp-3E8h] BYREF
  _OWORD v88[5]; // [rsp+160h] [rbp-3C8h] BYREF
  __int64 v89; // [rsp+1B0h] [rbp-378h]
  __int128 v90; // [rsp+1E0h] [rbp-348h]
  __int64 v91; // [rsp+210h] [rbp-318h]
  _DWORD v92[44]; // [rsp+220h] [rbp-308h] BYREF
  unsigned __int8 v93[512]; // [rsp+2D0h] [rbp-258h] BYREF

  v80 = a4;
  v79 = a3;
  v67 = 0;
  v68 = 0;
  v8 = 0;
  ThreadDesktopWindow = GetThreadDesktopWindow(0LL);
  v10 = (unsigned __int8 *)v92;
  v83 = 0LL;
  v84 = 0LL;
  v85 = 0LL;
  v76 = 0uLL;
  v77 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11);
  v81 = ThreadWin32Thread;
  if ( ThreadDesktopWindow )
    v74 = *(_QWORD *)(ThreadDesktopWindow + 40) - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v74 = 0LL;
  v13 = *a3;
  v14 = *(_QWORD *)(v13 + 56);
  if ( !v14 || (v50 = *(_DWORD *)(v13 + 84) >> 31, v50 == a5) && v14 < (unsigned __int64)MmSystemRangeStart )
  {
    v15 = -1;
  }
  else
  {
    v51 = *(_DWORD *)(v13 + 80);
    v15 = -1;
    v52 = -1;
    if ( v51 + 2 >= v51 )
      v52 = v51 + 2;
    v67 = v52;
    if ( v51 + 2 < v51 )
      goto LABEL_70;
    if ( v50 && !a5 )
    {
      v59 = 2LL * v52;
      v60 = -1;
      if ( v59 <= 0xFFFFFFFF )
        v60 = 2 * v52;
      v67 = v60;
      if ( v59 > 0xFFFFFFFF )
        goto LABEL_70;
    }
    v8 = 1;
  }
  v16 = *(_QWORD *)(v13 + 64);
  if ( (v16 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    v17 = *(_DWORD *)(v13 + 100) >> 31;
    if ( v17 != a5 || v16 >= (unsigned __int64)MmSystemRangeStart )
    {
      v18 = *(_DWORD *)(v13 + 96);
      v19 = -1;
      if ( v18 + 2 >= v18 )
        v19 = v18 + 2;
      v68 = v19;
      if ( v18 + 2 < v18 )
        goto LABEL_70;
      if ( v17 && !a5 )
      {
        v61 = 2LL * v19;
        v62 = -1;
        if ( v61 <= 0xFFFFFFFF )
          v62 = 2 * v19;
        v68 = v62;
        if ( v61 > 0xFFFFFFFF )
          goto LABEL_70;
      }
      ++v8;
    }
  }
  if ( v67 + v68 >= v67 )
    v15 = v67 + v68;
  v78 = v15;
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
      PushW32ThreadLock(v10, v87, Win32FreePool);
    v22 = v74;
    *((_QWORD *)v10 + 5) = v74;
    *((_DWORD *)v10 + 12) = a1;
    *((_QWORD *)v10 + 7) = a2;
    v23 = v79;
    *(_DWORD *)(*v79 + 52LL) = 0;
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
      v63 = *(CHAR **)(v13 + 56);
      v70 = *v63;
      if ( v70 == -1 )
      {
        if ( a5 )
        {
          v57 = 3;
          v53 = v63;
        }
        else
        {
          v72 = ((unsigned __int16)(*(_DWORD *)v63 >> 8) << 16) | 0xFFFF;
          v57 = 4;
          v53 = (CHAR *)&v72;
        }
        v54 = (void **)(v10 + 120);
        v55 = (struct _CAPTUREBUF *)v10;
      }
      else
      {
        v54 = (void **)(v10 + 120);
        v64 = *(_DWORD *)(v13 + 80);
        v53 = *(CHAR **)(v13 + 88);
        v55 = (struct _CAPTUREBUF *)v10;
        if ( !a5 )
        {
          if ( (int)CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v10, v53, 2 * v64 + 2, v54) < 0 )
            goto LABEL_70;
          goto LABEL_22;
        }
        v57 = v64 + 1;
      }
    }
    else
    {
      v53 = *(CHAR **)(v13 + 56);
      v71 = *(_WORD *)v53;
      v54 = (void **)(v10 + 120);
      v55 = (struct _CAPTUREBUF *)v10;
      if ( v71 == -1 )
      {
        if ( a5 )
        {
          ++v53;
          v57 = 3;
        }
        else
        {
          v57 = 4;
        }
      }
      else
      {
        v56 = *(_DWORD *)(v13 + 80);
        v53 = *(CHAR **)(v13 + 88);
        if ( a5 )
        {
          v58 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v10, (PCWCH)v53, (v56 >> 1) + 1, v54);
LABEL_69:
          if ( v58 < 0 )
            goto LABEL_70;
LABEL_22:
          if ( !v68 )
          {
LABEL_28:
            *((_QWORD *)v10 + 18) = v23[1];
            *((_QWORD *)v10 + 19) = v80;
            *((_DWORD *)v10 + 40) = a5;
            v30 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v21);
            v83 = *(_QWORD *)(v30 + 408);
            *(_QWORD *)(v30 + 408) = &v83;
            v84 = ThreadDesktopWindow;
            if ( ThreadDesktopWindow )
              _InterlockedIncrement((volatile signed __int32 *)(ThreadDesktopWindow + 8));
            v31 = v81;
            v32 = *(_QWORD *)(v81 + 472);
            v76 = *(_OWORD *)(v32 + 64);
            v77 = *(_QWORD *)(v32 + 80);
            *(_QWORD *)(v32 + 72) = v22;
            if ( ThreadDesktopWindow )
              v33 = *(_QWORD *)ThreadDesktopWindow;
            else
              v33 = 0LL;
            *(_QWORD *)(*(_QWORD *)(v31 + 472) + 64LL) = v33;
            if ( ThreadDesktopWindow )
              v34 = *(_QWORD *)(*(_QWORD *)(ThreadDesktopWindow + 40) + 224LL);
            else
              v34 = 0LL;
            *(_QWORD *)(*(_QWORD *)(v31 + 472) + 80LL) = v34;
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
            ThreadUnlock1(v38, v37, v39);
            v40 = *(_QWORD *)(v31 + 472);
            *(_OWORD *)(v40 + 64) = v76;
            *(_QWORD *)(v40 + 80) = v77;
            if ( v35 >= 0 && v73[0] == 24 )
            {
              v41 = (__int64 *)v75;
              if ( v75 + 8 < v75 || v75 + 8 > MmUserProbeAddress )
                v41 = (__int64 *)MmUserProbeAddress;
              v42 = *v41;
              v86 = *v41;
              v43 = *(_QWORD *)(gptiCurrent + 504LL);
              if ( !v43 || (*(_DWORD *)(v43 + 84) & 1) == 0 || *(_OWORD **)(v43 + 96) != v88 )
              {
                v44 = *(_QWORD *)(v75 + 16);
                if ( v44 + 88 < v44 || v44 + 88 > MmUserProbeAddress )
                  v44 = MmUserProbeAddress;
                v45 = *(_OWORD *)v44;
                v46 = *(_OWORD *)(v44 + 16);
                v90 = *(_OWORD *)(v44 + 32);
                v47 = *(_OWORD *)(v44 + 48);
                v48 = *(_OWORD *)(v44 + 64);
                v91 = *(_QWORD *)(v44 + 80);
                v88[0] = v45;
                v88[1] = v46;
                v88[2] = v90;
                v88[3] = v47;
                v88[4] = v48;
                v89 = v91;
                v23[1] = v91;
                *(_OWORD *)(*v23 + 32LL) = v90;
                goto LABEL_47;
              }
            }
            goto LABEL_70;
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
            goto LABEL_70;
          goto LABEL_28;
        }
        v57 = v56 + 2;
      }
    }
    v58 = CaptureCallbackData(v55, (unsigned __int64)v53, v57, v54);
    goto LABEL_69;
  }
LABEL_70:
  v42 = 0LL;
LABEL_47:
  if ( v10 != (unsigned __int8 *)v92 && v10 != v93 )
  {
    if ( *((_QWORD *)v10 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v10 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v87);
  }
  return v42;
}
