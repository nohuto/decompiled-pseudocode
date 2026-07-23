/*
 * XREFs of LdrAccessResource @ 0x18001F3F0
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
           (unsigned __int64 *)ResourceBuffer,
           ResourceLength);
}
