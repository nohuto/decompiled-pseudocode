/*
 * XREFs of SfnOUTLPTITLEBARINFOEX @ 0x1C0100560
 * Callers:
 *     <none>
 * Callees:
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C0020920 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00209AC (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020BF8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020C50 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
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
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 *v25; // rcx
  __int64 v26; // r8
  __int64 v28; // rdx
  ULONG64 v29; // rdx
  char v30; // [rsp+30h] [rbp-208h] BYREF
  _BYTE v31[3]; // [rsp+31h] [rbp-207h] BYREF
  _DWORD v32[5]; // [rsp+34h] [rbp-204h] BYREF
  unsigned __int64 v33; // [rsp+48h] [rbp-1F0h] BYREF
  __int128 v34; // [rsp+50h] [rbp-1E8h]
  __int64 v35; // [rsp+60h] [rbp-1D8h]
  __int64 v36; // [rsp+70h] [rbp-1C8h] BYREF
  volatile signed __int32 *v37; // [rsp+78h] [rbp-1C0h]
  __int64 v38; // [rsp+80h] [rbp-1B8h]
  __int64 v39; // [rsp+88h] [rbp-1B0h]
  __int128 v40; // [rsp+B0h] [rbp-188h]
  __int128 v41; // [rsp+C0h] [rbp-178h]
  __int128 v42; // [rsp+D0h] [rbp-168h]
  __int128 v43; // [rsp+E0h] [rbp-158h]
  __int128 v44; // [rsp+F0h] [rbp-148h]
  __int128 v45; // [rsp+100h] [rbp-138h]
  __int128 v46; // [rsp+110h] [rbp-128h]
  __int128 v47; // [rsp+120h] [rbp-118h]
  __int64 v48; // [rsp+130h] [rbp-108h]
  int v49; // [rsp+138h] [rbp-100h]
  _QWORD v50[24]; // [rsp+140h] [rbp-F8h] BYREF

  v10 = a2;
  v36 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v34 = 0uLL;
  v35 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = *((_QWORD *)a1 + 5) - *(_QWORD *)(ThreadWin32Thread + 464);
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
  v36 = *(_QWORD *)(v15 + 408);
  *(_QWORD *)(v15 + 408) = &v36;
  v37 = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v16 = *(_QWORD *)(v13 + 472);
  v34 = *(_OWORD *)(v16 + 64);
  v35 = *(_QWORD *)(v16 + 80);
  *(_QWORD *)(v16 + 72) = v14;
  if ( a1 )
    v17 = *(_QWORD *)a1;
  else
    v17 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 472) + 64LL) = v17;
  if ( a1 )
    v18 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 224LL);
  else
    v18 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 472) + 80LL) = v18;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v31,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v30);
  EtwTraceBeginCallback(111LL);
  v19 = KeUserModeCallback(111LL, v50, 184LL, &v33, v32);
  EtwTraceEndCallback(111LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v30);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v31, v20);
  ThreadUnlock1(v22, v21, v23);
  v24 = *(_QWORD *)(v13 + 472);
  *(_OWORD *)(v24 + 64) = v34;
  *(_QWORD *)(v24 + 80) = v35;
  if ( v19 >= 0 && v32[0] == 24 )
  {
    v25 = (__int64 *)v33;
    if ( v33 + 8 < v33 || v33 + 8 > MmUserProbeAddress )
      v25 = (__int64 *)MmUserProbeAddress;
    v26 = *v25;
    v39 = *v25;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v26;
    v28 = *(_QWORD *)(gptiCurrent + 504LL);
    if ( !v28 || (*(_DWORD *)(v28 + 84) & 1) == 0 || *(_QWORD *)(v28 + 96) != a4 )
    {
      v29 = *(_QWORD *)(v33 + 16);
      if ( v29 + 140 < v29 || v29 + 140 > MmUserProbeAddress )
        v29 = MmUserProbeAddress;
      v40 = *(_OWORD *)v29;
      v41 = *(_OWORD *)(v29 + 16);
      v42 = *(_OWORD *)(v29 + 32);
      v43 = *(_OWORD *)(v29 + 48);
      v44 = *(_OWORD *)(v29 + 64);
      v45 = *(_OWORD *)(v29 + 80);
      v46 = *(_OWORD *)(v29 + 96);
      v47 = *(_OWORD *)(v29 + 112);
      v48 = *(_QWORD *)(v29 + 128);
      v49 = *(_DWORD *)(v29 + 136);
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
      return v26;
    }
  }
  return 0LL;
}
