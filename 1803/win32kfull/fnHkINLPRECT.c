/*
 * XREFs of fnHkINLPRECT @ 0x1C01E085C
 * Callers:
 *     xxxHkCallHook @ 0x1C0042460 (xxxHkCallHook.c)
 * Callees:
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C0020920 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00209AC (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020BF8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020C50 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall fnHkINLPRECT(int a1, __int64 a2, _OWORD *a3, __int64 a4, __int64 a5)
{
  int v9; // ebx
  __int64 v10; // rdx
  __int64 *v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int128 *v14; // rcx
  char v16; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v17[3]; // [rsp+31h] [rbp-87h] BYREF
  int v18; // [rsp+34h] [rbp-84h] BYREF
  _QWORD v19[4]; // [rsp+38h] [rbp-80h] BYREF
  __int128 v20; // [rsp+58h] [rbp-60h]
  _OWORD v21[3]; // [rsp+68h] [rbp-50h] BYREF

  memset(v21, 0, sizeof(v21));
  LODWORD(v21[0]) = a1;
  *((_QWORD *)&v21[0] + 1) = a2;
  v21[1] = *a3;
  *(_QWORD *)&v21[2] = a4;
  *((_QWORD *)&v21[2] + 1) = a5;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v17,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v16);
  EtwTraceBeginCallback(48LL);
  v9 = KeUserModeCallback(48LL, v21, 48LL, v19, &v18);
  EtwTraceEndCallback(48LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v16);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v17, v10);
  if ( v9 < 0 || v18 != 24 )
    return 0LL;
  v11 = (__int64 *)v19[0];
  if ( (unsigned __int64)(v19[0] + 8LL) < v19[0] || v19[0] + 8LL > MmUserProbeAddress )
    v11 = (__int64 *)MmUserProbeAddress;
  v12 = *v11;
  v19[1] = *v11;
  v13 = *(_QWORD *)(gptiCurrent + 504LL);
  if ( v13 )
  {
    if ( (*(_DWORD *)(v13 + 84) & 1) != 0 && *(_OWORD **)(v13 + 96) == a3 )
      return 0LL;
  }
  v14 = *(__int128 **)(v19[0] + 16LL);
  if ( v14 + 1 < v14 || (unsigned __int64)(v14 + 1) > MmUserProbeAddress )
    v14 = (__int128 *)MmUserProbeAddress;
  v20 = *v14;
  *a3 = v20;
  return v12;
}
