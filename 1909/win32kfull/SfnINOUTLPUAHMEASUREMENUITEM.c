/*
 * XREFs of SfnINOUTLPUAHMEASUREMENUITEM @ 0x1C00E5EB0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004ECF4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004ED94 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004EDCC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004F434 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     _ServerFixupMenuDC @ 0x1C00E6B94 (_ServerFixupMenuDC.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

__int64 __fastcall SfnINOUTLPUAHMEASUREMENUITEM(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        HDC *a4,
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
  __int64 v17; // r15
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // ebx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rcx
  __int64 *v30; // rcx
  __int64 v31; // rsi
  __int64 v32; // rdx
  _OWORD *v33; // rcx
  __int128 v34; // xmm1
  __int128 v35; // xmm2
  __int128 v36; // xmm3
  __int128 v37; // xmm4
  __int128 v38; // xmm5
  __int128 v39; // xmm6
  char v41; // [rsp+30h] [rbp-188h] BYREF
  _BYTE v42[3]; // [rsp+31h] [rbp-187h] BYREF
  _DWORD v43[5]; // [rsp+34h] [rbp-184h] BYREF
  unsigned __int64 v44; // [rsp+48h] [rbp-170h] BYREF
  HDC v45; // [rsp+50h] [rbp-168h]
  __int64 v46; // [rsp+60h] [rbp-158h] BYREF
  _QWORD *v47; // [rsp+68h] [rbp-150h]
  __int64 v48; // [rsp+70h] [rbp-148h]
  __int128 v49; // [rsp+78h] [rbp-140h]
  __int64 v50; // [rsp+88h] [rbp-130h]
  __int64 v51; // [rsp+90h] [rbp-128h]
  __int128 v52; // [rsp+B8h] [rbp-100h]
  __int64 v53; // [rsp+D0h] [rbp-E8h] BYREF
  int v54; // [rsp+D8h] [rbp-E0h]
  int v55; // [rsp+DCh] [rbp-DCh]
  __int64 v56; // [rsp+E0h] [rbp-D8h]
  __int128 v57; // [rsp+E8h] [rbp-D0h]
  __int128 v58; // [rsp+F8h] [rbp-C0h]
  __int128 v59; // [rsp+108h] [rbp-B0h]
  __int128 v60; // [rsp+118h] [rbp-A0h]
  __int128 v61; // [rsp+128h] [rbp-90h]
  __int128 v62; // [rsp+138h] [rbp-80h]
  __int128 v63; // [rsp+148h] [rbp-70h]
  __int64 v64; // [rsp+158h] [rbp-60h]
  __int64 v65; // [rsp+160h] [rbp-58h]

  v10 = a2;
  v46 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v49 = 0uLL;
  v50 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3);
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v14 = 0LL;
  v55 = 0;
  v45 = 0LL;
  v17 = ServerFixupMenuDC(a4[5]);
  if ( v17 )
  {
    v45 = a4[5];
    a4[5] = (HDC)v17;
  }
  v53 = v14;
  v54 = v10 & 0x1FFFF;
  v56 = a3;
  v57 = *(_OWORD *)a4;
  v58 = *((_OWORD *)a4 + 1);
  v59 = *((_OWORD *)a4 + 2);
  v60 = *((_OWORD *)a4 + 3);
  v61 = *((_OWORD *)a4 + 4);
  v62 = *((_OWORD *)a4 + 5);
  v63 = *((_OWORD *)a4 + 6);
  DWORD1(v58) = 0;
  DWORD1(v60) = 0;
  v64 = a5;
  v65 = a6;
  v18 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15, v16);
  v46 = *(_QWORD *)(v18 + 408);
  *(_QWORD *)(v18 + 408) = &v46;
  v47 = a1;
  if ( a1 )
    HMLockObject(a1);
  v20 = *(_QWORD *)(v13 + 472);
  v52 = *(_OWORD *)(v20 + 64);
  v49 = v52;
  v50 = *(_QWORD *)(v20 + 80);
  *(_QWORD *)(v20 + 72) = v14;
  if ( a1 )
    v21 = *a1;
  else
    v21 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 472) + 64LL) = v21;
  if ( a1 )
    v22 = *(_QWORD *)(a1[5] + 224LL);
  else
    v22 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 472) + 80LL) = v22;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v42,
    gdwInAtomicOperation,
    v19);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v41);
  EtwTraceBeginCallback(109LL);
  v23 = KeUserModeCallback(109LL, &v53, 152LL, &v44, v43);
  EtwTraceEndCallback(109LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v41);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v42,
    v24,
    v25);
  ThreadUnlock1(v27, v26, v28);
  v29 = *(_QWORD *)(v13 + 472);
  *(_OWORD *)(v29 + 64) = v52;
  *(_QWORD *)(v29 + 80) = v50;
  if ( v23 < 0 || v43[0] != 24 )
    return 0LL;
  v30 = (__int64 *)v44;
  if ( v44 + 8 < v44 || v44 + 8 > MmUserProbeAddress )
    v30 = (__int64 *)MmUserProbeAddress;
  v31 = *v30;
  v51 = *v30;
  if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
    goto LABEL_26;
  v32 = *(_QWORD *)(gptiCurrent + 504LL);
  if ( v32 )
  {
    if ( (*(_DWORD *)(v32 + 84) & 1) != 0 && *(HDC **)(v32 + 96) == a4 )
      return 0LL;
  }
  v33 = *(_OWORD **)(v44 + 16);
  if ( v33 + 7 < v33 || (unsigned __int64)(v33 + 7) > MmUserProbeAddress )
    v33 = (_OWORD *)MmUserProbeAddress;
  v34 = v33[1];
  v35 = v33[2];
  v36 = v33[3];
  v37 = v33[4];
  v38 = v33[5];
  v39 = v33[6];
  *(_OWORD *)a4 = *v33;
  *((_OWORD *)a4 + 1) = v34;
  *((_OWORD *)a4 + 2) = v35;
  *((_OWORD *)a4 + 3) = v36;
  *((_OWORD *)a4 + 4) = v37;
  *((_OWORD *)a4 + 5) = v38;
  *((_OWORD *)a4 + 6) = v39;
LABEL_26:
  if ( v17 )
  {
    _ReleaseDC(v17);
    if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
      a4[5] = v45;
  }
  return v31;
}
