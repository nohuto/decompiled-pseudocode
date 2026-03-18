/*
 * XREFs of SfnKEYBOARDCORRECTIONCALLOUT @ 0x1C01DE3D0
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

__int64 __fastcall SfnKEYBOARDCORRECTIONCALLOUT(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  int v10; // r15d
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rsi
  __int64 v14; // r14
  _OWORD *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // ebx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 *v27; // rcx
  __int64 result; // rax
  char v29; // [rsp+30h] [rbp-228h] BYREF
  _BYTE v30[3]; // [rsp+31h] [rbp-227h] BYREF
  _DWORD v31[5]; // [rsp+34h] [rbp-224h] BYREF
  __int128 v32; // [rsp+48h] [rbp-210h]
  __int64 v33; // [rsp+58h] [rbp-200h]
  unsigned __int64 v34; // [rsp+68h] [rbp-1F0h] BYREF
  __int64 v35; // [rsp+70h] [rbp-1E8h] BYREF
  volatile signed __int32 *v36; // [rsp+78h] [rbp-1E0h]
  __int64 v37; // [rsp+80h] [rbp-1D8h]
  __int64 v38; // [rsp+88h] [rbp-1D0h]
  _QWORD v39[46]; // [rsp+B0h] [rbp-1A8h] BYREF

  v10 = a2;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  v32 = 0uLL;
  v33 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = *((_QWORD *)a1 + 5) - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v14 = 0LL;
  if ( ThreadWin32Thread == *(_QWORD *)(a8 + 32) )
    return 0LL;
  memset(v39, 0, sizeof(v39));
  v39[0] = v14;
  LODWORD(v39[1]) = v10 & 0x1FFFF;
  v39[2] = a3;
  *(_DWORD *)(a4 + 12) = 0;
  v15 = &v39[3];
  v16 = 2LL;
  do
  {
    *v15 = *(_OWORD *)a4;
    v15[1] = *(_OWORD *)(a4 + 16);
    v15[2] = *(_OWORD *)(a4 + 32);
    v15[3] = *(_OWORD *)(a4 + 48);
    v15[4] = *(_OWORD *)(a4 + 64);
    v15[5] = *(_OWORD *)(a4 + 80);
    v15[6] = *(_OWORD *)(a4 + 96);
    v15 += 8;
    *(v15 - 1) = *(_OWORD *)(a4 + 112);
    a4 += 128LL;
    --v16;
  }
  while ( v16 );
  *v15 = *(_OWORD *)a4;
  v15[1] = *(_OWORD *)(a4 + 16);
  v15[2] = *(_OWORD *)(a4 + 32);
  v15[3] = *(_OWORD *)(a4 + 48);
  *((_QWORD *)v15 + 8) = *(_QWORD *)(a4 + 64);
  v39[44] = a5;
  v39[45] = a6;
  v17 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), 128LL);
  v35 = *(_QWORD *)(v17 + 408);
  *(_QWORD *)(v17 + 408) = &v35;
  v36 = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v18 = *(_QWORD *)(v13 + 472);
  v32 = *(_OWORD *)(v18 + 64);
  v33 = *(_QWORD *)(v18 + 80);
  *(_QWORD *)(v18 + 72) = v14;
  if ( a1 )
    v19 = *(_QWORD *)a1;
  else
    v19 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 472) + 64LL) = v19;
  if ( a1 )
    v20 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 224LL);
  else
    v20 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 472) + 80LL) = v20;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v30,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v29);
  EtwTraceBeginCallback(52LL);
  v21 = KeUserModeCallback(52LL, v39, 368LL, &v34, v31);
  EtwTraceEndCallback(52LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v29);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v30, v22);
  ThreadUnlock1(v24, v23, v25);
  v26 = *(_QWORD *)(v13 + 472);
  *(_OWORD *)(v26 + 64) = v32;
  *(_QWORD *)(v26 + 80) = v33;
  if ( v21 < 0 || v31[0] != 24 )
    return 0LL;
  v27 = (__int64 *)v34;
  if ( v34 + 8 < v34 || v34 + 8 > MmUserProbeAddress )
    v27 = (__int64 *)MmUserProbeAddress;
  result = *v27;
  v38 = *v27;
  return result;
}
