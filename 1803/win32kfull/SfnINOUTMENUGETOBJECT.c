/*
 * XREFs of SfnINOUTMENUGETOBJECT @ 0x1C01DCDE0
 * Callers:
 *     <none>
 * Callees:
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C0020920 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00209AC (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020BF8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020C50 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall SfnINOUTMENUGETOBJECT(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  int v10; // r15d
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // ebx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 *v26; // rcx
  __int64 v27; // rdi
  ULONG64 v28; // rcx
  _QWORD *v29; // rbx
  __int128 v31; // [rsp+48h] [rbp-130h]
  __int64 v32; // [rsp+58h] [rbp-120h]
  __int64 v33; // [rsp+70h] [rbp-108h] BYREF
  volatile signed __int32 *v34; // [rsp+78h] [rbp-100h]
  __int64 v35; // [rsp+80h] [rbp-F8h]
  __int64 v36; // [rsp+88h] [rbp-F0h]
  __m128i v37; // [rsp+B0h] [rbp-C8h]
  volatile void *Address; // [rsp+C0h] [rbp-B8h]
  _QWORD v39[10]; // [rsp+D0h] [rbp-A8h] BYREF
  __m128i v40; // [rsp+120h] [rbp-58h]
  volatile void *v41; // [rsp+130h] [rbp-48h]
  char v42; // [rsp+180h] [rbp+8h] BYREF
  char v43; // [rsp+188h] [rbp+10h] BYREF
  int v44; // [rsp+190h] [rbp+18h] BYREF
  unsigned __int64 v45; // [rsp+198h] [rbp+20h] BYREF

  v10 = a2;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = *((_QWORD *)a1 + 5) - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v14 = 0LL;
  memset(v39, 0, 0x48uLL);
  v39[0] = v14;
  LODWORD(v39[1]) = v10;
  v39[2] = a3;
  *(_OWORD *)&v39[3] = *(_OWORD *)a4;
  *(_OWORD *)&v39[5] = *(_OWORD *)(a4 + 16);
  v39[7] = a5;
  v39[8] = a6;
  v16 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15);
  v33 = *(_QWORD *)(v16 + 408);
  *(_QWORD *)(v16 + 408) = &v33;
  v34 = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v17 = *(_QWORD *)(v13 + 472);
  v31 = *(_OWORD *)(v17 + 64);
  v32 = *(_QWORD *)(v17 + 80);
  *(_QWORD *)(v17 + 72) = v14;
  if ( a1 )
    v18 = *(_QWORD *)a1;
  else
    v18 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 472) + 64LL) = v18;
  if ( a1 )
    v19 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 224LL);
  else
    v19 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 472) + 80LL) = v19;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v42,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v43);
  EtwTraceBeginCallback(102LL);
  v20 = KeUserModeCallback(102LL, v39, 72LL, &v45, &v44);
  EtwTraceEndCallback(102LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v43);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v42, v21);
  ThreadUnlock1(v23, v22, v24);
  v25 = *(_QWORD *)(v13 + 472);
  *(_OWORD *)(v25 + 64) = v31;
  *(_QWORD *)(v25 + 80) = v32;
  if ( v20 >= 0 && v44 == 24 )
  {
    v26 = (__int64 *)v45;
    if ( v45 + 8 < v45 || v45 + 8 > MmUserProbeAddress )
      v26 = (__int64 *)MmUserProbeAddress;
    v27 = *v26;
    v36 = *v26;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v27;
    v28 = v45;
    if ( v45 + 24 < v45 || v45 + 24 > MmUserProbeAddress )
      v28 = MmUserProbeAddress;
    v37 = *(__m128i *)v28;
    Address = *(volatile void **)(v28 + 16);
    v40 = v37;
    v41 = Address;
    if ( _mm_cvtsi128_si32(_mm_srli_si128(v37, 8)) == 8 )
    {
      v29 = Address;
      ProbeForRead(Address, 8uLL, 4u);
      *(_QWORD *)(a4 + 24) = *v29;
      return v27;
    }
  }
  return 0LL;
}
