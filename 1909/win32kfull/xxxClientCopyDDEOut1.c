/*
 * XREFs of xxxClientCopyDDEOut1 @ 0x1C021E414
 * Callers:
 *     ?xxxCopyDDEOut@@YAPEAXPEAUtagINTDDEINFO@@PEAPEAX@Z @ 0x1C020A4C4 (-xxxCopyDDEOut@@YAPEAXPEAUtagINTDDEINFO@@PEAPEAX@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004ECF4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004ED94 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004EDCC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004F434 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     ?xxxClientCopyDDEOut2@@YAKPEAUtagINTDDEINFO@@@Z @ 0x1C0214830 (-xxxClientCopyDDEOut2@@YAKPEAUtagINTDDEINFO@@@Z.c)
 */

__int64 __fastcall xxxClientCopyDDEOut1(__int64 a1)
{
  __int64 v2; // r8
  int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 *v7; // rbx
  __int64 v8; // rbx
  __int64 v9; // rdx
  ULONG64 v10; // rcx
  ULONG64 v11; // rdx
  char v13; // [rsp+30h] [rbp-148h] BYREF
  _BYTE v14[3]; // [rsp+31h] [rbp-147h] BYREF
  _DWORD v15[3]; // [rsp+34h] [rbp-144h] BYREF
  unsigned __int64 v16; // [rsp+40h] [rbp-138h] BYREF
  __int64 v17; // [rsp+48h] [rbp-130h]
  _OWORD v18[5]; // [rsp+60h] [rbp-118h] BYREF
  __int128 v19; // [rsp+B0h] [rbp-C8h]
  __int128 v20; // [rsp+C0h] [rbp-B8h]
  volatile void *Address[2]; // [rsp+D0h] [rbp-A8h]
  volatile void *v22[2]; // [rsp+E0h] [rbp-98h]
  __int64 v23; // [rsp+F0h] [rbp-88h]
  _OWORD v24[4]; // [rsp+110h] [rbp-68h] BYREF
  __int64 v25; // [rsp+150h] [rbp-28h]

  memset(v18, 0, 0x48uLL);
  v24[0] = *(_OWORD *)a1;
  v24[1] = *(_OWORD *)(a1 + 16);
  v24[2] = *(_OWORD *)(a1 + 32);
  v24[3] = *(_OWORD *)(a1 + 48);
  v25 = *(_QWORD *)(a1 + 64);
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v14,
    gdwInAtomicOperation,
    v2);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v13);
  EtwTraceBeginCallback(62LL);
  v3 = KeUserModeCallback(62LL, v24, 72LL, &v16, v15);
  EtwTraceEndCallback(62LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v13);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v14,
    v4,
    v5);
  if ( v3 >= 0 && v15[0] == 24 )
  {
    v7 = (__int64 *)v16;
    if ( v16 + 8 < v16 || v16 + 8 > MmUserProbeAddress )
      v7 = (__int64 *)MmUserProbeAddress;
    v8 = *v7;
    v17 = v8;
    if ( !v8 )
      return v8;
    v9 = *(_QWORD *)(gptiCurrent + 504LL);
    if ( !v9 || (*(_DWORD *)(v9 + 84) & 1) == 0 || *(_OWORD **)(v9 + 96) != v18 )
    {
      v10 = *(_QWORD *)(v16 + 16);
      v11 = v10 + 72;
      if ( v10 + 72 < v10 || v11 > MmUserProbeAddress )
        v10 = MmUserProbeAddress;
      v19 = *(_OWORD *)v10;
      v20 = *(_OWORD *)(v10 + 16);
      *(_OWORD *)Address = *(_OWORD *)(v10 + 32);
      *(_OWORD *)v22 = *(_OWORD *)(v10 + 48);
      v23 = *(_QWORD *)(v10 + 64);
      v18[0] = v19;
      v18[1] = v20;
      v18[2] = *(_OWORD *)Address;
      v18[3] = *(_OWORD *)v22;
      *(_QWORD *)&v18[4] = v23;
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
      if ( *((_QWORD *)&v20 + 1) && (unsigned int)xxxClientCopyDDEOut2((struct tagINTDDEINFO *)v18, v11, v6) )
      {
        if ( (v18[1] & 0x800) != 0 )
          v8 = *((_QWORD *)&v18[1] + 1);
        v17 = v8;
      }
      *(_OWORD *)a1 = v18[0];
      *(_OWORD *)(a1 + 16) = v18[1];
      *(_OWORD *)(a1 + 32) = v18[2];
      *(_OWORD *)(a1 + 48) = v18[3];
      *(_QWORD *)(a1 + 64) = *(_QWORD *)&v18[4];
      return v8;
    }
  }
  return 0LL;
}
