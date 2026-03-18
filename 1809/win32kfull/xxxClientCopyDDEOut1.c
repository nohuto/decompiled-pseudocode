/*
 * XREFs of xxxClientCopyDDEOut1 @ 0x1C0207020
 * Callers:
 *     xxxDDETrackGetMessageHook @ 0x1C01F4BC0 (xxxDDETrackGetMessageHook.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00198F4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0019994 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00199CC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C001A5C8 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 *     ?xxxClientCopyDDEOut2@@YAKPEAUtagINTDDEINFO@@@Z @ 0x1C01FD838 (-xxxClientCopyDDEOut2@@YAKPEAUtagINTDDEINFO@@@Z.c)
 */

__int64 __fastcall xxxClientCopyDDEOut1(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // rdx
  __int64 *v4; // rbx
  __int64 v5; // rbx
  __int64 v6; // rdx
  ULONG64 v7; // rcx
  __int128 v8; // xmm4
  __int64 v9; // xmm0_8
  char v11; // [rsp+30h] [rbp-148h] BYREF
  _BYTE v12[3]; // [rsp+31h] [rbp-147h] BYREF
  _DWORD v13[3]; // [rsp+34h] [rbp-144h] BYREF
  unsigned __int64 v14; // [rsp+40h] [rbp-138h] BYREF
  __int64 v15; // [rsp+48h] [rbp-130h]
  __int128 v16; // [rsp+60h] [rbp-118h] BYREF
  __int128 v17; // [rsp+70h] [rbp-108h]
  __int128 v18; // [rsp+80h] [rbp-F8h]
  __int128 v19; // [rsp+90h] [rbp-E8h]
  __int64 v20; // [rsp+A0h] [rbp-D8h]
  __int128 v21; // [rsp+D8h] [rbp-A0h]
  volatile void *Address[2]; // [rsp+E8h] [rbp-90h]
  volatile void *v23[2]; // [rsp+F8h] [rbp-80h]
  _OWORD v24[4]; // [rsp+110h] [rbp-68h] BYREF
  __int64 v25; // [rsp+150h] [rbp-28h]

  v24[0] = *(_OWORD *)a1;
  v24[1] = *(_OWORD *)(a1 + 16);
  v24[2] = *(_OWORD *)(a1 + 32);
  v24[3] = *(_OWORD *)(a1 + 48);
  v25 = *(_QWORD *)(a1 + 64);
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v12,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v11);
  EtwTraceBeginCallback(62LL);
  v2 = KeUserModeCallback(62LL, v24, 72LL, &v14, v13);
  EtwTraceEndCallback(62LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v11);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v12, v3);
  if ( v2 >= 0 && v13[0] == 24 )
  {
    v4 = (__int64 *)v14;
    if ( v14 + 8 < v14 || v14 + 8 > MmUserProbeAddress )
      v4 = (__int64 *)MmUserProbeAddress;
    v5 = *v4;
    v15 = v5;
    if ( !v5 )
      return v5;
    v6 = *(_QWORD *)(gptiCurrent + 512LL);
    if ( !v6 || (*(_DWORD *)(v6 + 84) & 1) == 0 || *(__int128 **)(v6 + 96) != &v16 )
    {
      v7 = *(_QWORD *)(v14 + 16);
      if ( v7 + 72 < v7 || v7 + 72 > MmUserProbeAddress )
        v7 = MmUserProbeAddress;
      v8 = *(_OWORD *)v7;
      v21 = *(_OWORD *)(v7 + 16);
      *(_OWORD *)Address = *(_OWORD *)(v7 + 32);
      *(_OWORD *)v23 = *(_OWORD *)(v7 + 48);
      v9 = *(_QWORD *)(v7 + 64);
      v16 = v8;
      v17 = v21;
      v18 = *(_OWORD *)Address;
      v19 = *(_OWORD *)v23;
      v20 = v9;
      if ( *(_DWORD *)(a1 + 40) )
      {
        ProbeForWrite(Address[0], *(int *)(a1 + 40), 1u);
        memmove((void *)Address[0], (const void *)(a1 + 72), *(int *)(a1 + 40));
      }
      if ( *(_DWORD *)(a1 + 64) )
      {
        ProbeForWrite(v23[1], *(int *)(a1 + 64), 1u);
        memmove((void *)v23[1], (const void *)(*(int *)(a1 + 40) + a1 + 72), *(int *)(a1 + 64));
      }
      if ( *((_QWORD *)&v21 + 1) && (unsigned int)xxxClientCopyDDEOut2((struct tagINTDDEINFO *)&v16) )
      {
        if ( (v17 & 0x800) != 0 )
          v5 = *((_QWORD *)&v17 + 1);
        v15 = v5;
      }
      *(_OWORD *)a1 = v16;
      *(_OWORD *)(a1 + 16) = v17;
      *(_OWORD *)(a1 + 32) = v18;
      *(_OWORD *)(a1 + 48) = v19;
      *(_QWORD *)(a1 + 64) = v20;
      return v5;
    }
  }
  return 0LL;
}
