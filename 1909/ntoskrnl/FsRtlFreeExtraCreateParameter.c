/*
 * XREFs of FsRtlFreeExtraCreateParameter @ 0x140619930
 * Callers:
 *     FsRtlpAttachOplockKey @ 0x140007798 (FsRtlpAttachOplockKey.c)
 *     FsRtlCheckOplockEx @ 0x1400465C0 (FsRtlCheckOplockEx.c)
 *     IopDeleteFileObjectExtension @ 0x1400844D0 (IopDeleteFileObjectExtension.c)
 *     IopSymlinkPropagateToExtensionIfNeeded @ 0x140604A70 (IopSymlinkPropagateToExtensionIfNeeded.c)
 *     FsRtlpCleanupEcps @ 0x1406189CC (FsRtlpCleanupEcps.c)
 *     IopCreateFile @ 0x140618CB0 (IopCreateFile.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x1406198B0 (FsRtlFreeExtraCreateParameterList.c)
 *     PspCreateUserProcessEcp @ 0x140619CEC (PspCreateUserProcessEcp.c)
 *     NtQueryAttributesFile @ 0x1406B48B0 (NtQueryAttributesFile.c)
 *     IopSymlinkUpdateECP @ 0x1406CD628 (IopSymlinkUpdateECP.c)
 *     IopSymlinkAllocateAndAddECP @ 0x1406CDB50 (IopSymlinkAllocateAndAddECP.c)
 *     IopGraftName @ 0x1406CDC58 (IopGraftName.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140084498 (ExFreeToNPagedLookasideList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401CC5B0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __stdcall FsRtlFreeExtraCreateParameter(PVOID EcpContext)
{
  _SLIST_ENTRY *v1; // rbx
  _SLIST_ENTRY *Next; // rdi
  void (__fastcall *v3)(PVOID, _SLIST_ENTRY **); // rax
  __int64 v5; // rcx

  v1 = (_SLIST_ENTRY *)((char *)EcpContext - 72);
  Next = 0LL;
  v3 = (void (__fastcall *)(PVOID, _SLIST_ENTRY **))*((_QWORD *)EcpContext - 4);
  if ( v3 )
    v3(EcpContext, &v1[1].Next + 1);
  if ( ((__int64)v1[3].Next & 0x20) != 0 && FltMgrCallbacks )
  {
    Next = v1[4].Next;
    (*(void (__fastcall **)(_SLIST_ENTRY *, PVOID))FltMgrCallbacks)(Next, EcpContext);
  }
  v5 = *((_QWORD *)&v1[3].Next + 1);
  if ( v5 )
  {
    if ( ((__int64)v1[3].Next & 0x40) != 0 )
    {
      ExFreeToNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)v5, v1);
    }
    else
    {
      ++*(_DWORD *)(v5 + 28);
      if ( *(_WORD *)v5 < *(_WORD *)(v5 + 16) )
      {
        RtlpInterlockedPushEntrySList((PSLIST_HEADER)v5, v1);
      }
      else
      {
        ++*(_DWORD *)(v5 + 32);
        (*(void (__fastcall **)(_SLIST_ENTRY *))(v5 + 56))(v1);
      }
    }
  }
  else
  {
    ExFreePoolWithTag(v1, 0);
  }
  if ( Next )
    (*(void (__fastcall **)(_SLIST_ENTRY *))(FltMgrCallbacks + 8))(Next);
}
