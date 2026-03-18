/*
 * XREFs of SfnINOUTLPMEASUREITEMSTRUCT @ 0x1C012C4C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C0020920 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00209AC (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020BF8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020C50 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall SfnINOUTLPMEASUREITEMSTRUCT(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
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
  __int64 v29; // rdx
  _OWORD *v30; // rcx
  __int128 v31; // xmm1
  char v32; // [rsp+30h] [rbp-108h] BYREF
  _BYTE v33[3]; // [rsp+31h] [rbp-107h] BYREF
  _DWORD v34[5]; // [rsp+34h] [rbp-104h] BYREF
  unsigned __int64 v35; // [rsp+48h] [rbp-F0h] BYREF
  __int128 v36; // [rsp+50h] [rbp-E8h]
  __int64 v37; // [rsp+60h] [rbp-D8h]
  __int64 v38; // [rsp+70h] [rbp-C8h] BYREF
  volatile signed __int32 *v39; // [rsp+78h] [rbp-C0h]
  __int64 v40; // [rsp+80h] [rbp-B8h]
  __int64 v41; // [rsp+88h] [rbp-B0h]
  _QWORD v42[10]; // [rsp+B0h] [rbp-88h] BYREF

  v10 = a2;
  v38 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v36 = 0uLL;
  v37 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = *((_QWORD *)a1 + 5) - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v14 = 0LL;
  memset(v42, 0, 0x48uLL);
  v42[0] = v14;
  LODWORD(v42[1]) = v10 & 0x1FFFF;
  v42[2] = a3;
  *(_DWORD *)(a4 + 20) = 0;
  *(_OWORD *)&v42[3] = *(_OWORD *)a4;
  *(_OWORD *)&v42[5] = *(_OWORD *)(a4 + 16);
  v42[7] = a5;
  v42[8] = a6;
  v16 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15);
  v38 = *(_QWORD *)(v16 + 408);
  *(_QWORD *)(v16 + 408) = &v38;
  v39 = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v17 = *(_QWORD *)(v13 + 472);
  v36 = *(_OWORD *)(v17 + 64);
  v37 = *(_QWORD *)(v17 + 80);
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
    (ReleaseAndReacquirePerObjectLocks *)v33,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v32);
  EtwTraceBeginCallback(16LL);
  v20 = KeUserModeCallback(16LL, v42, 72LL, &v35, v34);
  EtwTraceEndCallback(16LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v32);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v33, v21);
  ThreadUnlock1(v23, v22, v24);
  v25 = *(_QWORD *)(v13 + 472);
  *(_OWORD *)(v25 + 64) = v36;
  *(_QWORD *)(v25 + 80) = v37;
  if ( v20 >= 0 && v34[0] == 24 )
  {
    v26 = (__int64 *)v35;
    if ( v35 + 8 < v35 || v35 + 8 > MmUserProbeAddress )
      v26 = (__int64 *)MmUserProbeAddress;
    v27 = *v26;
    v41 = *v26;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v27;
    v29 = *(_QWORD *)(gptiCurrent + 504LL);
    if ( !v29 || (*(_DWORD *)(v29 + 84) & 1) == 0 || *(_QWORD *)(v29 + 96) != a4 )
    {
      v30 = *(_OWORD **)(v35 + 16);
      if ( v30 + 2 < v30 || (unsigned __int64)(v30 + 2) > MmUserProbeAddress )
        v30 = (_OWORD *)MmUserProbeAddress;
      v31 = v30[1];
      *(_OWORD *)a4 = *v30;
      *(_OWORD *)(a4 + 16) = v31;
      return v27;
    }
  }
  return 0LL;
}
