/*
 * XREFs of SepRmLsaConnectRequest @ 0x14076854C
 * Callers:
 *     SepRmCommandServerThread @ 0x1407683E0 (SepRmCommandServerThread.c)
 * Callees:
 *     PsGetProcessServerSilo @ 0x1400065B0 (PsGetProcessServerSilo.c)
 *     PsIsHostSilo @ 0x14000A9B0 (PsIsHostSilo.c)
 *     ObfReferenceObjectWithTag @ 0x14000D8E0 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     PsDetachSiloFromCurrentThread @ 0x14008D060 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14008D080 (PsAttachSiloToCurrentThread.c)
 *     PsGetServerSiloGlobals @ 0x1400C9B10 (PsGetServerSiloGlobals.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwAcceptConnectPort @ 0x1401C0C90 (ZwAcceptConnectPort.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwOpenProcess @ 0x1401C1110 (ZwOpenProcess.c)
 *     ZwCreateSection @ 0x1401C1590 (ZwCreateSection.c)
 *     ZwCompleteConnectPort @ 0x1401C1FD0 (ZwCompleteConnectPort.c)
 *     ZwConnectPort @ 0x1401C2010 (ZwConnectPort.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     SepRmVerifyLsaProtectionLevel @ 0x1407687F4 (SepRmVerifyLsaProtectionLevel.c)
 *     SepRmCleanupRmLsaState @ 0x1408D97F8 (SepRmCleanupRmLsaState.c)
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
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-71h] BYREF
  struct _PORT_VIEW v17; // [rsp+70h] [rbp-61h] BYREF
  struct _REMOTE_PORT_VIEW ClientView; // [rsp+A0h] [rbp-31h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B8h] [rbp-19h] BYREF
  struct _SECURITY_QUALITY_OF_SERVICE SecurityQos; // [rsp+E8h] [rbp+17h] BYREF

  memset(&v17, 0, sizeof(v17));
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&SecurityQos.Length = 0LL;
  *(_DWORD *)&SecurityQos.ContextTrackingMode = 0;
  memset(&ClientView, 0, sizeof(ClientView));
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v2 = 0LL;
  ProcessHandle = 0LL;
  memset(&ObjectAttributes.RootDirectory, 0, 40);
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
              v17.Length = 48;
              v17.SectionHandle = (HANDLE)*((_QWORD *)v5 + 5);
              v17.SectionOffset = 0;
              v17.ViewSize = *((unsigned int *)v5 + 12);
              *(_OWORD *)&v17.ViewBase = 0LL;
              v9 = PsAttachSiloToCurrentThread(ProcessServerSilo);
              RtlInitUnicodeString(&DestinationString, L"\\SeLsaCommandPort");
              Section = ZwConnectPort(
                          (PHANDLE)v5 + 1,
                          &DestinationString,
                          &SecurityQos,
                          &v17,
                          0LL,
                          &MaxMessageLength,
                          0LL,
                          0LL);
              PsDetachSiloFromCurrentThread(v9);
              if ( Section >= 0 )
              {
                if ( MaxMessageLength == 512 )
                {
                  *((_QWORD *)v5 + 8) = v17.ViewBase;
                  *((_DWORD *)v5 + 18) = LODWORD(v17.ViewRemoteBase) - LODWORD(v17.ViewBase);
                  *((_QWORD *)v5 + 7) = v17.ViewRemoteBase;
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
