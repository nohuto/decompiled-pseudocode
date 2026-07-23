/*
 * XREFs of PfpCreateEvent @ 0x140754060
 * Callers:
 *     PfTStart @ 0x140753C6C (PfTStart.c)
 *     PfpScenCtxStart @ 0x140753FE4 (PfpScenCtxStart.c)
 *     PfpParametersInitialize @ 0x1409D572C (PfpParametersInitialize.c)
 *     PfSnInitializePrefetcher @ 0x1409D58C4 (PfSnInitializePrefetcher.c)
 * Callees:
 *     RtlLengthSid @ 0x1400162C0 (RtlLengthSid.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwCreateEvent @ 0x1401B8BF0 (ZwCreateEvent.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1405CBDE0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1405CBF70 (RtlCreateAcl.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     RtlpAddKnownAce @ 0x1406325C0 (RtlpAddKnownAce.c)
 *     RtlCreateSecurityDescriptor @ 0x140651050 (RtlCreateSecurityDescriptor.c)
 */

__int64 __fastcall PfpCreateEvent(UNICODE_STRING *a1, EVENT_TYPE a2, PVOID *a3)
{
  int Acl; // ebx
  ULONG v7; // ebx
  ULONG v8; // ebx
  ACL *PoolWithTag; // rax
  ACL *v10; // rdi
  PVOID Object; // [rsp+30h] [rbp-29h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+38h] [rbp-21h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+7h] BYREF
  HANDLE EventHandle; // [rsp+D8h] [rbp+7Fh] BYREF

  EventHandle = 0LL;
  Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( Acl >= 0 )
  {
    v7 = RtlLengthSid(SeAliasAdminsSid);
    v8 = RtlLengthSid(SeLocalSystemSid) + 32 + v7;
    PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, v8, 0x6C636144u);
    v10 = PoolWithTag;
    if ( PoolWithTag )
    {
      Acl = RtlCreateAcl(PoolWithTag, v8, 2u);
      if ( Acl >= 0 )
      {
        Acl = RtlpAddKnownAce(v10, 2u, 0, 2031619, (unsigned __int8 *)SeAliasAdminsSid, 0);
        if ( Acl >= 0 )
        {
          Acl = RtlpAddKnownAce(v10, 2u, 0, 2031619, (unsigned __int8 *)SeLocalSystemSid, 0);
          if ( Acl >= 0 )
          {
            Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v10, 0);
            if ( Acl >= 0 )
            {
              ObjectAttributes.Length = 48;
              ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
              ObjectAttributes.RootDirectory = 0LL;
              ObjectAttributes.Attributes = 656;
              ObjectAttributes.ObjectName = a1;
              ObjectAttributes.SecurityQualityOfService = 0LL;
              Acl = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, a2, 0);
              if ( Acl >= 0 )
              {
                Acl = ObReferenceObjectByHandle(
                        EventHandle,
                        0x1F0003u,
                        (POBJECT_TYPE)ExEventObjectType,
                        0,
                        &Object,
                        0LL);
                *a3 = Object;
                if ( Acl >= 0 )
                  Acl = 0;
              }
            }
          }
        }
      }
    }
    else
    {
      Acl = -1073741670;
    }
    if ( EventHandle )
      ZwClose(EventHandle);
    if ( v10 )
      ExFreePoolWithTag(v10, 0);
  }
  return (unsigned int)Acl;
}
