/*
 * XREFs of xxxClientCopyDDEIn1 @ 0x1C01E1060
 * Callers:
 *     ?xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z @ 0x1C01CF9E8 (-xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z.c)
 * Callees:
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C0020920 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00209AC (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020BF8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020C50 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C005D730 (PushW32ThreadLock.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 *     ?xxxClientCopyDDEIn2@@YAHPEAUtagINTDDEINFO@@@Z @ 0x1C01D8568 (-xxxClientCopyDDEIn2@@YAHPEAUtagINTDDEINFO@@@Z.c)
 *     IntToULongLong @ 0x1C01D8B64 (IntToULongLong.c)
 */

__int64 __fastcall xxxClientCopyDDEIn1(__int64 a1, int a2, __int64 *a3)
{
  __int64 v4; // rdi
  int v5; // ebx
  __int64 v6; // rdx
  __int64 *v7; // rdi
  __int64 v8; // rdx
  ULONG64 v9; // rcx
  __int128 v10; // xmm3
  __m128i v11; // xmm2
  __int64 v12; // xmm6_8
  INT v13; // esi
  __int128 v14; // xmm4
  __int128 v15; // xmm5
  ULONGLONG v16; // rax
  ULONGLONG v17; // rcx
  __int64 v18; // rdi
  size_t v19; // rbx
  __int64 v20; // rdx
  __int64 ThreadWin32Thread; // rax
  unsigned __int64 v23; // [rsp+48h] [rbp-140h] BYREF
  __int64 v24; // [rsp+50h] [rbp-138h] BYREF
  int v25; // [rsp+58h] [rbp-130h]
  int v26; // [rsp+5Ch] [rbp-12Ch]
  ULONGLONG v27; // [rsp+68h] [rbp-120h] BYREF
  ULONGLONG pullResult; // [rsp+70h] [rbp-118h] BYREF
  ULONGLONG v29; // [rsp+78h] [rbp-110h]
  __int128 v30; // [rsp+80h] [rbp-108h]
  __int128 v31; // [rsp+90h] [rbp-F8h]
  volatile void *Address[2]; // [rsp+A0h] [rbp-E8h]
  volatile void *v33[2]; // [rsp+B0h] [rbp-D8h]
  INT iOperand[2]; // [rsp+C0h] [rbp-C8h]
  struct _KTHREAD *CurrentThread; // [rsp+C8h] [rbp-C0h]
  _QWORD v36[3]; // [rsp+E8h] [rbp-A0h] BYREF
  _OWORD v37[4]; // [rsp+100h] [rbp-88h] BYREF
  __int64 v38; // [rsp+140h] [rbp-48h]
  char v39; // [rsp+190h] [rbp+8h] BYREF
  char v40; // [rsp+198h] [rbp+10h] BYREF
  __int64 *v41; // [rsp+1A0h] [rbp+18h]
  int v42; // [rsp+1A8h] [rbp+20h] BYREF

  v41 = a3;
  v26 = 0;
  LODWORD(v4) = 0;
  *a3 = 0LL;
  v24 = a1;
  v25 = a2;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v39,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v40);
  EtwTraceBeginCallback(60LL);
  v5 = KeUserModeCallback(60LL, &v24, 16LL, &v23, &v42);
  EtwTraceEndCallback(60LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v40);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v39, v6);
  if ( v5 < 0 || v42 != 24 )
    return (unsigned int)v4;
  v7 = (__int64 *)v23;
  if ( v23 + 8 < v23 || v23 + 8 > MmUserProbeAddress )
    v7 = (__int64 *)MmUserProbeAddress;
  v4 = *v7;
  if ( v4 != 2 )
    return (unsigned int)v4;
  LODWORD(v4) = 0;
  v8 = *(_QWORD *)(gptiCurrent + 504LL);
  if ( v8 )
  {
    if ( (*(_DWORD *)(v8 + 84) & 1) != 0 && *(_OWORD **)(v8 + 96) == v37 )
      return (unsigned int)v4;
  }
  v9 = *(_QWORD *)(v23 + 16);
  if ( v9 + 72 < v9 || v9 + 72 > MmUserProbeAddress )
    v9 = MmUserProbeAddress;
  v10 = *(_OWORD *)v9;
  v30 = v10;
  v31 = *(_OWORD *)(v9 + 16);
  v11 = *(__m128i *)(v9 + 32);
  *(__m128i *)Address = v11;
  *(_OWORD *)v33 = *(_OWORD *)(v9 + 48);
  *(_QWORD *)iOperand = *(_QWORD *)(v9 + 64);
  v12 = *(_QWORD *)iOperand;
  v37[0] = v10;
  v37[1] = v31;
  v37[2] = v11;
  v37[3] = *(_OWORD *)v33;
  v38 = *(_QWORD *)iOperand;
  v13 = _mm_cvtsi128_si32(_mm_srli_si128(v11, 8));
  if ( IntToULongLong(v13, &pullResult) < 0 || IntToULongLong(iOperand[0], &v27) < 0 || pullResult + v27 < pullResult )
    goto LABEL_25;
  v16 = pullResult + v27 + 72;
  v17 = -1LL;
  if ( v16 >= 0x48 )
    v17 = pullResult + v27 + 72;
  v29 = v17;
  if ( v16 < 0x48 )
  {
LABEL_25:
    v18 = 0LL;
  }
  else
  {
    if ( v17 < 0x90 )
      v17 = 144LL;
    v29 = v17;
    v18 = Win32AllocPool(v17, 1164211029LL);
    v11 = *(__m128i *)Address;
    v10 = v30;
    v14 = v31;
    v15 = *(_OWORD *)v33;
    v12 = *(_QWORD *)iOperand;
  }
  if ( !v18 )
    return 3LL;
  *a3 = v18;
  *(_OWORD *)v18 = v10;
  *(_OWORD *)(v18 + 16) = v14;
  *(__m128i *)(v18 + 32) = v11;
  *(_OWORD *)(v18 + 48) = v15;
  *(_QWORD *)(v18 + 64) = v12;
  if ( v13 )
  {
    ProbeForRead(Address[0], v13, 1u);
    memmove((void *)(v18 + 72), (const void *)Address[0], v13);
  }
  if ( iOperand[0] )
  {
    v19 = iOperand[0];
    ProbeForRead(v33[1], iOperand[0], 1u);
    memmove((void *)(v18 + v13 + 72LL), (const void *)v33[1], v19);
  }
  PushW32ThreadLock(v18, v36, (__int64)Win32FreePool);
  xxxClientCopyDDEIn2((struct tagINTDDEINFO *)v18);
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)CurrentThread, v20);
  *(_QWORD *)(ThreadWin32Thread + 16) = v36[0];
  return 2LL;
}
