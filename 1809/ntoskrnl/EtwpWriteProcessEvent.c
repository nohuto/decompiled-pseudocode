/*
 * XREFs of EtwpWriteProcessEvent @ 0x14066D884
 * Callers:
 *     EtwTraceProcess @ 0x14066D6E8 (EtwTraceProcess.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     PsGetProcessServerSilo @ 0x14004D260 (PsGetProcessServerSilo.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     EtwTraceSiloKernelEvent @ 0x1400891D0 (EtwTraceSiloKernelEvent.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 *     EtwpPsProvTraceProcess @ 0x14066D210 (EtwpPsProvTraceProcess.c)
 *     EtwpBuildProcessEvent @ 0x14066DBEC (EtwpBuildProcessEvent.c)
 */

void __fastcall EtwpWriteProcessEvent(
        PEPROCESS Process,
        __int16 a2,
        __int64 a3,
        unsigned int *a4,
        _QWORD *a5,
        PVOID TokenInformation)
{
  char v6; // bp
  __int64 ProcessServerSilo; // rax
  __int64 v12; // [rsp+60h] [rbp-148h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+68h] [rbp-140h] BYREF
  unsigned int v14; // [rsp+98h] [rbp-110h]
  _BYTE v15[48]; // [rsp+A0h] [rbp-108h] BYREF
  __int64 v16[18]; // [rsp+D0h] [rbp-D8h] BYREF

  v6 = 0;
  if ( KeGetCurrentThread()->ApcState.Process != Process
    && ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&Process[1].ProfileListHead.Blink) )
  {
    KiStackAttachProcess(Process, 0LL, (__int64)v15);
    v6 = 1;
  }
  *a5 = 0LL;
  a5[1] = 0LL;
  EtwpBuildProcessEvent(
    Process,
    a3,
    (__int64)v16,
    (__int64)&v12,
    (__int64)a4,
    (PANSI_STRING)&UnicodeString,
    (__int64)a5,
    TokenInformation);
  if ( v6 )
  {
    KiUnstackDetachProcess((__int64)v15, 0LL);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&Process[1].ProfileListHead.Blink);
  }
  if ( EtwpHostSiloState != -4516 && (*(_DWORD *)(EtwpHostSiloState + 4516) & 1) != 0 )
    EtwpPsProvTraceProcess(Process, v14, a4, a3, a2);
  ProcessServerSilo = PsGetProcessServerSilo((__int64)Process);
  EtwTraceSiloKernelEvent(ProcessServerSilo, (int)v16, v12, 1u, a2, 5249284);
  RtlFreeAnsiString(&UnicodeString);
}
