/*
 * XREFs of SfnINWPARAMCHAR @ 0x1C021AE90
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00ADED4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADF74 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADFAC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00AE614 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     RtlWCSMessageWParamCharToMB @ 0x1C01396B0 (RtlWCSMessageWParamCharToMB.c)
 */

__int64 __fastcall SfnINWPARAMCHAR(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  unsigned int v8; // esi
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r14
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // ebx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rcx
  __int64 *v30; // rcx
  __int64 result; // rax
  __int64 v32; // [rsp+40h] [rbp-D8h] BYREF
  unsigned __int64 v33; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v34; // [rsp+58h] [rbp-C0h] BYREF
  _QWORD *v35; // [rsp+60h] [rbp-B8h]
  __int64 v36; // [rsp+68h] [rbp-B0h]
  __int128 v37; // [rsp+70h] [rbp-A8h]
  __int64 v38; // [rsp+80h] [rbp-98h]
  __int64 v39; // [rsp+88h] [rbp-90h] BYREF
  unsigned int v40; // [rsp+90h] [rbp-88h]
  int v41; // [rsp+94h] [rbp-84h]
  __int64 v42; // [rsp+98h] [rbp-80h]
  __int64 v43; // [rsp+A0h] [rbp-78h]
  __int64 v44; // [rsp+A8h] [rbp-70h]
  __int64 v45; // [rsp+B0h] [rbp-68h]
  __int64 v46; // [rsp+B8h] [rbp-60h]
  __int128 v47; // [rsp+D8h] [rbp-40h]
  char v48; // [rsp+120h] [rbp+8h] BYREF
  char v49; // [rsp+128h] [rbp+10h] BYREF
  __int64 v50; // [rsp+130h] [rbp+18h] BYREF
  int v51; // [rsp+138h] [rbp+20h] BYREF

  v50 = a3;
  v8 = a2;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0uLL;
  v38 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  v14 = ThreadWin32Thread;
  if ( a1 )
    v15 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v15 = 0LL;
  v41 = 0;
  v39 = v15;
  v40 = v8;
  if ( (a7 & 1) != 0 )
  {
    if ( v8 == 47 || v8 == 288 )
    {
      v32 = (unsigned __int16)v50;
      RtlWCSMessageWParamCharToMB(v8, (__int64)&v32);
      v50 = (WORD1(v50) << 16) | (unsigned __int16)v32;
    }
    else
    {
      RtlWCSMessageWParamCharToMB(v8, (__int64)&v50);
    }
  }
  v42 = v50;
  v43 = a4;
  v44 = a5;
  v45 = a6;
  v16 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v12, v13);
  v34 = *(_QWORD *)(v16 + 408);
  *(_QWORD *)(v16 + 408) = &v34;
  v35 = a1;
  if ( a1 )
    HMLockObject(a1);
  v19 = *(_QWORD *)(v14 + 472);
  v47 = *(_OWORD *)(v19 + 64);
  v37 = v47;
  v38 = *(_QWORD *)(v19 + 80);
  *(_QWORD *)(v19 + 72) = v15;
  if ( a1 )
    v20 = *a1;
  else
    v20 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v14 + 472) + 64LL) = v20;
  if ( a1 )
    v21 = *(_QWORD *)(a1[5] + 224LL);
  else
    v21 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v14 + 472) + 80LL) = v21;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v48,
    gdwInAtomicOperation,
    v17,
    v18);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v49);
  EtwTraceBeginCallback(2LL);
  v22 = KeUserModeCallback(2LL, &v39, 48LL, &v33, &v51);
  EtwTraceEndCallback(2LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v49);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v48,
    v23,
    v24,
    v25);
  ThreadUnlock1(v27, v26, v28);
  v29 = *(_QWORD *)(v14 + 472);
  *(_OWORD *)(v29 + 64) = v47;
  *(_QWORD *)(v29 + 80) = v38;
  if ( v22 < 0 || v51 != 24 )
    return 0LL;
  v30 = (__int64 *)v33;
  if ( v33 + 8 < v33 || v33 + 8 > MmUserProbeAddress )
    v30 = (__int64 *)MmUserProbeAddress;
  result = *v30;
  v46 = *v30;
  return result;
}
