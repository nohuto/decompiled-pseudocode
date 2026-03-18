/*
 * XREFs of SfnINOUTMENUGETOBJECT @ 0x1C0202360
 * Callers:
 *     <none>
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00198F4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0019994 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00199CC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C001A5C8 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     memset @ 0x1C0163640 (memset.c)
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
  __m128i *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // ebx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __m128i *v24; // rcx
  __int64 *v25; // rcx
  __int64 v26; // rdi
  ULONG64 v27; // rcx
  __m128i v28; // xmm2
  _QWORD *v29; // rbx
  __int64 v31; // [rsp+58h] [rbp-120h] BYREF
  volatile signed __int32 *v32; // [rsp+60h] [rbp-118h]
  __int64 v33; // [rsp+68h] [rbp-110h]
  __m128i v34; // [rsp+70h] [rbp-108h]
  __int64 v35; // [rsp+80h] [rbp-F8h]
  __m128i v36; // [rsp+88h] [rbp-F0h]
  volatile void *v37; // [rsp+98h] [rbp-E0h]
  __int64 v38; // [rsp+A0h] [rbp-D8h]
  _QWORD v39[12]; // [rsp+D0h] [rbp-A8h] BYREF
  volatile void *Address; // [rsp+130h] [rbp-48h]
  char v41; // [rsp+180h] [rbp+8h] BYREF
  char v42; // [rsp+188h] [rbp+10h] BYREF
  int v43; // [rsp+190h] [rbp+18h] BYREF
  unsigned __int64 v44; // [rsp+198h] [rbp+20h] BYREF

  v10 = a2;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0uLL;
  v35 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = *((_QWORD *)a1 + 5) - *(_QWORD *)(ThreadWin32Thread + 472);
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
  v31 = *(_QWORD *)(v16 + 416);
  *(_QWORD *)(v16 + 416) = &v31;
  v32 = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v17 = *(__m128i **)(v13 + 480);
  v36 = v17[4];
  v34 = v36;
  v35 = v17[5].m128i_i64[0];
  v17[4].m128i_i64[1] = v14;
  if ( a1 )
    v18 = *(_QWORD *)a1;
  else
    v18 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 64LL) = v18;
  if ( a1 )
    v19 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 224LL);
  else
    v19 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 80LL) = v19;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v41,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v42);
  EtwTraceBeginCallback(102LL);
  v20 = KeUserModeCallback(102LL, v39, 72LL, &v44, &v43);
  EtwTraceEndCallback(102LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v42);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v41, v21);
  ThreadUnlock1(v23, v22);
  v24 = *(__m128i **)(v13 + 480);
  v24[4] = v36;
  v24[5].m128i_i64[0] = v35;
  if ( v20 >= 0 && v43 == 24 )
  {
    v25 = (__int64 *)v44;
    if ( v44 + 8 < v44 || v44 + 8 > MmUserProbeAddress )
      v25 = (__int64 *)MmUserProbeAddress;
    v26 = *v25;
    v38 = *v25;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v26;
    v27 = v44;
    if ( v44 + 24 < v44 || v44 + 24 > MmUserProbeAddress )
      v27 = MmUserProbeAddress;
    v28 = *(__m128i *)v27;
    Address = *(volatile void **)(v27 + 16);
    v36 = v28;
    v37 = Address;
    if ( _mm_cvtsi128_si32(_mm_srli_si128(v28, 8)) == 8 )
    {
      v29 = Address;
      ProbeForRead(Address, 8uLL, 4u);
      *(_QWORD *)(a4 + 24) = *v29;
      return v26;
    }
  }
  return 0LL;
}
