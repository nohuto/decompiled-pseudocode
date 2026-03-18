/*
 * XREFs of fnHkINLPNOTIFYSTRUCT @ 0x1C00D8DFC
 * Callers:
 *     ?xxxCallTSFNotifyHook@@YAXPEAUtagNOTIFY@@@Z @ 0x1C00D8DA0 (-xxxCallTSFNotifyHook@@YAXPEAUtagNOTIFY@@@Z.c)
 * Callees:
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C0020920 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00209AC (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020BF8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020C50 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 fnHkINLPNOTIFYSTRUCT(int a1, __int64 a2, __int64 a3, ...)
{
  int v5; // ebx
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  _QWORD v9[13]; // [rsp+40h] [rbp-68h] BYREF
  char v10; // [rsp+B0h] [rbp+8h] BYREF
  __int64 v11; // [rsp+B8h] [rbp+10h] BYREF
  __int64 v12; // [rsp+C8h] [rbp+20h] BYREF
  va_list va; // [rsp+C8h] [rbp+20h]
  unsigned __int64 v14; // [rsp+D0h] [rbp+28h] BYREF
  va_list va1; // [rsp+D0h] [rbp+28h]
  _DWORD *v16; // [rsp+D8h] [rbp+30h]
  va_list va2; // [rsp+E0h] [rbp+38h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v12 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v14 = va_arg(va2, _QWORD);
  v16 = va_arg(va2, _DWORD *);
  v11 = a2;
  memset(v9, 0, 0x60uLL);
  LODWORD(v9[0]) = a1;
  v9[1] = 0LL;
  v9[5] = *(_QWORD *)(a3 + 24);
  LODWORD(v9[6]) = *(_DWORD *)(a3 + 40);
  v9[7] = *(int *)(a3 + 32);
  v9[8] = *(int *)(a3 + 36);
  LODWORD(v9[9]) = *(_DWORD *)(a3 + 44);
  v9[2] = 0LL;
  v9[3] = v14;
  LODWORD(v9[4]) = *v16;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)va,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v10);
  EtwTraceBeginCallback(127LL);
  v5 = KeUserModeCallback(127LL, v9, 96LL, (unsigned __int64 *)va1, &v11);
  EtwTraceEndCallback(127LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v10);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)va, v6);
  if ( v5 < 0 || (_DWORD)v11 != 24 )
    return 0LL;
  v7 = (_QWORD *)v14;
  if ( v14 + 8 < v14 || v14 + 8 > MmUserProbeAddress )
    v7 = (_QWORD *)MmUserProbeAddress;
  return (unsigned int)*v7;
}
