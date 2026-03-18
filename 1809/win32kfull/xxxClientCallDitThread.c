/*
 * XREFs of xxxClientCallDitThread @ 0x1C001A8A8
 * Callers:
 *     ClientCallDitThread @ 0x1C001ABC0 (ClientCallDitThread.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00198F4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0019994 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00199CC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C001A5C8 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall xxxClientCallDitThread(__int64 a1, _OWORD *a2, _OWORD *a3)
{
  int v6; // ebx
  __int64 v7; // rdx
  __int64 *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int128 *v11; // rcx
  char v13; // [rsp+30h] [rbp-208h] BYREF
  _BYTE v14[3]; // [rsp+31h] [rbp-207h] BYREF
  int v15; // [rsp+34h] [rbp-204h] BYREF
  _QWORD v16[4]; // [rsp+38h] [rbp-200h] BYREF
  __int128 v17; // [rsp+58h] [rbp-1E0h]
  __int128 v18; // [rsp+68h] [rbp-1D0h]
  __int128 v19; // [rsp+78h] [rbp-1C0h]
  __int128 v20; // [rsp+88h] [rbp-1B0h]
  __int128 v21; // [rsp+98h] [rbp-1A0h]
  __int128 v22; // [rsp+A8h] [rbp-190h]
  __int128 v23; // [rsp+B8h] [rbp-180h]
  __int128 v24; // [rsp+C8h] [rbp-170h]
  __int128 v25; // [rsp+D8h] [rbp-160h]
  __int128 v26; // [rsp+E8h] [rbp-150h]
  _QWORD v27[36]; // [rsp+100h] [rbp-138h] BYREF

  memset(v27, 0, 0x118uLL);
  v27[0] = a1;
  *(_OWORD *)&v27[1] = *a2;
  *(_OWORD *)&v27[3] = a2[1];
  *(_OWORD *)&v27[5] = a2[2];
  *(_OWORD *)&v27[7] = a2[3];
  *(_OWORD *)&v27[9] = a2[4];
  *(_OWORD *)&v27[11] = a2[5];
  *(_OWORD *)&v27[13] = a2[6];
  *(_OWORD *)&v27[15] = *a3;
  *(_OWORD *)&v27[17] = a3[1];
  *(_OWORD *)&v27[19] = a3[2];
  *(_OWORD *)&v27[21] = a3[3];
  *(_OWORD *)&v27[23] = a3[4];
  *(_OWORD *)&v27[25] = a3[5];
  *(_OWORD *)&v27[27] = a3[6];
  *(_OWORD *)&v27[29] = a3[7];
  *(_OWORD *)&v27[31] = a3[8];
  *(_OWORD *)&v27[33] = a3[9];
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v14,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v13);
  EtwTraceBeginCallback(56LL);
  v6 = KeUserModeCallback(56LL, v27, 280LL, v16, &v15);
  EtwTraceEndCallback(56LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v13);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v14, v7);
  if ( v6 < 0 || v15 != 24 )
    return 0LL;
  v8 = (__int64 *)v16[0];
  if ( (unsigned __int64)(v16[0] + 8LL) < v16[0] || v16[0] + 8LL > MmUserProbeAddress )
    v8 = (__int64 *)MmUserProbeAddress;
  v9 = *v8;
  v16[1] = *v8;
  v10 = *(_QWORD *)(gptiCurrent + 512LL);
  if ( v10 )
  {
    if ( (*(_DWORD *)(v10 + 84) & 1) != 0 && *(_OWORD **)(v10 + 96) == a3 )
      return 0LL;
  }
  v11 = *(__int128 **)(v16[0] + 16LL);
  if ( v11 + 10 < v11 || (unsigned __int64)(v11 + 10) > MmUserProbeAddress )
    v11 = (__int128 *)MmUserProbeAddress;
  v17 = *v11;
  v18 = v11[1];
  v19 = v11[2];
  v20 = v11[3];
  v21 = v11[4];
  v22 = v11[5];
  v23 = v11[6];
  v24 = v11[7];
  v25 = v11[8];
  v26 = v11[9];
  *a3 = v17;
  a3[1] = v18;
  a3[2] = v19;
  a3[3] = v20;
  a3[4] = v21;
  a3[5] = v22;
  a3[6] = v23;
  a3[7] = v24;
  a3[8] = v25;
  a3[9] = v26;
  return (unsigned int)v9;
}
