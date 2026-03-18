/*
 * XREFs of SfnOUTLPTITLEBARINFOEX @ 0x1C0120110
 * Callers:
 *     <none>
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00198F4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0019994 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00199CC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C001A5C8 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall SfnOUTLPTITLEBARINFOEX(
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
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // ebx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 *v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rdx
  ULONG64 v27; // rdx
  char v29; // [rsp+30h] [rbp-218h] BYREF
  _BYTE v30[3]; // [rsp+31h] [rbp-217h] BYREF
  _DWORD v31[5]; // [rsp+34h] [rbp-214h] BYREF
  unsigned __int64 v32; // [rsp+48h] [rbp-200h] BYREF
  __int64 v33; // [rsp+58h] [rbp-1F0h] BYREF
  volatile signed __int32 *v34; // [rsp+60h] [rbp-1E8h]
  __int64 v35; // [rsp+68h] [rbp-1E0h]
  __int128 v36; // [rsp+70h] [rbp-1D8h]
  __int64 v37; // [rsp+80h] [rbp-1C8h]
  __int64 v38; // [rsp+88h] [rbp-1C0h]
  __int128 v39; // [rsp+B0h] [rbp-198h]
  __int128 v40; // [rsp+C0h] [rbp-188h]
  __int128 v41; // [rsp+D0h] [rbp-178h]
  __int128 v42; // [rsp+E0h] [rbp-168h]
  __int128 v43; // [rsp+F0h] [rbp-158h]
  __int128 v44; // [rsp+100h] [rbp-148h]
  __int128 v45; // [rsp+110h] [rbp-138h]
  __int128 v46; // [rsp+120h] [rbp-128h]
  __int128 v47; // [rsp+130h] [rbp-118h]
  __int64 v48; // [rsp+140h] [rbp-108h]
  int v49; // [rsp+148h] [rbp-100h]
  _QWORD v50[24]; // [rsp+150h] [rbp-F8h] BYREF

  v10 = a2;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0uLL;
  v37 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = *((_QWORD *)a1 + 5) - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v14 = 0LL;
  memset(v50, 0, 0xB8uLL);
  v50[0] = v14;
  LODWORD(v50[1]) = v10;
  v50[2] = a3;
  *(_OWORD *)&v50[3] = *(_OWORD *)a4;
  *(_OWORD *)&v50[5] = *(_OWORD *)(a4 + 16);
  *(_OWORD *)&v50[7] = *(_OWORD *)(a4 + 32);
  *(_OWORD *)&v50[9] = *(_OWORD *)(a4 + 48);
  *(_OWORD *)&v50[11] = *(_OWORD *)(a4 + 64);
  *(_OWORD *)&v50[13] = *(_OWORD *)(a4 + 80);
  *(_OWORD *)&v50[15] = *(_OWORD *)(a4 + 96);
  *(_OWORD *)&v50[17] = *(_OWORD *)(a4 + 112);
  v50[19] = *(_QWORD *)(a4 + 128);
  LODWORD(v50[20]) = *(_DWORD *)(a4 + 136);
  v50[21] = a5;
  v50[22] = a6;
  v15 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)&v50[3]);
  v33 = *(_QWORD *)(v15 + 416);
  *(_QWORD *)(v15 + 416) = &v33;
  v34 = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v16 = *(_QWORD *)(v13 + 480);
  v39 = *(_OWORD *)(v16 + 64);
  v36 = v39;
  v37 = *(_QWORD *)(v16 + 80);
  *(_QWORD *)(v16 + 72) = v14;
  if ( a1 )
    v17 = *(_QWORD *)a1;
  else
    v17 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 64LL) = v17;
  if ( a1 )
    v18 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 224LL);
  else
    v18 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 80LL) = v18;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v30,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v29);
  EtwTraceBeginCallback(111LL);
  v19 = KeUserModeCallback(111LL, v50, 184LL, &v32, v31);
  EtwTraceEndCallback(111LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v29);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v30, v20);
  ThreadUnlock1(v22, v21);
  v23 = *(_QWORD *)(v13 + 480);
  *(_OWORD *)(v23 + 64) = v39;
  *(_QWORD *)(v23 + 80) = v37;
  if ( v19 >= 0 && v31[0] == 24 )
  {
    v24 = (__int64 *)v32;
    if ( v32 + 8 < v32 || v32 + 8 > MmUserProbeAddress )
      v24 = (__int64 *)MmUserProbeAddress;
    v25 = *v24;
    v38 = *v24;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v25;
    v26 = *(_QWORD *)(gptiCurrent + 512LL);
    if ( !v26 || (*(_DWORD *)(v26 + 84) & 1) == 0 || *(_QWORD *)(v26 + 96) != a4 )
    {
      v27 = *(_QWORD *)(v32 + 16);
      if ( v27 + 140 < v27 || v27 + 140 > MmUserProbeAddress )
        v27 = MmUserProbeAddress;
      v40 = *(_OWORD *)v27;
      v41 = *(_OWORD *)(v27 + 16);
      v42 = *(_OWORD *)(v27 + 32);
      v43 = *(_OWORD *)(v27 + 48);
      v44 = *(_OWORD *)(v27 + 64);
      v45 = *(_OWORD *)(v27 + 80);
      v46 = *(_OWORD *)(v27 + 96);
      v47 = *(_OWORD *)(v27 + 112);
      v48 = *(_QWORD *)(v27 + 128);
      v49 = *(_DWORD *)(v27 + 136);
      *(_OWORD *)a4 = v40;
      *(_OWORD *)(a4 + 16) = v41;
      *(_OWORD *)(a4 + 32) = v42;
      *(_OWORD *)(a4 + 48) = v43;
      *(_OWORD *)(a4 + 64) = v44;
      *(_OWORD *)(a4 + 80) = v45;
      *(_OWORD *)(a4 + 96) = v46;
      *(_OWORD *)(a4 + 112) = v47;
      *(_QWORD *)(a4 + 128) = v48;
      *(_DWORD *)(a4 + 136) = v49;
      return v25;
    }
  }
  return 0LL;
}
