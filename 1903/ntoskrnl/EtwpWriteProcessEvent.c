/*
 * XREFs of EtwpWriteProcessEvent @ 0x140690504
 * Callers:
 *     EtwTraceProcess @ 0x140690330 (EtwTraceProcess.c)
 * Callees:
 *     PsGetProcessServerSilo @ 0x140006520 (PsGetProcessServerSilo.c)
 *     EtwTraceSiloKernelEvent @ 0x14001D360 (EtwTraceSiloKernelEvent.c)
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1400438A0 (ExAcquireRundownProtection_0.c)
 *     KiUnstackDetachProcess @ 0x140090690 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140090AF0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     RtlFreeAnsiString @ 0x14060B740 (RtlFreeAnsiString.c)
 *     EtwpPsProvTraceProcess @ 0x1406906B0 (EtwpPsProvTraceProcess.c)
 *     EtwpBuildProcessEvent @ 0x140690CA4 (EtwpBuildProcessEvent.c)
 */

void __fastcall EtwpWriteProcessEvent(
        __int64 BugCheckParameter1,
        __int16 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        void *a6)
{
  char v10; // r15
  __int64 ProcessServerSilo; // rax
  __int64 v12; // [rsp+60h] [rbp-A0h] BYREF
  PVOID TokenInformation; // [rsp+68h] [rbp-98h]
  UNICODE_STRING UnicodeString; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v15[10]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v16[56]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v17[18]; // [rsp+E0h] [rbp-20h] BYREF

  TokenInformation = a6;
  memset(v15, 0, sizeof(v15));
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  memset(v16, 0, 0x30uLL);
  v10 = 0;
  if ( KeGetCurrentThread()->ApcState.Process != (_KPROCESS *)BugCheckParameter1
    && ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 768)) )
  {
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v16);
    v10 = 1;
  }
  *a5 = 0LL;
  a5[1] = 0LL;
  EtwpBuildProcessEvent(
    (PEPROCESS)BugCheckParameter1,
    a3,
    (__int64)v17,
    (__int64)&v12,
    a4,
    (PANSI_STRING)&UnicodeString,
    (__int64)a5,
    TokenInformation);
  if ( v10 )
  {
    KiUnstackDetachProcess((struct _KTHREAD *)v16, 0);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 768));
  }
  if ( EtwpHostSiloState != -4516 && (*(_DWORD *)(EtwpHostSiloState + 4516) & 1) != 0 )
    EtwpPsProvTraceProcess((PEPROCESS)BugCheckParameter1, a2);
  ProcessServerSilo = PsGetProcessServerSilo(BugCheckParameter1);
  EtwTraceSiloKernelEvent(ProcessServerSilo, (int)v17, v12, 1u, a2, 5249284);
  RtlFreeAnsiString(&UnicodeString);
}
