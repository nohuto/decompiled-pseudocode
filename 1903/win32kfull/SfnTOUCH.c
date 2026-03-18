/*
 * XREFs of SfnTOUCH @ 0x1C021CCC0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C002F96C (HMValidateHandle.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00ADED4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADF74 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADFAC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00AE614 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 */

__int64 __fastcall SfnTOUCH(_QWORD *a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  int v8; // r12d
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // ebx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rcx
  __int64 *v33; // rcx
  __int64 result; // rax
  _BYTE v35[4]; // [rsp+30h] [rbp-D8h] BYREF
  _DWORD v36[7]; // [rsp+34h] [rbp-D4h] BYREF
  unsigned __int64 v37; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v38; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD *v39; // [rsp+60h] [rbp-A8h]
  __int64 v40; // [rsp+68h] [rbp-A0h]
  __int128 v41; // [rsp+70h] [rbp-98h]
  __int64 v42; // [rsp+80h] [rbp-88h]
  __int64 v43; // [rsp+88h] [rbp-80h] BYREF
  int v44; // [rsp+90h] [rbp-78h]
  int v45; // [rsp+94h] [rbp-74h]
  __int64 v46; // [rsp+98h] [rbp-70h]
  unsigned __int64 v47; // [rsp+A0h] [rbp-68h]
  __int64 v48; // [rsp+A8h] [rbp-60h]
  __int64 v49; // [rsp+B0h] [rbp-58h]
  __int64 v50; // [rsp+B8h] [rbp-50h]
  __int128 v51; // [rsp+D8h] [rbp-30h]
  char v52; // [rsp+110h] [rbp+8h] BYREF

  v8 = a2;
  v38 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0uLL;
  v42 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  v14 = ThreadWin32Thread;
  if ( a1 )
    v15 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v15 = 0LL;
  v45 = 0;
  LOBYTE(v11) = 20;
  if ( !HMValidateHandle(a4, v11, v12, v13) )
    return 0LL;
  v43 = v15;
  v44 = v8;
  v46 = a3;
  v47 = a4;
  v48 = a5;
  v49 = a6;
  v19 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v16, v17, v18);
  v38 = *(_QWORD *)(v19 + 408);
  *(_QWORD *)(v19 + 408) = &v38;
  v39 = a1;
  if ( a1 )
    HMLockObject(a1);
  v22 = *(_QWORD *)(v14 + 472);
  v51 = *(_OWORD *)(v22 + 64);
  v41 = v51;
  v42 = *(_QWORD *)(v22 + 80);
  *(_QWORD *)(v22 + 72) = v15;
  if ( a1 )
    v23 = *a1;
  else
    v23 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v14 + 472) + 64LL) = v23;
  if ( a1 )
    v24 = *(_QWORD *)(a1[5] + 224LL);
  else
    v24 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v14 + 472) + 80LL) = v24;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v35,
    gdwInAtomicOperation,
    v20,
    v21);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v52);
  EtwTraceBeginCallback(112LL);
  v25 = KeUserModeCallback(112LL, &v43, 48LL, &v37, v36);
  EtwTraceEndCallback(112LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v52);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v35,
    v26,
    v27,
    v28);
  ThreadUnlock1(v30, v29, v31);
  v32 = *(_QWORD *)(v14 + 472);
  *(_OWORD *)(v32 + 64) = v51;
  *(_QWORD *)(v32 + 80) = v42;
  if ( v25 < 0 || v36[0] != 24 )
    return 0LL;
  v33 = (__int64 *)v37;
  if ( v37 + 8 < v37 || v37 + 8 > MmUserProbeAddress )
    v33 = (__int64 *)MmUserProbeAddress;
  result = *v33;
  v50 = *v33;
  return result;
}
