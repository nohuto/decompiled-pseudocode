/*
 * XREFs of SfnINWPARAMCHAR @ 0x1C021A950
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004ECF4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004ED94 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004EDCC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004F434 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     RtlWCSMessageWParamCharToMB @ 0x1C01136B0 (RtlWCSMessageWParamCharToMB.c)
 */

__int64 __fastcall SfnINWPARAMCHAR(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  unsigned int v8; // esi
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r14
  __int64 v14; // rdi
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
  __int64 v29; // [rsp+40h] [rbp-D8h] BYREF
  unsigned __int64 v30; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v31; // [rsp+58h] [rbp-C0h] BYREF
  _QWORD *v32; // [rsp+60h] [rbp-B8h]
  __int64 v33; // [rsp+68h] [rbp-B0h]
  __int128 v34; // [rsp+70h] [rbp-A8h]
  __int64 v35; // [rsp+80h] [rbp-98h]
  __int64 v36; // [rsp+88h] [rbp-90h] BYREF
  unsigned int v37; // [rsp+90h] [rbp-88h]
  int v38; // [rsp+94h] [rbp-84h]
  __int64 v39; // [rsp+98h] [rbp-80h]
  __int64 v40; // [rsp+A0h] [rbp-78h]
  __int64 v41; // [rsp+A8h] [rbp-70h]
  __int64 v42; // [rsp+B0h] [rbp-68h]
  __int64 v43; // [rsp+B8h] [rbp-60h]
  __int128 v44; // [rsp+D8h] [rbp-40h]
  char v45; // [rsp+120h] [rbp+8h] BYREF
  char v46; // [rsp+128h] [rbp+10h] BYREF
  __int64 v47; // [rsp+130h] [rbp+18h] BYREF
  int v48; // [rsp+138h] [rbp+20h] BYREF

  v47 = a3;
  v8 = a2;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0uLL;
  v35 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3);
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v14 = 0LL;
  v38 = 0;
  v36 = v14;
  v37 = v8;
  if ( (a7 & 1) != 0 )
  {
    if ( v8 == 47 || v8 == 288 )
    {
      v29 = (unsigned __int16)v47;
      RtlWCSMessageWParamCharToMB(v8, (__int64)&v29);
      v47 = (WORD1(v47) << 16) | (unsigned __int16)v29;
    }
    else
    {
      RtlWCSMessageWParamCharToMB(v8, (__int64)&v47);
    }
  }
  v39 = v47;
  v40 = a4;
  v41 = a5;
  v42 = a6;
  v15 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v12);
  v31 = *(_QWORD *)(v15 + 408);
  *(_QWORD *)(v15 + 408) = &v31;
  v32 = a1;
  if ( a1 )
    HMLockObject(a1);
  v17 = *(_QWORD *)(v13 + 472);
  v44 = *(_OWORD *)(v17 + 64);
  v34 = v44;
  v35 = *(_QWORD *)(v17 + 80);
  *(_QWORD *)(v17 + 72) = v14;
  if ( a1 )
    v18 = *a1;
  else
    v18 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 472) + 64LL) = v18;
  if ( a1 )
    v19 = *(_QWORD *)(a1[5] + 224LL);
  else
    v19 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 472) + 80LL) = v19;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v45,
    gdwInAtomicOperation,
    v16);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v46);
  EtwTraceBeginCallback(2LL);
  v20 = KeUserModeCallback(2LL, &v36, 48LL, &v30, &v48);
  EtwTraceEndCallback(2LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v46);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v45,
    v21,
    v22);
  ThreadUnlock1(v24, v23, v25);
  v26 = *(_QWORD *)(v13 + 472);
  *(_OWORD *)(v26 + 64) = v44;
  *(_QWORD *)(v26 + 80) = v35;
  if ( v20 < 0 || v48 != 24 )
    return 0LL;
  v27 = (__int64 *)v30;
  if ( v30 + 8 < v30 || v30 + 8 > MmUserProbeAddress )
    v27 = (__int64 *)MmUserProbeAddress;
  result = *v27;
  v43 = *v27;
  return result;
}
