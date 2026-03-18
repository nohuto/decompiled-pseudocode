/*
 * XREFs of SfnCOPYGLOBALDATA @ 0x1C01FDD60
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0066C18 (xxxRealDefWindowProc.c)
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

unsigned __int8 *__fastcall SfnCOPYGLOBALDATA(volatile signed __int32 *a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v8; // r14
  __int64 v9; // rsi
  unsigned __int8 *result; // rax
  __int64 v11; // rdx
  unsigned __int8 *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // edi
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 *v23; // rcx
  __int64 v24; // rdi
  PVOID *v25; // rdx
  char v26; // [rsp+30h] [rbp-338h] BYREF
  _BYTE v27[3]; // [rsp+31h] [rbp-337h] BYREF
  _DWORD v28[5]; // [rsp+34h] [rbp-334h] BYREF
  unsigned __int8 *v29; // [rsp+48h] [rbp-320h]
  unsigned __int64 v30; // [rsp+58h] [rbp-310h] BYREF
  ULONG_PTR RegionSize; // [rsp+60h] [rbp-308h] BYREF
  __int64 v32; // [rsp+68h] [rbp-300h] BYREF
  volatile signed __int32 *v33; // [rsp+70h] [rbp-2F8h]
  __int64 v34; // [rsp+78h] [rbp-2F0h]
  __int128 v35; // [rsp+80h] [rbp-2E8h]
  __int64 v36; // [rsp+90h] [rbp-2D8h]
  __int64 v37; // [rsp+98h] [rbp-2D0h]
  __int128 v38; // [rsp+B8h] [rbp-2B0h]
  _QWORD v39[3]; // [rsp+C8h] [rbp-2A0h] BYREF
  unsigned __int8 v40[64]; // [rsp+E0h] [rbp-288h] BYREF
  unsigned __int8 v41[512]; // [rsp+120h] [rbp-248h] BYREF

  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0uLL;
  v36 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v8 = ThreadWin32Thread;
  if ( a1 )
    v9 = *((_QWORD *)a1 + 5) - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v9 = 0LL;
  result = AllocCallbackMessage(56, 1u, a3, v41, 1, 0x200uLL);
  v12 = result;
  v29 = result;
  if ( result )
  {
    W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11);
    if ( v12 != v40 && v12 != v41 )
      PushW32ThreadLock((__int64)v12, v39, (__int64)Win32FreePool);
    if ( !a4 )
      goto LABEL_27;
    *((_DWORD *)v12 + 10) = a3;
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v12, a4, a3, (void **)v12 + 6) < 0 )
      goto LABEL_27;
    v14 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13);
    v32 = *(_QWORD *)(v14 + 416);
    *(_QWORD *)(v14 + 416) = &v32;
    v33 = a1;
    if ( a1 )
      _InterlockedAdd(a1 + 2, 1u);
    v15 = *(_QWORD *)(v8 + 480);
    v38 = *(_OWORD *)(v15 + 64);
    v35 = v38;
    v36 = *(_QWORD *)(v15 + 80);
    *(_QWORD *)(v15 + 72) = v9;
    if ( a1 )
      v16 = *(_QWORD *)a1;
    else
      v16 = 0LL;
    *(_QWORD *)(*(_QWORD *)(v8 + 480) + 64LL) = v16;
    if ( a1 )
      v17 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 224LL);
    else
      v17 = 0LL;
    *(_QWORD *)(*(_QWORD *)(v8 + 480) + 80LL) = v17;
    if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
      (ReleaseAndReacquirePerObjectLocks *)v27,
      gdwInAtomicOperation);
    LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v26);
    EtwTraceBeginCallback(1LL);
    *((_QWORD *)v12 + 2) = 0LL;
    v18 = KeUserModeCallback(1LL, v12, *(unsigned int *)v12, &v30, v28);
    EtwTraceEndCallback(1LL);
    LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v26);
    ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v27, v19);
    ThreadUnlock1(v21, v20);
    v22 = *(_QWORD *)(v8 + 480);
    *(_OWORD *)(v22 + 64) = v38;
    *(_QWORD *)(v22 + 80) = v36;
    if ( v18 < 0 )
      goto LABEL_27;
    if ( v28[0] == 24 )
    {
      v23 = (__int64 *)v30;
      if ( v30 + 8 < v30 || v30 + 8 > MmUserProbeAddress )
        v23 = (__int64 *)MmUserProbeAddress;
      v24 = *v23;
      v37 = *v23;
    }
    else
    {
LABEL_27:
      v24 = 0LL;
    }
    if ( v12 != v40 && v12 != v41 )
    {
      v25 = (PVOID *)(v12 + 32);
      if ( *((_QWORD *)v12 + 4) )
      {
        RegionSize = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v25, &RegionSize, 0x8000u);
      }
      PopAndFreeAlwaysW32ThreadLock((__int64)v39, (__int64)v25);
    }
    return (unsigned __int8 *)v24;
  }
  return result;
}
