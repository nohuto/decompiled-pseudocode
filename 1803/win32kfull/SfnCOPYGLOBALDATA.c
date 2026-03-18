/*
 * XREFs of SfnCOPYGLOBALDATA @ 0x1C01D8B90
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00246A8 (xxxRealDefWindowProc.c)
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
 *     PushW32ThreadLock @ 0x1C005D730 (PushW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
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
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 *v24; // rcx
  __int64 v25; // rdi
  char v26; // [rsp+30h] [rbp-328h] BYREF
  _BYTE v27[3]; // [rsp+31h] [rbp-327h] BYREF
  _DWORD v28[5]; // [rsp+34h] [rbp-324h] BYREF
  unsigned __int8 *v29; // [rsp+48h] [rbp-310h]
  __int128 v30; // [rsp+50h] [rbp-308h]
  __int64 v31; // [rsp+60h] [rbp-2F8h]
  unsigned __int64 v32; // [rsp+70h] [rbp-2E8h] BYREF
  ULONG_PTR RegionSize; // [rsp+78h] [rbp-2E0h] BYREF
  __int64 v34; // [rsp+80h] [rbp-2D8h] BYREF
  volatile signed __int32 *v35; // [rsp+88h] [rbp-2D0h]
  __int64 v36; // [rsp+90h] [rbp-2C8h]
  __int64 v37; // [rsp+98h] [rbp-2C0h]
  _QWORD v38[3]; // [rsp+B8h] [rbp-2A0h] BYREF
  unsigned __int8 v39[64]; // [rsp+D0h] [rbp-288h] BYREF
  unsigned __int8 v40[512]; // [rsp+110h] [rbp-248h] BYREF

  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v30 = 0uLL;
  v31 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v8 = ThreadWin32Thread;
  if ( a1 )
    v9 = *((_QWORD *)a1 + 5) - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v9 = 0LL;
  result = AllocCallbackMessage(56, 1u, a3, v40, 1, 0x200uLL);
  v12 = result;
  v29 = result;
  if ( result )
  {
    W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11);
    if ( v12 != v39 && v12 != v40 )
      PushW32ThreadLock((__int64)v12, v38, (__int64)Win32FreePool);
    if ( !a4 )
      goto LABEL_27;
    *((_DWORD *)v12 + 10) = a3;
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v12, a4, a3, (void **)v12 + 6) < 0 )
      goto LABEL_27;
    v14 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13);
    v34 = *(_QWORD *)(v14 + 408);
    *(_QWORD *)(v14 + 408) = &v34;
    v35 = a1;
    if ( a1 )
      _InterlockedAdd(a1 + 2, 1u);
    v15 = *(_QWORD *)(v8 + 472);
    v30 = *(_OWORD *)(v15 + 64);
    v31 = *(_QWORD *)(v15 + 80);
    *(_QWORD *)(v15 + 72) = v9;
    if ( a1 )
      v16 = *(_QWORD *)a1;
    else
      v16 = 0LL;
    *(_QWORD *)(*(_QWORD *)(v8 + 472) + 64LL) = v16;
    if ( a1 )
      v17 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 224LL);
    else
      v17 = 0LL;
    *(_QWORD *)(*(_QWORD *)(v8 + 472) + 80LL) = v17;
    if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
      (ReleaseAndReacquirePerObjectLocks *)v27,
      gdwInAtomicOperation);
    LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v26);
    EtwTraceBeginCallback(1LL);
    *((_QWORD *)v12 + 2) = 0LL;
    v18 = KeUserModeCallback(1LL, v12, *(unsigned int *)v12, &v32, v28);
    EtwTraceEndCallback(1LL);
    LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v26);
    ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v27, v19);
    ThreadUnlock1(v21, v20, v22);
    v23 = *(_QWORD *)(v8 + 472);
    *(_OWORD *)(v23 + 64) = v30;
    *(_QWORD *)(v23 + 80) = v31;
    if ( v18 < 0 )
      goto LABEL_27;
    if ( v28[0] == 24 )
    {
      v24 = (__int64 *)v32;
      if ( v32 + 8 < v32 || v32 + 8 > MmUserProbeAddress )
        v24 = (__int64 *)MmUserProbeAddress;
      v25 = *v24;
      v37 = *v24;
    }
    else
    {
LABEL_27:
      v25 = 0LL;
    }
    if ( v12 != v39 && v12 != v40 )
    {
      if ( *((_QWORD *)v12 + 4) )
      {
        RegionSize = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v12 + 4, &RegionSize, 0x8000u);
      }
      PopAndFreeAlwaysW32ThreadLock((__int64)v38);
    }
    return (unsigned __int8 *)v25;
  }
  return result;
}
