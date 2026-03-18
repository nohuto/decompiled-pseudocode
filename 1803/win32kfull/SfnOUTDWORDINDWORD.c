/*
 * XREFs of SfnOUTDWORDINDWORD @ 0x1C01DE780
 * Callers:
 *     <none>
 * Callees:
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C0020920 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00209AC (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020BF8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020C50 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall SfnOUTDWORDINDWORD(
        volatile signed __int32 *a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  int v10; // r15d
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // ebx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 *v26; // rcx
  __int64 v27; // r8
  _DWORD *v28; // rdx
  __int128 v30; // [rsp+48h] [rbp-D0h]
  __int64 v31; // [rsp+58h] [rbp-C0h]
  __int64 v32; // [rsp+70h] [rbp-A8h] BYREF
  volatile signed __int32 *v33; // [rsp+78h] [rbp-A0h]
  __int64 v34; // [rsp+80h] [rbp-98h]
  _QWORD v35[18]; // [rsp+88h] [rbp-90h] BYREF
  char v36; // [rsp+120h] [rbp+8h] BYREF
  char v37; // [rsp+128h] [rbp+10h] BYREF
  int v38; // [rsp+130h] [rbp+18h] BYREF
  unsigned __int64 v39; // [rsp+138h] [rbp+20h] BYREF

  v10 = a2;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = *((_QWORD *)a1 + 5) - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v14 = 0LL;
  memset(v35, 0, 0x30uLL);
  v35[0] = v14;
  LODWORD(v35[1]) = v10;
  v35[3] = a4;
  v35[4] = a5;
  v35[5] = a6;
  v16 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15);
  v32 = *(_QWORD *)(v16 + 408);
  *(_QWORD *)(v16 + 408) = &v32;
  v33 = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v17 = *(_QWORD *)(v13 + 472);
  v30 = *(_OWORD *)(v17 + 64);
  v31 = *(_QWORD *)(v17 + 80);
  *(_QWORD *)(v17 + 72) = v14;
  if ( a1 )
    v18 = *(_QWORD *)a1;
  else
    v18 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 472) + 64LL) = v18;
  if ( a1 )
    v19 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 224LL);
  else
    v19 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 472) + 80LL) = v19;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v36,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v37);
  EtwTraceBeginCallback(33LL);
  v20 = KeUserModeCallback(33LL, v35, 48LL, &v39, &v38);
  EtwTraceEndCallback(33LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v37);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v36, v21);
  ThreadUnlock1(v23, v22, v24);
  v25 = *(_QWORD *)(v13 + 472);
  *(_OWORD *)(v25 + 64) = v30;
  *(_QWORD *)(v25 + 80) = v31;
  if ( v20 < 0 || v38 != 24 )
    return 0LL;
  v26 = (__int64 *)v39;
  if ( v39 + 8 < v39 || v39 + 8 > MmUserProbeAddress )
    v26 = (__int64 *)MmUserProbeAddress;
  v27 = *v26;
  v35[6] = *v26;
  if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    v28 = *(_DWORD **)(v39 + 16);
    if ( (unsigned __int64)v28 >= MmUserProbeAddress )
      v28 = (_DWORD *)MmUserProbeAddress;
    *a3 = *v28;
  }
  return v27;
}
