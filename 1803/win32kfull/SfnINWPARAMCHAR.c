/*
 * XREFs of SfnINWPARAMCHAR @ 0x1C01DE070
 * Callers:
 *     <none>
 * Callees:
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C0020920 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00209AC (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020BF8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020C50 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     RtlWCSMessageWParamCharToMB @ 0x1C010E578 (RtlWCSMessageWParamCharToMB.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall SfnINWPARAMCHAR(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned int v8; // esi
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // r14
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 *v24; // rcx
  __int64 result; // rax
  __int64 v26; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v27; // [rsp+48h] [rbp-C0h]
  __int64 v28; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v29; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v30; // [rsp+70h] [rbp-98h] BYREF
  volatile signed __int32 *v31; // [rsp+78h] [rbp-90h]
  __int64 v32; // [rsp+80h] [rbp-88h]
  _QWORD v33[16]; // [rsp+88h] [rbp-80h] BYREF
  char v34; // [rsp+110h] [rbp+8h] BYREF
  char v35; // [rsp+118h] [rbp+10h] BYREF
  __int64 v36; // [rsp+120h] [rbp+18h] BYREF
  int v37; // [rsp+128h] [rbp+20h] BYREF

  v36 = a3;
  v8 = a2;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v27 = 0uLL;
  v28 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v11 = ThreadWin32Thread;
  if ( a1 )
    v12 = *((_QWORD *)a1 + 5) - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v12 = 0LL;
  memset(v33, 0, 0x30uLL);
  v33[0] = v12;
  LODWORD(v33[1]) = v8;
  if ( (a7 & 1) != 0 )
  {
    if ( v8 == 47 || v8 == 288 )
    {
      v26 = (unsigned __int16)v36;
      RtlWCSMessageWParamCharToMB(v8, (__int64)&v26);
      v36 = (WORD1(v36) << 16) | (unsigned __int16)v26;
    }
    else
    {
      RtlWCSMessageWParamCharToMB(v8, (__int64)&v36);
    }
  }
  v33[2] = v36;
  v33[3] = a4;
  v33[4] = a5;
  v33[5] = a6;
  v14 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13);
  v30 = *(_QWORD *)(v14 + 408);
  *(_QWORD *)(v14 + 408) = &v30;
  v31 = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v15 = *(_QWORD *)(v11 + 472);
  v27 = *(_OWORD *)(v15 + 64);
  v28 = *(_QWORD *)(v15 + 80);
  *(_QWORD *)(v15 + 72) = v12;
  if ( a1 )
    v16 = *(_QWORD *)a1;
  else
    v16 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 472) + 64LL) = v16;
  if ( a1 )
    v17 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 224LL);
  else
    v17 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 472) + 80LL) = v17;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v34,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v35);
  EtwTraceBeginCallback(2LL);
  v18 = KeUserModeCallback(2LL, v33, 48LL, &v29, &v37);
  EtwTraceEndCallback(2LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v35);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v34, v19);
  ThreadUnlock1(v21, v20, v22);
  v23 = *(_QWORD *)(v11 + 472);
  *(_OWORD *)(v23 + 64) = v27;
  *(_QWORD *)(v23 + 80) = v28;
  if ( v18 < 0 || v37 != 24 )
    return 0LL;
  v24 = (__int64 *)v29;
  if ( v29 + 8 < v29 || v29 + 8 > MmUserProbeAddress )
    v24 = (__int64 *)MmUserProbeAddress;
  result = *v24;
  v33[6] = *v24;
  return result;
}
