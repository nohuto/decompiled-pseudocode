/*
 * XREFs of ClientImmLoadLayout @ 0x1C010D4BC
 * Callers:
 *     xxxImmLoadLayout @ 0x1C010D42C (xxxImmLoadLayout.c)
 * Callees:
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C0020920 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00209AC (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020BF8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020C50 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 */

__int64 __fastcall ClientImmLoadLayout(__int64 a1, _OWORD *a2)
{
  int v3; // ebx
  __int64 v4; // rdx
  __int64 *v5; // rcx
  unsigned int v6; // r8d
  __int64 v7; // rdx
  _OWORD *v8; // rcx
  _OWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r9
  _OWORD *v12; // rax
  unsigned __int64 v14; // [rsp+30h] [rbp-188h] BYREF
  _QWORD v15[3]; // [rsp+38h] [rbp-180h] BYREF
  _BYTE v16[360]; // [rsp+50h] [rbp-168h] BYREF
  __int64 v17; // [rsp+1C0h] [rbp+8h] BYREF
  char v18; // [rsp+1D0h] [rbp+18h] BYREF
  int v19; // [rsp+1D8h] [rbp+20h] BYREF

  v15[0] = a1;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v18,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v17);
  EtwTraceBeginCallback(92LL);
  v3 = KeUserModeCallback(92LL, v15, 8LL, &v14, &v19);
  EtwTraceEndCallback(92LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v17);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v18, v4);
  if ( v3 >= 0 && v19 == 24 )
  {
    v5 = (__int64 *)v14;
    if ( v14 + 8 < v14 || v14 + 8 > MmUserProbeAddress )
      v5 = (__int64 *)MmUserProbeAddress;
    v17 = *v5;
    v6 = v17;
    if ( !v17 )
      return v6;
    v7 = *(_QWORD *)(gptiCurrent + 504LL);
    if ( !v7 || (*(_DWORD *)(v7 + 84) & 1) == 0 || *(_OWORD **)(v7 + 96) != a2 )
    {
      v8 = *(_OWORD **)(v14 + 16);
      if ( v8 + 22 < v8 || (unsigned __int64)(v8 + 22) > MmUserProbeAddress )
        v8 = (_OWORD *)MmUserProbeAddress;
      v9 = v16;
      v10 = 2LL;
      v11 = 2LL;
      do
      {
        *v9 = *v8;
        v9[1] = v8[1];
        v9[2] = v8[2];
        v9[3] = v8[3];
        v9[4] = v8[4];
        v9[5] = v8[5];
        v9[6] = v8[6];
        v9 += 8;
        *(v9 - 1) = v8[7];
        v8 += 8;
        --v11;
      }
      while ( v11 );
      *v9 = *v8;
      v9[1] = v8[1];
      v9[2] = v8[2];
      v9[3] = v8[3];
      v9[4] = v8[4];
      v9[5] = v8[5];
      v12 = v16;
      do
      {
        *a2 = *v12;
        a2[1] = v12[1];
        a2[2] = v12[2];
        a2[3] = v12[3];
        a2[4] = v12[4];
        a2[5] = v12[5];
        a2[6] = v12[6];
        a2 += 8;
        *(a2 - 1) = v12[7];
        v12 += 8;
        --v10;
      }
      while ( v10 );
      *a2 = *v12;
      a2[1] = v12[1];
      a2[2] = v12[2];
      a2[3] = v12[3];
      a2[4] = v12[4];
      a2[5] = v12[5];
      return v6;
    }
  }
  return 0LL;
}
