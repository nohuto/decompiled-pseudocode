/*
 * XREFs of SfnSENTDDEMSG @ 0x1C021C8C0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00ADED4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADF74 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADFAC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00AE614 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     xxxDDETrackGetMessageHook @ 0x1C020B8A0 (xxxDDETrackGetMessageHook.c)
 */

__int64 __fastcall SfnSENTDDEMSG(_QWORD *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v15; // rsi
  __int64 v16; // rdi
  signed int v17; // r14d
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rcx
  int v27; // ebx
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rcx
  __int64 *v35; // rcx
  __int64 result; // rax
  _DWORD v37[8]; // [rsp+30h] [rbp-118h] BYREF
  unsigned __int64 v38; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v39; // [rsp+58h] [rbp-F0h] BYREF
  _QWORD *v40; // [rsp+60h] [rbp-E8h]
  __int64 v41; // [rsp+68h] [rbp-E0h]
  __int128 v42; // [rsp+70h] [rbp-D8h]
  __int64 v43; // [rsp+80h] [rbp-C8h]
  _QWORD v44[7]; // [rsp+88h] [rbp-C0h] BYREF
  _QWORD v45[10]; // [rsp+C0h] [rbp-88h] BYREF
  __int128 v46; // [rsp+110h] [rbp-38h]
  char v47; // [rsp+150h] [rbp+8h] BYREF
  char v48; // [rsp+158h] [rbp+10h] BYREF

  memset(v45, 0, 0x30uLL);
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  v42 = 0uLL;
  v43 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v12, v13);
  v15 = ThreadWin32Thread;
  if ( a1 )
    v16 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v16 = 0LL;
  memset(v44, 0, sizeof(v44));
  v17 = a2 & 0xBFFFFFFF;
  v21 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v18, v19, v20);
  v39 = *(_QWORD *)(v21 + 408);
  *(_QWORD *)(v21 + 408) = &v39;
  v40 = a1;
  if ( a1 )
    HMLockObject(a1);
  v24 = *(_QWORD *)(v15 + 472);
  v46 = *(_OWORD *)(v24 + 64);
  v42 = v46;
  v43 = *(_QWORD *)(v24 + 80);
  *(_QWORD *)(v24 + 72) = v16;
  if ( a1 )
    v25 = *a1;
  else
    v25 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v15 + 472) + 64LL) = v25;
  if ( a1 )
    v26 = *(_QWORD *)(a1[5] + 224LL);
  else
    v26 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v15 + 472) + 80LL) = v26;
  if ( v17 >= 0 )
  {
    v44[0] = v16;
    LODWORD(v44[1]) = v17;
    v44[2] = a3;
    v44[3] = a4;
  }
  else
  {
    if ( a1 )
      v45[0] = *a1;
    LODWORD(v45[1]) = v17 & 0x7FFFFFFF;
    v45[2] = a3;
    v45[3] = a4;
    xxxDDETrackGetMessageHook((__int64)v45);
    v44[0] = _HMObjectFromHandle(v45[0]) - *(_QWORD *)(v15 + 464);
    LODWORD(v44[1]) = v45[1];
    v44[2] = v45[2];
    v44[3] = v45[3];
  }
  v44[4] = a5;
  v44[5] = a6;
  LODWORD(v44[6]) = (a7 & 1) == 0;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v47,
    gdwInAtomicOperation,
    v22,
    v23);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v48);
  EtwTraceBeginCallback(38LL);
  v27 = KeUserModeCallback(38LL, v44, 56LL, &v38, v37);
  EtwTraceEndCallback(38LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v48);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v47,
    v28,
    v29,
    v30);
  ThreadUnlock1(v32, v31, v33);
  v34 = *(_QWORD *)(v15 + 472);
  *(_OWORD *)(v34 + 64) = v46;
  *(_QWORD *)(v34 + 80) = v43;
  if ( v27 < 0 || v37[0] != 24 )
    return 0LL;
  v35 = (__int64 *)v38;
  if ( v38 + 8 < v38 || v38 + 8 > MmUserProbeAddress )
    v35 = (__int64 *)MmUserProbeAddress;
  result = *v35;
  v45[6] = *v35;
  return result;
}
