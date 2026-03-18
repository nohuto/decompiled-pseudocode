/*
 * XREFs of SfnINLPHELPINFOSTRUCT @ 0x1C0217510
 * Callers:
 *     <none>
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
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

unsigned __int8 *__fastcall SfnINLPHELPINFOSTRUCT(
        _QWORD *a1,
        unsigned int a2,
        __int64 a3,
        char *a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // r14
  __int64 v14; // rsi
  unsigned __int8 *result; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  unsigned __int8 *v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rcx
  int v26; // edi
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rcx
  __int64 *v33; // rcx
  __int64 v34; // rdi
  PVOID *v35; // rdx
  char v36; // [rsp+30h] [rbp-348h] BYREF
  _BYTE v37[3]; // [rsp+31h] [rbp-347h] BYREF
  _DWORD v38[5]; // [rsp+34h] [rbp-344h] BYREF
  unsigned __int8 *v39; // [rsp+48h] [rbp-330h]
  unsigned __int64 v40; // [rsp+58h] [rbp-320h] BYREF
  ULONG_PTR RegionSize; // [rsp+60h] [rbp-318h] BYREF
  __int64 v42; // [rsp+68h] [rbp-310h] BYREF
  _QWORD *v43; // [rsp+70h] [rbp-308h]
  __int64 v44; // [rsp+78h] [rbp-300h]
  __int128 v45; // [rsp+80h] [rbp-2F8h]
  __int64 v46; // [rsp+90h] [rbp-2E8h]
  _QWORD v47[7]; // [rsp+98h] [rbp-2E0h] BYREF
  __int128 v48; // [rsp+D0h] [rbp-2A8h]
  unsigned __int8 v49[88]; // [rsp+E0h] [rbp-298h] BYREF
  unsigned __int8 v50[512]; // [rsp+140h] [rbp-238h] BYREF

  memset(v49, 0, sizeof(v49));
  v42 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  v45 = 0uLL;
  v46 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, v11);
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v14 = 0LL;
  result = AllocCallbackMessage(88, 1u, *(unsigned int *)a4, v50, 1, 0x200uLL);
  v18 = result;
  v39 = result;
  if ( result )
  {
    W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v16, v17);
    memset(v47, 0, 24);
    if ( v18 != v49 && v18 != v50 )
      PushW32ThreadLock((__int64)v18, v47, (__int64)Win32FreePool);
    *((_QWORD *)v18 + 5) = v14;
    *((_DWORD *)v18 + 12) = a2;
    *((_QWORD *)v18 + 7) = a3;
    *((_DWORD *)a4 + 3) = 0;
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v18, a4, *(_DWORD *)a4, (void **)v18 + 8) < 0 )
      goto LABEL_26;
    *((_QWORD *)v18 + 9) = a5;
    *((_QWORD *)v18 + 10) = a6;
    v21 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v19, v20);
    v42 = *(_QWORD *)(v21 + 408);
    *(_QWORD *)(v21 + 408) = &v42;
    v43 = a1;
    if ( a1 )
      HMLockObject(a1);
    v23 = *(_QWORD *)(v13 + 472);
    v48 = *(_OWORD *)(v23 + 64);
    v45 = v48;
    v46 = *(_QWORD *)(v23 + 80);
    *(_QWORD *)(v23 + 72) = v14;
    if ( a1 )
      v24 = *a1;
    else
      v24 = 0LL;
    *(_QWORD *)(*(_QWORD *)(v13 + 472) + 64LL) = v24;
    if ( a1 )
      v25 = *(_QWORD *)(a1[5] + 224LL);
    else
      v25 = 0LL;
    *(_QWORD *)(*(_QWORD *)(v13 + 472) + 80LL) = v25;
    if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
      (ReleaseAndReacquirePerObjectLocks *)v37,
      gdwInAtomicOperation,
      v22);
    LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v36);
    EtwTraceBeginCallback(13LL);
    *((_QWORD *)v18 + 2) = 0LL;
    v26 = KeUserModeCallback(13LL, v18, *(unsigned int *)v18, &v40, v38);
    EtwTraceEndCallback(13LL);
    LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v36);
    ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
      (ReleaseAndReacquirePerObjectLocks *)v37,
      v27,
      v28);
    ThreadUnlock1(v30, v29, v31);
    v32 = *(_QWORD *)(v13 + 472);
    *(_OWORD *)(v32 + 64) = v48;
    *(_QWORD *)(v32 + 80) = v46;
    if ( v26 < 0 )
      goto LABEL_26;
    if ( v38[0] == 24 )
    {
      v33 = (__int64 *)v40;
      if ( v40 + 8 < v40 || v40 + 8 > MmUserProbeAddress )
        v33 = (__int64 *)MmUserProbeAddress;
      v34 = *v33;
      v47[3] = *v33;
    }
    else
    {
LABEL_26:
      v34 = 0LL;
    }
    if ( v18 != v49 && v18 != v50 )
    {
      v35 = (PVOID *)(v18 + 32);
      if ( *((_QWORD *)v18 + 4) )
      {
        RegionSize = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v35, &RegionSize, 0x8000u);
      }
      PopAndFreeAlwaysW32ThreadLock((__int64)v47, (__int64)v35, v20);
    }
    return (unsigned __int8 *)v34;
  }
  return result;
}
