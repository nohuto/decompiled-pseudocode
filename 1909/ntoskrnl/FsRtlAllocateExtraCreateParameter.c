/*
 * XREFs of FsRtlAllocateExtraCreateParameter @ 0x1405C5EB0
 * Callers:
 *     PspCreateUserProcessEcp @ 0x140619CEC (PspCreateUserProcessEcp.c)
 *     FsRtlAllocateExtraCreateParameterFromLookasideList @ 0x140698800 (FsRtlAllocateExtraCreateParameterFromLookasideList.c)
 *     IopSymlinkEnforceEnabledTypes @ 0x1406F18C4 (IopSymlinkEnforceEnabledTypes.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x14009EE00 (ExAllocatePoolWithQuotaTag.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __stdcall FsRtlAllocateExtraCreateParameter(
        LPCGUID EcpType,
        ULONG SizeOfContext,
        FSRTL_ALLOCATE_ECP_FLAGS Flags,
        PFSRTL_EXTRA_CREATE_PARAMETER_CLEANUP_CALLBACK CleanupCallback,
        ULONG PoolTag,
        PVOID *EcpContext)
{
  ULONG v6; // ebx
  POOL_TYPE v9; // ecx
  int v10; // edi
  char *PoolWithQuotaTag; // rax
  GUID v12; // xmm0

  v6 = SizeOfContext + 72;
  *EcpContext = 0LL;
  if ( SizeOfContext >= 0xFFFFFFB8 )
    return -1073741675;
  v9 = (Flags & 2) != 0 ? NonPagedPoolNx : PagedPool;
  v10 = (Flags & 2) != 0 ? 66 : 2;
  if ( (Flags & 1) != 0 )
    PoolWithQuotaTag = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)(v9 | 8), v6, PoolTag);
  else
    PoolWithQuotaTag = (char *)ExAllocatePoolWithTag(v9, v6, PoolTag);
  if ( !PoolWithQuotaTag )
    return -1073741670;
  *((_DWORD *)PoolWithQuotaTag + 1) = 0;
  *((_QWORD *)PoolWithQuotaTag + 2) = 0LL;
  *((_QWORD *)PoolWithQuotaTag + 1) = 0LL;
  *(_DWORD *)PoolWithQuotaTag = 1215324997;
  v12 = *EcpType;
  *((_QWORD *)PoolWithQuotaTag + 7) = 0LL;
  *((_QWORD *)PoolWithQuotaTag + 8) = 0LL;
  *(GUID *)(PoolWithQuotaTag + 24) = v12;
  *((_QWORD *)PoolWithQuotaTag + 5) = CleanupCallback;
  *((_DWORD *)PoolWithQuotaTag + 12) = v10;
  *((_DWORD *)PoolWithQuotaTag + 13) = v6;
  *EcpContext = PoolWithQuotaTag + 72;
  return 0;
}
