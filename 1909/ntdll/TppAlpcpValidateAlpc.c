/*
 * XREFs of TppAlpcpValidateAlpc @ 0x180078BCC
 * Callers:
 *     TpAlpcUnregisterCompletionList @ 0x180078A20 (TpAlpcUnregisterCompletionList.c)
 *     TpAlpcRegisterCompletionList @ 0x180078A60 (TpAlpcRegisterCompletionList.c)
 *     TpWaitForAlpcCompletion @ 0x180078AC0 (TpWaitForAlpcCompletion.c)
 *     TpReleaseAlpcCompletion @ 0x180078B60 (TpReleaseAlpcCompletion.c)
 * Callees:
 *     TppValidateCleanupGroupMember @ 0x180036544 (TppValidateCleanupGroupMember.c)
 *     TppRaiseInvalidParameter @ 0x18010F0F8 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TppAlpcpValidateAlpc(_PEB_LDR_DATA *Ldr, __int64 a2, __int64 a3)
{
  int v3; // r10d
  _PEB_LDR_DATA *v4; // r9
  int v5; // eax

  v3 = a3;
  v4 = Ldr;
  if ( Ldr )
  {
    LOBYTE(v5) = TppValidateCleanupGroupMember((__int64)&Ldr->ShutdownInProgress, a2);
    if ( v5 )
    {
      if ( v4->ShutdownThreadId == TppAlpcpCleanupGroupMemberVFuncs )
      {
        Ldr = NtCurrentPeb()->Ldr;
        if ( !Ldr->ShutdownInProgress )
          return 1LL;
      }
    }
  }
  if ( v3 || (Ldr = NtCurrentPeb()->Ldr, !Ldr->ShutdownInProgress) )
    TppRaiseInvalidParameter(Ldr, a2, a3, v4);
  return 0LL;
}
