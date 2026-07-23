/*
 * XREFs of FsRtlAllocateExtraCreateParameter @ 0x1405C91E0
 * Callers:
 *     FsRtlAllocateExtraCreateParameterFromLookasideList @ 0x1405DD500 (FsRtlAllocateExtraCreateParameterFromLookasideList.c)
 *     PspCreateUserProcessEcp @ 0x14060E368 (PspCreateUserProcessEcp.c)
 *     IopSymlinkEnforceEnabledTypes @ 0x140763AD0 (IopSymlinkEnforceEnabledTypes.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x1400B75B0 (ExAllocatePoolWithQuotaTag.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __stdcall FsRtlAllocateExtraCreateParameter(
        LPCGUID EcpType,
        ULONG SizeOfContext,
        FSRTL_ALLOCATE_ECP_FLAGS Flags,
        PFSRTL_EXTRA_CREATE_PARAMETER_CLEANUP_CALLBACK CleanupCallback,
        ULONG PoolTag,
        PVOID *EcpContext)
{
  ULONG v6; // edx
  ULONG v9; // edi
  POOL_TYPE v10; // r9d
  int v11; // ebx
  char *PoolWithQuotaTag; // rax
  GUID v13; // xmm0

  v6 = SizeOfContext + 72;
  *EcpContext = 0LL;
  if ( v6 < 0x48 )
    return -1073741675;
  v9 = v6;
  v10 = (Flags & 2) != 0 ? NonPagedPoolNx : PagedPool;
  v11 = (Flags & 2) != 0 ? 66 : 2;
  if ( (Flags & 1) != 0 )
    PoolWithQuotaTag = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)(v10 | 8), v6, PoolTag);
  else
    PoolWithQuotaTag = (char *)ExAllocatePoolWithTag(v10, v6, PoolTag);
  if ( !PoolWithQuotaTag )
    return -1073741670;
  *((_DWORD *)PoolWithQuotaTag + 1) = 0;
  *((_QWORD *)PoolWithQuotaTag + 2) = 0LL;
  *((_QWORD *)PoolWithQuotaTag + 1) = 0LL;
  *(_DWORD *)PoolWithQuotaTag = 1215324997;
  v13 = *EcpType;
  *((_QWORD *)PoolWithQuotaTag + 7) = 0LL;
  *((_QWORD *)PoolWithQuotaTag + 8) = 0LL;
  *(GUID *)(PoolWithQuotaTag + 24) = v13;
  *((_QWORD *)PoolWithQuotaTag + 5) = CleanupCallback;
  *((_DWORD *)PoolWithQuotaTag + 12) = v11;
  *((_DWORD *)PoolWithQuotaTag + 13) = v9;
  *EcpContext = PoolWithQuotaTag + 72;
  return 0;
}
