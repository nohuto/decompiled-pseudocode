/*
 * XREFs of SfnINOUTLPUAHMEASUREMENUITEM @ 0x1C00EAE50
 * Callers:
 *     <none>
 * Callees:
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C0020920 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00209AC (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020BF8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020C50 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     _ServerFixupMenuDC @ 0x1C00EBA98 (_ServerFixupMenuDC.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall SfnINOUTLPUAHMEASUREMENUITEM(
        volatile signed __int32 *a1,
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
  __int64 v16; // r15
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // ebx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 *v27; // rcx
  __int64 v28; // rsi
  __int64 v29; // rdx
  _OWORD *v30; // rcx
  __int128 v31; // xmm3
  __int128 v32; // xmm4
  __int128 v33; // xmm5
  __int128 v34; // xmm6
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  char v38; // [rsp+30h] [rbp-198h] BYREF
  _BYTE v39[3]; // [rsp+31h] [rbp-197h] BYREF
  _DWORD v40[5]; // [rsp+34h] [rbp-194h] BYREF
  unsigned __int64 v41; // [rsp+48h] [rbp-180h] BYREF
  __int64 v42; // [rsp+50h] [rbp-178h]
  __int128 v43; // [rsp+58h] [rbp-170h]
  __int64 v44; // [rsp+68h] [rbp-160h]
  __int64 v45; // [rsp+78h] [rbp-150h] BYREF
  volatile signed __int32 *v46; // [rsp+80h] [rbp-148h]
  __int64 v47; // [rsp+88h] [rbp-140h]
  __int64 v48; // [rsp+90h] [rbp-138h]
  _QWORD v49[20]; // [rsp+C0h] [rbp-108h] BYREF

  v10 = a2;
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v43 = 0uLL;
  v44 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = *((_QWORD *)a1 + 5) - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v14 = 0LL;
  memset(v49, 0, 0x98uLL);
  v42 = 0LL;
  v16 = ServerFixupMenuDC(*(HDC *)(a4 + 40));
  if ( v16 )
  {
    v42 = *(_QWORD *)(a4 + 40);
    *(_QWORD *)(a4 + 40) = v16;
  }
  v49[0] = v14;
  LODWORD(v49[1]) = v10 & 0x1FFFF;
  v49[2] = a3;
  *(_OWORD *)&v49[3] = *(_OWORD *)a4;
  *(_OWORD *)&v49[5] = *(_OWORD *)(a4 + 16);
  *(_OWORD *)&v49[7] = *(_OWORD *)(a4 + 32);
  *(_OWORD *)&v49[9] = *(_OWORD *)(a4 + 48);
  *(_OWORD *)&v49[11] = *(_OWORD *)(a4 + 64);
  *(_OWORD *)&v49[13] = *(_OWORD *)(a4 + 80);
  *(_OWORD *)&v49[15] = *(_OWORD *)(a4 + 96);
  HIDWORD(v49[5]) = 0;
  HIDWORD(v49[9]) = 0;
  v49[17] = a5;
  v49[18] = a6;
  v17 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15);
  v45 = *(_QWORD *)(v17 + 408);
  *(_QWORD *)(v17 + 408) = &v45;
  v46 = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v18 = *(_QWORD *)(v13 + 472);
  v43 = *(_OWORD *)(v18 + 64);
  v44 = *(_QWORD *)(v18 + 80);
  *(_QWORD *)(v18 + 72) = v14;
  if ( a1 )
    v19 = *(_QWORD *)a1;
  else
    v19 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 472) + 64LL) = v19;
  if ( a1 )
    v20 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 224LL);
  else
    v20 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 472) + 80LL) = v20;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v39,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v38);
  EtwTraceBeginCallback(109LL);
  v21 = KeUserModeCallback(109LL, v49, 152LL, &v41, v40);
  EtwTraceEndCallback(109LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v38);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v39, v22);
  ThreadUnlock1(v24, v23, v25);
  v26 = *(_QWORD *)(v13 + 472);
  *(_OWORD *)(v26 + 64) = v43;
  *(_QWORD *)(v26 + 80) = v44;
  if ( v21 < 0 || v40[0] != 24 )
    return 0LL;
  v27 = (__int64 *)v41;
  if ( v41 + 8 < v41 || v41 + 8 > MmUserProbeAddress )
    v27 = (__int64 *)MmUserProbeAddress;
  v28 = *v27;
  v48 = *v27;
  if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
    goto LABEL_26;
  v29 = *(_QWORD *)(gptiCurrent + 504LL);
  if ( v29 )
  {
    if ( (*(_DWORD *)(v29 + 84) & 1) != 0 && *(_QWORD *)(v29 + 96) == a4 )
      return 0LL;
  }
  v30 = *(_OWORD **)(v41 + 16);
  if ( v30 + 7 < v30 || (unsigned __int64)(v30 + 7) > MmUserProbeAddress )
    v30 = (_OWORD *)MmUserProbeAddress;
  v31 = v30[1];
  v32 = v30[2];
  v33 = v30[3];
  v34 = v30[4];
  v35 = v30[5];
  v36 = v30[6];
  *(_OWORD *)a4 = *v30;
  *(_OWORD *)(a4 + 16) = v31;
  *(_OWORD *)(a4 + 32) = v32;
  *(_OWORD *)(a4 + 48) = v33;
  *(_OWORD *)(a4 + 64) = v34;
  *(_OWORD *)(a4 + 80) = v35;
  *(_OWORD *)(a4 + 96) = v36;
LABEL_26:
  if ( v16 )
  {
    _ReleaseDC(v16);
    if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
      *(_QWORD *)(a4 + 40) = v42;
  }
  return v28;
}
