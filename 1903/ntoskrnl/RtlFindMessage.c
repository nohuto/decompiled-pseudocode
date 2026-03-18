/*
 * XREFs of RtlFindMessage @ 0x1406C58E0
 * Callers:
 *     ExpSystemErrorHandler2 @ 0x1405AE830 (ExpSystemErrorHandler2.c)
 *     PiGetDefaultMessageString @ 0x140779578 (PiGetDefaultMessageString.c)
 *     IopInitializeBootLogging @ 0x140853F14 (IopInitializeBootLogging.c)
 *     ResFwFindMessage @ 0x140991744 (ResFwFindMessage.c)
 *     Phase1InitializationDiscard @ 0x140A07008 (Phase1InitializationDiscard.c)
 *     InitBootProcessor @ 0x140A0816C (InitBootProcessor.c)
 * Callees:
 *     RtlpFindMessageInTable @ 0x14011D17C (RtlpFindMessageInTable.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     LdrpAccessResourceData @ 0x1406C599C (LdrpAccessResourceData.c)
 *     LdrpSearchResourceSection_U @ 0x1406C5CD0 (LdrpSearchResourceSection_U.c)
 */

NTSTATUS __stdcall RtlFindMessage(
        PVOID BaseAddress,
        ULONG Type,
        ULONG Language,
        ULONG MessageId,
        PMESSAGE_RESOURCE_ENTRY *MessageResourceEntry)
{
  NTSTATUS result; // eax
  int v8; // [rsp+30h] [rbp-48h]
  _QWORD v9[2]; // [rsp+38h] [rbp-40h] BYREF
  _QWORD v10[4]; // [rsp+48h] [rbp-30h] BYREF

  v10[0] = Type;
  v10[2] = Language;
  v10[1] = 1LL;
  v10[3] = MessageId;
  result = LdrpSearchResourceSection_U((_DWORD)BaseAddress, (unsigned int)v10, 4, 64, (__int64)v9);
  if ( result >= 0 )
  {
    result = LdrpAccessResourceData(BaseAddress);
    if ( result >= 0 )
      return RtlpFindMessageInTable((int *)v9[1], v8, MessageId, (unsigned __int16 **)MessageResourceEntry);
  }
  return result;
}
