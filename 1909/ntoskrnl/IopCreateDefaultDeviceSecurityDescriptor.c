/*
 * XREFs of IopCreateDefaultDeviceSecurityDescriptor @ 0x14069FAE0
 * Callers:
 *     IoCreateDevice @ 0x14069F670 (IoCreateDevice.c)
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x1407022B8 (PipChangeDeviceObjectFromRegistryProperties.c)
 * Callees:
 *     RtlGetNtProductType @ 0x14012E9E0 (RtlGetNtProductType.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     RtlCreateSecurityDescriptor @ 0x1405D6210 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1405D6250 (RtlSetDaclSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x1405DD190 (RtlpAddKnownAce.c)
 *     IopCreateSecurityDescriptorPerType @ 0x14069FBC0 (IopCreateSecurityDescriptorPerType.c)
 */

void *__fastcall IopCreateDefaultDeviceSecurityDescriptor(
        unsigned int a1,
        char a2,
        char a3,
        void *a4,
        ACL **a5,
        __int64 a6,
        _DWORD *a7)
{
  _DWORD *v7; // rdi
  ACL **v10; // r12
  int SecurityDescriptorPerType; // eax
  bool v13; // zf
  USHORT AclSize; // r15
  unsigned __int8 *v15; // rax
  ACL *PoolWithTag; // rax
  ACL *v17; // rsi
  _NT_PRODUCT_TYPE ProductType; // [rsp+70h] [rbp+18h] BYREF

  LOBYTE(ProductType) = a3;
  v7 = a7;
  if ( a7 )
    *a7 = 0;
  v10 = a5;
  *a5 = 0LL;
  if ( a1 > 0x14 )
  {
    switch ( a1 )
    {
      case '-':
        goto LABEL_18;
      case ' ':
        goto LABEL_9;
      case '$':
        goto LABEL_18;
    }
    v13 = a1 == 53;
    goto LABEL_16;
  }
  if ( a1 == 20 )
  {
LABEL_18:
    if ( a1 != 7 || (a2 & 1) == 0 )
      goto LABEL_9;
LABEL_23:
    AclSize = SePublicDefaultUnrestrictedDacl->AclSize;
    if ( !RtlGetNtProductType(&ProductType) )
      return 0LL;
    if ( ProductType == NtProductWinNt )
    {
      v15 = (unsigned __int8 *)SeInteractiveSid;
    }
    else
    {
      if ( a1 != 2 )
      {
LABEL_29:
        PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, AclSize, 0x65536F49u);
        v17 = PoolWithTag;
        if ( !PoolWithTag )
          return 0LL;
        memmove(PoolWithTag, SePublicDefaultUnrestrictedDacl, SePublicDefaultUnrestrictedDacl->AclSize);
        v13 = ProductType == NtProductWinNt;
        v17->AclSize = AclSize;
        if ( v13 )
        {
          RtlpAddKnownAce(v17, 2u, 0, -1073676288, (unsigned __int8 *)SeInteractiveSid, 0);
        }
        else if ( a1 == 2 )
        {
          RtlpAddKnownAce(v17, 2u, 0, 0x80000000, (unsigned __int8 *)SeWorldSid, 0);
        }
        RtlCreateSecurityDescriptor(a4, 1u);
        RtlSetDaclSecurityDescriptor(a4, 1u, v17, 0);
        if ( v7 )
          *v7 |= 4u;
        *v10 = v17;
        SecurityDescriptorPerType = 0;
        goto LABEL_10;
      }
      v15 = (unsigned __int8 *)SeWorldSid;
    }
    AclSize += 4 * (v15[1] + 4);
    goto LABEL_29;
  }
  if ( a1 == 2 )
    goto LABEL_23;
  if ( a1 != 3 )
  {
    if ( a1 != 7 )
    {
      if ( a1 <= 9 )
        goto LABEL_9;
      v13 = a1 == 18;
LABEL_16:
      if ( !v13 )
        goto LABEL_9;
      goto LABEL_18;
    }
    goto LABEL_18;
  }
LABEL_9:
  SecurityDescriptorPerType = IopCreateSecurityDescriptorPerType(a4);
LABEL_10:
  if ( SecurityDescriptorPerType >= 0 )
    return a4;
  return 0LL;
}
