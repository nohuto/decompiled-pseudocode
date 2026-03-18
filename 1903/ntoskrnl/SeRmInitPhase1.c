/*
 * XREFs of SeRmInitPhase1 @ 0x140A17B50
 * Callers:
 *     Phase1InitializationIoReady @ 0x1409FE82C (Phase1InitializationIoReady.c)
 * Callees:
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwCreatePort @ 0x1401C1730 (ZwCreatePort.c)
 *     PsCreateSystemThread @ 0x1406B3FB0 (PsCreateSystemThread.c)
 *     TraceLoggingRegisterEx @ 0x140745F64 (TraceLoggingRegisterEx.c)
 *     AuthzBasepInitializeSystemSecurityAttributes @ 0x14077538C (AuthzBasepInitializeSystemSecurityAttributes.c)
 *     SepAdtInitializeAuditingOptions @ 0x140A17C20 (SepAdtInitializeAuditingOptions.c)
 */

char SeRmInitPhase1()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-38h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  ObjectAttributes.RootDirectory = 0LL;
  memset(&ObjectAttributes.Attributes, 0, 24);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L" \"";
  if ( ZwCreatePort(&PortHandle, &ObjectAttributes, 4u, 0x200u, 0x4000u) < 0 )
    return 0;
  SepAdtInitializeAuditingOptions();
  if ( PsCreateSystemThread(&ThreadHandle, 0x38u, 0LL, 0LL, 0LL, (PKSTART_ROUTINE)SepRmCommandServerThread, 0LL) < 0 )
    return 0;
  AuthzBasepInitializeSystemSecurityAttributes(v1, v0);
  ZwClose(ThreadHandle);
  ThreadHandle = 0LL;
  TraceLoggingRegisterEx(&stru_1404265D0, 0LL, 0LL);
  return 1;
}
