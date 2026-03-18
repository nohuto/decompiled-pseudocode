/*
 * XREFs of SfnGESTURE @ 0x1C02151C0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0024F2C (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004ECF4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004ED94 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004EDCC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004F434 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall SfnGESTURE(_QWORD *a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  int v8; // r12d
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // ebx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 *v27; // rcx
  __int64 result; // rax
  _BYTE v29[4]; // [rsp+30h] [rbp-D8h] BYREF
  _DWORD v30[7]; // [rsp+34h] [rbp-D4h] BYREF
  unsigned __int64 v31; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v32; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD *v33; // [rsp+60h] [rbp-A8h]
  __int64 v34; // [rsp+68h] [rbp-A0h]
  __int128 v35; // [rsp+70h] [rbp-98h]
  __int64 v36; // [rsp+80h] [rbp-88h]
  __int64 v37; // [rsp+88h] [rbp-80h] BYREF
  int v38; // [rsp+90h] [rbp-78h]
  int v39; // [rsp+94h] [rbp-74h]
  __int64 v40; // [rsp+98h] [rbp-70h]
  unsigned __int64 v41; // [rsp+A0h] [rbp-68h]
  __int64 v42; // [rsp+A8h] [rbp-60h]
  __int64 v43; // [rsp+B0h] [rbp-58h]
  __int64 v44; // [rsp+B8h] [rbp-50h]
  __int128 v45; // [rsp+D8h] [rbp-30h]
  char v46; // [rsp+110h] [rbp+8h] BYREF

  v8 = a2;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0uLL;
  v36 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3);
  v11 = ThreadWin32Thread;
  if ( a1 )
    v12 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v12 = 0LL;
  v39 = 0;
  if ( !HMValidateHandle(a4, 21) )
    return 0LL;
  v37 = v12;
  v38 = v8;
  v40 = a3;
  v41 = a4;
  v42 = a5;
  v43 = a6;
  v15 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13, v14);
  v32 = *(_QWORD *)(v15 + 408);
  *(_QWORD *)(v15 + 408) = &v32;
  v33 = a1;
  if ( a1 )
    HMLockObject(a1);
  v17 = *(_QWORD *)(v11 + 472);
  v45 = *(_OWORD *)(v17 + 64);
  v35 = v45;
  v36 = *(_QWORD *)(v17 + 80);
  *(_QWORD *)(v17 + 72) = v12;
  if ( a1 )
    v18 = *a1;
  else
    v18 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 472) + 64LL) = v18;
  if ( a1 )
    v19 = *(_QWORD *)(a1[5] + 224LL);
  else
    v19 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 472) + 80LL) = v19;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v29,
    gdwInAtomicOperation,
    v16);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v46);
  EtwTraceBeginCallback(113LL);
  v20 = KeUserModeCallback(113LL, &v37, 48LL, &v31, v30);
  EtwTraceEndCallback(113LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v46);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v29,
    v21,
    v22);
  ThreadUnlock1(v24, v23, v25);
  v26 = *(_QWORD *)(v11 + 472);
  *(_OWORD *)(v26 + 64) = v45;
  *(_QWORD *)(v26 + 80) = v36;
  if ( v20 < 0 || v30[0] != 24 )
    return 0LL;
  v27 = (__int64 *)v31;
  if ( v31 + 8 < v31 || v31 + 8 > MmUserProbeAddress )
    v27 = (__int64 *)MmUserProbeAddress;
  result = *v27;
  v44 = *v27;
  return result;
}
