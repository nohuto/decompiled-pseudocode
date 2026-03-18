/*
 * XREFs of SfnINOUTLPUAHMEASUREMENUITEM @ 0x1C010BC30
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00ADED4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADF74 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADFAC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00AE614 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     _ServerFixupMenuDC @ 0x1C010C914 (_ServerFixupMenuDC.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

__int64 __fastcall SfnINOUTLPUAHMEASUREMENUITEM(
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
  __int64 v13; // r14
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r15
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // ebx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rcx
  __int64 *v33; // rcx
  __int64 v34; // rsi
  __int64 v35; // rdx
  _OWORD *v36; // rcx
  __int128 v37; // xmm1
  __int128 v38; // xmm2
  __int128 v39; // xmm3
  __int128 v40; // xmm4
  __int128 v41; // xmm5
  __int128 v42; // xmm6
  char v44; // [rsp+30h] [rbp-188h] BYREF
  _BYTE v45[3]; // [rsp+31h] [rbp-187h] BYREF
  _DWORD v46[5]; // [rsp+34h] [rbp-184h] BYREF
  unsigned __int64 v47; // [rsp+48h] [rbp-170h] BYREF
  __int64 v48; // [rsp+50h] [rbp-168h]
  __int64 v49; // [rsp+60h] [rbp-158h] BYREF
  _QWORD *v50; // [rsp+68h] [rbp-150h]
  __int64 v51; // [rsp+70h] [rbp-148h]
  __int128 v52; // [rsp+78h] [rbp-140h]
  __int64 v53; // [rsp+88h] [rbp-130h]
  __int64 v54; // [rsp+90h] [rbp-128h]
  __int128 v55; // [rsp+B8h] [rbp-100h]
  __int64 v56; // [rsp+D0h] [rbp-E8h] BYREF
  int v57; // [rsp+D8h] [rbp-E0h]
  int v58; // [rsp+DCh] [rbp-DCh]
  __int64 v59; // [rsp+E0h] [rbp-D8h]
  __int128 v60; // [rsp+E8h] [rbp-D0h]
  __int128 v61; // [rsp+F8h] [rbp-C0h]
  __int128 v62; // [rsp+108h] [rbp-B0h]
  __int128 v63; // [rsp+118h] [rbp-A0h]
  __int128 v64; // [rsp+128h] [rbp-90h]
  __int128 v65; // [rsp+138h] [rbp-80h]
  __int128 v66; // [rsp+148h] [rbp-70h]
  __int64 v67; // [rsp+158h] [rbp-60h]
  __int64 v68; // [rsp+160h] [rbp-58h]

  v10 = a2;
  v49 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  v52 = 0uLL;
  v53 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v14 = 0LL;
  v58 = 0;
  v48 = 0LL;
  v18 = ServerFixupMenuDC(*(HDC *)(a4 + 40));
  if ( v18 )
  {
    v48 = *(_QWORD *)(a4 + 40);
    *(_QWORD *)(a4 + 40) = v18;
  }
  v56 = v14;
  v57 = v10 & 0x1FFFF;
  v59 = a3;
  v60 = *(_OWORD *)a4;
  v61 = *(_OWORD *)(a4 + 16);
  v62 = *(_OWORD *)(a4 + 32);
  v63 = *(_OWORD *)(a4 + 48);
  v64 = *(_OWORD *)(a4 + 64);
  v65 = *(_OWORD *)(a4 + 80);
  v66 = *(_OWORD *)(a4 + 96);
  DWORD1(v61) = 0;
  DWORD1(v63) = 0;
  v67 = a5;
  v68 = a6;
  v19 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15, v16, v17);
  v49 = *(_QWORD *)(v19 + 408);
  *(_QWORD *)(v19 + 408) = &v49;
  v50 = a1;
  if ( a1 )
    HMLockObject(a1);
  v22 = *(_QWORD *)(v13 + 472);
  v55 = *(_OWORD *)(v22 + 64);
  v52 = v55;
  v53 = *(_QWORD *)(v22 + 80);
  *(_QWORD *)(v22 + 72) = v14;
  if ( a1 )
    v23 = *a1;
  else
    v23 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 472) + 64LL) = v23;
  if ( a1 )
    v24 = *(_QWORD *)(a1[5] + 224LL);
  else
    v24 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 472) + 80LL) = v24;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v45,
    gdwInAtomicOperation,
    v20,
    v21);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v44);
  EtwTraceBeginCallback(109LL);
  v25 = KeUserModeCallback(109LL, &v56, 152LL, &v47, v46);
  EtwTraceEndCallback(109LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v44);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v45,
    v26,
    v27,
    v28);
  ThreadUnlock1(v30, v29, v31);
  v32 = *(_QWORD *)(v13 + 472);
  *(_OWORD *)(v32 + 64) = v55;
  *(_QWORD *)(v32 + 80) = v53;
  if ( v25 < 0 || v46[0] != 24 )
    return 0LL;
  v33 = (__int64 *)v47;
  if ( v47 + 8 < v47 || v47 + 8 > MmUserProbeAddress )
    v33 = (__int64 *)MmUserProbeAddress;
  v34 = *v33;
  v54 = *v33;
  if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
    goto LABEL_26;
  v35 = *(_QWORD *)(gptiCurrent + 504LL);
  if ( v35 )
  {
    if ( (*(_DWORD *)(v35 + 84) & 1) != 0 && *(_QWORD *)(v35 + 96) == a4 )
      return 0LL;
  }
  v36 = *(_OWORD **)(v47 + 16);
  if ( v36 + 7 < v36 || (unsigned __int64)(v36 + 7) > MmUserProbeAddress )
    v36 = (_OWORD *)MmUserProbeAddress;
  v37 = v36[1];
  v38 = v36[2];
  v39 = v36[3];
  v40 = v36[4];
  v41 = v36[5];
  v42 = v36[6];
  *(_OWORD *)a4 = *v36;
  *(_OWORD *)(a4 + 16) = v37;
  *(_OWORD *)(a4 + 32) = v38;
  *(_OWORD *)(a4 + 48) = v39;
  *(_OWORD *)(a4 + 64) = v40;
  *(_OWORD *)(a4 + 80) = v41;
  *(_OWORD *)(a4 + 96) = v42;
LABEL_26:
  if ( v18 )
  {
    _ReleaseDC(v18);
    if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
      *(_QWORD *)(a4 + 40) = v48;
  }
  return v34;
}
