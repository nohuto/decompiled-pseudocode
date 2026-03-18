/*
 * XREFs of EtwTraceJob @ 0x1408F37B0
 * Callers:
 *     NtCreateJobObject @ 0x140689AC0 (NtCreateJobObject.c)
 *     NtTerminateJobObject @ 0x1406E2520 (NtTerminateJobObject.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x1406E2594 (PspTerminateAllProcessesInJobHierarchy.c)
 *     NtOpenJobObject @ 0x1408C6D70 (NtOpenJobObject.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140121B90 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     EtwpCopyJobGuidSafe @ 0x1408F4424 (EtwpCopyJobGuidSafe.c)
 *     EtwpPsProvTraceJob @ 0x1408F4D68 (EtwpPsProvTraceJob.c)
 */

void __fastcall EtwTraceJob(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4)
{
  __int64 v5; // rdx
  int v6; // r8d
  __int64 v7; // r9
  unsigned int v8; // r10d
  _QWORD v9[2]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v10; // [rsp+40h] [rbp-30h]
  unsigned int v11; // [rsp+48h] [rbp-28h]
  _QWORD *v12; // [rsp+50h] [rbp-20h] BYREF
  int v13; // [rsp+58h] [rbp-18h]
  int v14; // [rsp+5Ch] [rbp-14h]

  v9[0] = 0LL;
  v9[1] = 0LL;
  v10 = 0LL;
  v11 = 0;
  EtwpCopyJobGuidSafe(v9, a1);
  if ( v5 )
    LODWORD(v10) = *(_DWORD *)(v5 + 1220);
  else
    LODWORD(v10) = 0;
  v14 = 0;
  HIDWORD(v10) = v6;
  v11 = v8;
  v12 = v9;
  v13 = 28;
  if ( v7 && EtwpHostSiloState != -4516 && (*(_DWORD *)(EtwpHostSiloState + 4516) & 0x80000) != 0 )
    EtwpPsProvTraceJob(v7, v8, a4);
  EtwTraceKernelEvent((__int64)&v12, 1u, 0x80000u, a4, 0x501904u);
}
