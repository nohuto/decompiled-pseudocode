/*
 * XREFs of RtlFindMessage @ 0x180068570
 * Callers:
 *     <none>
 * Callees:
 *     LdrpSearchResourceSection_U @ 0x180018D8C (LdrpSearchResourceSection_U.c)
 *     LdrpAccessResourceData @ 0x18001F250 (LdrpAccessResourceData.c)
 *     RtlpFindMessageInTable @ 0x18006862C (RtlpFindMessageInTable.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 */

NTSTATUS __cdecl RtlFindMessage(
        PVOID DllHandle,
        ULONG MessageTableId,
        ULONG MessageLanguageId,
        ULONG MessageId,
        PMESSAGE_RESOURCE_ENTRY *MessageEntry)
{
  NTSTATUS result; // eax
  unsigned int v8; // [rsp+30h] [rbp-48h] BYREF
  ULONG *v9; // [rsp+38h] [rbp-40h] BYREF
  unsigned __int64 v10; // [rsp+40h] [rbp-38h] BYREF
  _QWORD v11[4]; // [rsp+48h] [rbp-30h] BYREF

  v11[0] = MessageTableId;
  v11[2] = MessageLanguageId;
  v11[1] = 1LL;
  v11[3] = MessageId;
  result = LdrpSearchResourceSection_U(DllHandle, (__int64)v11, 4u, 0x40u, (__int64)&v9);
  if ( result >= 0 )
  {
    result = LdrpAccessResourceData((unsigned __int64)DllHandle, v9, &v10, &v8);
    if ( result >= 0 )
      return RtlpFindMessageInTable(v10, v8, MessageId, MessageEntry);
  }
  return result;
}
