/*
 * XREFs of SfnINLPUAHDRAWMENUITEM @ 0x1C0105D90
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

__int64 __fastcall SfnINLPUAHDRAWMENUITEM(
        volatile signed __int32 *a1,
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
  __int64 v27; // rbx
  char v29; // [rsp+30h] [rbp-188h] BYREF
  _BYTE v30[3]; // [rsp+31h] [rbp-187h] BYREF
  int v31; // [rsp+34h] [rbp-184h]
  _DWORD v32[8]; // [rsp+38h] [rbp-180h] BYREF
  unsigned __int64 v33; // [rsp+58h] [rbp-160h] BYREF
  __int64 v34; // [rsp+60h] [rbp-158h] BYREF
  volatile signed __int32 *v35; // [rsp+68h] [rbp-150h]
  __int64 v36; // [rsp+70h] [rbp-148h]
  __int128 v37; // [rsp+78h] [rbp-140h]
  __int64 v38; // [rsp+88h] [rbp-130h]
  __int64 v39; // [rsp+90h] [rbp-128h]
  __int128 v40; // [rsp+B0h] [rbp-108h]
  _QWORD v41[24]; // [rsp+C0h] [rbp-F8h] BYREF

  v31 = a2;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0uLL;
  v38 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v12 = ThreadWin32Thread;
  if ( a1 )
    v13 = *((_QWORD *)a1 + 5) - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v13 = 0LL;
  memset(v41, 0, 0xB8uLL);
  v14 = 0LL;
  v15 = ServerFixupMenuDC(*(HDC *)(a4 + 32));
  v16 = v15;
  if ( v15 )
  {
    v14 = *(_QWORD *)(a4 + 32);
    *(_QWORD *)(a4 + 32) = v15;
    *(_QWORD *)(a4 + 72) = v15;
  }
  v41[0] = v13;
  LODWORD(v41[1]) = v31;
  v41[2] = a3;
  *(_DWORD *)(a4 + 20) = 0;
  *(_DWORD *)(a4 + 84) = 0;
  *(_OWORD *)&v41[3] = *(_OWORD *)a4;
  *(_OWORD *)&v41[5] = *(_OWORD *)(a4 + 16);
  *(_OWORD *)&v41[7] = *(_OWORD *)(a4 + 32);
  *(_OWORD *)&v41[9] = *(_OWORD *)(a4 + 48);
  *(_OWORD *)&v41[11] = *(_OWORD *)(a4 + 64);
  *(_OWORD *)&v41[13] = *(_OWORD *)(a4 + 80);
  *(_OWORD *)&v41[15] = *(_OWORD *)(a4 + 96);
  *(_OWORD *)&v41[17] = *(_OWORD *)(a4 + 112);
  *(_OWORD *)&v41[19] = *(_OWORD *)(a4 + 128);
  v41[21] = a5;
  v41[22] = a6;
  v17 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), 128LL);
  v34 = *(_QWORD *)(v17 + 416);
  *(_QWORD *)(v17 + 416) = &v34;
  v35 = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v18 = *(_QWORD *)(v12 + 480);
  v40 = *(_OWORD *)(v18 + 64);
  v37 = v40;
  v38 = *(_QWORD *)(v18 + 80);
  *(_QWORD *)(v18 + 72) = v13;
  if ( a1 )
    v19 = *(_QWORD *)a1;
  else
    v19 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v12 + 480) + 64LL) = v19;
  if ( a1 )
    v20 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 224LL);
  else
    v20 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v12 + 480) + 80LL) = v20;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v30,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v29);
  EtwTraceBeginCallback(107LL);
  v21 = KeUserModeCallback(107LL, v41, 184LL, &v33, v32);
  EtwTraceEndCallback(107LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v29);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v30, v22);
  ThreadUnlock1(v24, v23);
  v25 = *(_QWORD *)(v12 + 480);
  *(_OWORD *)(v25 + 64) = v40;
  *(_QWORD *)(v25 + 80) = v38;
  if ( v21 < 0 || v32[0] != 24 )
    return 0LL;
  v26 = (__int64 *)v33;
  if ( v33 + 8 < v33 || v33 + 8 > MmUserProbeAddress )
    v26 = (__int64 *)MmUserProbeAddress;
  v27 = *v26;
  v39 = *v26;
  if ( v16 )
  {
    _ReleaseDC(v16);
    if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
    {
      *(_QWORD *)(a4 + 32) = v14;
      *(_QWORD *)(a4 + 72) = v14;
    }
  }
  return v27;
}
