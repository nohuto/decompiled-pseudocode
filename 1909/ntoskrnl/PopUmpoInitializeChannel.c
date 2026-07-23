/*
 * XREFs of PopUmpoInitializeChannel @ 0x140A1EA00
 * Callers:
 *     PoInitSystem @ 0x140A0685C (PoInitSystem.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     PopUmpoProcessMessages @ 0x1400F0418 (PopUmpoProcessMessages.c)
 *     ExRegisterCallback @ 0x14017F130 (ExRegisterCallback.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwAlpcCreatePort @ 0x1401C1B70 (ZwAlpcCreatePort.c)
 *     ZwAlpcSetInformation @ 0x1401C1DB0 (ZwAlpcSetInformation.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlCreateAcl @ 0x1405C8E30 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x1405D6210 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1405D6250 (RtlSetDaclSecurityDescriptor.c)
 *     RtlAddAccessAllowedAce @ 0x14069D1C0 (RtlAddAccessAllowedAce.c)
 *     ExCreateCallback @ 0x1406EAE20 (ExCreateCallback.c)
 */

__int64 PopUmpoInitializeChannel()
{
  ULONG v0; // ebx
  ACL *PoolWithTag; // rax
  ACL *v2; // rsi
  NTSTATUS Acl; // ebx
  PCALLBACK_OBJECT v4; // rdi
  PCALLBACK_OBJECT CallbackObject; // [rsp+28h] [rbp-89h] BYREF
  PCALLBACK_OBJECT PortInformation; // [rsp+30h] [rbp-81h] BYREF
  __int64 v8; // [rsp+38h] [rbp-79h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-71h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-41h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+80h] [rbp-31h] BYREF
  _ALPC_PORT_ATTRIBUTES PortAttributes; // [rsp+A8h] [rbp-9h] BYREF

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  memset(&PortAttributes, 0, sizeof(PortAttributes));
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  PopAlpcServerPort = 0LL;
  PopAlpcClientPort = 0LL;
  PopUmpoPushLock = 0LL;
  CallbackObject = 0LL;
  PortInformation = 0LL;
  v8 = 0LL;
  PopUmpoAlpcClientConnected = 0;
  v0 = 4 * *((unsigned __int8 *)SeLocalSystemSid + 1) + 28;
  PoolWithTag = (ACL *)ExAllocatePoolWithTag(NonPagedPoolNx, v0, 0x6F706D55u);
  v2 = PoolWithTag;
  if ( PoolWithTag )
  {
    Acl = RtlCreateAcl(PoolWithTag, v0, 2u);
    if ( Acl >= 0 )
    {
      Acl = RtlAddAccessAllowedAce(v2, 2u, 0x10000000u, SeLocalSystemSid);
      if ( Acl >= 0 )
      {
        Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
        if ( Acl >= 0 )
        {
          Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v2, 0);
          if ( Acl >= 0 )
          {
            RtlInitUnicodeString(&DestinationString, L"\\PowerPort");
            ObjectAttributes.RootDirectory = 0LL;
            ObjectAttributes.SecurityQualityOfService = 0LL;
            ObjectAttributes.ObjectName = &DestinationString;
            PortAttributes.MaxMessageLength = 512LL;
            ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
            PortAttributes.Flags = 0x100000;
            ObjectAttributes.Length = 48;
            ObjectAttributes.Attributes = 512;
            Acl = ZwAlpcCreatePort(&PopAlpcServerPort, &ObjectAttributes, &PortAttributes);
            if ( Acl >= 0 )
            {
              ObjectAttributes.RootDirectory = 0LL;
              ObjectAttributes.ObjectName = 0LL;
              ObjectAttributes.Length = 48;
              ObjectAttributes.Attributes = 512;
              *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
              Acl = ExCreateCallback(&CallbackObject, &ObjectAttributes, 1u, 0);
              if ( Acl >= 0 )
              {
                v4 = CallbackObject;
                if ( ExRegisterCallback(CallbackObject, (PCALLBACK_FUNCTION)PopUmpoMessageCallback, 0LL) )
                {
                  v8 = 0LL;
                  PortInformation = v4;
                  Acl = ZwAlpcSetInformation(
                          PopAlpcServerPort,
                          AlpcRegisterCallbackInformation,
                          &PortInformation,
                          0x10u);
                  ObfDereferenceObject(v4);
                  if ( Acl >= 0 )
                  {
                    PopUmpoProcessMessages();
                    Acl = 0;
                  }
                }
                else
                {
                  Acl = -1073741670;
                }
              }
            }
          }
        }
      }
    }
    ExFreePoolWithTag(v2, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)Acl;
}
