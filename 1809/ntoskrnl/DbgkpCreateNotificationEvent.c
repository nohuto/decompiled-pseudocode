/*
 * XREFs of DbgkpCreateNotificationEvent @ 0x140728D58
 * Callers:
 *     DbgkpInitializePhase1SiloState @ 0x140728D1C (DbgkpInitializePhase1SiloState.c)
 * Callees:
 *     RtlLengthSid @ 0x1400162C0 (RtlLengthSid.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x1400DCEA0 (RtlDeriveCapabilitySidsFromName.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwCreateEvent @ 0x1401B8BF0 (ZwCreateEvent.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1405CBDE0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1405CBF70 (RtlCreateAcl.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405E9390 (ObpReferenceObjectByHandleWithTag.c)
 *     RtlpAddKnownAce @ 0x1406325C0 (RtlpAddKnownAce.c)
 *     RtlCreateSecurityDescriptor @ 0x140651050 (RtlCreateSecurityDescriptor.c)
 */

NTSTATUS __fastcall DbgkpCreateNotificationEvent(UNICODE_STRING *a1, _QWORD *a2)
{
  NTSTATUS result; // eax
  ULONG v5; // ebx
  ULONG v6; // ebx
  ULONG v7; // ebx
  ULONG v8; // ebx
  ULONG v9; // edi
  ACL *PoolWithTag; // rax
  ACL *v11; // rbx
  int Acl; // edi
  ACL *v13; // rcx
  HANDLE EventHandle; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+48h] [rbp-B8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int8 CapabilitySid[48]; // [rsp+B0h] [rbp-50h] BYREF
  char CapabilityGroupSid[48]; // [rsp+E0h] [rbp-20h] BYREF

  *(_DWORD *)&UnicodeString.Length = 2621478;
  UnicodeString.Buffer = L"lpacInstrumentation";
  result = RtlDeriveCapabilitySidsFromName(&UnicodeString, CapabilityGroupSid, CapabilitySid);
  if ( result >= 0 )
  {
    result = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    if ( result >= 0 )
    {
      v5 = RtlLengthSid(SeWorldSid);
      v6 = RtlLengthSid(SeLocalSystemSid) + v5;
      v7 = RtlLengthSid(SeLocalSid) + v6;
      v8 = RtlLengthSid(SeAllAppPackagesSid) + v7;
      v9 = v8 + RtlLengthSid(CapabilitySid) + 68;
      PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, v9, 0x6C636144u);
      v11 = PoolWithTag;
      if ( !PoolWithTag )
        return -1073741670;
      Acl = RtlCreateAcl(PoolWithTag, v9, 2u);
      v13 = v11;
      if ( Acl >= 0 )
      {
        Acl = RtlpAddKnownAce(v11, 2u, 0, 1179649, (unsigned __int8 *)SeLocalSid, 0);
        v13 = v11;
        if ( Acl >= 0 )
        {
          Acl = RtlpAddKnownAce(v11, 2u, 0, 1179649, (unsigned __int8 *)SeAllAppPackagesSid, 0);
          v13 = v11;
          if ( Acl >= 0 )
          {
            Acl = RtlpAddKnownAce(v11, 2u, 0, 1179649, CapabilitySid, 0);
            v13 = v11;
            if ( Acl >= 0 )
            {
              Acl = RtlpAddKnownAce(v11, 2u, 0, 2031619, (unsigned __int8 *)SeLocalSystemSid, 0);
              v13 = v11;
              if ( Acl >= 0 )
              {
                Acl = RtlpAddKnownAce(v11, 2u, 0, 1179649, (unsigned __int8 *)SeWorldSid, 0);
                if ( Acl >= 0 )
                {
                  Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v11, 0);
                  if ( Acl >= 0 )
                  {
                    ObjectAttributes.RootDirectory = 0LL;
                    ObjectAttributes.SecurityQualityOfService = 0LL;
                    ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
                    ObjectAttributes.Length = 48;
                    ObjectAttributes.Attributes = 528;
                    ObjectAttributes.ObjectName = a1;
                    Acl = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
                    ExFreePoolWithTag(v11, 0);
                    if ( Acl >= 0 )
                    {
                      Acl = ObpReferenceObjectByHandleWithTag(
                              (ULONG_PTR)EventHandle,
                              2,
                              (__int64)ExEventObjectType,
                              0,
                              0x6B676244u,
                              a2,
                              0LL,
                              0LL);
                      ZwClose(EventHandle);
                    }
                    return Acl;
                  }
                }
                v13 = v11;
              }
            }
          }
        }
      }
      ExFreePoolWithTag(v13, 0);
      return Acl;
    }
  }
  return result;
}
