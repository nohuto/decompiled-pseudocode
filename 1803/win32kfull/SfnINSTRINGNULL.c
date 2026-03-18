/*
 * XREFs of SfnINSTRINGNULL @ 0x1C0023830
 * Callers:
 *     ?_SfnINBOXSTRING@@YA_JJPEAUtagWND@@I_K_J1P6A_JXZKPEAUtagSMS@@@Z @ 0x1C00FC468 (-_SfnINBOXSTRING@@YA_JJPEAUtagWND@@I_K_J1P6A_JXZKPEAUtagSMS@@@Z.c)
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
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall SfnINSTRINGNULL(
        volatile signed __int32 *a1,
        int a2,
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
  unsigned int v13; // r14d
  unsigned int v14; // edx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // edi
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 *v26; // rcx
  __int64 v27; // rdi
  unsigned int v29; // ecx
  unsigned int v30; // eax
  void **v31; // r9
  unsigned int v32; // r8d
  CHAR *v33; // rdx
  unsigned int v34; // r8d
  int v35; // eax
  unsigned __int64 v36; // rax
  char v37; // [rsp+30h] [rbp-348h] BYREF
  _BYTE v38[3]; // [rsp+31h] [rbp-347h] BYREF
  unsigned int v39; // [rsp+34h] [rbp-344h]
  unsigned __int8 *v40; // [rsp+38h] [rbp-340h]
  int v41; // [rsp+40h] [rbp-338h]
  int v42[5]; // [rsp+44h] [rbp-334h] BYREF
  __int128 v43; // [rsp+58h] [rbp-320h]
  __int64 v44; // [rsp+68h] [rbp-310h]
  __int64 v45; // [rsp+78h] [rbp-300h]
  unsigned __int64 v46; // [rsp+80h] [rbp-2F8h] BYREF
  ULONG_PTR RegionSize; // [rsp+88h] [rbp-2F0h] BYREF
  __int64 v48; // [rsp+90h] [rbp-2E8h] BYREF
  volatile signed __int32 *v49; // [rsp+98h] [rbp-2E0h]
  __int64 v50; // [rsp+A0h] [rbp-2D8h]
  __int64 v51; // [rsp+A8h] [rbp-2D0h]
  _BYTE v52[24]; // [rsp+C8h] [rbp-2B0h] BYREF
  _DWORD v53[24]; // [rsp+E0h] [rbp-298h] BYREF
  unsigned __int8 v54[512]; // [rsp+140h] [rbp-238h] BYREF

  v45 = a3;
  v41 = a2;
  v9 = (unsigned __int8 *)v53;
  v48 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  v43 = 0uLL;
  v44 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v11 = ThreadWin32Thread;
  if ( a1 )
    v12 = *((_QWORD *)a1 + 5) - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v12 = 0LL;
  v13 = 0;
  v14 = 0;
  v39 = 0;
  if ( a4 && (*(_QWORD *)(a4 + 8) >= (unsigned __int64)MmSystemRangeStart || *(_DWORD *)(a4 + 4) >> 31 != (a7 & 1)) )
  {
    v13 = 1;
    v29 = *(_DWORD *)a4;
    v30 = *(_DWORD *)a4 + 2;
    v14 = -1;
    if ( v30 >= *(_DWORD *)a4 )
      v14 = *(_DWORD *)a4 + 2;
    v39 = v14;
    if ( v30 < v29 )
      goto LABEL_44;
    if ( *(int *)(a4 + 4) < 0 && (a7 & 1) == 0 )
    {
      v36 = 2LL * v14;
      v14 = -1;
      if ( v36 <= 0xFFFFFFFF )
        v14 = v36;
      v39 = v14;
      if ( v36 > 0xFFFFFFFF )
        goto LABEL_44;
    }
  }
  if ( v13 )
  {
    v9 = AllocCallbackMessage(88, v13, v14, v54, 1, 0x200uLL);
    v40 = v9;
    if ( !v9 )
      return 0LL;
  }
  else
  {
    v9 = (unsigned __int8 *)v53;
    v40 = (unsigned __int8 *)v53;
    memset(v53, 0, 0x58uLL);
    v53[0] = 88;
  }
  W32GetThreadWin32Thread(KeGetCurrentThread());
  if ( v9 != (unsigned __int8 *)v53 && v9 != v54 )
    PushW32ThreadLock(v9, v52, Win32FreePool);
  *((_QWORD *)v9 + 5) = v12;
  *((_DWORD *)v9 + 12) = v41;
  *((_QWORD *)v9 + 7) = v45;
  if ( v13 )
  {
    v31 = (void **)(v9 + 80);
    v32 = *(_DWORD *)a4;
    v33 = *(CHAR **)(a4 + 8);
    if ( *(int *)(a4 + 4) < 0 )
    {
      if ( (a7 & 1) != 0 )
      {
        v34 = v32 + 1;
        goto LABEL_42;
      }
      v35 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v9, v33, 2 * v32 + 2, v31);
    }
    else
    {
      if ( (a7 & 1) == 0 )
      {
        v34 = v32 + 2;
LABEL_42:
        v35 = CaptureCallbackData((struct _CAPTUREBUF *)v9, (unsigned __int64)v33, v34, v31);
        goto LABEL_43;
      }
      v35 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v9, (PCWCH)v33, (v32 >> 1) + 1, v31);
    }
LABEL_43:
    if ( v35 < 0 )
      goto LABEL_44;
    goto LABEL_13;
  }
  if ( a4 )
    v15 = *(_QWORD *)(a4 + 8);
  else
    v15 = 0LL;
  *((_QWORD *)v9 + 10) = v15;
LABEL_13:
  *((_QWORD *)v9 + 8) = a5;
  *((_QWORD *)v9 + 9) = a6;
  v16 = W32GetThreadWin32Thread(KeGetCurrentThread());
  v48 = *(_QWORD *)(v16 + 408);
  *(_QWORD *)(v16 + 408) = &v48;
  v49 = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v17 = *(_QWORD *)(v11 + 472);
  v43 = *(_OWORD *)(v17 + 64);
  v44 = *(_QWORD *)(v17 + 80);
  *(_QWORD *)(v17 + 72) = v12;
  if ( a1 )
    v18 = *(_QWORD *)a1;
  else
    v18 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 472) + 64LL) = v18;
  if ( a1 )
    v19 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 224LL);
  else
    v19 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 472) + 80LL) = v19;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v38,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v37);
  EtwTraceBeginCallback(27LL);
  *((_QWORD *)v9 + 2) = 0LL;
  v20 = KeUserModeCallback(27LL, v9, *(unsigned int *)v9, &v46, v42);
  EtwTraceEndCallback(27LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v37);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v38, v21);
  ThreadUnlock1(v23, v22, v24);
  v25 = *(_QWORD *)(v11 + 472);
  *(_OWORD *)(v25 + 64) = v43;
  *(_QWORD *)(v25 + 80) = v44;
  if ( v20 >= 0 && v42[0] == 24 )
  {
    v26 = (__int64 *)v46;
    if ( v46 + 8 < v46 || v46 + 8 > MmUserProbeAddress )
      v26 = (__int64 *)MmUserProbeAddress;
    v27 = *v26;
    v51 = *v26;
    goto LABEL_28;
  }
LABEL_44:
  v27 = 0LL;
LABEL_28:
  if ( v9 != (unsigned __int8 *)v53 && v9 != v54 )
  {
    if ( *((_QWORD *)v9 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v9 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v52);
  }
  return v27;
}
