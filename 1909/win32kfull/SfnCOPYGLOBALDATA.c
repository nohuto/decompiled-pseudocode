/*
 * XREFs of SfnCOPYGLOBALDATA @ 0x1C0214D80
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00A9FB8 (xxxRealDefWindowProc.c)
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

unsigned __int8 *__fastcall SfnCOPYGLOBALDATA(_QWORD *a1, __int64 a2, __int64 a3, char *a4)
{
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // r14
  __int64 v11; // rsi
  unsigned __int8 *result; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  unsigned __int8 *v15; // rbx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // edi
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rcx
  __int64 *v30; // rcx
  __int64 v31; // rdi
  PVOID *v32; // rdx
  char v33; // [rsp+30h] [rbp-338h] BYREF
  _BYTE v34[3]; // [rsp+31h] [rbp-337h] BYREF
  _DWORD v35[5]; // [rsp+34h] [rbp-334h] BYREF
  unsigned __int8 *v36; // [rsp+48h] [rbp-320h]
  unsigned __int64 v37; // [rsp+58h] [rbp-310h] BYREF
  ULONG_PTR RegionSize; // [rsp+60h] [rbp-308h] BYREF
  __int64 v39; // [rsp+68h] [rbp-300h] BYREF
  _QWORD *v40; // [rsp+70h] [rbp-2F8h]
  __int64 v41; // [rsp+78h] [rbp-2F0h]
  __int128 v42; // [rsp+80h] [rbp-2E8h]
  __int64 v43; // [rsp+90h] [rbp-2D8h]
  _QWORD v44[7]; // [rsp+98h] [rbp-2D0h] BYREF
  __int128 v45; // [rsp+D0h] [rbp-298h]
  unsigned __int8 v46[56]; // [rsp+E0h] [rbp-288h] BYREF
  unsigned __int8 v47[512]; // [rsp+120h] [rbp-248h] BYREF

  memset(v46, 0, sizeof(v46));
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  v42 = 0uLL;
  v43 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v7, v8);
  v10 = ThreadWin32Thread;
  if ( a1 )
    v11 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v11 = 0LL;
  result = AllocCallbackMessage(56, 1u, a3, v47, 1, 0x200uLL);
  v15 = result;
  v36 = result;
  if ( result )
  {
    W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13, v14);
    memset(v44, 0, 24);
    if ( v15 != v46 && v15 != v47 )
      PushW32ThreadLock((__int64)v15, v44, (__int64)Win32FreePool);
    if ( !a4 )
      goto LABEL_27;
    *((_DWORD *)v15 + 10) = a3;
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v15, a4, a3, (void **)v15 + 6) < 0 )
      goto LABEL_27;
    v18 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17, v16);
    v39 = *(_QWORD *)(v18 + 408);
    *(_QWORD *)(v18 + 408) = &v39;
    v40 = a1;
    if ( a1 )
      HMLockObject(a1);
    v20 = *(_QWORD *)(v10 + 472);
    v45 = *(_OWORD *)(v20 + 64);
    v42 = v45;
    v43 = *(_QWORD *)(v20 + 80);
    *(_QWORD *)(v20 + 72) = v11;
    if ( a1 )
      v21 = *a1;
    else
      v21 = 0LL;
    *(_QWORD *)(*(_QWORD *)(v10 + 472) + 64LL) = v21;
    if ( a1 )
      v22 = *(_QWORD *)(a1[5] + 224LL);
    else
      v22 = 0LL;
    *(_QWORD *)(*(_QWORD *)(v10 + 472) + 80LL) = v22;
    if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
      (ReleaseAndReacquirePerObjectLocks *)v34,
      gdwInAtomicOperation,
      v19);
    LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v33);
    EtwTraceBeginCallback(1LL);
    *((_QWORD *)v15 + 2) = 0LL;
    v23 = KeUserModeCallback(1LL, v15, *(unsigned int *)v15, &v37, v35);
    EtwTraceEndCallback(1LL);
    LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v33);
    ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
      (ReleaseAndReacquirePerObjectLocks *)v34,
      v24,
      v25);
    ThreadUnlock1(v27, v26, v28);
    v29 = *(_QWORD *)(v10 + 472);
    *(_OWORD *)(v29 + 64) = v45;
    *(_QWORD *)(v29 + 80) = v43;
    if ( v23 < 0 )
      goto LABEL_27;
    if ( v35[0] == 24 )
    {
      v30 = (__int64 *)v37;
      if ( v37 + 8 < v37 || v37 + 8 > MmUserProbeAddress )
        v30 = (__int64 *)MmUserProbeAddress;
      v31 = *v30;
      v44[3] = *v30;
    }
    else
    {
LABEL_27:
      v31 = 0LL;
    }
    if ( v15 != v46 && v15 != v47 )
    {
      v32 = (PVOID *)(v15 + 32);
      if ( *((_QWORD *)v15 + 4) )
      {
        RegionSize = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v32, &RegionSize, 0x8000u);
      }
      PopAndFreeAlwaysW32ThreadLock((__int64)v44, (__int64)v32, v16);
    }
    return (unsigned __int8 *)v31;
  }
  return result;
}
