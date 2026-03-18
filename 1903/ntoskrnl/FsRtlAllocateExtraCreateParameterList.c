/*
 * XREFs of FsRtlAllocateExtraCreateParameterList @ 0x140618330
 * Callers:
 *     PspCreateUserProcessEcp @ 0x1406181DC (PspCreateUserProcessEcp.c)
 *     IopSymlinkAllocateAndAddECP @ 0x1406CEDB0 (IopSymlinkAllocateAndAddECP.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x1400BEF80 (ExAllocatePoolWithQuotaTag.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401CB9F0 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
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
    ++dword_1404F2C94;
    PoolWithQuotaTag = (struct _ECP_LIST *)RtlpInterlockedPopEntrySList(&FsRtlEcpListLookaside);
    if ( !PoolWithQuotaTag )
    {
      ++dword_1404F2C98;
      PoolWithQuotaTag = (struct _ECP_LIST *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_1404F2CB0)(
                                               (unsigned int)dword_1404F2CA4,
                                               (unsigned int)dword_1404F2CAC,
                                               (unsigned int)dword_1404F2CA8);
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
