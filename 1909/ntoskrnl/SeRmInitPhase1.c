/*
 * XREFs of SeRmInitPhase1 @ 0x140A18010
 * Callers:
 *     Phase1InitializationIoReady @ 0x1409FED48 (Phase1InitializationIoReady.c)
 * Callees:
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwCreatePort @ 0x1401C22B0 (ZwCreatePort.c)
 *     PsCreateSystemThread @ 0x140672580 (PsCreateSystemThread.c)
 *     TraceLoggingRegisterEx @ 0x140747E64 (TraceLoggingRegisterEx.c)
 *     AuthzBasepInitializeSystemSecurityAttributes @ 0x14077896C (AuthzBasepInitializeSystemSecurityAttributes.c)
 *     SepAdtInitializeAuditingOptions @ 0x140A180E0 (SepAdtInitializeAuditingOptions.c)
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
