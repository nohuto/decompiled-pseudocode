/*
 * XREFs of xxxClientCopyDDEIn1 @ 0x1C021DF5C
 * Callers:
 *     ?xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z @ 0x1C020A5B0 (-xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001EF30 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004ECF4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004ED94 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004EDCC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004F434 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     ?xxxClientCopyDDEIn2@@YAHPEAUtagINTDDEINFO@@@Z @ 0x1C02146C4 (-xxxClientCopyDDEIn2@@YAHPEAUtagINTDDEINFO@@@Z.c)
 *     IntToULongLong @ 0x1C0214D58 (IntToULongLong.c)
 */

__int64 __fastcall xxxClientCopyDDEIn1(__int64 a1, int a2, __int64 *a3)
{
  __int64 v6; // r8
  __int64 v7; // rsi
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 *v11; // rsi
  __int64 v12; // rdx
  ULONG64 v13; // rcx
  __int128 v14; // xmm2
  __int128 v15; // xmm3
  __m128i v16; // xmm1
  INT v17; // esi
  __int128 v18; // xmm4
  __int64 v19; // xmm5_8
  ULONGLONG v20; // rdx
  unsigned __int64 v21; // rcx
  __int64 v22; // rdi
  size_t v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 ThreadWin32Thread; // rax
  unsigned __int64 v30; // [rsp+48h] [rbp-160h] BYREF
  __int128 v31; // [rsp+50h] [rbp-158h] BYREF
  __int64 v32; // [rsp+60h] [rbp-148h]
  ULONGLONG v33; // [rsp+70h] [rbp-138h] BYREF
  ULONGLONG pullResult; // [rsp+78h] [rbp-130h] BYREF
  ULONGLONG v35; // [rsp+80h] [rbp-128h]
  __int64 v36; // [rsp+88h] [rbp-120h] BYREF
  int v37; // [rsp+90h] [rbp-118h]
  int v38; // [rsp+94h] [rbp-114h]
  __m128i v39; // [rsp+98h] [rbp-110h]
  __int128 v40; // [rsp+A8h] [rbp-100h]
  __int128 v41; // [rsp+B8h] [rbp-F0h]
  volatile void *Address[2]; // [rsp+C8h] [rbp-E0h]
  volatile void *v43[2]; // [rsp+D8h] [rbp-D0h]
  INT iOperand[8]; // [rsp+E8h] [rbp-C0h]
  __int128 v45; // [rsp+108h] [rbp-A0h]
  __int128 v46; // [rsp+118h] [rbp-90h]
  _OWORD v47[7]; // [rsp+130h] [rbp-78h] BYREF
  char v48; // [rsp+1B0h] [rbp+8h] BYREF
  char v49; // [rsp+1B8h] [rbp+10h] BYREF
  __int64 *v50; // [rsp+1C0h] [rbp+18h]
  int v51; // [rsp+1C8h] [rbp+20h] BYREF

  v50 = a3;
  memset(v47, 0, 0x48uLL);
  v38 = 0;
  LODWORD(v7) = 0;
  *a3 = 0LL;
  v36 = a1;
  v37 = a2;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v48,
    gdwInAtomicOperation,
    v6);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v49);
  EtwTraceBeginCallback(60LL);
  v8 = KeUserModeCallback(60LL, &v36, 16LL, &v30, &v51);
  EtwTraceEndCallback(60LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v49);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v48,
    v9,
    v10);
  if ( v8 < 0 || v51 != 24 )
    return (unsigned int)v7;
  v11 = (__int64 *)v30;
  if ( v30 + 8 < v30 || v30 + 8 > MmUserProbeAddress )
    v11 = (__int64 *)MmUserProbeAddress;
  v7 = *v11;
  if ( v7 != 2 )
    return (unsigned int)v7;
  LODWORD(v7) = 0;
  v12 = *(_QWORD *)(gptiCurrent + 504LL);
  if ( v12 )
  {
    if ( (*(_DWORD *)(v12 + 84) & 1) != 0 && *(_OWORD **)(v12 + 96) == v47 )
      return (unsigned int)v7;
  }
  v13 = *(_QWORD *)(v30 + 16);
  if ( v13 + 72 < v13 || v13 + 72 > MmUserProbeAddress )
    v13 = MmUserProbeAddress;
  v14 = *(_OWORD *)v13;
  v45 = v14;
  v40 = v14;
  v15 = *(_OWORD *)(v13 + 16);
  v46 = v15;
  v41 = v15;
  v16 = *(__m128i *)(v13 + 32);
  v39 = v16;
  *(__m128i *)Address = v16;
  v31 = *(_OWORD *)(v13 + 48);
  *(_OWORD *)v43 = v31;
  *(_QWORD *)iOperand = *(_QWORD *)(v13 + 64);
  v47[0] = v14;
  v47[1] = v15;
  v47[2] = v16;
  v47[3] = v31;
  *(_QWORD *)&v47[4] = *(_QWORD *)iOperand;
  v17 = _mm_cvtsi128_si32(_mm_srli_si128(v16, 8));
  if ( IntToULongLong(v17, &pullResult) < 0
    || IntToULongLong(iOperand[0], &v33) < 0
    || (v20 = pullResult + v33, pullResult + v33 < pullResult)
    || (v35 = pullResult + v33, v21 = v20 + 72, v20 >= 0xFFFFFFFFFFFFFFB8uLL) )
  {
    v22 = 0LL;
  }
  else
  {
    if ( v21 < 0x90 )
      v21 = 144LL;
    v35 = v21;
    v22 = Win32AllocPool(v21, 1164211029LL);
    v16 = v39;
    v14 = v45;
    v15 = v46;
    v18 = v31;
    v19 = *(_QWORD *)iOperand;
  }
  if ( !v22 )
    return 3LL;
  v31 = 0uLL;
  v32 = 0LL;
  *a3 = v22;
  *(_OWORD *)v22 = v14;
  *(_OWORD *)(v22 + 16) = v15;
  *(__m128i *)(v22 + 32) = v16;
  *(_OWORD *)(v22 + 48) = v18;
  *(_QWORD *)(v22 + 64) = v19;
  if ( v17 )
  {
    ProbeForRead(Address[0], v17, 1u);
    memmove((void *)(v22 + 72), (const void *)Address[0], v17);
  }
  if ( iOperand[0] )
  {
    v23 = iOperand[0];
    ProbeForRead(v43[1], iOperand[0], 1u);
    memmove((void *)(v22 + v17 + 72LL), (const void *)v43[1], v23);
  }
  PushW32ThreadLock(v22, &v31, (__int64)Win32FreePool);
  xxxClientCopyDDEIn2((struct tagINTDDEINFO *)v22, v24, v25);
  v39.m128i_i64[0] = (__int64)KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(v39.m128i_i64[0], v26, v27);
  *(_QWORD *)(ThreadWin32Thread + 16) = v31;
  return 2LL;
}
