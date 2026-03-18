/*
 * XREFs of xxxClientCopyDDEOut1 @ 0x1C021E954
 * Callers:
 *     ?xxxCopyDDEOut@@YAPEAXPEAUtagINTDDEINFO@@PEAPEAX@Z @ 0x1C020A774 (-xxxCopyDDEOut@@YAPEAXPEAUtagINTDDEINFO@@PEAPEAX@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00ADED4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADF74 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADFAC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00AE614 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     ?xxxClientCopyDDEOut2@@YAKPEAUtagINTDDEINFO@@@Z @ 0x1C0214D70 (-xxxClientCopyDDEOut2@@YAKPEAUtagINTDDEINFO@@@Z.c)
 */

__int64 __fastcall xxxClientCopyDDEOut1(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 *v10; // rbx
  __int64 v11; // rbx
  __int64 v12; // rdx
  ULONG64 v13; // rcx
  ULONG64 v14; // rdx
  char v16; // [rsp+30h] [rbp-148h] BYREF
  _BYTE v17[3]; // [rsp+31h] [rbp-147h] BYREF
  _DWORD v18[3]; // [rsp+34h] [rbp-144h] BYREF
  unsigned __int64 v19; // [rsp+40h] [rbp-138h] BYREF
  __int64 v20; // [rsp+48h] [rbp-130h]
  _OWORD v21[5]; // [rsp+60h] [rbp-118h] BYREF
  __int128 v22; // [rsp+B0h] [rbp-C8h]
  __int128 v23; // [rsp+C0h] [rbp-B8h]
  volatile void *Address[2]; // [rsp+D0h] [rbp-A8h]
  volatile void *v25[2]; // [rsp+E0h] [rbp-98h]
  __int64 v26; // [rsp+F0h] [rbp-88h]
  _OWORD v27[4]; // [rsp+110h] [rbp-68h] BYREF
  __int64 v28; // [rsp+150h] [rbp-28h]

  memset(v21, 0, 0x48uLL);
  v27[0] = *(_OWORD *)a1;
  v27[1] = *(_OWORD *)(a1 + 16);
  v27[2] = *(_OWORD *)(a1 + 32);
  v27[3] = *(_OWORD *)(a1 + 48);
  v28 = *(_QWORD *)(a1 + 64);
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v17,
    gdwInAtomicOperation,
    v2,
    v3);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v16);
  EtwTraceBeginCallback(62LL);
  v4 = KeUserModeCallback(62LL, v27, 72LL, &v19, v18);
  EtwTraceEndCallback(62LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v16);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v17,
    v5,
    v6,
    v7);
  if ( v4 >= 0 && v18[0] == 24 )
  {
    v10 = (__int64 *)v19;
    if ( v19 + 8 < v19 || v19 + 8 > MmUserProbeAddress )
      v10 = (__int64 *)MmUserProbeAddress;
    v11 = *v10;
    v20 = v11;
    if ( !v11 )
      return v11;
    v12 = *(_QWORD *)(gptiCurrent + 504LL);
    if ( !v12 || (*(_DWORD *)(v12 + 84) & 1) == 0 || *(_OWORD **)(v12 + 96) != v21 )
    {
      v13 = *(_QWORD *)(v19 + 16);
      v14 = v13 + 72;
      if ( v13 + 72 < v13 || v14 > MmUserProbeAddress )
        v13 = MmUserProbeAddress;
      v22 = *(_OWORD *)v13;
      v23 = *(_OWORD *)(v13 + 16);
      *(_OWORD *)Address = *(_OWORD *)(v13 + 32);
      *(_OWORD *)v25 = *(_OWORD *)(v13 + 48);
      v26 = *(_QWORD *)(v13 + 64);
      v21[0] = v22;
      v21[1] = v23;
      v21[2] = *(_OWORD *)Address;
      v21[3] = *(_OWORD *)v25;
      *(_QWORD *)&v21[4] = v26;
      if ( *(_DWORD *)(a1 + 40) )
      {
        ProbeForWrite(Address[0], *(int *)(a1 + 40), 1u);
        memmove((void *)Address[0], (const void *)(a1 + 72), *(int *)(a1 + 40));
      }
      if ( *(_DWORD *)(a1 + 64) )
      {
        ProbeForWrite(v25[1], *(int *)(a1 + 64), 1u);
        memmove((void *)v25[1], (const void *)(*(int *)(a1 + 40) + a1 + 72), *(int *)(a1 + 64));
      }
      if ( *((_QWORD *)&v23 + 1) && (unsigned int)xxxClientCopyDDEOut2((struct tagINTDDEINFO *)v21, v14, v8, v9) )
      {
        if ( (v21[1] & 0x800) != 0 )
          v11 = *((_QWORD *)&v21[1] + 1);
        v20 = v11;
      }
      *(_OWORD *)a1 = v21[0];
      *(_OWORD *)(a1 + 16) = v21[1];
      *(_OWORD *)(a1 + 32) = v21[2];
      *(_OWORD *)(a1 + 48) = v21[3];
      *(_QWORD *)(a1 + 64) = *(_QWORD *)&v21[4];
      return v11;
    }
  }
  return 0LL;
}
