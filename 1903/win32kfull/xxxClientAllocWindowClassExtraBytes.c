/*
 * XREFs of xxxClientAllocWindowClassExtraBytes @ 0x1C00AAFD4
 * Callers:
 *     xxxCreateWindowEx @ 0x1C00BFE30 (xxxCreateWindowEx.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00ADED4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADF74 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADFAC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00AE614 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 */

volatile void *__fastcall xxxClientAllocWindowClassExtraBytes(SIZE_T Length)
{
  SIZE_T v1; // rdi
  int v2; // ebx
  volatile void **v3; // rcx
  volatile void *v4; // rbx
  __int64 CurrentProcessWow64Process; // rax
  unsigned __int64 v7; // [rsp+30h] [rbp-38h] BYREF
  volatile void *v8; // [rsp+38h] [rbp-30h]
  char v9; // [rsp+70h] [rbp+8h] BYREF
  char v10; // [rsp+78h] [rbp+10h] BYREF
  int v11; // [rsp+80h] [rbp+18h] BYREF
  int v12; // [rsp+88h] [rbp+20h] BYREF

  v1 = (unsigned int)Length;
  v11 = Length;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v10);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v9);
  EtwTraceBeginCallback(123LL);
  v2 = KeUserModeCallback(123LL, &v11, 4LL, &v7, &v12);
  EtwTraceEndCallback(123LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v9);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v10);
  if ( v2 < 0 || v12 != 24 )
    return 0LL;
  v3 = (volatile void **)v7;
  if ( v7 + 8 < v7 || v7 + 8 > MmUserProbeAddress )
    v3 = (volatile void **)MmUserProbeAddress;
  v8 = *v3;
  v4 = v8;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v3);
  ProbeForRead(v4, v1, CurrentProcessWow64Process != 0 ? 1 : 4);
  return v4;
}
