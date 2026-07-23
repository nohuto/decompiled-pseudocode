/*
 * XREFs of RtlFindMessage @ 0x18003A8D0
 * Callers:
 *     <none>
 * Callees:
 *     LdrpAccessResourceData @ 0x180014704 (LdrpAccessResourceData.c)
 *     RtlpFindMessageInTable @ 0x18003A7F0 (RtlpFindMessageInTable.c)
 *     LdrpSearchResourceSection_U @ 0x18003D2E8 (LdrpSearchResourceSection_U.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 */

NTSTATUS __cdecl RtlFindMessage(
        PVOID DllHandle,
        ULONG MessageTableId,
        ULONG MessageLanguageId,
        ULONG MessageId,
        PMESSAGE_RESOURCE_ENTRY *MessageEntry)
{
  NTSTATUS result; // eax
  int v8; // [rsp+30h] [rbp-48h] BYREF
  ULONG *v9; // [rsp+38h] [rbp-40h] BYREF
  int *v10; // [rsp+40h] [rbp-38h] BYREF
  _QWORD v11[4]; // [rsp+48h] [rbp-30h] BYREF

  v11[0] = MessageTableId;
  v11[2] = MessageLanguageId;
  v11[1] = 1LL;
  v11[3] = MessageId;
  result = LdrpSearchResourceSection_U((_DWORD)DllHandle, (unsigned int)v11, 4, 64, (__int64)&v9);
  if ( result >= 0 )
  {
    result = LdrpAccessResourceData((unsigned __int64)DllHandle, v9, &v10, &v8);
    if ( result >= 0 )
      return RtlpFindMessageInTable(v10, v8, MessageId, (unsigned __int16 **)MessageEntry);
  }
  return result;
}
