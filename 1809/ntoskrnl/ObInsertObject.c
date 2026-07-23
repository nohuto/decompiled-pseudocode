/*
 * XREFs of ObInsertObject @ 0x14061C280
 * Callers:
 *     SepCreateTokenEx @ 0x14001366C (SepCreateTokenEx.c)
 *     FsRtlCreateSectionForDataScan @ 0x140092480 (FsRtlCreateSectionForDataScan.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x1405838D0 (SepCopyAnonymousTokenAndSetSilo.c)
 *     NtQueryInformationToken @ 0x14062B780 (NtQueryInformationToken.c)
 *     TtmpDispatchCreateEventQueue @ 0x140882DDC (TtmpDispatchCreateEventQueue.c)
 *     PspInitPhase1 @ 0x1409AC320 (PspInitPhase1.c)
 *     MiSectionInitialization @ 0x1409BB060 (MiSectionInitialization.c)
 *     CmpCreateRegistryRoot @ 0x1409C4FAC (CmpCreateRegistryRoot.c)
 *     IopInitializeBuiltinDriver @ 0x1409CCA80 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     ObInsertObjectEx @ 0x14062E0A0 (ObInsertObjectEx.c)
 */

NTSTATUS __stdcall ObInsertObject(
        PVOID Object,
        PACCESS_STATE PassedAccessState,
        ACCESS_MASK DesiredAccess,
        ULONG ObjectPointerBias,
        PVOID *NewObject,
        PHANDLE Handle)
{
  return ObInsertObjectEx(Object, PassedAccessState, 0, (__int64)NewObject, (__int64)Handle);
}
