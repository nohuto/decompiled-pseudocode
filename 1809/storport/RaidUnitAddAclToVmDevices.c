/*
 * XREFs of RaidUnitAddAclToVmDevices @ 0x1C007549C
 * Callers:
 *     RaidUnitRegisterInterfaces @ 0x1C001C928 (RaidUnitRegisterInterfaces.c)
 * Callees:
 *     memset @ 0x1C002C3C0 (memset.c)
 */

NTSTATUS __fastcall RaidUnitAddAclToVmDevices(__int64 a1)
{
  void *v2; // rcx
  NTSTATUS result; // eax
  NTSTATUS Acl; // ebx
  ULONG v5; // ebx
  ULONG v6; // ebx
  struct _ACL *PoolWithTag; // rax
  struct _ACL *v8; // rdi
  _BYTE SecurityDescriptor[56]; // [rsp+40h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp+8h] BYREF

  memset(SecurityDescriptor, 0, 0x28uLL);
  v2 = *(void **)(a1 + 8);
  Handle = 0LL;
  result = ObOpenObjectByPointer(v2, 0x200u, 0LL, 0x40000u, 0LL, 0, &Handle);
  if ( result >= 0 )
  {
    Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    if ( Acl >= 0 )
    {
      v5 = RtlLengthSid(SeExports->SeAliasAdminsSid);
      v6 = RtlLengthSid(SeExports->SeLocalSystemSid) + 32 + v5;
      PoolWithTag = (struct _ACL *)ExAllocatePoolWithTag(PagedPool, v6, 0x6C636144u);
      v8 = PoolWithTag;
      if ( PoolWithTag )
      {
        Acl = RtlCreateAcl(PoolWithTag, v6, 2u);
        if ( Acl >= 0 )
        {
          Acl = RtlAddAccessAllowedAce(v8, 2u, 0x1F01FFu, SeExports->SeAliasAdminsSid);
          if ( Acl >= 0 )
          {
            Acl = RtlAddAccessAllowedAce(v8, 2u, 0x1F01FFu, SeExports->SeLocalSystemSid);
            if ( Acl >= 0 )
            {
              Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v8, 0);
              if ( Acl >= 0 )
                Acl = ZwSetSecurityObject(Handle, 4u, SecurityDescriptor);
            }
          }
        }
        ExFreePoolWithTag(v8, 0);
      }
      else
      {
        Acl = -1073741670;
      }
    }
    ZwClose(Handle);
    return Acl;
  }
  return result;
}
