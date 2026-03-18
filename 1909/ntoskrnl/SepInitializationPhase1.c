/*
 * XREFs of SepInitializationPhase1 @ 0x14075C9D4
 * Callers:
 *     SeInitServerSilo @ 0x1408D9844 (SeInitServerSilo.c)
 *     SeInitSystem @ 0x1409FEF7C (SeInitSystem.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140002880 (PsIsCurrentThreadInServerSilo.c)
 *     RtlInitString @ 0x140105320 (RtlInitString.c)
 *     SddlBaseInitialize @ 0x14018B7EC (SddlBaseInitialize.c)
 *     SepInitProcessAuditSd @ 0x14018B860 (SepInitProcessAuditSd.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwCreateEvent @ 0x1401C1550 (ZwCreateEvent.c)
 *     ZwCreateDirectoryObject @ 0x1401C2090 (ZwCreateDirectoryObject.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlCreateAcl @ 0x1405C8E30 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x1405D6210 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1405D6250 (RtlSetDaclSecurityDescriptor.c)
 *     ObInsertObjectEx @ 0x1405D9D60 (ObInsertObjectEx.c)
 *     RtlpAddKnownAce @ 0x1405DD190 (RtlpAddKnownAce.c)
 *     RtlFreeAnsiString @ 0x14060D250 (RtlFreeAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x14063FB50 (RtlAnsiStringToUnicodeString.c)
 *     SepInitializeCodeIntegrity @ 0x14075D250 (SepInitializeCodeIntegrity.c)
 *     SepInitializeSingletonAttributesStructures @ 0x140A01580 (SepInitializeSingletonAttributesStructures.c)
 *     SepInitializeAuthorizationCallbacks @ 0x140A019B0 (SepInitializeAuthorizationCallbacks.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x140A02014 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeAnonymousLogonToken @ 0x140A022A8 (SeMakeAnonymousLogonToken.c)
 */

char SepInitializationPhase1()
{
  char IsCurrentThreadInServerSilo; // di
  ACL *PoolWithTag; // rax
  ACL *v2; // rbx
  UNICODE_STRING UnicodeString; // [rsp+48h] [rbp-39h] BYREF
  HANDLE DirectoryHandle; // [rsp+58h] [rbp-29h] BYREF
  HANDLE EventHandle; // [rsp+60h] [rbp-21h] BYREF
  STRING DestinationString; // [rsp+68h] [rbp-19h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-9h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+A8h] [rbp+27h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  EventHandle = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  IsCurrentThreadInServerSilo = PsIsCurrentThreadInServerSilo();
  if ( !IsCurrentThreadInServerSilo )
  {
    ObInsertObjectEx(
      (_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5] & 0xFFFFFFFFFFFFFFF0uLL),
      0LL,
      0,
      0,
      0,
      0LL,
      0LL);
    SeAnonymousLogonToken = SeMakeAnonymousLogonToken();
    SeAnonymousLogonTokenNoEveryone = SeMakeAnonymousLogonTokenNoEveryone();
  }
  RtlInitString(&DestinationString, "\\Security");
  RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u);
  RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  PoolWithTag = (ACL *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x100uLL, 0x20206553u);
  v2 = PoolWithTag;
  if ( !PoolWithTag )
    return 0;
  RtlCreateAcl(PoolWithTag, 0x100u, 2u);
  RtlpAddKnownAce(v2, 2u, 0, 983055, (unsigned __int8 *)SeLocalSystemSid, 0);
  RtlpAddKnownAce(v2, 2u, 0, 131075, (unsigned __int8 *)SeAliasAdminsSid, 0);
  RtlpAddKnownAce(v2, 2u, 0, 2, (unsigned __int8 *)SeWorldSid, 0);
  RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v2, 0);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  ObjectAttributes.ObjectName = &UnicodeString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
  ObjectAttributes.Attributes = 80;
  ZwCreateDirectoryObject(&DirectoryHandle, 0xF000Fu, &ObjectAttributes);
  RtlFreeAnsiString(&UnicodeString);
  ExFreePoolWithTag(v2, 0);
  RtlInitString(&DestinationString, "LSA_AUTHENTICATION_INITIALIZED");
  RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u);
  ObjectAttributes.SecurityQualityOfService = 0LL;
  ObjectAttributes.RootDirectory = DirectoryHandle;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &UnicodeString;
  ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultSd;
  ObjectAttributes.Attributes = 80;
  ZwCreateEvent(&EventHandle, 0x40000000u, &ObjectAttributes, NotificationEvent, 0);
  RtlFreeAnsiString(&UnicodeString);
  ZwClose(DirectoryHandle);
  ZwClose(EventHandle);
  if ( !IsCurrentThreadInServerSilo )
  {
    SepInitProcessAuditSd();
    SepInitializeCodeIntegrity();
    SepInitializeAuthorizationCallbacks();
    if ( (int)SepInitializeSingletonAttributesStructures() < 0 )
      return 0;
  }
  SddlBaseInitialize();
  return 1;
}
