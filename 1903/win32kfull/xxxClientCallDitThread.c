/*
 * XREFs of xxxClientCallDitThread @ 0x1C00AF0AC
 * Callers:
 *     ClientCallDitThread @ 0x1C00AF330 (ClientCallDitThread.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00ADED4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADF74 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADFAC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00AE614 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxClientCallDitThread(__int64 a1, __int128 *a2, __int64 a3, __int64 a4)
{
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  ULONG64 v12; // rcx
  __int128 v13; // xmm3
  __int128 v14; // xmm4
  __int128 v15; // xmm5
  __int128 v16; // xmm6
  __int128 v17; // xmm7
  __int128 v18; // xmm8
  __int64 v19; // xmm0_8
  char v21; // [rsp+30h] [rbp-168h] BYREF
  _BYTE v22[3]; // [rsp+31h] [rbp-167h] BYREF
  int v23; // [rsp+34h] [rbp-164h] BYREF
  _QWORD v24[5]; // [rsp+38h] [rbp-160h] BYREF
  __int64 v25; // [rsp+60h] [rbp-138h] BYREF
  __int128 v26; // [rsp+68h] [rbp-130h]
  __int128 v27; // [rsp+78h] [rbp-120h]
  __int128 v28; // [rsp+88h] [rbp-110h]
  __int128 v29; // [rsp+98h] [rbp-100h]
  __int128 v30; // [rsp+A8h] [rbp-F0h]
  __int128 v31; // [rsp+B8h] [rbp-E0h]
  __int64 v32; // [rsp+C8h] [rbp-D0h]
  __int128 v33; // [rsp+D0h] [rbp-C8h]
  __int128 v34; // [rsp+E0h] [rbp-B8h]
  __int128 v35; // [rsp+F0h] [rbp-A8h]
  __int128 v36; // [rsp+100h] [rbp-98h]
  __int128 v37; // [rsp+110h] [rbp-88h]
  __int128 v38; // [rsp+120h] [rbp-78h]
  __int128 v39; // [rsp+130h] [rbp-68h]
  __int64 v40; // [rsp+140h] [rbp-58h]

  v25 = a1;
  v26 = *a2;
  v27 = a2[1];
  v28 = a2[2];
  v29 = a2[3];
  v30 = a2[4];
  v31 = a2[5];
  v32 = *((_QWORD *)a2 + 12);
  v33 = *(_OWORD *)a3;
  v34 = *(_OWORD *)(a3 + 16);
  v35 = *(_OWORD *)(a3 + 32);
  v36 = *(_OWORD *)(a3 + 48);
  v37 = *(_OWORD *)(a3 + 64);
  v38 = *(_OWORD *)(a3 + 80);
  v39 = *(_OWORD *)(a3 + 96);
  v40 = *(_QWORD *)(a3 + 112);
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v22,
    gdwInAtomicOperation,
    a3,
    a4);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v21);
  EtwTraceBeginCallback(56LL);
  v5 = KeUserModeCallback(56LL, &v25, 232LL, v24, &v23);
  EtwTraceEndCallback(56LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v21);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v22,
    v6,
    v7,
    v8);
  if ( v5 < 0 || v23 != 24 )
    return 0LL;
  v9 = (__int64 *)v24[0];
  if ( (unsigned __int64)(v24[0] + 8LL) < v24[0] || v24[0] + 8LL > MmUserProbeAddress )
    v9 = (__int64 *)MmUserProbeAddress;
  v10 = *v9;
  v24[1] = *v9;
  v11 = *(_QWORD *)(gptiCurrent + 504LL);
  if ( v11 )
  {
    if ( (*(_DWORD *)(v11 + 84) & 1) != 0 && *(_QWORD *)(v11 + 96) == a3 )
      return 0LL;
  }
  v12 = *(_QWORD *)(v24[0] + 16LL);
  if ( v12 + 120 < v12 || v12 + 120 > MmUserProbeAddress )
    v12 = MmUserProbeAddress;
  v13 = *(_OWORD *)(v12 + 16);
  v14 = *(_OWORD *)(v12 + 32);
  v15 = *(_OWORD *)(v12 + 48);
  v16 = *(_OWORD *)(v12 + 64);
  v17 = *(_OWORD *)(v12 + 80);
  v18 = *(_OWORD *)(v12 + 96);
  v19 = *(_QWORD *)(v12 + 112);
  *(_OWORD *)a3 = *(_OWORD *)v12;
  *(_OWORD *)(a3 + 16) = v13;
  *(_OWORD *)(a3 + 32) = v14;
  *(_OWORD *)(a3 + 48) = v15;
  *(_OWORD *)(a3 + 64) = v16;
  *(_OWORD *)(a3 + 80) = v17;
  *(_OWORD *)(a3 + 96) = v18;
  *(_QWORD *)(a3 + 112) = v19;
  return (unsigned int)v10;
}
