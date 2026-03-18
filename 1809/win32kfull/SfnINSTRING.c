/*
 * XREFs of SfnINSTRING @ 0x1C011BCC0
 * Callers:
 *     ?_SfnINBOXSTRING@@YA_JJPEAUtagWND@@I_K_J1P6A_JXZKPEAUtagSMS@@@Z @ 0x1C011BBE8 (-_SfnINBOXSTRING@@YA_JJPEAUtagWND@@I_K_J1P6A_JXZKPEAUtagSMS@@@Z.c)
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
 *     ?CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0124A84 (-CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

unsigned __int8 *__fastcall SfnINSTRING(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned __int8 *v9; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // r13
  __int64 v12; // r12
  unsigned int v13; // edx
  unsigned int v14; // r14d
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // edi
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 *v27; // rcx
  __int64 v28; // rdi
  unsigned __int8 *result; // rax
  unsigned int v30; // ecx
  unsigned int v31; // eax
  void **v32; // r9
  unsigned int v33; // r8d
  CHAR *v34; // rdx
  unsigned int v35; // r8d
  int v36; // eax
  unsigned __int64 v37; // rax
  PVOID *v38; // rdx
  char v39; // [rsp+30h] [rbp-358h] BYREF
  _BYTE v40[3]; // [rsp+31h] [rbp-357h] BYREF
  unsigned int v41; // [rsp+34h] [rbp-354h]
  unsigned __int8 *v42; // [rsp+38h] [rbp-350h]
  unsigned int v43; // [rsp+40h] [rbp-348h]
  int v44[7]; // [rsp+44h] [rbp-344h] BYREF
  __int128 v45; // [rsp+60h] [rbp-328h]
  unsigned __int64 v46; // [rsp+70h] [rbp-318h] BYREF
  ULONG_PTR RegionSize; // [rsp+78h] [rbp-310h] BYREF
  __int64 v48; // [rsp+80h] [rbp-308h] BYREF
  volatile signed __int32 *v49; // [rsp+88h] [rbp-300h]
  __int64 v50; // [rsp+90h] [rbp-2F8h]
  __int128 v51; // [rsp+98h] [rbp-2F0h]
  __int64 v52; // [rsp+A8h] [rbp-2E0h]
  __int64 v53; // [rsp+B0h] [rbp-2D8h]
  _QWORD v54[4]; // [rsp+D0h] [rbp-2B8h] BYREF
  _DWORD v55[24]; // [rsp+F0h] [rbp-298h] BYREF
  unsigned __int8 v56[512]; // [rsp+150h] [rbp-238h] BYREF

  *(_QWORD *)&v45 = a3;
  v43 = a2;
  v9 = (unsigned __int8 *)v55;
  v48 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  v51 = 0uLL;
  v52 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v11 = ThreadWin32Thread;
  if ( a1 )
    v12 = *((_QWORD *)a1 + 5) - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v12 = 0LL;
  if ( a4 && (*(_QWORD *)(a4 + 8) >= (unsigned __int64)MmSystemRangeStart || *(_DWORD *)(a4 + 4) >> 31 != (a7 & 1)) )
  {
    v14 = 1;
    v30 = *(_DWORD *)a4;
    v31 = *(_DWORD *)a4 + 2;
    v13 = -1;
    if ( v31 >= *(_DWORD *)a4 )
      v13 = *(_DWORD *)a4 + 2;
    v41 = v13;
    if ( v31 < v30 )
      goto LABEL_45;
    if ( *(int *)(a4 + 4) < 0 && (a7 & 1) == 0 )
    {
      v37 = 2LL * v13;
      v13 = -1;
      if ( v37 <= 0xFFFFFFFF )
        v13 = v37;
      v41 = v13;
      if ( v37 > 0xFFFFFFFF )
        goto LABEL_45;
    }
  }
  else
  {
    v13 = 0;
    v41 = 0;
    v14 = 0;
  }
  if ( v14 )
  {
    result = AllocCallbackMessage(88, v14, v13, v56, 1, 0x200uLL);
    v9 = result;
    v42 = result;
    if ( !result )
      return result;
  }
  else
  {
    v9 = (unsigned __int8 *)v55;
    v42 = (unsigned __int8 *)v55;
    memset(v55, 0, 0x58uLL);
    v55[0] = 88;
  }
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15);
  if ( v9 != (unsigned __int8 *)v55 && v9 != v56 )
    PushW32ThreadLock((__int64)v9, v54, (__int64)Win32FreePool);
  *((_QWORD *)v9 + 5) = v12;
  *((_DWORD *)v9 + 12) = v43;
  *((_QWORD *)v9 + 7) = v45;
  if ( v14 )
  {
    v32 = (void **)(v9 + 80);
    v33 = *(_DWORD *)a4;
    v34 = *(CHAR **)(a4 + 8);
    if ( *(int *)(a4 + 4) < 0 )
    {
      if ( (a7 & 1) != 0 )
      {
        v35 = v33 + 1;
        goto LABEL_43;
      }
      v36 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v9, v34, 2 * v33 + 2, v32);
    }
    else
    {
      if ( (a7 & 1) == 0 )
      {
        v35 = v33 + 2;
LABEL_43:
        v36 = CaptureCallbackData((struct _CAPTUREBUF *)v9, (unsigned __int64)v34, v35, v32);
        goto LABEL_44;
      }
      v36 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v9, (PCWCH)v34, (v33 >> 1) + 1, v32);
    }
LABEL_44:
    if ( v36 < 0 )
      goto LABEL_45;
    goto LABEL_14;
  }
  if ( a4 )
    v17 = *(_QWORD *)(a4 + 8);
  else
    v17 = 0LL;
  *((_QWORD *)v9 + 10) = v17;
LABEL_14:
  *((_QWORD *)v9 + 8) = a5;
  *((_QWORD *)v9 + 9) = a6;
  v18 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v16);
  v48 = *(_QWORD *)(v18 + 416);
  *(_QWORD *)(v18 + 416) = &v48;
  v49 = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v19 = *(_QWORD *)(v11 + 480);
  v45 = *(_OWORD *)(v19 + 64);
  v51 = v45;
  v52 = *(_QWORD *)(v19 + 80);
  *(_QWORD *)(v19 + 72) = v12;
  if ( a1 )
    v20 = *(_QWORD *)a1;
  else
    v20 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 480) + 64LL) = v20;
  if ( a1 )
    v21 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 224LL);
  else
    v21 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 480) + 80LL) = v21;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v40,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v39);
  EtwTraceBeginCallback(26LL);
  *((_QWORD *)v9 + 2) = 0LL;
  v22 = KeUserModeCallback(26LL, v9, *(unsigned int *)v9, &v46, v44);
  EtwTraceEndCallback(26LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v39);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v40, v23);
  ThreadUnlock1(v25, v24);
  v26 = *(_QWORD *)(v11 + 480);
  *(_OWORD *)(v26 + 64) = v45;
  *(_QWORD *)(v26 + 80) = v52;
  if ( v22 >= 0 && v44[0] == 24 )
  {
    v27 = (__int64 *)v46;
    if ( v46 + 8 < v46 || v46 + 8 > MmUserProbeAddress )
      v27 = (__int64 *)MmUserProbeAddress;
    v28 = *v27;
    v53 = *v27;
    goto LABEL_29;
  }
LABEL_45:
  v28 = 0LL;
LABEL_29:
  if ( v9 != (unsigned __int8 *)v55 && v9 != v56 )
  {
    v38 = (PVOID *)(v9 + 32);
    if ( *((_QWORD *)v9 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v38, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v54, (__int64)v38);
  }
  return (unsigned __int8 *)v28;
}
