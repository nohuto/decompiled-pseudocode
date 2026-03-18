/*
 * XREFs of SfnINSTRING @ 0x1C00FC540
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
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 *v28; // rcx
  __int64 v29; // rdi
  unsigned __int8 *result; // rax
  unsigned int v31; // ecx
  unsigned int v32; // eax
  void **v33; // r9
  unsigned int v34; // r8d
  CHAR *v35; // rdx
  unsigned int v36; // r8d
  int v37; // eax
  unsigned __int64 v38; // rax
  char v39; // [rsp+30h] [rbp-348h] BYREF
  _BYTE v40[3]; // [rsp+31h] [rbp-347h] BYREF
  unsigned int v41; // [rsp+34h] [rbp-344h]
  unsigned __int8 *v42; // [rsp+38h] [rbp-340h]
  unsigned int v43; // [rsp+40h] [rbp-338h]
  int v44[5]; // [rsp+44h] [rbp-334h] BYREF
  __int128 v45; // [rsp+58h] [rbp-320h]
  __int64 v46; // [rsp+68h] [rbp-310h]
  __int64 v47; // [rsp+78h] [rbp-300h]
  unsigned __int64 v48; // [rsp+80h] [rbp-2F8h] BYREF
  ULONG_PTR RegionSize; // [rsp+88h] [rbp-2F0h] BYREF
  __int64 v50; // [rsp+90h] [rbp-2E8h] BYREF
  volatile signed __int32 *v51; // [rsp+98h] [rbp-2E0h]
  __int64 v52; // [rsp+A0h] [rbp-2D8h]
  __int64 v53; // [rsp+A8h] [rbp-2D0h]
  _QWORD v54[3]; // [rsp+C8h] [rbp-2B0h] BYREF
  _DWORD v55[24]; // [rsp+E0h] [rbp-298h] BYREF
  unsigned __int8 v56[512]; // [rsp+140h] [rbp-238h] BYREF

  v47 = a3;
  v43 = a2;
  v9 = (unsigned __int8 *)v55;
  v50 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v45 = 0uLL;
  v46 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v11 = ThreadWin32Thread;
  if ( a1 )
    v12 = *((_QWORD *)a1 + 5) - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v12 = 0LL;
  if ( a4 && (*(_QWORD *)(a4 + 8) >= (unsigned __int64)MmSystemRangeStart || *(_DWORD *)(a4 + 4) >> 31 != (a7 & 1)) )
  {
    v14 = 1;
    v31 = *(_DWORD *)a4;
    v32 = *(_DWORD *)a4 + 2;
    v13 = -1;
    if ( v32 >= *(_DWORD *)a4 )
      v13 = *(_DWORD *)a4 + 2;
    v41 = v13;
    if ( v32 < v31 )
      goto LABEL_45;
    if ( *(int *)(a4 + 4) < 0 && (a7 & 1) == 0 )
    {
      v38 = 2LL * v13;
      v13 = -1;
      if ( v38 <= 0xFFFFFFFF )
        v13 = v38;
      v41 = v13;
      if ( v38 > 0xFFFFFFFF )
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
  *((_QWORD *)v9 + 7) = v47;
  if ( v14 )
  {
    v33 = (void **)(v9 + 80);
    v34 = *(_DWORD *)a4;
    v35 = *(CHAR **)(a4 + 8);
    if ( *(int *)(a4 + 4) < 0 )
    {
      if ( (a7 & 1) != 0 )
      {
        v36 = v34 + 1;
        goto LABEL_43;
      }
      v37 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v9, v35, 2 * v34 + 2, v33);
    }
    else
    {
      if ( (a7 & 1) == 0 )
      {
        v36 = v34 + 2;
LABEL_43:
        v37 = CaptureCallbackData((struct _CAPTUREBUF *)v9, (unsigned __int64)v35, v36, v33);
        goto LABEL_44;
      }
      v37 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v9, (PCWCH)v35, (v34 >> 1) + 1, v33);
    }
LABEL_44:
    if ( v37 < 0 )
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
  v50 = *(_QWORD *)(v18 + 408);
  *(_QWORD *)(v18 + 408) = &v50;
  v51 = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v19 = *(_QWORD *)(v11 + 472);
  v45 = *(_OWORD *)(v19 + 64);
  v46 = *(_QWORD *)(v19 + 80);
  *(_QWORD *)(v19 + 72) = v12;
  if ( a1 )
    v20 = *(_QWORD *)a1;
  else
    v20 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 472) + 64LL) = v20;
  if ( a1 )
    v21 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 224LL);
  else
    v21 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 472) + 80LL) = v21;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v40,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v39);
  EtwTraceBeginCallback(26LL);
  *((_QWORD *)v9 + 2) = 0LL;
  v22 = KeUserModeCallback(26LL, v9, *(unsigned int *)v9, &v48, v44);
  EtwTraceEndCallback(26LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v39);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v40, v23);
  ThreadUnlock1(v25, v24, v26);
  v27 = *(_QWORD *)(v11 + 472);
  *(_OWORD *)(v27 + 64) = v45;
  *(_QWORD *)(v27 + 80) = v46;
  if ( v22 >= 0 && v44[0] == 24 )
  {
    v28 = (__int64 *)v48;
    if ( v48 + 8 < v48 || v48 + 8 > MmUserProbeAddress )
      v28 = (__int64 *)MmUserProbeAddress;
    v29 = *v28;
    v53 = *v28;
    goto LABEL_29;
  }
LABEL_45:
  v29 = 0LL;
LABEL_29:
  if ( v9 != (unsigned __int8 *)v55 && v9 != v56 )
  {
    if ( *((_QWORD *)v9 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v9 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v54);
  }
  return (unsigned __int8 *)v29;
}
