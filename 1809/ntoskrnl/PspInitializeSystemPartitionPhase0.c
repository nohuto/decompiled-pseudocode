/*
 * XREFs of PspInitializeSystemPartitionPhase0 @ 0x1409DA4B0
 * Callers:
 *     PspInitPhase0 @ 0x1409B20C8 (PspInitPhase0.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1405CBDE0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1405CBF70 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x140651050 (RtlCreateSecurityDescriptor.c)
 *     RtlAddAccessAllowedAce @ 0x140656740 (RtlAddAccessAllowedAce.c)
 *     PspAllocatePartition @ 0x14075DC38 (PspAllocatePartition.c)
 */

__int64 PspInitializeSystemPartitionPhase0()
{
  int Acl; // ebx
  ULONG v1; // ebx
  ACL *PoolWithTag; // rax
  ACL *v3; // rdi
  int v5; // [rsp+40h] [rbp-19h] BYREF
  const wchar_t *v6; // [rsp+48h] [rbp-11h]
  _BYTE SecurityDescriptor[40]; // [rsp+50h] [rbp-9h] BYREF
  int v8; // [rsp+78h] [rbp+1Fh] BYREF
  __int64 v9; // [rsp+80h] [rbp+27h]
  int *v10; // [rsp+88h] [rbp+2Fh]
  int v11; // [rsp+90h] [rbp+37h]
  _BYTE *v12; // [rsp+98h] [rbp+3Fh]
  __int64 v13; // [rsp+A0h] [rbp+47h]

  v5 = 4194366;
  v6 = L"\\KernelObjects\\MemoryPartition0";
  Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( Acl >= 0 )
  {
    v1 = 4 * *((unsigned __int8 *)SeAliasAdminsSid + 1) + 28;
    PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, v1, 0x6C636144u);
    v3 = PoolWithTag;
    if ( PoolWithTag )
    {
      Acl = RtlCreateAcl(PoolWithTag, v1, 2u);
      if ( Acl >= 0 )
      {
        Acl = RtlAddAccessAllowedAce(v3, 2u, 0x1F0003u, SeAliasAdminsSid);
        if ( Acl >= 0 )
        {
          Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v3, 0);
          if ( Acl >= 0 )
          {
            v9 = 0LL;
            v13 = 0LL;
            v10 = &v5;
            v8 = 48;
            v12 = SecurityDescriptor;
            v11 = 512;
            Acl = PspAllocatePartition(
                    (int)&v8,
                    0x1F0003u,
                    0,
                    0LL,
                    1,
                    (volatile signed __int64 **)&PspSystemPartition,
                    0LL);
          }
        }
      }
      ExFreePoolWithTag(v3, 0);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)Acl;
}
