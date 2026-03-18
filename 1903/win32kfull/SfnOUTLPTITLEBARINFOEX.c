/*
 * XREFs of SfnOUTLPTITLEBARINFOEX @ 0x1C01299A0
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
  __int64 v14; // r9
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // ebx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rcx
  __int64 *v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rdx
  ULONG64 v34; // rdx
  char v36; // [rsp+30h] [rbp-218h] BYREF
  _BYTE v37[3]; // [rsp+31h] [rbp-217h] BYREF
  _DWORD v38[5]; // [rsp+34h] [rbp-214h] BYREF
  unsigned __int64 v39; // [rsp+48h] [rbp-200h] BYREF
  __int64 v40; // [rsp+58h] [rbp-1F0h] BYREF
  _QWORD *v41; // [rsp+60h] [rbp-1E8h]
  __int64 v42; // [rsp+68h] [rbp-1E0h]
  __int128 v43; // [rsp+70h] [rbp-1D8h]
  __int64 v44; // [rsp+80h] [rbp-1C8h]
  __int64 v45; // [rsp+88h] [rbp-1C0h]
  __int128 v46; // [rsp+B0h] [rbp-198h]
  __int128 v47; // [rsp+C0h] [rbp-188h]
  __int128 v48; // [rsp+D0h] [rbp-178h]
  __int128 v49; // [rsp+E0h] [rbp-168h]
  __int128 v50; // [rsp+F0h] [rbp-158h]
  __int128 v51; // [rsp+100h] [rbp-148h]
  __int128 v52; // [rsp+110h] [rbp-138h]
  __int128 v53; // [rsp+120h] [rbp-128h]
  __int128 v54; // [rsp+130h] [rbp-118h]
  __int64 v55; // [rsp+140h] [rbp-108h]
  int v56; // [rsp+148h] [rbp-100h]
  __int64 v57; // [rsp+150h] [rbp-F8h] BYREF
  int v58; // [rsp+158h] [rbp-F0h]
  int v59; // [rsp+15Ch] [rbp-ECh]
  __int64 v60; // [rsp+160h] [rbp-E8h]
  _OWORD v61[8]; // [rsp+168h] [rbp-E0h] BYREF
  __int64 v62; // [rsp+1E8h] [rbp-60h]
  int v63; // [rsp+1F0h] [rbp-58h]
  int v64; // [rsp+1F4h] [rbp-54h]
  __int64 v65; // [rsp+1F8h] [rbp-50h]
  __int64 v66; // [rsp+200h] [rbp-48h]

  v10 = a2;
  v40 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v43 = 0uLL;
  v44 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  v15 = ThreadWin32Thread;
  if ( a1 )
    v16 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v16 = 0LL;
  v59 = 0;
  v64 = 0;
  v57 = v16;
  v58 = v10;
  v60 = a3;
  v61[0] = *(_OWORD *)a4;
  v61[1] = *(_OWORD *)(a4 + 16);
  v61[2] = *(_OWORD *)(a4 + 32);
  v61[3] = *(_OWORD *)(a4 + 48);
  v61[4] = *(_OWORD *)(a4 + 64);
  v61[5] = *(_OWORD *)(a4 + 80);
  v61[6] = *(_OWORD *)(a4 + 96);
  v61[7] = *(_OWORD *)(a4 + 112);
  v62 = *(_QWORD *)(a4 + 128);
  v63 = *(_DWORD *)(a4 + 136);
  v65 = a5;
  v66 = a6;
  v17 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)v61, v13, v14);
  v40 = *(_QWORD *)(v17 + 408);
  *(_QWORD *)(v17 + 408) = &v40;
  v41 = a1;
  if ( a1 )
    HMLockObject(a1);
  v20 = *(_QWORD *)(v15 + 472);
  v46 = *(_OWORD *)(v20 + 64);
  v43 = v46;
  v44 = *(_QWORD *)(v20 + 80);
  *(_QWORD *)(v20 + 72) = v16;
  if ( a1 )
    v21 = *a1;
  else
    v21 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v15 + 472) + 64LL) = v21;
  if ( a1 )
    v22 = *(_QWORD *)(a1[5] + 224LL);
  else
    v22 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v15 + 472) + 80LL) = v22;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v37,
    gdwInAtomicOperation,
    v18,
    v19);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v36);
  EtwTraceBeginCallback(111LL);
  v23 = KeUserModeCallback(111LL, &v57, 184LL, &v39, v38);
  EtwTraceEndCallback(111LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v36);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v37,
    v24,
    v25,
    v26);
  ThreadUnlock1(v28, v27, v29);
  v30 = *(_QWORD *)(v15 + 472);
  *(_OWORD *)(v30 + 64) = v46;
  *(_QWORD *)(v30 + 80) = v44;
  if ( v23 >= 0 && v38[0] == 24 )
  {
    v31 = (__int64 *)v39;
    if ( v39 + 8 < v39 || v39 + 8 > MmUserProbeAddress )
      v31 = (__int64 *)MmUserProbeAddress;
    v32 = *v31;
    v45 = *v31;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v32;
    v33 = *(_QWORD *)(gptiCurrent + 504LL);
    if ( !v33 || (*(_DWORD *)(v33 + 84) & 1) == 0 || *(_QWORD *)(v33 + 96) != a4 )
    {
      v34 = *(_QWORD *)(v39 + 16);
      if ( v34 + 140 < v34 || v34 + 140 > MmUserProbeAddress )
        v34 = MmUserProbeAddress;
      v47 = *(_OWORD *)v34;
      v48 = *(_OWORD *)(v34 + 16);
      v49 = *(_OWORD *)(v34 + 32);
      v50 = *(_OWORD *)(v34 + 48);
      v51 = *(_OWORD *)(v34 + 64);
      v52 = *(_OWORD *)(v34 + 80);
      v53 = *(_OWORD *)(v34 + 96);
      v54 = *(_OWORD *)(v34 + 112);
      v55 = *(_QWORD *)(v34 + 128);
      v56 = *(_DWORD *)(v34 + 136);
      *(_OWORD *)a4 = v47;
      *(_OWORD *)(a4 + 16) = v48;
      *(_OWORD *)(a4 + 32) = v49;
      *(_OWORD *)(a4 + 48) = v50;
      *(_OWORD *)(a4 + 64) = v51;
      *(_OWORD *)(a4 + 80) = v52;
      *(_OWORD *)(a4 + 96) = v53;
      *(_OWORD *)(a4 + 112) = v54;
      *(_QWORD *)(a4 + 128) = v55;
      *(_DWORD *)(a4 + 136) = v56;
      return v32;
    }
  }
  return 0LL;
}
