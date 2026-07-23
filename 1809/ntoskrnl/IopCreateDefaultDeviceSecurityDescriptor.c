/*
 * XREFs of IopCreateDefaultDeviceSecurityDescriptor @ 0x140653AA4
 * Callers:
 *     IoCreateDevice @ 0x140653B90 (IoCreateDevice.c)
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x1406F1828 (PipChangeDeviceObjectFromRegistryProperties.c)
 * Callees:
 *     RtlGetNtProductType @ 0x14012AD10 (RtlGetNtProductType.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1405CBDE0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x1406325C0 (RtlpAddKnownAce.c)
 *     RtlCreateSecurityDescriptor @ 0x140651050 (RtlCreateSecurityDescriptor.c)
 *     IopCreateSecurityDescriptorPerType @ 0x14065396C (IopCreateSecurityDescriptorPerType.c)
 */

void *__fastcall IopCreateDefaultDeviceSecurityDescriptor(
        unsigned int a1,
        char a2,
        char a3,
        void *a4,
        ACL **a5,
        ACL **a6,
        int *a7)
{
  int *v7; // rdi
  ACL **v10; // r12
  int v11; // edx
  NTSTATUS SecurityDescriptorPerType; // eax
  bool v14; // zf
  USHORT AclSize; // r15
  unsigned __int8 *v16; // rax
  ACL *PoolWithTag; // rax
  ACL *v18; // rsi
  _NT_PRODUCT_TYPE ProductType; // [rsp+70h] [rbp+18h] BYREF

  LOBYTE(ProductType) = a3;
  v7 = a7;
  if ( a7 )
    *a7 = 0;
  v10 = a5;
  *a5 = 0LL;
  if ( a1 > 0x14 )
  {
    if ( a1 != 45 )
    {
      if ( a1 == 32 )
        goto LABEL_10;
      if ( a1 != 36 )
      {
        v14 = a1 == 53;
LABEL_18:
        if ( !v14 )
          goto LABEL_19;
      }
    }
LABEL_20:
    if ( a1 != 7 || (a2 & 1) == 0 )
      goto LABEL_10;
LABEL_25:
    AclSize = SePublicDefaultUnrestrictedDacl->AclSize;
    if ( !RtlGetNtProductType(&ProductType) )
      return 0LL;
    if ( ProductType == NtProductWinNt )
    {
      v16 = (unsigned __int8 *)SeInteractiveSid;
    }
    else
    {
      if ( a1 != 2 )
      {
LABEL_31:
        PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, AclSize, 0x65536F49u);
        v18 = PoolWithTag;
        if ( !PoolWithTag )
          return 0LL;
        memmove(PoolWithTag, SePublicDefaultUnrestrictedDacl, SePublicDefaultUnrestrictedDacl->AclSize);
        v14 = ProductType == NtProductWinNt;
        v18->AclSize = AclSize;
        if ( v14 )
        {
          RtlpAddKnownAce(v18, 2u, 0, -1073676288, (unsigned __int8 *)SeInteractiveSid, 0);
        }
        else if ( a1 == 2 )
        {
          RtlpAddKnownAce(v18, 2u, 0, 0x80000000, (unsigned __int8 *)SeWorldSid, 0);
        }
        RtlCreateSecurityDescriptor(a4, 1u);
        RtlSetDaclSecurityDescriptor(a4, 1u, v18, 0);
        if ( v7 )
          *v7 |= 4u;
        *v10 = v18;
        SecurityDescriptorPerType = 0;
        goto LABEL_12;
      }
      v16 = (unsigned __int8 *)SeWorldSid;
    }
    AclSize += 4 * (v16[1] + 4);
    goto LABEL_31;
  }
  if ( a1 == 20 )
    goto LABEL_20;
  if ( a1 == 2 )
    goto LABEL_25;
  if ( a1 != 3 )
  {
    if ( a1 != 7 )
    {
      if ( a1 <= 7 )
      {
LABEL_19:
        v11 = 4;
        goto LABEL_11;
      }
      if ( a1 <= 9 )
        goto LABEL_10;
      v14 = a1 == 18;
      goto LABEL_18;
    }
    goto LABEL_20;
  }
LABEL_10:
  v11 = 2;
LABEL_11:
  SecurityDescriptorPerType = IopCreateSecurityDescriptorPerType(a4, v11, a6, v7);
LABEL_12:
  if ( SecurityDescriptorPerType >= 0 )
    return a4;
  return 0LL;
}
