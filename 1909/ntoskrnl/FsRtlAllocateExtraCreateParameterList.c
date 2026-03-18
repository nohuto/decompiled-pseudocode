/*
 * XREFs of FsRtlAllocateExtraCreateParameterList @ 0x140619E40
 * Callers:
 *     PspCreateUserProcessEcp @ 0x140619CEC (PspCreateUserProcessEcp.c)
 *     IopSymlinkAllocateAndAddECP @ 0x1406CDB50 (IopSymlinkAllocateAndAddECP.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x14009EE00 (ExAllocatePoolWithQuotaTag.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401CC570 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

NTSTATUS __stdcall FsRtlAllocateExtraCreateParameterList(FSRTL_ALLOCATE_ECPLIST_FLAGS Flags, PECP_LIST *EcpList)
{
  struct _ECP_LIST *PoolWithQuotaTag; // rax
  int v4; // edx

  *EcpList = 0LL;
  if ( (Flags & 1) != 0 )
  {
    PoolWithQuotaTag = (struct _ECP_LIST *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x18uLL, 0x6C655346u);
    v4 = 2;
  }
  else
  {
    ++dword_1404F29D4;
    PoolWithQuotaTag = (struct _ECP_LIST *)RtlpInterlockedPopEntrySList(&FsRtlEcpListLookaside);
    if ( !PoolWithQuotaTag )
    {
      ++dword_1404F29D8;
      PoolWithQuotaTag = (struct _ECP_LIST *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_1404F29F0)(
                                               (unsigned int)dword_1404F29E4,
                                               (unsigned int)dword_1404F29EC,
                                               (unsigned int)dword_1404F29E8);
    }
    v4 = 6;
  }
  if ( !PoolWithQuotaTag )
    return -1073741670;
  PoolWithQuotaTag->EcpList.Blink = &PoolWithQuotaTag->EcpList;
  PoolWithQuotaTag->EcpList.Flink = &PoolWithQuotaTag->EcpList;
  PoolWithQuotaTag->Flags = v4;
  PoolWithQuotaTag->Signature = 1282433861;
  *EcpList = PoolWithQuotaTag;
  return 0;
}
