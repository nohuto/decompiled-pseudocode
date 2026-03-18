/*
 * XREFs of ClientImmLoadLayout @ 0x1C0114E44
 * Callers:
 *     xxxImmLoadLayout @ 0x1C0114D9C (xxxImmLoadLayout.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004ECF4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004ED94 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004EDCC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004F434 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 */

__int64 __fastcall ClientImmLoadLayout(__int64 a1, _OWORD *a2, __int64 a3)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 *v7; // rcx
  unsigned int v8; // r8d
  __int64 v9; // rdx
  _OWORD *v10; // rcx
  _OWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r9
  _OWORD *v14; // rax
  unsigned __int64 v16; // [rsp+30h] [rbp-188h] BYREF
  _QWORD v17[3]; // [rsp+38h] [rbp-180h] BYREF
  _BYTE v18[360]; // [rsp+50h] [rbp-168h] BYREF
  __int64 v19; // [rsp+1C0h] [rbp+8h] BYREF
  char v20; // [rsp+1D0h] [rbp+18h] BYREF
  int v21; // [rsp+1D8h] [rbp+20h] BYREF

  v17[0] = a1;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v20,
    gdwInAtomicOperation,
    a3);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v19);
  EtwTraceBeginCallback(92LL);
  v4 = KeUserModeCallback(92LL, v17, 8LL, &v16, &v21);
  EtwTraceEndCallback(92LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v19);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v20,
    v5,
    v6);
  if ( v4 >= 0 && v21 == 24 )
  {
    v7 = (__int64 *)v16;
    if ( v16 + 8 < v16 || v16 + 8 > MmUserProbeAddress )
      v7 = (__int64 *)MmUserProbeAddress;
    v19 = *v7;
    v8 = v19;
    if ( !v19 )
      return v8;
    v9 = *(_QWORD *)(gptiCurrent + 504LL);
    if ( !v9 || (*(_DWORD *)(v9 + 84) & 1) == 0 || *(_OWORD **)(v9 + 96) != a2 )
    {
      v10 = *(_OWORD **)(v16 + 16);
      if ( v10 + 22 < v10 || (unsigned __int64)(v10 + 22) > MmUserProbeAddress )
        v10 = (_OWORD *)MmUserProbeAddress;
      v11 = v18;
      v12 = 2LL;
      v13 = 2LL;
      do
      {
        *v11 = *v10;
        v11[1] = v10[1];
        v11[2] = v10[2];
        v11[3] = v10[3];
        v11[4] = v10[4];
        v11[5] = v10[5];
        v11[6] = v10[6];
        v11 += 8;
        *(v11 - 1) = v10[7];
        v10 += 8;
        --v13;
      }
      while ( v13 );
      *v11 = *v10;
      v11[1] = v10[1];
      v11[2] = v10[2];
      v11[3] = v10[3];
      v11[4] = v10[4];
      v11[5] = v10[5];
      v14 = v18;
      do
      {
        *a2 = *v14;
        a2[1] = v14[1];
        a2[2] = v14[2];
        a2[3] = v14[3];
        a2[4] = v14[4];
        a2[5] = v14[5];
        a2[6] = v14[6];
        a2 += 8;
        *(a2 - 1) = v14[7];
        v14 += 8;
        --v12;
      }
      while ( v12 );
      *a2 = *v14;
      a2[1] = v14[1];
      a2[2] = v14[2];
      a2[3] = v14[3];
      a2[4] = v14[4];
      a2[5] = v14[5];
      return v8;
    }
  }
  return 0LL;
}
