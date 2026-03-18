/*
 * XREFs of SfnINLPUAHDRAWMENUITEM @ 0x1C010C5E0
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

__int64 __fastcall SfnINLPUAHDRAWMENUITEM(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // r14
  __int64 v13; // rsi
  __int64 v14; // r12
  __int64 v15; // rax
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
  __int64 v34; // rbx
  char v36; // [rsp+30h] [rbp-188h] BYREF
  _BYTE v37[3]; // [rsp+31h] [rbp-187h] BYREF
  int v38; // [rsp+34h] [rbp-184h]
  _DWORD v39[8]; // [rsp+38h] [rbp-180h] BYREF
  unsigned __int64 v40; // [rsp+58h] [rbp-160h] BYREF
  __int64 v41; // [rsp+60h] [rbp-158h] BYREF
  _QWORD *v42; // [rsp+68h] [rbp-150h]
  __int64 v43; // [rsp+70h] [rbp-148h]
  __int128 v44; // [rsp+78h] [rbp-140h]
  __int64 v45; // [rsp+88h] [rbp-130h]
  __int64 v46; // [rsp+90h] [rbp-128h]
  __int128 v47; // [rsp+B0h] [rbp-108h]
  __int64 v48; // [rsp+C0h] [rbp-F8h] BYREF
  int v49; // [rsp+C8h] [rbp-F0h]
  int v50; // [rsp+CCh] [rbp-ECh]
  __int64 v51; // [rsp+D0h] [rbp-E8h]
  __int128 v52; // [rsp+D8h] [rbp-E0h]
  __int128 v53; // [rsp+E8h] [rbp-D0h]
  __int128 v54; // [rsp+F8h] [rbp-C0h]
  __int128 v55; // [rsp+108h] [rbp-B0h]
  __int128 v56; // [rsp+118h] [rbp-A0h]
  __int128 v57; // [rsp+128h] [rbp-90h]
  __int128 v58; // [rsp+138h] [rbp-80h]
  __int128 v59; // [rsp+148h] [rbp-70h]
  __int128 v60; // [rsp+158h] [rbp-60h]
  __int64 v61; // [rsp+168h] [rbp-50h]
  __int64 v62; // [rsp+170h] [rbp-48h]

  v38 = a2;
  v41 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  v44 = 0uLL;
  v45 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  v12 = ThreadWin32Thread;
  if ( a1 )
    v13 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v13 = 0LL;
  v50 = 0;
  v14 = 0LL;
  v15 = ServerFixupMenuDC(*(HDC *)(a4 + 32));
  v18 = v15;
  if ( v15 )
  {
    v14 = *(_QWORD *)(a4 + 32);
    *(_QWORD *)(a4 + 32) = v15;
    *(_QWORD *)(a4 + 72) = v15;
  }
  v48 = v13;
  v49 = v38;
  v51 = a3;
  *(_DWORD *)(a4 + 20) = 0;
  *(_DWORD *)(a4 + 84) = 0;
  v52 = *(_OWORD *)a4;
  v53 = *(_OWORD *)(a4 + 16);
  v54 = *(_OWORD *)(a4 + 32);
  v55 = *(_OWORD *)(a4 + 48);
  v56 = *(_OWORD *)(a4 + 64);
  v57 = *(_OWORD *)(a4 + 80);
  v58 = *(_OWORD *)(a4 + 96);
  v59 = *(_OWORD *)(a4 + 112);
  v60 = *(_OWORD *)(a4 + 128);
  v61 = a5;
  v62 = a6;
  v19 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), 128LL, v16, v17);
  v41 = *(_QWORD *)(v19 + 408);
  *(_QWORD *)(v19 + 408) = &v41;
  v42 = a1;
  if ( a1 )
    HMLockObject(a1);
  v22 = *(_QWORD *)(v12 + 472);
  v47 = *(_OWORD *)(v22 + 64);
  v44 = v47;
  v45 = *(_QWORD *)(v22 + 80);
  *(_QWORD *)(v22 + 72) = v13;
  if ( a1 )
    v23 = *a1;
  else
    v23 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v12 + 472) + 64LL) = v23;
  if ( a1 )
    v24 = *(_QWORD *)(a1[5] + 224LL);
  else
    v24 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v12 + 472) + 80LL) = v24;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v37,
    gdwInAtomicOperation,
    v20,
    v21);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v36);
  EtwTraceBeginCallback(107LL);
  v25 = KeUserModeCallback(107LL, &v48, 184LL, &v40, v39);
  EtwTraceEndCallback(107LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v36);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v37,
    v26,
    v27,
    v28);
  ThreadUnlock1(v30, v29, v31);
  v32 = *(_QWORD *)(v12 + 472);
  *(_OWORD *)(v32 + 64) = v47;
  *(_QWORD *)(v32 + 80) = v45;
  if ( v25 < 0 || v39[0] != 24 )
    return 0LL;
  v33 = (__int64 *)v40;
  if ( v40 + 8 < v40 || v40 + 8 > MmUserProbeAddress )
    v33 = (__int64 *)MmUserProbeAddress;
  v34 = *v33;
  v46 = *v33;
  if ( v18 )
  {
    _ReleaseDC(v18);
    if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
    {
      *(_QWORD *)(a4 + 32) = v14;
      *(_QWORD *)(a4 + 72) = v14;
    }
  }
  return v34;
}
