/*
 * XREFs of SmpInitializePendingRename @ 0x140005F54
 * Callers:
 *     SmpInit @ 0x14000619C (SmpInit.c)
 * Callees:
 *     __security_check_cookie @ 0x14000D270 (__security_check_cookie.c)
 */

__int64 SmpInitializePendingRename()
{
  NTSTATUS Acl; // edi
  ULONG v1; // ebx
  ULONG v2; // esi
  struct _ACL *Heap; // rbx
  PSID v5; // [rsp+68h] [rbp-39h] BYREF
  PSID Sid; // [rsp+70h] [rbp-31h] BYREF
  void *MutantHandle; // [rsp+78h] [rbp-29h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-21h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+B0h] [rbp+Fh] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+C0h] [rbp+1Fh] BYREF
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+E8h] [rbp+47h] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  if ( RtlAllocateAndInitializeSid(&IdentifierAuthority, 2u, 0x20u, 0x220u, 0, 0, 0, 0, 0, 0, &Sid) < 0 )
    return 3221225626LL;
  Acl = RtlAllocateAndInitializeSid(&IdentifierAuthority, 1u, 0x12u, 0, 0, 0, 0, 0, 0, 0, &v5);
  if ( Acl >= 0 )
  {
    v1 = RtlLengthSid(v5);
    v2 = v1 + RtlLengthSid(Sid) + 32;
    Heap = (struct _ACL *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), SmBaseTag, v2);
    if ( Heap )
    {
      Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
      if ( Acl >= 0 )
      {
        Acl = RtlCreateAcl(Heap, v2, 2u);
        if ( Acl >= 0 )
        {
          Acl = RtlAddAccessAllowedAce(Heap, 2u, 0x120001u, Sid);
          if ( Acl >= 0 )
          {
            Acl = RtlAddAccessAllowedAce(Heap, 2u, 0x120001u, v5);
            if ( Acl >= 0 )
            {
              Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, Heap, 0);
              if ( Acl >= 0 )
              {
                RtlInitUnicodeString(&DestinationString, L"\\PendingRenameMutex");
                ObjectAttributes.Length = 48;
                ObjectAttributes.ObjectName = &DestinationString;
                ObjectAttributes.RootDirectory = 0LL;
                ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
                ObjectAttributes.Attributes = 80;
                ObjectAttributes.SecurityQualityOfService = 0LL;
                Acl = NtCreateMutant(&MutantHandle, 0x1F0001u, &ObjectAttributes, 0);
                if ( Acl >= 0 )
                  Acl = NtClose(MutantHandle);
              }
            }
          }
        }
      }
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Heap);
    }
    RtlFreeSid(v5);
  }
  RtlFreeSid(Sid);
  return (unsigned int)Acl;
}
