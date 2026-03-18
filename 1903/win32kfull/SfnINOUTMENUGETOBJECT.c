/*
 * XREFs of SfnINOUTMENUGETOBJECT @ 0x1C0219A70
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00ADED4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADF74 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADFAC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00AE614 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 */

__int64 __fastcall SfnINOUTMENUGETOBJECT(
        _QWORD *a1,
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
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // ebx
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rcx
  __int64 *v32; // rcx
  __int64 v33; // rdi
  ULONG64 v34; // rcx
  _QWORD *v35; // rbx
  __int64 v37; // [rsp+58h] [rbp-130h] BYREF
  _QWORD *v38; // [rsp+60h] [rbp-128h]
  __int64 v39; // [rsp+68h] [rbp-120h]
  __int128 v40; // [rsp+70h] [rbp-118h]
  __int64 v41; // [rsp+80h] [rbp-108h]
  __int64 v42; // [rsp+88h] [rbp-100h]
  __int128 v43; // [rsp+B0h] [rbp-D8h]
  __m128i v44; // [rsp+C0h] [rbp-C8h]
  volatile void *Address; // [rsp+D0h] [rbp-B8h]
  __int64 v46; // [rsp+E0h] [rbp-A8h] BYREF
  int v47; // [rsp+E8h] [rbp-A0h]
  int v48; // [rsp+ECh] [rbp-9Ch]
  __int64 v49; // [rsp+F0h] [rbp-98h]
  __int128 v50; // [rsp+F8h] [rbp-90h]
  __int128 v51; // [rsp+108h] [rbp-80h]
  __int64 v52; // [rsp+118h] [rbp-70h]
  __int64 v53; // [rsp+120h] [rbp-68h]
  __m128i v54; // [rsp+130h] [rbp-58h]
  volatile void *v55; // [rsp+140h] [rbp-48h]
  char v56; // [rsp+190h] [rbp+8h] BYREF
  char v57; // [rsp+198h] [rbp+10h] BYREF
  int v58; // [rsp+1A0h] [rbp+18h] BYREF
  unsigned __int64 v59; // [rsp+1A8h] [rbp+20h] BYREF

  v10 = a2;
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v40 = 0uLL;
  v41 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  v16 = ThreadWin32Thread;
  if ( a1 )
    v17 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v17 = 0LL;
  v48 = 0;
  v46 = v17;
  v47 = v10;
  v49 = a3;
  v50 = *(_OWORD *)a4;
  v51 = *(_OWORD *)(a4 + 16);
  v52 = a5;
  v53 = a6;
  v18 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13, v14, v15);
  v37 = *(_QWORD *)(v18 + 408);
  *(_QWORD *)(v18 + 408) = &v37;
  v38 = a1;
  if ( a1 )
    HMLockObject(a1);
  v21 = *(_QWORD *)(v16 + 472);
  v43 = *(_OWORD *)(v21 + 64);
  v40 = v43;
  v41 = *(_QWORD *)(v21 + 80);
  *(_QWORD *)(v21 + 72) = v17;
  if ( a1 )
    v22 = *a1;
  else
    v22 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v16 + 472) + 64LL) = v22;
  if ( a1 )
    v23 = *(_QWORD *)(a1[5] + 224LL);
  else
    v23 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v16 + 472) + 80LL) = v23;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v56,
    gdwInAtomicOperation,
    v19,
    v20);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v57);
  EtwTraceBeginCallback(102LL);
  v24 = KeUserModeCallback(102LL, &v46, 72LL, &v59, &v58);
  EtwTraceEndCallback(102LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v57);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v56,
    v25,
    v26,
    v27);
  ThreadUnlock1(v29, v28, v30);
  v31 = *(_QWORD *)(v16 + 472);
  *(_OWORD *)(v31 + 64) = v43;
  *(_QWORD *)(v31 + 80) = v41;
  if ( v24 >= 0 && v58 == 24 )
  {
    v32 = (__int64 *)v59;
    if ( v59 + 8 < v59 || v59 + 8 > MmUserProbeAddress )
      v32 = (__int64 *)MmUserProbeAddress;
    v33 = *v32;
    v42 = *v32;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v33;
    v34 = v59;
    if ( v59 + 24 < v59 || v59 + 24 > MmUserProbeAddress )
      v34 = MmUserProbeAddress;
    v44 = *(__m128i *)v34;
    Address = *(volatile void **)(v34 + 16);
    v54 = v44;
    v55 = Address;
    if ( _mm_cvtsi128_si32(_mm_srli_si128(v44, 8)) == 8 )
    {
      v35 = Address;
      ProbeForRead(Address, 8uLL, 4u);
      *(_QWORD *)(a4 + 24) = *v35;
      return v33;
    }
  }
  return 0LL;
}
