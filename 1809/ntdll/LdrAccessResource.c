/*
 * XREFs of LdrAccessResource @ 0x180080A20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __cdecl LdrAccessResource(
        PVOID DllHandle,
        PIMAGE_RESOURCE_DATA_ENTRY ResourceDataEntry,
        PVOID *ResourceBuffer,
        ULONG *ResourceLength)
{
  return LdrpAccessResourceData(
           (unsigned __int64)DllHandle,
           &ResourceDataEntry->OffsetToData,
           ResourceBuffer,
           ResourceLength);
}
