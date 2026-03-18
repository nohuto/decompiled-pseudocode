/*
 * XREFs of SfnOUTLPCOMBOBOXINFO @ 0x1C00AF4E0
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

__int64 __fastcall SfnOUTLPCOMBOBOXINFO(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int128 *a4,
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
  __int128 *v35; // rcx
  __int128 v36; // xmm1
  __int128 v37; // xmm2
  __int128 v38; // xmm3
  char v40; // [rsp+30h] [rbp-138h] BYREF
  _BYTE v41[3]; // [rsp+31h] [rbp-137h] BYREF
  _DWORD v42[5]; // [rsp+34h] [rbp-134h] BYREF
  unsigned __int64 v43; // [rsp+48h] [rbp-120h] BYREF
  __int64 v44; // [rsp+58h] [rbp-110h] BYREF
  _QWORD *v45; // [rsp+60h] [rbp-108h]
  __int64 v46; // [rsp+68h] [rbp-100h]
  __int128 v47; // [rsp+70h] [rbp-F8h]
  __int64 v48; // [rsp+80h] [rbp-E8h]
  __int64 v49; // [rsp+88h] [rbp-E0h]
  __int128 v50; // [rsp+B0h] [rbp-B8h]
  __int64 v51; // [rsp+C0h] [rbp-A8h] BYREF
  int v52; // [rsp+C8h] [rbp-A0h]
  int v53; // [rsp+CCh] [rbp-9Ch]
  __int64 v54; // [rsp+D0h] [rbp-98h]
  __int128 v55; // [rsp+D8h] [rbp-90h]
  __int128 v56; // [rsp+E8h] [rbp-80h]
  __int128 v57; // [rsp+F8h] [rbp-70h]
  __int128 v58; // [rsp+108h] [rbp-60h]
  __int64 v59; // [rsp+118h] [rbp-50h]
  __int64 v60; // [rsp+120h] [rbp-48h]

  v10 = a2;
  v44 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0uLL;
  v48 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, (__int64)a4);
  v16 = ThreadWin32Thread;
  if ( a1 )
    v17 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v17 = 0LL;
  v53 = 0;
  v51 = v17;
  v52 = v10;
  v54 = a3;
  v55 = *a4;
  v56 = a4[1];
  v57 = a4[2];
  v58 = a4[3];
  v59 = a5;
  v60 = a6;
  v18 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13, v14, v15);
  v44 = *(_QWORD *)(v18 + 408);
  *(_QWORD *)(v18 + 408) = &v44;
  v45 = a1;
  if ( a1 )
    HMLockObject(a1);
  v21 = *(_QWORD *)(v16 + 472);
  v50 = *(_OWORD *)(v21 + 64);
  v47 = v50;
  v48 = *(_QWORD *)(v21 + 80);
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
    (ReleaseAndReacquirePerObjectLocks *)v41,
    gdwInAtomicOperation,
    v19,
    v20);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v40);
  EtwTraceBeginCallback(104LL);
  v24 = KeUserModeCallback(104LL, &v51, 104LL, &v43, v42);
  EtwTraceEndCallback(104LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v40);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v41,
    v25,
    v26,
    v27);
  ThreadUnlock1(v29, v28, v30);
  v31 = *(_QWORD *)(v16 + 472);
  *(_OWORD *)(v31 + 64) = v50;
  *(_QWORD *)(v31 + 80) = v48;
  if ( v24 >= 0 && v42[0] == 24 )
  {
    v32 = (__int64 *)v43;
    if ( v43 + 8 < v43 || v43 + 8 > MmUserProbeAddress )
      v32 = (__int64 *)MmUserProbeAddress;
    v33 = *v32;
    v49 = *v32;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v33;
    v34 = *(_QWORD *)(gptiCurrent + 504LL);
    if ( !v34 || (*(_DWORD *)(v34 + 84) & 1) == 0 || *(__int128 **)(v34 + 96) != a4 )
    {
      v35 = *(__int128 **)(v43 + 16);
      if ( v35 + 4 < v35 || (unsigned __int64)(v35 + 4) > MmUserProbeAddress )
        v35 = (__int128 *)MmUserProbeAddress;
      v36 = v35[1];
      v37 = v35[2];
      v38 = v35[3];
      *a4 = *v35;
      a4[1] = v36;
      a4[2] = v37;
      a4[3] = v38;
      return v33;
    }
  }
  return 0LL;
}
