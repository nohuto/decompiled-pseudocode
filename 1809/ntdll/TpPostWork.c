/*
 * XREFs of TpPostWork @ 0x1800148A0
 * Callers:
 *     LdrpQueueWork @ 0x1800718CC (LdrpQueueWork.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x1800FE520 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     TppValidateCleanupGroupMember @ 0x1800148F4 (TppValidateCleanupGroupMember.c)
 */

__int64 __fastcall TpPostWork(_PEB_LDR_DATA *Ldr, __int64 a2, __int64 a3)
{
  _PEB_LDR_DATA *v3; // r9

  v3 = Ldr;
  if ( Ldr
    && (unsigned int)TppValidateCleanupGroupMember(Ldr, 0LL, a3, Ldr)
    && v3->SsHandle == TppWorkpCleanupGroupMemberVFuncs
    && (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress == (_BYTE)a2) )
  {
    return TppWorkPost(v3);
  }
  else
  {
    return TppRaiseInvalidParameter(Ldr, a2, a3, v3);
  }
}
