/*
 * XREFs of SfnINLPHLPSTRUCT @ 0x1C01DB440
 * Callers:
 *     <none>
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

unsigned __int8 *__fastcall SfnINLPHLPSTRUCT(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 *a4,
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
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 *v27; // rcx
  __int64 v28; // rdi
  char v29; // [rsp+30h] [rbp-338h] BYREF
  _BYTE v30[3]; // [rsp+31h] [rbp-337h] BYREF
  _DWORD v31[5]; // [rsp+34h] [rbp-334h] BYREF
  unsigned __int8 *v32; // [rsp+48h] [rbp-320h]
  __int128 v33; // [rsp+50h] [rbp-318h]
  __int64 v34; // [rsp+60h] [rbp-308h]
  unsigned __int64 v35; // [rsp+70h] [rbp-2F8h] BYREF
  ULONG_PTR RegionSize; // [rsp+78h] [rbp-2F0h] BYREF
  __int64 v37; // [rsp+80h] [rbp-2E8h] BYREF
  volatile signed __int32 *v38; // [rsp+88h] [rbp-2E0h]
  __int64 v39; // [rsp+90h] [rbp-2D8h]
  __int64 v40; // [rsp+98h] [rbp-2D0h]
  _QWORD v41[3]; // [rsp+B8h] [rbp-2B0h] BYREF
  unsigned __int8 v42[96]; // [rsp+D0h] [rbp-298h] BYREF
  unsigned __int8 v43[512]; // [rsp+130h] [rbp-238h] BYREF

  v8 = a2;
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v33 = 0uLL;
  v34 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v11 = ThreadWin32Thread;
  if ( a1 )
    v12 = *((_QWORD *)a1 + 5) - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v12 = 0LL;
  result = AllocCallbackMessage(88, 1u, *a4, v43, 1, 0x200uLL);
  v15 = result;
  v32 = result;
  if ( result )
  {
    W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14);
    if ( v15 != v42 && v15 != v43 )
      PushW32ThreadLock((__int64)v15, v41, (__int64)Win32FreePool);
    *((_QWORD *)v15 + 5) = v12;
    *((_DWORD *)v15 + 12) = v8;
    *((_QWORD *)v15 + 7) = a3;
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v15, (unsigned __int64)a4, *a4, (void **)v15 + 8) < 0 )
      goto LABEL_26;
    *((_QWORD *)v15 + 9) = a5;
    *((_QWORD *)v15 + 10) = a6;
    v17 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v16);
    v37 = *(_QWORD *)(v17 + 408);
    *(_QWORD *)(v17 + 408) = &v37;
    v38 = a1;
    if ( a1 )
      _InterlockedIncrement(a1 + 2);
    v18 = *(_QWORD *)(v11 + 472);
    v33 = *(_OWORD *)(v18 + 64);
    v34 = *(_QWORD *)(v18 + 80);
    *(_QWORD *)(v18 + 72) = v12;
    if ( a1 )
      v19 = *(_QWORD *)a1;
    else
      v19 = 0LL;
    *(_QWORD *)(*(_QWORD *)(v11 + 472) + 64LL) = v19;
    if ( a1 )
      v20 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 224LL);
    else
      v20 = 0LL;
    *(_QWORD *)(*(_QWORD *)(v11 + 472) + 80LL) = v20;
    if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
      (ReleaseAndReacquirePerObjectLocks *)v30,
      gdwInAtomicOperation);
    LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v29);
    EtwTraceBeginCallback(14LL);
    *((_QWORD *)v15 + 2) = 0LL;
    v21 = KeUserModeCallback(14LL, v15, *(unsigned int *)v15, &v35, v31);
    EtwTraceEndCallback(14LL);
    LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v29);
    ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v30, v22);
    ThreadUnlock1(v24, v23, v25);
    v26 = *(_QWORD *)(v11 + 472);
    *(_OWORD *)(v26 + 64) = v33;
    *(_QWORD *)(v26 + 80) = v34;
    if ( v21 < 0 )
      goto LABEL_26;
    if ( v31[0] == 24 )
    {
      v27 = (__int64 *)v35;
      if ( v35 + 8 < v35 || v35 + 8 > MmUserProbeAddress )
        v27 = (__int64 *)MmUserProbeAddress;
      v28 = *v27;
      v40 = *v27;
    }
    else
    {
LABEL_26:
      v28 = 0LL;
    }
    if ( v15 != v42 && v15 != v43 )
    {
      if ( *((_QWORD *)v15 + 4) )
      {
        RegionSize = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v15 + 4, &RegionSize, 0x8000u);
      }
      PopAndFreeAlwaysW32ThreadLock((__int64)v41);
    }
    return (unsigned __int8 *)v28;
  }
  return result;
}
