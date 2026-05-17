/*
 * XREFs of TpPostWork @ 0x180036570
 * Callers:
 *     LdrpQueueWork @ 0x180070BF4 (LdrpQueueWork.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x1800FB9F0 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     TppWorkpValidateWork @ 0x1800364D8 (TppWorkpValidateWork.c)
 *     TppWorkPost @ 0x180038510 (TppWorkPost.c)
 */

__int64 __fastcall TpPostWork(_PEB_LDR_DATA *a1)
{
  __int64 result; // rax

  result = TppWorkpValidateWork(a1, 0LL, 1LL);
  if ( (_DWORD)result )
    return TppWorkPost(a1);
  return result;
}
