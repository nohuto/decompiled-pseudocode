/*
 * XREFs of PopCheckDisabledReason @ 0x14074AE6C
 * Callers:
 *     PopEnableHiberFile @ 0x14074AAD0 (PopEnableHiberFile.c)
 * Callees:
 *     PopGetReasonListByReasonCode @ 0x1406A236C (PopGetReasonListByReasonCode.c)
 */

char __fastcall PopCheckDisabledReason(int a1)
{
  __int64 ReasonListByReasonCode; // rcx
  char v2; // r10
  char v4; // al

  ReasonListByReasonCode = PopGetReasonListByReasonCode(a1);
  if ( ReasonListByReasonCode )
  {
    v4 = v2;
    if ( *(_BYTE *)(ReasonListByReasonCode + 19) != v2 )
      return 1;
    return v4;
  }
  return v2;
}
