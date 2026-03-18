/*
 * XREFs of xxxClientCopyDDEIn1 @ 0x1C021E49C
 * Callers:
 *     ?xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z @ 0x1C020A860 (-xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00ADED4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADF74 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADFAC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00AE614 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     ?xxxClientCopyDDEIn2@@YAHPEAUtagINTDDEINFO@@@Z @ 0x1C0214C04 (-xxxClientCopyDDEIn2@@YAHPEAUtagINTDDEINFO@@@Z.c)
 *     IntToULongLong @ 0x1C0215298 (IntToULongLong.c)
 */

__int64 __fastcall xxxClientCopyDDEIn1(__int64 a1, int a2, __int64 *a3)
{
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rsi
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 *v13; // rsi
  __int64 v14; // rdx
  ULONG64 v15; // rcx
  __int128 v16; // xmm2
  __int128 v17; // xmm3
  __m128i v18; // xmm1
  INT v19; // esi
  __int64 v20; // r9
  __int128 v21; // xmm4
  __int64 v22; // xmm5_8
  ULONGLONG v23; // rdx
  unsigned __int64 v24; // rcx
  __int64 v25; // rdi
  size_t v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 ThreadWin32Thread; // rax
  unsigned __int64 v35; // [rsp+48h] [rbp-160h] BYREF
  __int128 v36; // [rsp+50h] [rbp-158h] BYREF
  __int64 v37; // [rsp+60h] [rbp-148h]
  ULONGLONG v38; // [rsp+70h] [rbp-138h] BYREF
  ULONGLONG pullResult; // [rsp+78h] [rbp-130h] BYREF
  ULONGLONG v40; // [rsp+80h] [rbp-128h]
  __int64 v41; // [rsp+88h] [rbp-120h] BYREF
  int v42; // [rsp+90h] [rbp-118h]
  int v43; // [rsp+94h] [rbp-114h]
  __m128i v44; // [rsp+98h] [rbp-110h]
  __int128 v45; // [rsp+A8h] [rbp-100h]
  __int128 v46; // [rsp+B8h] [rbp-F0h]
  volatile void *Address[2]; // [rsp+C8h] [rbp-E0h]
  volatile void *v48[2]; // [rsp+D8h] [rbp-D0h]
  INT iOperand[8]; // [rsp+E8h] [rbp-C0h]
  __int128 v50; // [rsp+108h] [rbp-A0h]
  __int128 v51; // [rsp+118h] [rbp-90h]
  _OWORD v52[7]; // [rsp+130h] [rbp-78h] BYREF
  char v53; // [rsp+1B0h] [rbp+8h] BYREF
  char v54; // [rsp+1B8h] [rbp+10h] BYREF
  __int64 *v55; // [rsp+1C0h] [rbp+18h]
  int v56; // [rsp+1C8h] [rbp+20h] BYREF

  v55 = a3;
  memset(v52, 0, 0x48uLL);
  v43 = 0;
  LODWORD(v8) = 0;
  *a3 = 0LL;
  v41 = a1;
  v42 = a2;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v53,
    gdwInAtomicOperation,
    v6,
    v7);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v54);
  EtwTraceBeginCallback(60LL);
  v9 = KeUserModeCallback(60LL, &v41, 16LL, &v35, &v56);
  EtwTraceEndCallback(60LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v54);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v53,
    v10,
    v11,
    v12);
  if ( v9 < 0 || v56 != 24 )
    return (unsigned int)v8;
  v13 = (__int64 *)v35;
  if ( v35 + 8 < v35 || v35 + 8 > MmUserProbeAddress )
    v13 = (__int64 *)MmUserProbeAddress;
  v8 = *v13;
  if ( v8 != 2 )
    return (unsigned int)v8;
  LODWORD(v8) = 0;
  v14 = *(_QWORD *)(gptiCurrent + 504LL);
  if ( v14 )
  {
    if ( (*(_DWORD *)(v14 + 84) & 1) != 0 && *(_OWORD **)(v14 + 96) == v52 )
      return (unsigned int)v8;
  }
  v15 = *(_QWORD *)(v35 + 16);
  if ( v15 + 72 < v15 || v15 + 72 > MmUserProbeAddress )
    v15 = MmUserProbeAddress;
  v16 = *(_OWORD *)v15;
  v50 = v16;
  v45 = v16;
  v17 = *(_OWORD *)(v15 + 16);
  v51 = v17;
  v46 = v17;
  v18 = *(__m128i *)(v15 + 32);
  v44 = v18;
  *(__m128i *)Address = v18;
  v36 = *(_OWORD *)(v15 + 48);
  *(_OWORD *)v48 = v36;
  *(_QWORD *)iOperand = *(_QWORD *)(v15 + 64);
  v52[0] = v16;
  v52[1] = v17;
  v52[2] = v18;
  v52[3] = v36;
  *(_QWORD *)&v52[4] = *(_QWORD *)iOperand;
  v19 = _mm_cvtsi128_si32(_mm_srli_si128(v18, 8));
  if ( IntToULongLong(v19, &pullResult) < 0
    || IntToULongLong(iOperand[0], &v38) < 0
    || (v23 = pullResult + v38, pullResult + v38 < pullResult)
    || (v40 = pullResult + v38, v24 = v23 + 72, v23 >= 0xFFFFFFFFFFFFFFB8uLL) )
  {
    v25 = 0LL;
  }
  else
  {
    if ( v24 < 0x90 )
      v24 = 144LL;
    v40 = v24;
    v25 = Win32AllocPool(v24, 1164211029LL);
    v18 = v44;
    v16 = v50;
    v17 = v51;
    v21 = v36;
    v22 = *(_QWORD *)iOperand;
  }
  if ( !v25 )
    return 3LL;
  v36 = 0uLL;
  v37 = 0LL;
  *a3 = v25;
  *(_OWORD *)v25 = v16;
  *(_OWORD *)(v25 + 16) = v17;
  *(__m128i *)(v25 + 32) = v18;
  *(_OWORD *)(v25 + 48) = v21;
  *(_QWORD *)(v25 + 64) = v22;
  if ( v19 )
  {
    ProbeForRead(Address[0], v19, 1u);
    memmove((void *)(v25 + 72), (const void *)Address[0], v19);
  }
  if ( iOperand[0] )
  {
    v26 = iOperand[0];
    ProbeForRead(v48[1], iOperand[0], 1u);
    memmove((void *)(v25 + v19 + 72LL), (const void *)v48[1], v26);
  }
  PushW32ThreadLock(v25, &v36, (__int64)Win32FreePool, v20);
  xxxClientCopyDDEIn2((struct tagINTDDEINFO *)v25, v27, v28, v29);
  v44.m128i_i64[0] = (__int64)KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(v44.m128i_i64[0], v30, v31, v32);
  *(_QWORD *)(ThreadWin32Thread + 16) = v36;
  return 2LL;
}
