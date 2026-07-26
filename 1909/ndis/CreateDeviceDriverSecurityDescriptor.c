/*
 * XREFs of CreateDeviceDriverSecurityDescriptor @ 0x1C0145C94
 * Callers:
 *     DriverEntry @ 0x1C0144AD0 (DriverEntry.c)
 * Callees:
 *     ?AddAces@@YAJPEAU_ACL@@EEPEAPEAU1@@Z @ 0x1C0145F74 (-AddAces@@YAJPEAU_ACL@@EEPEAPEAU1@@Z.c)
 */

NTSTATUS CreateDeviceDriverSecurityDescriptor(void *a1, BOOLEAN a2, unsigned __int8 a3, ...)
{
  NTSTATUS result; // eax
  unsigned __int8 v6; // dl
  NTSTATUS DaclSecurityDescriptor; // ebx
  PACL v8; // rdi
  unsigned int v9; // r15d
  PVOID PoolWithTag; // rsi
  ACL *v11; // r14
  BOOLEAN DaclPresent; // [rsp+68h] [rbp-29h] BYREF
  BOOLEAN SaclDefaulted; // [rsp+69h] [rbp-28h] BYREF
  BOOLEAN DaclDefaulted; // [rsp+6Ah] [rbp-27h] BYREF
  BOOLEAN OwnerDefaulted; // [rsp+6Bh] [rbp-26h] BYREF
  BOOLEAN GroupDefaulted[4]; // [rsp+6Ch] [rbp-25h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+70h] [rbp-21h] BYREF
  PACL Sacl; // [rsp+78h] [rbp-19h] BYREF
  ULONG PrimaryGroupSize; // [rsp+80h] [rbp-11h] BYREF
  ULONG OwnerSize; // [rsp+84h] [rbp-Dh] BYREF
  ULONG SaclSize; // [rsp+88h] [rbp-9h] BYREF
  ULONG DaclSize; // [rsp+8Ch] [rbp-5h] BYREF
  ULONG AbsoluteSecurityDescriptorSize; // [rsp+90h] [rbp-1h] BYREF
  PSID Group; // [rsp+98h] [rbp+7h] BYREF
  PSID Owner; // [rsp+A0h] [rbp+Fh] BYREF
  PACL Dacl; // [rsp+A8h] [rbp+17h] BYREF
  BOOLEAN SaclPresent; // [rsp+100h] [rbp+6Fh] BYREF
  __int64 MemoryAllocated; // [rsp+110h] [rbp+7Fh] BYREF
  va_list MemoryAllocateda; // [rsp+110h] [rbp+7Fh]
  va_list va1; // [rsp+118h] [rbp+87h] BYREF

  va_start(va1, a3);
  va_start(MemoryAllocateda, a3);
  MemoryAllocated = va_arg(va1, _QWORD);
  SaclPresent = a2;
  LOBYTE(MemoryAllocated) = 0;
  SecurityDescriptor = 0LL;
  Dacl = 0LL;
  Sacl = 0LL;
  result = ObGetObjectSecurity(a1, &SecurityDescriptor, (PBOOLEAN)MemoryAllocateda);
  if ( result >= 0 )
  {
    DaclSecurityDescriptor = RtlGetDaclSecurityDescriptor(SecurityDescriptor, &DaclPresent, &Dacl, &DaclDefaulted);
    if ( DaclSecurityDescriptor >= 0 && DaclPresent )
    {
      if ( !Dacl )
        return -1073741823;
      DaclSecurityDescriptor = AddAces(Dacl, v6, a3, &Sacl);
      if ( DaclSecurityDescriptor >= 0 )
      {
        v8 = Sacl;
        if ( Sacl )
        {
          DaclSize = 0;
          Sacl = 0LL;
          v9 = 7;
          SaclSize = 0;
          Owner = 0LL;
          OwnerSize = 0;
          Group = 0LL;
          PrimaryGroupSize = 0;
          SaclPresent = 0;
          SaclDefaulted = 0;
          AbsoluteSecurityDescriptorSize = v8->AclSize + 40;
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, AbsoluteSecurityDescriptorSize, 0x6473444Eu);
          if ( PoolWithTag )
          {
            DaclSize = v8->AclSize;
            v11 = (ACL *)ExAllocatePoolWithTag(PagedPool, DaclSize, 0x6164444Eu);
            if ( v11 )
            {
              DaclSecurityDescriptor = RtlGetOwnerSecurityDescriptor(SecurityDescriptor, &Owner, &OwnerDefaulted);
              if ( DaclSecurityDescriptor >= 0 )
              {
                if ( Owner )
                {
                  OwnerSize = RtlLengthSid(Owner);
                  DaclSecurityDescriptor = RtlGetGroupSecurityDescriptor(SecurityDescriptor, &Group, GroupDefaulted);
                  if ( DaclSecurityDescriptor >= 0 )
                  {
                    DaclSecurityDescriptor = RtlGetSaclSecurityDescriptor(
                                               SecurityDescriptor,
                                               &SaclPresent,
                                               &Sacl,
                                               &SaclDefaulted);
                    if ( DaclSecurityDescriptor >= 0 )
                    {
                      if ( SaclPresent )
                      {
                        v9 = 15;
                        SaclSize = Sacl->AclSize;
                      }
                      PrimaryGroupSize = RtlLengthSid(Group);
                      DaclSecurityDescriptor = RtlSelfRelativeToAbsoluteSD(
                                                 SecurityDescriptor,
                                                 PoolWithTag,
                                                 &AbsoluteSecurityDescriptorSize,
                                                 v11,
                                                 &DaclSize,
                                                 Sacl,
                                                 &SaclSize,
                                                 Owner,
                                                 &OwnerSize,
                                                 Group,
                                                 &PrimaryGroupSize);
                      if ( DaclSecurityDescriptor >= 0 )
                      {
                        DaclSecurityDescriptor = RtlSetDaclSecurityDescriptor(PoolWithTag, 1u, v8, 0);
                        if ( DaclSecurityDescriptor >= 0 )
                          DaclSecurityDescriptor = ObSetSecurityObjectByPointer(a1, v9, PoolWithTag);
                      }
                    }
                  }
                }
              }
            }
            ExFreePoolWithTag(PoolWithTag, 0);
            if ( v11 )
              ExFreePoolWithTag(v11, 0);
          }
          ExFreePoolWithTag(v8, 0);
        }
      }
    }
    ObReleaseObjectSecurity(SecurityDescriptor, MemoryAllocated);
    return DaclSecurityDescriptor;
  }
  return result;
}
