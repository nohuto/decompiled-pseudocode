/*
 * XREFs of SfnINOUTLPUAHMEASUREMENUITEM @ 0x1C0105400
 * Callers:
 *     <none>
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00198F4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0019994 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00199CC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C001A5C8 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     _ServerFixupMenuDC @ 0x1C01060C4 (_ServerFixupMenuDC.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
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
  __int64 v25; // rcx
  __int64 *v26; // rcx
  __int64 v27; // rsi
  __int64 v28; // rdx
  _OWORD *v29; // rcx
  __int128 v30; // xmm1
  __int128 v31; // xmm2
  __int128 v32; // xmm3
  __int128 v33; // xmm4
  __int128 v34; // xmm5
  __int128 v35; // xmm6
  char v37; // [rsp+30h] [rbp-188h] BYREF
  _BYTE v38[3]; // [rsp+31h] [rbp-187h] BYREF
  _DWORD v39[5]; // [rsp+34h] [rbp-184h] BYREF
  unsigned __int64 v40; // [rsp+48h] [rbp-170h] BYREF
  __int64 v41; // [rsp+50h] [rbp-168h]
  __int64 v42; // [rsp+60h] [rbp-158h] BYREF
  volatile signed __int32 *v43; // [rsp+68h] [rbp-150h]
  __int64 v44; // [rsp+70h] [rbp-148h]
  __int128 v45; // [rsp+78h] [rbp-140h]
  __int64 v46; // [rsp+88h] [rbp-130h]
  __int64 v47; // [rsp+90h] [rbp-128h]
  __int128 v48; // [rsp+B8h] [rbp-100h]
  _QWORD v49[20]; // [rsp+D0h] [rbp-E8h] BYREF

  v10 = a2;
  v42 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  v45 = 0uLL;
  v46 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = *((_QWORD *)a1 + 5) - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v14 = 0LL;
  memset(v49, 0, 0x98uLL);
  v41 = 0LL;
  v16 = ServerFixupMenuDC(*(HDC *)(a4 + 40));
  if ( v16 )
  {
    v41 = *(_QWORD *)(a4 + 40);
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
  v42 = *(_QWORD *)(v17 + 416);
  *(_QWORD *)(v17 + 416) = &v42;
  v43 = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v18 = *(_QWORD *)(v13 + 480);
  v48 = *(_OWORD *)(v18 + 64);
  v45 = v48;
  v46 = *(_QWORD *)(v18 + 80);
  *(_QWORD *)(v18 + 72) = v14;
  if ( a1 )
    v19 = *(_QWORD *)a1;
  else
    v19 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 64LL) = v19;
  if ( a1 )
    v20 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 224LL);
  else
    v20 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 80LL) = v20;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v38,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v37);
  EtwTraceBeginCallback(109LL);
  v21 = KeUserModeCallback(109LL, v49, 152LL, &v40, v39);
  EtwTraceEndCallback(109LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v37);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v38, v22);
  ThreadUnlock1(v24, v23);
  v25 = *(_QWORD *)(v13 + 480);
  *(_OWORD *)(v25 + 64) = v48;
  *(_QWORD *)(v25 + 80) = v46;
  if ( v21 < 0 || v39[0] != 24 )
    return 0LL;
  v26 = (__int64 *)v40;
  if ( v40 + 8 < v40 || v40 + 8 > MmUserProbeAddress )
    v26 = (__int64 *)MmUserProbeAddress;
  v27 = *v26;
  v47 = *v26;
  if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
    goto LABEL_26;
  v28 = *(_QWORD *)(gptiCurrent + 512LL);
  if ( v28 )
  {
    if ( (*(_DWORD *)(v28 + 84) & 1) != 0 && *(_QWORD *)(v28 + 96) == a4 )
      return 0LL;
  }
  v29 = *(_OWORD **)(v40 + 16);
  if ( v29 + 7 < v29 || (unsigned __int64)(v29 + 7) > MmUserProbeAddress )
    v29 = (_OWORD *)MmUserProbeAddress;
  v30 = v29[1];
  v31 = v29[2];
  v32 = v29[3];
  v33 = v29[4];
  v34 = v29[5];
  v35 = v29[6];
  *(_OWORD *)a4 = *v29;
  *(_OWORD *)(a4 + 16) = v30;
  *(_OWORD *)(a4 + 32) = v31;
  *(_OWORD *)(a4 + 48) = v32;
  *(_OWORD *)(a4 + 64) = v33;
  *(_OWORD *)(a4 + 80) = v34;
  *(_OWORD *)(a4 + 96) = v35;
LABEL_26:
  if ( v16 )
  {
    _ReleaseDC(v16);
    if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
      *(_QWORD *)(a4 + 40) = v41;
  }
  return v27;
}
