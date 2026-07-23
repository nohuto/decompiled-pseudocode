/*
 * XREFs of RtlFindMessage @ 0x180068320
 * Callers:
 *     <none>
 * Callees:
 *     sub_180018D8C @ 0x180018D8C (sub_180018D8C.c)
 *     LdrAccessResource_0 @ 0x18001F250 (LdrAccessResource_0.c)
 *     sub_1800683DC @ 0x1800683DC (sub_1800683DC.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 */

NTSTATUS __cdecl RtlFindMessage(
        PVOID DllHandle,
        ULONG MessageTableId,
        ULONG MessageLanguageId,
        ULONG MessageId,
        PMESSAGE_RESOURCE_ENTRY *MessageEntry)
{
  NTSTATUS result; // eax
  ULONG ResourceLength; // [rsp+30h] [rbp-48h] BYREF
  PIMAGE_RESOURCE_DATA_ENTRY ResourceDataEntry; // [rsp+38h] [rbp-40h] BYREF
  PVOID ResourceBuffer; // [rsp+40h] [rbp-38h] BYREF
  _QWORD v11[4]; // [rsp+48h] [rbp-30h] BYREF

  v11[0] = MessageTableId;
  v11[2] = MessageLanguageId;
  v11[1] = 1LL;
  v11[3] = MessageId;
  result = sub_180018D8C(DllHandle, (__int64)v11, 4u, 0x40u, (__int64)&ResourceDataEntry);
  if ( result >= 0 )
  {
    result = LdrAccessResource_0(DllHandle, ResourceDataEntry, &ResourceBuffer, &ResourceLength);
    if ( result >= 0 )
      return sub_1800683DC(ResourceBuffer, ResourceLength, MessageId, MessageEntry);
  }
  return result;
}
