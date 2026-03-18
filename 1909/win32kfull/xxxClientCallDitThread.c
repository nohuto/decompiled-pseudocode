/*
 * XREFs of xxxClientCallDitThread @ 0x1C004FECC
 * Callers:
 *     ClientCallDitThread @ 0x1C0050150 (ClientCallDitThread.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004ECF4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004ED94 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004EDCC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004F434 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

__int64 __fastcall xxxClientCallDitThread(__int64 a1, __int128 *a2, __int64 a3)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  ULONG64 v10; // rcx
  __int128 v11; // xmm3
  __int128 v12; // xmm4
  __int128 v13; // xmm5
  __int128 v14; // xmm6
  __int128 v15; // xmm7
  __int128 v16; // xmm8
  __int64 v17; // xmm0_8
  char v19; // [rsp+30h] [rbp-168h] BYREF
  _BYTE v20[3]; // [rsp+31h] [rbp-167h] BYREF
  int v21; // [rsp+34h] [rbp-164h] BYREF
  _QWORD v22[5]; // [rsp+38h] [rbp-160h] BYREF
  __int64 v23; // [rsp+60h] [rbp-138h] BYREF
  __int128 v24; // [rsp+68h] [rbp-130h]
  __int128 v25; // [rsp+78h] [rbp-120h]
  __int128 v26; // [rsp+88h] [rbp-110h]
  __int128 v27; // [rsp+98h] [rbp-100h]
  __int128 v28; // [rsp+A8h] [rbp-F0h]
  __int128 v29; // [rsp+B8h] [rbp-E0h]
  __int64 v30; // [rsp+C8h] [rbp-D0h]
  __int128 v31; // [rsp+D0h] [rbp-C8h]
  __int128 v32; // [rsp+E0h] [rbp-B8h]
  __int128 v33; // [rsp+F0h] [rbp-A8h]
  __int128 v34; // [rsp+100h] [rbp-98h]
  __int128 v35; // [rsp+110h] [rbp-88h]
  __int128 v36; // [rsp+120h] [rbp-78h]
  __int128 v37; // [rsp+130h] [rbp-68h]
  __int64 v38; // [rsp+140h] [rbp-58h]

  v23 = a1;
  v24 = *a2;
  v25 = a2[1];
  v26 = a2[2];
  v27 = a2[3];
  v28 = a2[4];
  v29 = a2[5];
  v30 = *((_QWORD *)a2 + 12);
  v31 = *(_OWORD *)a3;
  v32 = *(_OWORD *)(a3 + 16);
  v33 = *(_OWORD *)(a3 + 32);
  v34 = *(_OWORD *)(a3 + 48);
  v35 = *(_OWORD *)(a3 + 64);
  v36 = *(_OWORD *)(a3 + 80);
  v37 = *(_OWORD *)(a3 + 96);
  v38 = *(_QWORD *)(a3 + 112);
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v20,
    gdwInAtomicOperation,
    a3);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v19);
  EtwTraceBeginCallback(56LL);
  v4 = KeUserModeCallback(56LL, &v23, 232LL, v22, &v21);
  EtwTraceEndCallback(56LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v19);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v20,
    v5,
    v6);
  if ( v4 < 0 || v21 != 24 )
    return 0LL;
  v7 = (__int64 *)v22[0];
  if ( (unsigned __int64)(v22[0] + 8LL) < v22[0] || v22[0] + 8LL > MmUserProbeAddress )
    v7 = (__int64 *)MmUserProbeAddress;
  v8 = *v7;
  v22[1] = *v7;
  v9 = *(_QWORD *)(gptiCurrent + 504LL);
  if ( v9 )
  {
    if ( (*(_DWORD *)(v9 + 84) & 1) != 0 && *(_QWORD *)(v9 + 96) == a3 )
      return 0LL;
  }
  v10 = *(_QWORD *)(v22[0] + 16LL);
  if ( v10 + 120 < v10 || v10 + 120 > MmUserProbeAddress )
    v10 = MmUserProbeAddress;
  v11 = *(_OWORD *)(v10 + 16);
  v12 = *(_OWORD *)(v10 + 32);
  v13 = *(_OWORD *)(v10 + 48);
  v14 = *(_OWORD *)(v10 + 64);
  v15 = *(_OWORD *)(v10 + 80);
  v16 = *(_OWORD *)(v10 + 96);
  v17 = *(_QWORD *)(v10 + 112);
  *(_OWORD *)a3 = *(_OWORD *)v10;
  *(_OWORD *)(a3 + 16) = v11;
  *(_OWORD *)(a3 + 32) = v12;
  *(_OWORD *)(a3 + 48) = v13;
  *(_OWORD *)(a3 + 64) = v14;
  *(_OWORD *)(a3 + 80) = v15;
  *(_OWORD *)(a3 + 96) = v16;
  *(_QWORD *)(a3 + 112) = v17;
  return (unsigned int)v8;
}
