/*
 * XREFs of xxxClientAllocWindowClassExtraBytes @ 0x1C00E655C
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0030FEC (xxxCreateWindowEx.c)
 * Callees:
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C0020920 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00209AC (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020BF8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020C50 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 */

volatile void *__fastcall xxxClientAllocWindowClassExtraBytes(SIZE_T Length, __int64 a2)
{
  SIZE_T v2; // rdi
  int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  volatile void **v7; // rcx
  ULONG64 v8; // rdx
  volatile void *v9; // rbx
  __int64 CurrentProcessWow64Process; // rax
  unsigned __int64 v12; // [rsp+30h] [rbp-38h] BYREF
  volatile void *v13; // [rsp+38h] [rbp-30h]
  char v14; // [rsp+70h] [rbp+8h] BYREF
  char v15; // [rsp+78h] [rbp+10h] BYREF
  int v16; // [rsp+80h] [rbp+18h] BYREF
  int v17; // [rsp+88h] [rbp+20h] BYREF

  v2 = (unsigned int)Length;
  v16 = Length;
  if ( gdwInAtomicOperation )
  {
    a2 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v15, a2);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v14);
  EtwTraceBeginCallback(123LL);
  v3 = KeUserModeCallback(123LL, &v16, 4LL, &v12, &v17);
  EtwTraceEndCallback(123LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v14);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v15, v4);
  if ( v3 < 0 || v17 != 24 )
    return 0LL;
  v7 = (volatile void **)v12;
  v8 = v12 + 8;
  if ( v12 + 8 < v12 || v8 > MmUserProbeAddress )
    v7 = (volatile void **)MmUserProbeAddress;
  v13 = *v7;
  v9 = v13;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v7, v8, v5, v6);
  ProbeForRead(v9, v2, CurrentProcessWow64Process != 0 ? 1 : 4);
  return v9;
}
