/*
 * XREFs of SfnCOPYGLOBALDATA @ 0x1C02152C0
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0060288 (xxxRealDefWindowProc.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0096A50 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00ADED4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADF74 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADFAC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00AE614 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C00B25F4 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C00B2694 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

unsigned __int8 *__fastcall SfnCOPYGLOBALDATA(_QWORD *a1, __int64 a2, __int64 a3, char *a4)
{
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // r14
  __int64 v12; // rsi
  unsigned __int8 *result; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int8 *v17; // rbx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rcx
  int v27; // edi
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rcx
  __int64 *v35; // rcx
  __int64 v36; // rdi
  PVOID *v37; // rdx
  char v38; // [rsp+30h] [rbp-338h] BYREF
  _BYTE v39[3]; // [rsp+31h] [rbp-337h] BYREF
  _DWORD v40[5]; // [rsp+34h] [rbp-334h] BYREF
  unsigned __int8 *v41; // [rsp+48h] [rbp-320h]
  unsigned __int64 v42; // [rsp+58h] [rbp-310h] BYREF
  ULONG_PTR RegionSize; // [rsp+60h] [rbp-308h] BYREF
  __int64 v44; // [rsp+68h] [rbp-300h] BYREF
  _QWORD *v45; // [rsp+70h] [rbp-2F8h]
  __int64 v46; // [rsp+78h] [rbp-2F0h]
  __int128 v47; // [rsp+80h] [rbp-2E8h]
  __int64 v48; // [rsp+90h] [rbp-2D8h]
  _QWORD v49[7]; // [rsp+98h] [rbp-2D0h] BYREF
  __int128 v50; // [rsp+D0h] [rbp-298h]
  unsigned __int8 v51[56]; // [rsp+E0h] [rbp-288h] BYREF
  unsigned __int8 v52[512]; // [rsp+120h] [rbp-248h] BYREF

  memset(v51, 0, sizeof(v51));
  v44 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0uLL;
  v48 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v7, v8, v9);
  v11 = ThreadWin32Thread;
  if ( a1 )
    v12 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v12 = 0LL;
  result = AllocCallbackMessage(56, 1u, a3, v52, 1, 0x200uLL);
  v17 = result;
  v41 = result;
  if ( result )
  {
    W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14, v15, v16);
    memset(v49, 0, 24);
    if ( v17 != v51 && v17 != v52 )
      PushW32ThreadLock((__int64)v17, v49, (__int64)Win32FreePool, v19);
    if ( !a4 )
      goto LABEL_27;
    *((_DWORD *)v17 + 10) = a3;
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v17, a4, a3, (void **)v17 + 6) < 0 )
      goto LABEL_27;
    v21 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v20, v18, v19);
    v44 = *(_QWORD *)(v21 + 408);
    *(_QWORD *)(v21 + 408) = &v44;
    v45 = a1;
    if ( a1 )
      HMLockObject(a1);
    v24 = *(_QWORD *)(v11 + 472);
    v50 = *(_OWORD *)(v24 + 64);
    v47 = v50;
    v48 = *(_QWORD *)(v24 + 80);
    *(_QWORD *)(v24 + 72) = v12;
    if ( a1 )
      v25 = *a1;
    else
      v25 = 0LL;
    *(_QWORD *)(*(_QWORD *)(v11 + 472) + 64LL) = v25;
    if ( a1 )
      v26 = *(_QWORD *)(a1[5] + 224LL);
    else
      v26 = 0LL;
    *(_QWORD *)(*(_QWORD *)(v11 + 472) + 80LL) = v26;
    if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
      (ReleaseAndReacquirePerObjectLocks *)v39,
      gdwInAtomicOperation,
      v22,
      v23);
    LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v38);
    EtwTraceBeginCallback(1LL);
    *((_QWORD *)v17 + 2) = 0LL;
    v27 = KeUserModeCallback(1LL, v17, *(unsigned int *)v17, &v42, v40);
    EtwTraceEndCallback(1LL);
    LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v38);
    ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
      (ReleaseAndReacquirePerObjectLocks *)v39,
      v28,
      v29,
      v30);
    ThreadUnlock1(v32, v31, v33);
    v34 = *(_QWORD *)(v11 + 472);
    *(_OWORD *)(v34 + 64) = v50;
    *(_QWORD *)(v34 + 80) = v48;
    if ( v27 < 0 )
      goto LABEL_27;
    if ( v40[0] == 24 )
    {
      v35 = (__int64 *)v42;
      if ( v42 + 8 < v42 || v42 + 8 > MmUserProbeAddress )
        v35 = (__int64 *)MmUserProbeAddress;
      v36 = *v35;
      v49[3] = *v35;
    }
    else
    {
LABEL_27:
      v36 = 0LL;
    }
    if ( v17 != v51 && v17 != v52 )
    {
      v37 = (PVOID *)(v17 + 32);
      if ( *((_QWORD *)v17 + 4) )
      {
        RegionSize = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v37, &RegionSize, 0x8000u);
      }
      PopAndFreeAlwaysW32ThreadLock((__int64)v49, (__int64)v37, v18, v19);
    }
    return (unsigned __int8 *)v36;
  }
  return result;
}
