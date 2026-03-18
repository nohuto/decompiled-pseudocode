/*
 * XREFs of ClientImmLoadLayout @ 0x1C013AE44
 * Callers:
 *     xxxImmLoadLayout @ 0x1C013AD9C (xxxImmLoadLayout.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00ADED4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADF74 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADFAC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00AE614 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 */

__int64 __fastcall ClientImmLoadLayout(__int64 a1, _OWORD *a2, __int64 a3, __int64 a4)
{
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 *v9; // rcx
  unsigned int v10; // r8d
  __int64 v11; // rdx
  _OWORD *v12; // rcx
  _OWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r9
  _OWORD *v16; // rax
  unsigned __int64 v18; // [rsp+30h] [rbp-188h] BYREF
  _QWORD v19[3]; // [rsp+38h] [rbp-180h] BYREF
  _BYTE v20[360]; // [rsp+50h] [rbp-168h] BYREF
  __int64 v21; // [rsp+1C0h] [rbp+8h] BYREF
  char v22; // [rsp+1D0h] [rbp+18h] BYREF
  int v23; // [rsp+1D8h] [rbp+20h] BYREF

  v19[0] = a1;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v22,
    gdwInAtomicOperation,
    a3,
    a4);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v21);
  EtwTraceBeginCallback(92LL);
  v5 = KeUserModeCallback(92LL, v19, 8LL, &v18, &v23);
  EtwTraceEndCallback(92LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v21);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v22,
    v6,
    v7,
    v8);
  if ( v5 >= 0 && v23 == 24 )
  {
    v9 = (__int64 *)v18;
    if ( v18 + 8 < v18 || v18 + 8 > MmUserProbeAddress )
      v9 = (__int64 *)MmUserProbeAddress;
    v21 = *v9;
    v10 = v21;
    if ( !v21 )
      return v10;
    v11 = *(_QWORD *)(gptiCurrent + 504LL);
    if ( !v11 || (*(_DWORD *)(v11 + 84) & 1) == 0 || *(_OWORD **)(v11 + 96) != a2 )
    {
      v12 = *(_OWORD **)(v18 + 16);
      if ( v12 + 22 < v12 || (unsigned __int64)(v12 + 22) > MmUserProbeAddress )
        v12 = (_OWORD *)MmUserProbeAddress;
      v13 = v20;
      v14 = 2LL;
      v15 = 2LL;
      do
      {
        *v13 = *v12;
        v13[1] = v12[1];
        v13[2] = v12[2];
        v13[3] = v12[3];
        v13[4] = v12[4];
        v13[5] = v12[5];
        v13[6] = v12[6];
        v13 += 8;
        *(v13 - 1) = v12[7];
        v12 += 8;
        --v15;
      }
      while ( v15 );
      *v13 = *v12;
      v13[1] = v12[1];
      v13[2] = v12[2];
      v13[3] = v12[3];
      v13[4] = v12[4];
      v13[5] = v12[5];
      v16 = v20;
      do
      {
        *a2 = *v16;
        a2[1] = v16[1];
        a2[2] = v16[2];
        a2[3] = v16[3];
        a2[4] = v16[4];
        a2[5] = v16[5];
        a2[6] = v16[6];
        a2 += 8;
        *(a2 - 1) = v16[7];
        v16 += 8;
        --v14;
      }
      while ( v14 );
      *a2 = *v16;
      a2[1] = v16[1];
      a2[2] = v16[2];
      a2[3] = v16[3];
      a2[4] = v16[4];
      a2[5] = v16[5];
      return v10;
    }
  }
  return 0LL;
}
