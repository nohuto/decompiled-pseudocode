/*
 * XREFs of FsRtlAllocateExtraCreateParameterFromLookasideList @ 0x1405DD500
 * Callers:
 *     IopSymlinkPropagateToExtensionIfNeeded @ 0x14063AFB0 (IopSymlinkPropagateToExtensionIfNeeded.c)
 *     IopSymlinkAllocateAndAddECP @ 0x1406AD3E4 (IopSymlinkAllocateAndAddECP.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x140018B38 (ExAllocateFromNPagedLookasideList.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401C5530 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     FsRtlAllocateExtraCreateParameter @ 0x1405C91E0 (FsRtlAllocateExtraCreateParameter.c)
 */

NTSTATUS __stdcall FsRtlAllocateExtraCreateParameterFromLookasideList(
        LPCGUID EcpType,
        ULONG SizeOfContext,
        FSRTL_ALLOCATE_ECP_FLAGS Flags,
        PFSRTL_EXTRA_CREATE_PARAMETER_CLEANUP_CALLBACK CleanupCallback,
        PVOID LookasideList,
        PVOID *EcpContext)
{
  ULONG v6; // esi
  int v8; // edi
  char *v10; // rax
  GUID v11; // xmm0

  v6 = SizeOfContext + 72;
  v8 = 66;
  if ( (Flags & 2) == 0 )
    v8 = 2;
  if ( v6 > *((_DWORD *)LookasideList + 11) )
    return FsRtlAllocateExtraCreateParameter(
             EcpType,
             SizeOfContext,
             (unsigned __int8)Flags,
             CleanupCallback,
             *((_DWORD *)LookasideList + 10),
             EcpContext);
  if ( (Flags & 2) != 0 )
  {
    v10 = (char *)ExAllocateFromNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)LookasideList);
  }
  else
  {
    ++*((_DWORD *)LookasideList + 5);
    v10 = (char *)RtlpInterlockedPopEntrySList((PSLIST_HEADER)LookasideList);
    if ( v10 )
    {
LABEL_6:
      *(_QWORD *)v10 = 1215324997LL;
      *((_QWORD *)v10 + 2) = 0LL;
      *((_QWORD *)v10 + 1) = 0LL;
      v11 = *EcpType;
      *((_QWORD *)v10 + 8) = 0LL;
      *((_QWORD *)v10 + 5) = CleanupCallback;
      *(GUID *)(v10 + 24) = v11;
      *((_DWORD *)v10 + 12) = v8;
      *((_DWORD *)v10 + 13) = v6;
      *((_QWORD *)v10 + 7) = LookasideList;
      *EcpContext = v10 + 72;
      return 0;
    }
    ++*((_DWORD *)LookasideList + 6);
    v10 = (char *)(*((__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))LookasideList + 6))(
                    *((unsigned int *)LookasideList + 9),
                    *((unsigned int *)LookasideList + 11),
                    *((unsigned int *)LookasideList + 10));
  }
  if ( v10 )
    goto LABEL_6;
  *EcpContext = 0LL;
  return -1073741670;
}
