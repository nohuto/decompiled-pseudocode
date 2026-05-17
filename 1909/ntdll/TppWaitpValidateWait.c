/*
 * XREFs of TppWaitpValidateWait @ 0x1800313F0
 * Callers:
 *     TpWaitForWait @ 0x18002F0B0 (TpWaitForWait.c)
 *     TpWaitOutstandingCallbackCount @ 0x18002FF6C (TpWaitOutstandingCallbackCount.c)
 *     TpReleaseWait @ 0x1800302D0 (TpReleaseWait.c)
 *     TpSetWaitEx @ 0x1800312D0 (TpSetWaitEx.c)
 * Callees:
 *     TppValidateCleanupGroupMember @ 0x180036544 (TppValidateCleanupGroupMember.c)
 *     TppRaiseInvalidParameter @ 0x18010F0F8 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TppWaitpValidateWait(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  int v4; // r10d

  if ( (unsigned int)TppValidateCleanupGroupMember(a1, a2, a3, a1)
    && *(__int64 (__fastcall ***)())(v3 + 8) == TppWaitpCleanupGroupMemberVFuncs
    && !NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    return 1LL;
  }
  if ( v4 || !NtCurrentPeb()->Ldr->ShutdownInProgress )
    TppRaiseInvalidParameter();
  return 0LL;
}
