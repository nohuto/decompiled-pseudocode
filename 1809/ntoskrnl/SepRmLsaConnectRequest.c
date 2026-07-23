/*
 * XREFs of SepRmLsaConnectRequest @ 0x1407415E4
 * Callers:
 *     SepRmCommandServerThread @ 0x140741490 (SepRmCommandServerThread.c)
 * Callees:
 *     PsDetachSiloFromCurrentThread @ 0x14000FBB0 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14000FBD0 (PsAttachSiloToCurrentThread.c)
 *     PsGetProcessServerSilo @ 0x14004D260 (PsGetProcessServerSilo.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     PsGetServerSiloGlobals @ 0x1400922CC (PsGetServerSiloGlobals.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     PsIsHostSilo @ 0x1400B89C0 (PsIsHostSilo.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwAcceptConnectPort @ 0x1401B8330 (ZwAcceptConnectPort.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenProcess @ 0x1401B87B0 (ZwOpenProcess.c)
 *     ZwCreateSection @ 0x1401B8C30 (ZwCreateSection.c)
 *     ZwCompleteConnectPort @ 0x1401B9670 (ZwCompleteConnectPort.c)
 *     ZwConnectPort @ 0x1401B96B0 (ZwConnectPort.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     SepRmVerifyLsaProtectionLevel @ 0x14074186C (SepRmVerifyLsaProtectionLevel.c)
 *     SepRmCleanupRmLsaState @ 0x14089C9D8 (SepRmCleanupRmLsaState.c)
 */

__int64 __fastcall SepRmLsaConnectRequest(PPORT_MESSAGE ConnectionRequest)
{
  PVOID v2; // r14
  NTSTATUS v3; // eax
  struct _LIST_ENTRY *ProcessServerSilo; // rbx
  char *v5; // rdi
  bool IsHostSilo; // r15
  __int64 v7; // rdx
  NTSTATUS Section; // esi
  struct _LIST_ENTRY *v9; // rbx
  void *v10; // rcx
  unsigned int v12; // ebx
  HANDLE ProcessHandle; // [rsp+48h] [rbp-89h] BYREF
  ULONG MaxMessageLength; // [rsp+50h] [rbp-81h] BYREF
  PVOID PortHandle; // [rsp+58h] [rbp-79h] BYREF
  struct _PORT_VIEW v16; // [rsp+60h] [rbp-71h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-41h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-31h] BYREF
  struct _REMOTE_PORT_VIEW ClientView; // [rsp+D0h] [rbp-1h] BYREF
  struct _SECURITY_QUALITY_OF_SERVICE SecurityQos; // [rsp+E8h] [rbp+17h] BYREF

  ObjectAttributes.Length = 48;
  ProcessHandle = 0LL;
  memset(&ObjectAttributes.RootDirectory, 0, 20);
  v2 = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenProcess(&ProcessHandle, 0x28u, &ObjectAttributes, &ConnectionRequest->ClientId) >= 0 )
  {
    v3 = ObReferenceObjectByHandle(ProcessHandle, 0, (POBJECT_TYPE)PsProcessType, 0, &PortHandle, 0LL);
    v2 = PortHandle;
    if ( v3 >= 0 )
    {
      ProcessServerSilo = (struct _LIST_ENTRY *)PsGetProcessServerSilo((__int64)PortHandle);
      v5 = (char *)PsGetServerSiloGlobals((__int64)ProcessServerSilo) + 784;
      if ( !*(_QWORD *)v5 )
      {
        *(_QWORD *)v5 = ProcessHandle;
        SepRmVerifyLsaProtectionLevel(v5);
        ClientView.Length = 24;
        IsHostSilo = PsIsHostSilo((__int64)ProcessServerSilo);
        if ( IsHostSilo )
        {
          v7 = -8LL;
        }
        else
        {
          ObfReferenceObjectWithTag(ProcessServerSilo, 0x74536553u);
          v7 = (__int64)ProcessServerSilo;
        }
        Section = ZwAcceptConnectPort((PHANDLE)v5 + 3, (PVOID)v7, ConnectionRequest, 1u, 0LL, &ClientView);
        if ( Section < 0 )
        {
          if ( !IsHostSilo )
            ObfDereferenceObjectWithTag(ProcessServerSilo, 0x74536553u);
        }
        else
        {
          Section = ZwCompleteConnectPort(*((HANDLE *)v5 + 3));
          if ( Section >= 0 )
          {
            SecurityQos.ImpersonationLevel = SecurityImpersonation;
            *(_WORD *)&SecurityQos.ContextTrackingMode = 257;
            *((_DWORD *)v5 + 12) = 4096;
            *((_DWORD *)v5 + 13) = 0;
            Section = ZwCreateSection((PHANDLE)v5 + 5, 0xF001Fu, 0LL, (PLARGE_INTEGER)v5 + 6, 4u, 0x8000000u, 0LL);
            if ( Section >= 0 )
            {
              v16.Length = 48;
              v16.SectionHandle = (HANDLE)*((_QWORD *)v5 + 5);
              v16.SectionOffset = 0;
              v16.ViewSize = *((unsigned int *)v5 + 12);
              *(_OWORD *)&v16.ViewBase = 0LL;
              SecurityQos.ImpersonationLevel = SecurityImpersonation;
              *(_WORD *)&SecurityQos.ContextTrackingMode = 257;
              v9 = PsAttachSiloToCurrentThread(ProcessServerSilo);
              RtlInitUnicodeString(&DestinationString, L"\\SeLsaCommandPort");
              Section = ZwConnectPort(
                          (PHANDLE)v5 + 1,
                          &DestinationString,
                          &SecurityQos,
                          &v16,
                          0LL,
                          &MaxMessageLength,
                          0LL,
                          0LL);
              PsDetachSiloFromCurrentThread(v9);
              if ( Section >= 0 )
              {
                if ( MaxMessageLength == 512 )
                {
                  *((_QWORD *)v5 + 8) = v16.ViewBase;
                  *((_DWORD *)v5 + 18) = LODWORD(v16.ViewRemoteBase) - LODWORD(v16.ViewBase);
                  *((_QWORD *)v5 + 7) = v16.ViewRemoteBase;
LABEL_12:
                  v10 = (void *)*((_QWORD *)v5 + 5);
                  if ( v10 )
                  {
                    ZwClose(v10);
                    *((_QWORD *)v5 + 5) = 0LL;
                  }
                  if ( v2 )
                    ObfDereferenceObject(v2);
                  return (unsigned int)Section;
                }
                Section = -1073741823;
              }
            }
          }
        }
        SepRmCleanupRmLsaState(v5);
        goto LABEL_12;
      }
    }
    ZwClose(ProcessHandle);
  }
  v12 = ZwAcceptConnectPort(&PortHandle, 0LL, ConnectionRequest, 0, 0LL, 0LL);
  if ( v2 )
    ObfDereferenceObject(v2);
  return v12;
}
