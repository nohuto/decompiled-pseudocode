/*
 * XREFs of SfnPOPTINLPUINT @ 0x1C01DEB00
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
 *     memset @ 0x1C013D6C0 (memset.c)
 */

unsigned __int8 *__fastcall SfnPOPTINLPUINT(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6)
{
  unsigned int v8; // r13d
  unsigned __int8 *v10; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // r14
  __int64 v13; // rsi
  unsigned int v14; // edx
  unsigned __int64 v15; // rax
  unsigned int v16; // ecx
  unsigned __int8 *result; // rax
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // edi
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rcx
  __int64 *v30; // rcx
  __int64 v31; // rdi
  char v32; // [rsp+30h] [rbp-358h] BYREF
  _BYTE v33[3]; // [rsp+31h] [rbp-357h] BYREF
  unsigned int v34; // [rsp+34h] [rbp-354h]
  unsigned __int8 *v35; // [rsp+38h] [rbp-350h]
  _DWORD v36[6]; // [rsp+40h] [rbp-348h] BYREF
  __int128 v37; // [rsp+58h] [rbp-330h]
  __int64 v38; // [rsp+68h] [rbp-320h]
  unsigned __int64 v39; // [rsp+78h] [rbp-310h] BYREF
  ULONG_PTR RegionSize; // [rsp+80h] [rbp-308h] BYREF
  __int64 v41; // [rsp+88h] [rbp-300h] BYREF
  volatile signed __int32 *v42; // [rsp+90h] [rbp-2F8h]
  __int64 v43; // [rsp+98h] [rbp-2F0h]
  __int64 v44; // [rsp+A0h] [rbp-2E8h]
  _QWORD v45[4]; // [rsp+C0h] [rbp-2C8h] BYREF
  _DWORD v46[24]; // [rsp+E0h] [rbp-2A8h] BYREF
  unsigned __int8 v47[512]; // [rsp+140h] [rbp-248h] BYREF

  v8 = a2;
  v10 = (unsigned __int8 *)v46;
  v41 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  v37 = 0uLL;
  v38 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v12 = ThreadWin32Thread;
  if ( a1 )
    v13 = *((_QWORD *)a1 + 5) - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v13 = 0LL;
  if ( a4 )
  {
    v14 = 1;
    v15 = 4LL * (unsigned int)a3;
    v16 = -1;
    if ( v15 <= 0xFFFFFFFF )
      v16 = 4 * a3;
    v34 = v16;
    if ( v15 > 0xFFFFFFFF )
      goto LABEL_38;
  }
  else
  {
    v16 = 0;
    v34 = 0;
    v14 = 0;
  }
  if ( v14 )
  {
    result = AllocCallbackMessage(88, v14, v16, v47, 1, 0x200uLL);
    v10 = result;
    v35 = result;
    if ( !result )
      return result;
  }
  else
  {
    v10 = (unsigned __int8 *)v46;
    v35 = (unsigned __int8 *)v46;
    memset(v46, 0, 0x58uLL);
    v46[0] = 88;
  }
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v18);
  if ( v10 != (unsigned __int8 *)v46 && v10 != v47 )
    PushW32ThreadLock((__int64)v10, v45, (__int64)Win32FreePool);
  *((_QWORD *)v10 + 5) = v13;
  *((_DWORD *)v10 + 12) = v8;
  *((_QWORD *)v10 + 7) = a3;
  if ( a4 )
  {
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v10, a4, v34, (void **)v10 + 8) < 0 )
      goto LABEL_38;
  }
  else
  {
    *((_QWORD *)v10 + 8) = 0LL;
  }
  *((_QWORD *)v10 + 9) = a5;
  *((_QWORD *)v10 + 10) = a6;
  v20 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v19);
  v41 = *(_QWORD *)(v20 + 408);
  *(_QWORD *)(v20 + 408) = &v41;
  v42 = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v21 = *(_QWORD *)(v12 + 472);
  v37 = *(_OWORD *)(v21 + 64);
  v38 = *(_QWORD *)(v21 + 80);
  *(_QWORD *)(v21 + 72) = v13;
  if ( a1 )
    v22 = *(_QWORD *)a1;
  else
    v22 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v12 + 472) + 64LL) = v22;
  if ( a1 )
    v23 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 224LL);
  else
    v23 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v12 + 472) + 80LL) = v23;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v33,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v32);
  EtwTraceBeginCallback(36LL);
  *((_QWORD *)v10 + 2) = 0LL;
  v24 = KeUserModeCallback(36LL, v10, *(unsigned int *)v10, &v39, v36);
  EtwTraceEndCallback(36LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v32);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v33, v25);
  ThreadUnlock1(v27, v26, v28);
  v29 = *(_QWORD *)(v12 + 472);
  *(_OWORD *)(v29 + 64) = v37;
  *(_QWORD *)(v29 + 80) = v38;
  if ( v24 >= 0 && v36[0] == 24 )
  {
    v30 = (__int64 *)v39;
    if ( v39 + 8 < v39 || v39 + 8 > MmUserProbeAddress )
      v30 = (__int64 *)MmUserProbeAddress;
    v31 = *v30;
    v44 = *v30;
    goto LABEL_39;
  }
LABEL_38:
  v31 = 0LL;
LABEL_39:
  if ( v10 != (unsigned __int8 *)v46 && v10 != v47 )
  {
    if ( *((_QWORD *)v10 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v10 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v45);
  }
  return (unsigned __int8 *)v31;
}
