/*
 * XREFs of RtlFindMessage @ 0x14067CF90
 * Callers:
 *     ExpSystemErrorHandler2 @ 0x14057F930 (ExpSystemErrorHandler2.c)
 *     PiGetDefaultMessageString @ 0x1407549CC (PiGetDefaultMessageString.c)
 *     IopInitializeBootLogging @ 0x14081B214 (IopInitializeBootLogging.c)
 *     ResFwFindMessage @ 0x1409526DC (ResFwFindMessage.c)
 *     Phase1InitializationDiscard @ 0x1409B4E10 (Phase1InitializationDiscard.c)
 *     InitBootProcessor @ 0x1409B5EDC (InitBootProcessor.c)
 * Callees:
 *     RtlpFindMessageInTable @ 0x1400F3AB0 (RtlpFindMessageInTable.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     LdrpSearchResourceSection_U @ 0x14067C0B0 (LdrpSearchResourceSection_U.c)
 *     LdrpAccessResourceData @ 0x14067CEA8 (LdrpAccessResourceData.c)
 */

NTSTATUS __stdcall RtlFindMessage(
        PVOID BaseAddress,
        ULONG Type,
        ULONG Language,
        ULONG MessageId,
        PMESSAGE_RESOURCE_ENTRY *MessageResourceEntry)
{
  NTSTATUS result; // eax
  int v8; // [rsp+30h] [rbp-48h] BYREF
  ULONG *v9; // [rsp+38h] [rbp-40h] BYREF
  int *v10; // [rsp+40h] [rbp-38h] BYREF
  __int64 v11[4]; // [rsp+48h] [rbp-30h] BYREF

  v11[0] = Type;
  v11[2] = Language;
  v11[1] = 1LL;
  v11[3] = MessageId;
  result = LdrpSearchResourceSection_U((char *)BaseAddress, v11, 4u, 64, (__int64 *)&v9);
  if ( result >= 0 )
  {
    result = LdrpAccessResourceData((unsigned __int64)BaseAddress, v9, (unsigned __int64 *)&v10, &v8);
    if ( result >= 0 )
      return RtlpFindMessageInTable(v10, v8, MessageId, (unsigned __int16 **)MessageResourceEntry);
  }
  return result;
}
