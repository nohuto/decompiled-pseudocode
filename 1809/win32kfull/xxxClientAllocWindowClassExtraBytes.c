/*
 * XREFs of xxxClientAllocWindowClassExtraBytes @ 0x1C0016654
 * Callers:
 *     xxxCreateWindowEx @ 0x1C003DE94 (xxxCreateWindowEx.c)
 *     xxxValidateClassAndSize @ 0x1C015D924 (xxxValidateClassAndSize.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00198F4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0019994 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00199CC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C001A5C8 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C02C1D3C (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

volatile void *__fastcall xxxClientAllocWindowClassExtraBytes(SIZE_T Length, __int64 a2)
{
  SIZE_T v3; // rsi
  int v4; // ebx
  volatile void **v5; // rcx
  volatile void *v6; // rbx
  __int64 CurrentProcessWow64Process; // rax
  unsigned __int64 v9; // [rsp+30h] [rbp-38h] BYREF
  volatile void *v10; // [rsp+38h] [rbp-30h]
  char v11; // [rsp+70h] [rbp+8h] BYREF
  char v12; // [rsp+78h] [rbp+10h] BYREF
  int v13; // [rsp+80h] [rbp+18h] BYREF
  int v14; // [rsp+88h] [rbp+20h] BYREF

  v3 = (unsigned int)Length;
  v13 = Length;
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 40) + 232LL) & 0x800) != 0 )
    MicrosoftTelemetryAssertTriggeredMsgKM("MSRC 68061: xxxClientAllocWindowClassExtraBytes called for console window!");
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v12);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v11);
  EtwTraceBeginCallback(123LL);
  v4 = KeUserModeCallback(123LL, &v13, 4LL, &v9, &v14);
  EtwTraceEndCallback(123LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v11);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v12);
  if ( v4 < 0 || v14 != 24 )
    return 0LL;
  v5 = (volatile void **)v9;
  if ( v9 + 8 < v9 || v9 + 8 > MmUserProbeAddress )
    v5 = (volatile void **)MmUserProbeAddress;
  v10 = *v5;
  v6 = v10;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v5);
  ProbeForRead(v6, v3, CurrentProcessWow64Process != 0 ? 1 : 4);
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 40) + 232LL) & 0x800) != 0 )
    return 0LL;
  else
    return v6;
}
