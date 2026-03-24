/*
 * XREFs of ObInsertObject @ 0x14061B280
 * Callers:
 *     SepCreateTokenEx @ 0x14001366C (SepCreateTokenEx.c)
 *     FsRtlCreateSectionForDataScan @ 0x140092540 (FsRtlCreateSectionForDataScan.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x1405828D0 (SepCopyAnonymousTokenAndSetSilo.c)
 *     NtQueryInformationToken @ 0x14062A760 (NtQueryInformationToken.c)
 *     TtmpDispatchCreateEventQueue @ 0x140881B7C (TtmpDispatchCreateEventQueue.c)
 *     PspInitPhase1 @ 0x1409AB320 (PspInitPhase1.c)
 *     MiSectionInitialization @ 0x1409BA060 (MiSectionInitialization.c)
 *     CmpCreateRegistryRoot @ 0x1409C3FAC (CmpCreateRegistryRoot.c)
 *     IopInitializeBuiltinDriver @ 0x1409CBA80 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     ObInsertObjectEx @ 0x14062D080 (ObInsertObjectEx.c)
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
