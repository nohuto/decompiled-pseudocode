/*
 * XREFs of SfnINPGESTURENOTIFYSTRUCT @ 0x1C0202F80
 * Callers:
 *     <none>
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
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

unsigned __int8 *__fastcall SfnINPGESTURENOTIFYSTRUCT(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        unsigned int *a4,
        __int64 a5,
        __int64 a6)
{
  unsigned int v8; // r13d
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // r14
  __int64 v12; // rsi
  unsigned __int8 *result; // rax
  __int64 v14; // rdx
  unsigned __int8 *v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // edi
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 *v26; // rcx
  __int64 v27; // rdi
  PVOID *v28; // rdx
  char v29; // [rsp+30h] [rbp-348h] BYREF
  _BYTE v30[3]; // [rsp+31h] [rbp-347h] BYREF
  _DWORD v31[5]; // [rsp+34h] [rbp-344h] BYREF
  unsigned __int8 *v32; // [rsp+48h] [rbp-330h]
  unsigned __int64 v33; // [rsp+58h] [rbp-320h] BYREF
  ULONG_PTR RegionSize; // [rsp+60h] [rbp-318h] BYREF
  __int64 v35; // [rsp+68h] [rbp-310h] BYREF
  volatile signed __int32 *v36; // [rsp+70h] [rbp-308h]
  __int64 v37; // [rsp+78h] [rbp-300h]
  __int128 v38; // [rsp+80h] [rbp-2F8h]
  __int64 v39; // [rsp+90h] [rbp-2E8h]
  __int64 v40; // [rsp+98h] [rbp-2E0h]
  __int128 v41; // [rsp+B8h] [rbp-2C0h]
  _QWORD v42[3]; // [rsp+C8h] [rbp-2B0h] BYREF
  unsigned __int8 v43[96]; // [rsp+E0h] [rbp-298h] BYREF
  unsigned __int8 v44[512]; // [rsp+140h] [rbp-238h] BYREF

  v8 = a2;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  v38 = 0uLL;
  v39 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v11 = ThreadWin32Thread;
  if ( a1 )
    v12 = *((_QWORD *)a1 + 5) - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v12 = 0LL;
  result = AllocCallbackMessage(88, 1u, *a4, v44, 1, 0x200uLL);
  v15 = result;
  v32 = result;
  if ( result )
  {
    W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14);
    if ( v15 != v43 && v15 != v44 )
      PushW32ThreadLock((__int64)v15, v42, (__int64)Win32FreePool);
    *((_QWORD *)v15 + 5) = v12;
    *((_DWORD *)v15 + 12) = v8;
    *((_QWORD *)v15 + 7) = a3;
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v15, (unsigned __int64)a4, *a4, (void **)v15 + 8) < 0 )
      goto LABEL_26;
    *((_QWORD *)v15 + 9) = a5;
    *((_QWORD *)v15 + 10) = a6;
    v17 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v16);
    v35 = *(_QWORD *)(v17 + 416);
    *(_QWORD *)(v17 + 416) = &v35;
    v36 = a1;
    if ( a1 )
      _InterlockedIncrement(a1 + 2);
    v18 = *(_QWORD *)(v11 + 480);
    v41 = *(_OWORD *)(v18 + 64);
    v38 = v41;
    v39 = *(_QWORD *)(v18 + 80);
    *(_QWORD *)(v18 + 72) = v12;
    if ( a1 )
      v19 = *(_QWORD *)a1;
    else
      v19 = 0LL;
    *(_QWORD *)(*(_QWORD *)(v11 + 480) + 64LL) = v19;
    if ( a1 )
      v20 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 224LL);
    else
      v20 = 0LL;
    *(_QWORD *)(*(_QWORD *)(v11 + 480) + 80LL) = v20;
    if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
      (ReleaseAndReacquirePerObjectLocks *)v30,
      gdwInAtomicOperation);
    LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v29);
    EtwTraceBeginCallback(114LL);
    *((_QWORD *)v15 + 2) = 0LL;
    v21 = KeUserModeCallback(114LL, v15, *(unsigned int *)v15, &v33, v31);
    EtwTraceEndCallback(114LL);
    LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v29);
    ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v30, v22);
    ThreadUnlock1(v24, v23);
    v25 = *(_QWORD *)(v11 + 480);
    *(_OWORD *)(v25 + 64) = v41;
    *(_QWORD *)(v25 + 80) = v39;
    if ( v21 < 0 )
      goto LABEL_26;
    if ( v31[0] == 24 )
    {
      v26 = (__int64 *)v33;
      if ( v33 + 8 < v33 || v33 + 8 > MmUserProbeAddress )
        v26 = (__int64 *)MmUserProbeAddress;
      v27 = *v26;
      v40 = *v26;
    }
    else
    {
LABEL_26:
      v27 = 0LL;
    }
    if ( v15 != v43 && v15 != v44 )
    {
      v28 = (PVOID *)(v15 + 32);
      if ( *((_QWORD *)v15 + 4) )
      {
        RegionSize = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v28, &RegionSize, 0x8000u);
      }
      PopAndFreeAlwaysW32ThreadLock((__int64)v42, (__int64)v28);
    }
    return (unsigned __int8 *)v27;
  }
  return result;
}
