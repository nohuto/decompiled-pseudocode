/*
 * XREFs of SfnINPGESTURENOTIFYSTRUCT @ 0x1C021A6A0
 * Callers:
 *     <none>
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

unsigned __int8 *__fastcall SfnINPGESTURENOTIFYSTRUCT(
        _QWORD *a1,
        unsigned int a2,
        __int64 a3,
        char *a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v14; // r14
  __int64 v15; // rsi
  unsigned __int8 *result; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int8 *v20; // rbx
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rcx
  int v31; // edi
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rcx
  __int64 *v39; // rcx
  __int64 v40; // rdi
  PVOID *v41; // rdx
  char v42; // [rsp+30h] [rbp-348h] BYREF
  _BYTE v43[3]; // [rsp+31h] [rbp-347h] BYREF
  _DWORD v44[5]; // [rsp+34h] [rbp-344h] BYREF
  unsigned __int8 *v45; // [rsp+48h] [rbp-330h]
  unsigned __int64 v46; // [rsp+58h] [rbp-320h] BYREF
  ULONG_PTR RegionSize; // [rsp+60h] [rbp-318h] BYREF
  __int64 v48; // [rsp+68h] [rbp-310h] BYREF
  _QWORD *v49; // [rsp+70h] [rbp-308h]
  __int64 v50; // [rsp+78h] [rbp-300h]
  __int128 v51; // [rsp+80h] [rbp-2F8h]
  __int64 v52; // [rsp+90h] [rbp-2E8h]
  _QWORD v53[7]; // [rsp+98h] [rbp-2E0h] BYREF
  __int128 v54; // [rsp+D0h] [rbp-2A8h]
  unsigned __int8 v55[88]; // [rsp+E0h] [rbp-298h] BYREF
  unsigned __int8 v56[512]; // [rsp+140h] [rbp-238h] BYREF

  memset(v55, 0, sizeof(v55));
  v48 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  v51 = 0uLL;
  v52 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, v11, v12);
  v14 = ThreadWin32Thread;
  if ( a1 )
    v15 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v15 = 0LL;
  result = AllocCallbackMessage(88, 1u, *(unsigned int *)a4, v56, 1, 0x200uLL);
  v20 = result;
  v45 = result;
  if ( result )
  {
    W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17, v18, v19);
    memset(v53, 0, 24);
    if ( v20 != v55 && v20 != v56 )
      PushW32ThreadLock((__int64)v20, v53, (__int64)Win32FreePool, v21);
    *((_QWORD *)v20 + 5) = v15;
    *((_DWORD *)v20 + 12) = a2;
    *((_QWORD *)v20 + 7) = a3;
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v20, a4, *(_DWORD *)a4, (void **)v20 + 8) < 0 )
      goto LABEL_26;
    *((_QWORD *)v20 + 9) = a5;
    *((_QWORD *)v20 + 10) = a6;
    v25 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22, v23, v24);
    v48 = *(_QWORD *)(v25 + 408);
    *(_QWORD *)(v25 + 408) = &v48;
    v49 = a1;
    if ( a1 )
      HMLockObject(a1);
    v28 = *(_QWORD *)(v14 + 472);
    v54 = *(_OWORD *)(v28 + 64);
    v51 = v54;
    v52 = *(_QWORD *)(v28 + 80);
    *(_QWORD *)(v28 + 72) = v15;
    if ( a1 )
      v29 = *a1;
    else
      v29 = 0LL;
    *(_QWORD *)(*(_QWORD *)(v14 + 472) + 64LL) = v29;
    if ( a1 )
      v30 = *(_QWORD *)(a1[5] + 224LL);
    else
      v30 = 0LL;
    *(_QWORD *)(*(_QWORD *)(v14 + 472) + 80LL) = v30;
    if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
      (ReleaseAndReacquirePerObjectLocks *)v43,
      gdwInAtomicOperation,
      v26,
      v27);
    LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v42);
    EtwTraceBeginCallback(114LL);
    *((_QWORD *)v20 + 2) = 0LL;
    v31 = KeUserModeCallback(114LL, v20, *(unsigned int *)v20, &v46, v44);
    EtwTraceEndCallback(114LL);
    LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v42);
    ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
      (ReleaseAndReacquirePerObjectLocks *)v43,
      v32,
      v33,
      v34);
    ThreadUnlock1(v36, v35, v37);
    v38 = *(_QWORD *)(v14 + 472);
    *(_OWORD *)(v38 + 64) = v54;
    *(_QWORD *)(v38 + 80) = v52;
    if ( v31 < 0 )
      goto LABEL_26;
    if ( v44[0] == 24 )
    {
      v39 = (__int64 *)v46;
      if ( v46 + 8 < v46 || v46 + 8 > MmUserProbeAddress )
        v39 = (__int64 *)MmUserProbeAddress;
      v40 = *v39;
      v53[3] = *v39;
    }
    else
    {
LABEL_26:
      v40 = 0LL;
    }
    if ( v20 != v55 && v20 != v56 )
    {
      v41 = (PVOID *)(v20 + 32);
      if ( *((_QWORD *)v20 + 4) )
      {
        RegionSize = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v41, &RegionSize, 0x8000u);
      }
      PopAndFreeAlwaysW32ThreadLock((__int64)v53, (__int64)v41, v23, v24);
    }
    return (unsigned __int8 *)v40;
  }
  return result;
}
