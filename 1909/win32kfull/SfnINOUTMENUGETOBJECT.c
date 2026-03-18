/*
 * XREFs of SfnINOUTMENUGETOBJECT @ 0x1C0219530
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004ECF4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004ED94 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004EDCC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004F434 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall SfnINOUTMENUGETOBJECT(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int128 *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  int v10; // r15d
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // ebx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 *v29; // rcx
  __int64 v30; // rdi
  ULONG64 v31; // rcx
  _QWORD *v32; // rbx
  __int64 v34; // [rsp+58h] [rbp-130h] BYREF
  _QWORD *v35; // [rsp+60h] [rbp-128h]
  __int64 v36; // [rsp+68h] [rbp-120h]
  __int128 v37; // [rsp+70h] [rbp-118h]
  __int64 v38; // [rsp+80h] [rbp-108h]
  __int64 v39; // [rsp+88h] [rbp-100h]
  __int128 v40; // [rsp+B0h] [rbp-D8h]
  __m128i v41; // [rsp+C0h] [rbp-C8h]
  volatile void *Address; // [rsp+D0h] [rbp-B8h]
  __int64 v43; // [rsp+E0h] [rbp-A8h] BYREF
  int v44; // [rsp+E8h] [rbp-A0h]
  int v45; // [rsp+ECh] [rbp-9Ch]
  __int64 v46; // [rsp+F0h] [rbp-98h]
  __int128 v47; // [rsp+F8h] [rbp-90h]
  __int128 v48; // [rsp+108h] [rbp-80h]
  __int64 v49; // [rsp+118h] [rbp-70h]
  __int64 v50; // [rsp+120h] [rbp-68h]
  __m128i v51; // [rsp+130h] [rbp-58h]
  volatile void *v52; // [rsp+140h] [rbp-48h]
  char v53; // [rsp+190h] [rbp+8h] BYREF
  char v54; // [rsp+198h] [rbp+10h] BYREF
  int v55; // [rsp+1A0h] [rbp+18h] BYREF
  unsigned __int64 v56; // [rsp+1A8h] [rbp+20h] BYREF

  v10 = a2;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0uLL;
  v38 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3);
  v15 = ThreadWin32Thread;
  if ( a1 )
    v16 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v16 = 0LL;
  v45 = 0;
  v43 = v16;
  v44 = v10;
  v46 = a3;
  v47 = *a4;
  v48 = a4[1];
  v49 = a5;
  v50 = a6;
  v17 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13, v14);
  v34 = *(_QWORD *)(v17 + 408);
  *(_QWORD *)(v17 + 408) = &v34;
  v35 = a1;
  if ( a1 )
    HMLockObject(a1);
  v19 = *(_QWORD *)(v15 + 472);
  v40 = *(_OWORD *)(v19 + 64);
  v37 = v40;
  v38 = *(_QWORD *)(v19 + 80);
  *(_QWORD *)(v19 + 72) = v16;
  if ( a1 )
    v20 = *a1;
  else
    v20 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v15 + 472) + 64LL) = v20;
  if ( a1 )
    v21 = *(_QWORD *)(a1[5] + 224LL);
  else
    v21 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v15 + 472) + 80LL) = v21;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v53,
    gdwInAtomicOperation,
    v18);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v54);
  EtwTraceBeginCallback(102LL);
  v22 = KeUserModeCallback(102LL, &v43, 72LL, &v56, &v55);
  EtwTraceEndCallback(102LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v54);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v53,
    v23,
    v24);
  ThreadUnlock1(v26, v25, v27);
  v28 = *(_QWORD *)(v15 + 472);
  *(_OWORD *)(v28 + 64) = v40;
  *(_QWORD *)(v28 + 80) = v38;
  if ( v22 >= 0 && v55 == 24 )
  {
    v29 = (__int64 *)v56;
    if ( v56 + 8 < v56 || v56 + 8 > MmUserProbeAddress )
      v29 = (__int64 *)MmUserProbeAddress;
    v30 = *v29;
    v39 = *v29;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v30;
    v31 = v56;
    if ( v56 + 24 < v56 || v56 + 24 > MmUserProbeAddress )
      v31 = MmUserProbeAddress;
    v41 = *(__m128i *)v31;
    Address = *(volatile void **)(v31 + 16);
    v51 = v41;
    v52 = Address;
    if ( _mm_cvtsi128_si32(_mm_srli_si128(v41, 8)) == 8 )
    {
      v32 = Address;
      ProbeForRead(Address, 8uLL, 4u);
      *((_QWORD *)a4 + 3) = *v32;
      return v30;
    }
  }
  return 0LL;
}
