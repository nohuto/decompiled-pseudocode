/*
 * XREFs of SfnOUTLPTITLEBARINFOEX @ 0x1C0104C00
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004ECF4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004ED94 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004EDCC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004F434 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

__int64 __fastcall SfnOUTLPTITLEBARINFOEX(
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
  __int64 v13; // r8
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // ebx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 *v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rdx
  ULONG64 v31; // rdx
  char v33; // [rsp+30h] [rbp-218h] BYREF
  _BYTE v34[3]; // [rsp+31h] [rbp-217h] BYREF
  _DWORD v35[5]; // [rsp+34h] [rbp-214h] BYREF
  unsigned __int64 v36; // [rsp+48h] [rbp-200h] BYREF
  __int64 v37; // [rsp+58h] [rbp-1F0h] BYREF
  _QWORD *v38; // [rsp+60h] [rbp-1E8h]
  __int64 v39; // [rsp+68h] [rbp-1E0h]
  __int128 v40; // [rsp+70h] [rbp-1D8h]
  __int64 v41; // [rsp+80h] [rbp-1C8h]
  __int64 v42; // [rsp+88h] [rbp-1C0h]
  __int128 v43; // [rsp+B0h] [rbp-198h]
  __int128 v44; // [rsp+C0h] [rbp-188h]
  __int128 v45; // [rsp+D0h] [rbp-178h]
  __int128 v46; // [rsp+E0h] [rbp-168h]
  __int128 v47; // [rsp+F0h] [rbp-158h]
  __int128 v48; // [rsp+100h] [rbp-148h]
  __int128 v49; // [rsp+110h] [rbp-138h]
  __int128 v50; // [rsp+120h] [rbp-128h]
  __int128 v51; // [rsp+130h] [rbp-118h]
  __int64 v52; // [rsp+140h] [rbp-108h]
  int v53; // [rsp+148h] [rbp-100h]
  __int64 v54; // [rsp+150h] [rbp-F8h] BYREF
  int v55; // [rsp+158h] [rbp-F0h]
  int v56; // [rsp+15Ch] [rbp-ECh]
  __int64 v57; // [rsp+160h] [rbp-E8h]
  _OWORD v58[8]; // [rsp+168h] [rbp-E0h] BYREF
  __int64 v59; // [rsp+1E8h] [rbp-60h]
  int v60; // [rsp+1F0h] [rbp-58h]
  int v61; // [rsp+1F4h] [rbp-54h]
  __int64 v62; // [rsp+1F8h] [rbp-50h]
  __int64 v63; // [rsp+200h] [rbp-48h]

  v10 = a2;
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v40 = 0uLL;
  v41 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3);
  v14 = ThreadWin32Thread;
  if ( a1 )
    v15 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v15 = 0LL;
  v56 = 0;
  v61 = 0;
  v54 = v15;
  v55 = v10;
  v57 = a3;
  v58[0] = *(_OWORD *)a4;
  v58[1] = *(_OWORD *)(a4 + 16);
  v58[2] = *(_OWORD *)(a4 + 32);
  v58[3] = *(_OWORD *)(a4 + 48);
  v58[4] = *(_OWORD *)(a4 + 64);
  v58[5] = *(_OWORD *)(a4 + 80);
  v58[6] = *(_OWORD *)(a4 + 96);
  v58[7] = *(_OWORD *)(a4 + 112);
  v59 = *(_QWORD *)(a4 + 128);
  v60 = *(_DWORD *)(a4 + 136);
  v62 = a5;
  v63 = a6;
  v16 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)v58, v13);
  v37 = *(_QWORD *)(v16 + 408);
  *(_QWORD *)(v16 + 408) = &v37;
  v38 = a1;
  if ( a1 )
    HMLockObject(a1);
  v18 = *(_QWORD *)(v14 + 472);
  v43 = *(_OWORD *)(v18 + 64);
  v40 = v43;
  v41 = *(_QWORD *)(v18 + 80);
  *(_QWORD *)(v18 + 72) = v15;
  if ( a1 )
    v19 = *a1;
  else
    v19 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v14 + 472) + 64LL) = v19;
  if ( a1 )
    v20 = *(_QWORD *)(a1[5] + 224LL);
  else
    v20 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v14 + 472) + 80LL) = v20;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v34,
    gdwInAtomicOperation,
    v17);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v33);
  EtwTraceBeginCallback(111LL);
  v21 = KeUserModeCallback(111LL, &v54, 184LL, &v36, v35);
  EtwTraceEndCallback(111LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v33);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v34,
    v22,
    v23);
  ThreadUnlock1(v25, v24, v26);
  v27 = *(_QWORD *)(v14 + 472);
  *(_OWORD *)(v27 + 64) = v43;
  *(_QWORD *)(v27 + 80) = v41;
  if ( v21 >= 0 && v35[0] == 24 )
  {
    v28 = (__int64 *)v36;
    if ( v36 + 8 < v36 || v36 + 8 > MmUserProbeAddress )
      v28 = (__int64 *)MmUserProbeAddress;
    v29 = *v28;
    v42 = *v28;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v29;
    v30 = *(_QWORD *)(gptiCurrent + 504LL);
    if ( !v30 || (*(_DWORD *)(v30 + 84) & 1) == 0 || *(_QWORD *)(v30 + 96) != a4 )
    {
      v31 = *(_QWORD *)(v36 + 16);
      if ( v31 + 140 < v31 || v31 + 140 > MmUserProbeAddress )
        v31 = MmUserProbeAddress;
      v44 = *(_OWORD *)v31;
      v45 = *(_OWORD *)(v31 + 16);
      v46 = *(_OWORD *)(v31 + 32);
      v47 = *(_OWORD *)(v31 + 48);
      v48 = *(_OWORD *)(v31 + 64);
      v49 = *(_OWORD *)(v31 + 80);
      v50 = *(_OWORD *)(v31 + 96);
      v51 = *(_OWORD *)(v31 + 112);
      v52 = *(_QWORD *)(v31 + 128);
      v53 = *(_DWORD *)(v31 + 136);
      *(_OWORD *)a4 = v44;
      *(_OWORD *)(a4 + 16) = v45;
      *(_OWORD *)(a4 + 32) = v46;
      *(_OWORD *)(a4 + 48) = v47;
      *(_OWORD *)(a4 + 64) = v48;
      *(_OWORD *)(a4 + 80) = v49;
      *(_OWORD *)(a4 + 96) = v50;
      *(_OWORD *)(a4 + 112) = v51;
      *(_QWORD *)(a4 + 128) = v52;
      *(_DWORD *)(a4 + 136) = v53;
      return v29;
    }
  }
  return 0LL;
}
