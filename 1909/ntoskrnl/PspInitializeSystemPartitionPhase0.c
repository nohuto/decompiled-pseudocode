/*
 * XREFs of PspInitializeSystemPartitionPhase0 @ 0x140A1C2B8
 * Callers:
 *     PspInitPhase0 @ 0x140A04A98 (PspInitPhase0.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlCreateAcl @ 0x1405C8E30 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x1405D6210 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1405D6250 (RtlSetDaclSecurityDescriptor.c)
 *     RtlAddAccessAllowedAce @ 0x14069D1C0 (RtlAddAccessAllowedAce.c)
 *     PspAllocatePartition @ 0x140785400 (PspAllocatePartition.c)
 */

__int64 PspInitializeSystemPartitionPhase0()
{
  int Acl; // ebx
  ULONG v1; // ebx
  ACL *PoolWithTag; // rax
  ACL *v3; // rdi
  _QWORD v5[2]; // [rsp+40h] [rbp-19h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+50h] [rbp-9h] BYREF
  _DWORD v7[2]; // [rsp+78h] [rbp+1Fh] BYREF
  __int64 v8; // [rsp+80h] [rbp+27h]
  _QWORD *v9; // [rsp+88h] [rbp+2Fh]
  int v10; // [rsp+90h] [rbp+37h]
  int v11; // [rsp+94h] [rbp+3Bh]
  _BYTE *v12; // [rsp+98h] [rbp+3Fh]
  __int64 v13; // [rsp+A0h] [rbp+47h]

  v7[1] = 0;
  v11 = 0;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v5[0] = 4194366LL;
  v5[1] = L"\\KernelObjects\\MemoryPartition0";
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
            v8 = 0LL;
            v13 = 0LL;
            v9 = v5;
            v7[0] = 48;
            v12 = SecurityDescriptor;
            v10 = 512;
            Acl = PspAllocatePartition(
                    (int)v7,
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
