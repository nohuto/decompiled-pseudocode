/*
 * XREFs of SfnINLPUAHDRAWMENUITEM @ 0x1C00E6860
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

__int64 __fastcall SfnINLPUAHDRAWMENUITEM(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        HDC *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // r14
  __int64 v13; // rsi
  HDC v14; // r12
  __int64 v15; // rax
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
  __int64 v31; // rbx
  char v33; // [rsp+30h] [rbp-188h] BYREF
  _BYTE v34[3]; // [rsp+31h] [rbp-187h] BYREF
  int v35; // [rsp+34h] [rbp-184h]
  _DWORD v36[8]; // [rsp+38h] [rbp-180h] BYREF
  unsigned __int64 v37; // [rsp+58h] [rbp-160h] BYREF
  __int64 v38; // [rsp+60h] [rbp-158h] BYREF
  _QWORD *v39; // [rsp+68h] [rbp-150h]
  __int64 v40; // [rsp+70h] [rbp-148h]
  __int128 v41; // [rsp+78h] [rbp-140h]
  __int64 v42; // [rsp+88h] [rbp-130h]
  __int64 v43; // [rsp+90h] [rbp-128h]
  __int128 v44; // [rsp+B0h] [rbp-108h]
  __int64 v45; // [rsp+C0h] [rbp-F8h] BYREF
  int v46; // [rsp+C8h] [rbp-F0h]
  int v47; // [rsp+CCh] [rbp-ECh]
  __int64 v48; // [rsp+D0h] [rbp-E8h]
  __int128 v49; // [rsp+D8h] [rbp-E0h]
  __int128 v50; // [rsp+E8h] [rbp-D0h]
  __int128 v51; // [rsp+F8h] [rbp-C0h]
  __int128 v52; // [rsp+108h] [rbp-B0h]
  __int128 v53; // [rsp+118h] [rbp-A0h]
  __int128 v54; // [rsp+128h] [rbp-90h]
  __int128 v55; // [rsp+138h] [rbp-80h]
  __int128 v56; // [rsp+148h] [rbp-70h]
  __int128 v57; // [rsp+158h] [rbp-60h]
  __int64 v58; // [rsp+168h] [rbp-50h]
  __int64 v59; // [rsp+170h] [rbp-48h]

  v35 = a2;
  v38 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0uLL;
  v42 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3);
  v12 = ThreadWin32Thread;
  if ( a1 )
    v13 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v13 = 0LL;
  v47 = 0;
  v14 = 0LL;
  v15 = ServerFixupMenuDC(a4[4]);
  v17 = v15;
  if ( v15 )
  {
    v14 = a4[4];
    a4[4] = (HDC)v15;
    a4[9] = (HDC)v15;
  }
  v45 = v13;
  v46 = v35;
  v48 = a3;
  *((_DWORD *)a4 + 5) = 0;
  *((_DWORD *)a4 + 21) = 0;
  v49 = *(_OWORD *)a4;
  v50 = *((_OWORD *)a4 + 1);
  v51 = *((_OWORD *)a4 + 2);
  v52 = *((_OWORD *)a4 + 3);
  v53 = *((_OWORD *)a4 + 4);
  v54 = *((_OWORD *)a4 + 5);
  v55 = *((_OWORD *)a4 + 6);
  v56 = *((_OWORD *)a4 + 7);
  v57 = *((_OWORD *)a4 + 8);
  v58 = a5;
  v59 = a6;
  v18 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), 128LL, v16);
  v38 = *(_QWORD *)(v18 + 408);
  *(_QWORD *)(v18 + 408) = &v38;
  v39 = a1;
  if ( a1 )
    HMLockObject(a1);
  v20 = *(_QWORD *)(v12 + 472);
  v44 = *(_OWORD *)(v20 + 64);
  v41 = v44;
  v42 = *(_QWORD *)(v20 + 80);
  *(_QWORD *)(v20 + 72) = v13;
  if ( a1 )
    v21 = *a1;
  else
    v21 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v12 + 472) + 64LL) = v21;
  if ( a1 )
    v22 = *(_QWORD *)(a1[5] + 224LL);
  else
    v22 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v12 + 472) + 80LL) = v22;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v34,
    gdwInAtomicOperation,
    v19);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v33);
  EtwTraceBeginCallback(107LL);
  v23 = KeUserModeCallback(107LL, &v45, 184LL, &v37, v36);
  EtwTraceEndCallback(107LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v33);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v34,
    v24,
    v25);
  ThreadUnlock1(v27, v26, v28);
  v29 = *(_QWORD *)(v12 + 472);
  *(_OWORD *)(v29 + 64) = v44;
  *(_QWORD *)(v29 + 80) = v42;
  if ( v23 < 0 || v36[0] != 24 )
    return 0LL;
  v30 = (__int64 *)v37;
  if ( v37 + 8 < v37 || v37 + 8 > MmUserProbeAddress )
    v30 = (__int64 *)MmUserProbeAddress;
  v31 = *v30;
  v43 = *v30;
  if ( v17 )
  {
    _ReleaseDC(v17);
    if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
    {
      a4[4] = v14;
      a4[9] = v14;
    }
  }
  return v31;
}
