/*
 * XREFs of SfnOUTLPSCROLLBARINFO @ 0x1C021B9F0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00ADED4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADF74 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADFAC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00AE614 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

__int64 __fastcall SfnOUTLPSCROLLBARINFO(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  int v10; // r12d
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // ebx
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rcx
  __int64 *v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rdx
  ULONG64 v35; // rcx
  __int128 v36; // xmm3
  __int128 v37; // xmm4
  __int64 v38; // xmm0_8
  int v39; // eax
  char v41; // [rsp+30h] [rbp-138h] BYREF
  _BYTE v42[3]; // [rsp+31h] [rbp-137h] BYREF
  _DWORD v43[5]; // [rsp+34h] [rbp-134h] BYREF
  unsigned __int64 v44; // [rsp+48h] [rbp-120h] BYREF
  __int64 v45; // [rsp+58h] [rbp-110h] BYREF
  _QWORD *v46; // [rsp+60h] [rbp-108h]
  __int64 v47; // [rsp+68h] [rbp-100h]
  __int128 v48; // [rsp+70h] [rbp-F8h]
  __int64 v49; // [rsp+80h] [rbp-E8h]
  __int64 v50; // [rsp+88h] [rbp-E0h]
  __int128 v51; // [rsp+B0h] [rbp-B8h]
  __int64 v52; // [rsp+C0h] [rbp-A8h] BYREF
  int v53; // [rsp+C8h] [rbp-A0h]
  int v54; // [rsp+CCh] [rbp-9Ch]
  __int64 v55; // [rsp+D0h] [rbp-98h]
  __int128 v56; // [rsp+D8h] [rbp-90h]
  __int128 v57; // [rsp+E8h] [rbp-80h]
  __int128 v58; // [rsp+F8h] [rbp-70h]
  __int64 v59; // [rsp+108h] [rbp-60h]
  int v60; // [rsp+110h] [rbp-58h]
  int v61; // [rsp+114h] [rbp-54h]
  __int64 v62; // [rsp+118h] [rbp-50h]
  __int64 v63; // [rsp+120h] [rbp-48h]

  v10 = a2;
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v48 = 0uLL;
  v49 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  v16 = ThreadWin32Thread;
  if ( a1 )
    v17 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v17 = 0LL;
  v54 = 0;
  v61 = 0;
  v52 = v17;
  v53 = v10;
  v55 = a3;
  v56 = *(_OWORD *)a4;
  v57 = *(_OWORD *)(a4 + 16);
  v58 = *(_OWORD *)(a4 + 32);
  v59 = *(_QWORD *)(a4 + 48);
  v60 = *(_DWORD *)(a4 + 56);
  v62 = a5;
  v63 = a6;
  v18 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13, v14, v15);
  v45 = *(_QWORD *)(v18 + 408);
  *(_QWORD *)(v18 + 408) = &v45;
  v46 = a1;
  if ( a1 )
    HMLockObject(a1);
  v21 = *(_QWORD *)(v16 + 472);
  v51 = *(_OWORD *)(v21 + 64);
  v48 = v51;
  v49 = *(_QWORD *)(v21 + 80);
  *(_QWORD *)(v21 + 72) = v17;
  if ( a1 )
    v22 = *a1;
  else
    v22 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v16 + 472) + 64LL) = v22;
  if ( a1 )
    v23 = *(_QWORD *)(a1[5] + 224LL);
  else
    v23 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v16 + 472) + 80LL) = v23;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v42,
    gdwInAtomicOperation,
    v19,
    v20);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v41);
  EtwTraceBeginCallback(105LL);
  v24 = KeUserModeCallback(105LL, &v52, 104LL, &v44, v43);
  EtwTraceEndCallback(105LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v41);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v42,
    v25,
    v26,
    v27);
  ThreadUnlock1(v29, v28, v30);
  v31 = *(_QWORD *)(v16 + 472);
  *(_OWORD *)(v31 + 64) = v51;
  *(_QWORD *)(v31 + 80) = v49;
  if ( v24 >= 0 && v43[0] == 24 )
  {
    v32 = (__int64 *)v44;
    if ( v44 + 8 < v44 || v44 + 8 > MmUserProbeAddress )
      v32 = (__int64 *)MmUserProbeAddress;
    v33 = *v32;
    v50 = *v32;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v33;
    v34 = *(_QWORD *)(gptiCurrent + 504LL);
    if ( !v34 || (*(_DWORD *)(v34 + 84) & 1) == 0 || *(_QWORD *)(v34 + 96) != a4 )
    {
      v35 = *(_QWORD *)(v44 + 16);
      if ( v35 + 60 < v35 || v35 + 60 > MmUserProbeAddress )
        v35 = MmUserProbeAddress;
      v36 = *(_OWORD *)(v35 + 16);
      v37 = *(_OWORD *)(v35 + 32);
      v38 = *(_QWORD *)(v35 + 48);
      v39 = *(_DWORD *)(v35 + 56);
      *(_OWORD *)a4 = *(_OWORD *)v35;
      *(_OWORD *)(a4 + 16) = v36;
      *(_OWORD *)(a4 + 32) = v37;
      *(_QWORD *)(a4 + 48) = v38;
      *(_DWORD *)(a4 + 56) = v39;
      return v33;
    }
  }
  return 0LL;
}
