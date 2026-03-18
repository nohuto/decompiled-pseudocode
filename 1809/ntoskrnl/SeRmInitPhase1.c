/*
 * XREFs of SeRmInitPhase1 @ 0x1409C61C4
 * Callers:
 *     Phase1InitializationIoReady @ 0x1409C4788 (Phase1InitializationIoReady.c)
 * Callees:
 *     rbc_InitializeFeatureStaging @ 0x1401B6D38 (rbc_InitializeFeatureStaging.c)
 *     ZwClose @ 0x1401B8350 (ZwClose.c)
 *     ZwCreatePort @ 0x1401B97B0 (ZwCreatePort.c)
 *     PsCreateSystemThread @ 0x14066AA90 (PsCreateSystemThread.c)
 *     TraceLoggingRegisterEx @ 0x14071DC58 (TraceLoggingRegisterEx.c)
 *     AuthzBasepInitializeSystemSecurityAttributes @ 0x140736978 (AuthzBasepInitializeSystemSecurityAttributes.c)
 *     SepAdtInitializeAuditingOptions @ 0x1409C6290 (SepAdtInitializeAuditingOptions.c)
 */

char SeRmInitPhase1()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-38h] BYREF

  rbc_InitializeFeatureStaging();
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 0;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L" \"";
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwCreatePort(&PortHandle, &ObjectAttributes, 4u, 0x200u, 0x4000u) < 0 )
    return 0;
  SepAdtInitializeAuditingOptions();
  if ( PsCreateSystemThread(&ThreadHandle, 0x38u, 0LL, 0LL, 0LL, (PKSTART_ROUTINE)SepRmCommandServerThread, 0LL) < 0 )
    return 0;
  AuthzBasepInitializeSystemSecurityAttributes(v1, v0);
  ZwClose(ThreadHandle);
  ThreadHandle = 0LL;
  TraceLoggingRegisterEx(&stru_140400278, 0LL, 0LL);
  return 1;
}
