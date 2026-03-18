/*
 * XREFs of xxxClientCopyDDEOut1 @ 0x1C01E14B4
 * Callers:
 *     xxxDDETrackGetMessageHook @ 0x1C01D04B0 (xxxDDETrackGetMessageHook.c)
 * Callees:
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C0020920 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00209AC (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020BF8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020C50 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 *     ?xxxClientCopyDDEOut2@@YAKPEAUtagINTDDEINFO@@@Z @ 0x1C01D86BC (-xxxClientCopyDDEOut2@@YAKPEAUtagINTDDEINFO@@@Z.c)
 */

__int64 __fastcall xxxClientCopyDDEOut1(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // rdx
  __int64 *v4; // rbx
  __int64 v5; // rbx
  __int64 v6; // rdx
  ULONG64 v7; // rcx
  char v9; // [rsp+30h] [rbp-148h] BYREF
  _BYTE v10[3]; // [rsp+31h] [rbp-147h] BYREF
  _DWORD v11[3]; // [rsp+34h] [rbp-144h] BYREF
  unsigned __int64 v12; // [rsp+40h] [rbp-138h] BYREF
  __int64 v13; // [rsp+48h] [rbp-130h]
  __int128 v14; // [rsp+60h] [rbp-118h] BYREF
  __int128 v15; // [rsp+70h] [rbp-108h]
  __int128 v16; // [rsp+80h] [rbp-F8h]
  __int128 v17; // [rsp+90h] [rbp-E8h]
  __int64 v18; // [rsp+A0h] [rbp-D8h]
  __int128 v19; // [rsp+B0h] [rbp-C8h]
  __int128 v20; // [rsp+C0h] [rbp-B8h]
  volatile void *Address[2]; // [rsp+D0h] [rbp-A8h]
  volatile void *v22[2]; // [rsp+E0h] [rbp-98h]
  __int64 v23; // [rsp+F0h] [rbp-88h]
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
    (ReleaseAndReacquirePerObjectLocks *)v10,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v9);
  EtwTraceBeginCallback(62LL);
  v2 = KeUserModeCallback(62LL, v24, 72LL, &v12, v11);
  EtwTraceEndCallback(62LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v9);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v10, v3);
  if ( v2 >= 0 && v11[0] == 24 )
  {
    v4 = (__int64 *)v12;
    if ( v12 + 8 < v12 || v12 + 8 > MmUserProbeAddress )
      v4 = (__int64 *)MmUserProbeAddress;
    v5 = *v4;
    v13 = v5;
    if ( !v5 )
      return v5;
    v6 = *(_QWORD *)(gptiCurrent + 504LL);
    if ( !v6 || (*(_DWORD *)(v6 + 84) & 1) == 0 || *(__int128 **)(v6 + 96) != &v14 )
    {
      v7 = *(_QWORD *)(v12 + 16);
      if ( v7 + 72 < v7 || v7 + 72 > MmUserProbeAddress )
        v7 = MmUserProbeAddress;
      v19 = *(_OWORD *)v7;
      v20 = *(_OWORD *)(v7 + 16);
      *(_OWORD *)Address = *(_OWORD *)(v7 + 32);
      *(_OWORD *)v22 = *(_OWORD *)(v7 + 48);
      v23 = *(_QWORD *)(v7 + 64);
      v14 = v19;
      v15 = v20;
      v16 = *(_OWORD *)Address;
      v17 = *(_OWORD *)v22;
      v18 = v23;
      if ( *(_DWORD *)(a1 + 40) )
      {
        ProbeForWrite(Address[0], *(int *)(a1 + 40), 1u);
        memmove((void *)Address[0], (const void *)(a1 + 72), *(int *)(a1 + 40));
      }
      if ( *(_DWORD *)(a1 + 64) )
      {
        ProbeForWrite(v22[1], *(int *)(a1 + 64), 1u);
        memmove((void *)v22[1], (const void *)(*(int *)(a1 + 40) + a1 + 72), *(int *)(a1 + 64));
      }
      if ( *((_QWORD *)&v20 + 1) && (unsigned int)xxxClientCopyDDEOut2((struct tagINTDDEINFO *)&v14) )
      {
        if ( (v15 & 0x800) != 0 )
          v5 = *((_QWORD *)&v15 + 1);
        v13 = v5;
      }
      *(_OWORD *)a1 = v14;
      *(_OWORD *)(a1 + 16) = v15;
      *(_OWORD *)(a1 + 32) = v16;
      *(_OWORD *)(a1 + 48) = v17;
      *(_QWORD *)(a1 + 64) = v18;
      return v5;
    }
  }
  return 0LL;
}
