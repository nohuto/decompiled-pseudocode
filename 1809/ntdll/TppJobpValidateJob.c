/*
 * XREFs of TppJobpValidateJob @ 0x1800327B0
 * Callers:
 *     TpReleaseJobNotification @ 0x180032900 (TpReleaseJobNotification.c)
 *     TpWaitForJobNotification @ 0x180032A60 (TpWaitForJobNotification.c)
 * Callees:
 *     TppValidateCleanupGroupMember @ 0x1800148F4 (TppValidateCleanupGroupMember.c)
 *     TppRaiseInvalidParameter @ 0x180110908 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TppJobpValidateJob(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  __int64 v4; // r9
  _PEB_LDR_DATA *Ldr; // rcx

  if ( a1 )
  {
    LOBYTE(v3) = TppValidateCleanupGroupMember(a1 + 72, a2);
    if ( v3 )
    {
      if ( *(__int64 (__fastcall ***)())(v4 + 80) == TppJobpCleanupGroupMemberVFuncs
        && !NtCurrentPeb()->Ldr->ShutdownInProgress )
      {
        return 1LL;
      }
    }
  }
  Ldr = NtCurrentPeb()->Ldr;
  if ( !Ldr->ShutdownInProgress )
    TppRaiseInvalidParameter(Ldr, a2, a3);
  return 0LL;
}
