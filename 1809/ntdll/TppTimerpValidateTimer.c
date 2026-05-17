/*
 * XREFs of TppTimerpValidateTimer @ 0x18002C90C
 * Callers:
 *     TpReleaseTimer @ 0x18002C440 (TpReleaseTimer.c)
 *     TpWaitForTimer @ 0x18002C6D0 (TpWaitForTimer.c)
 *     TpIsTimerSet @ 0x18002C7B0 (TpIsTimerSet.c)
 *     TpSetTimerEx @ 0x18002C800 (TpSetTimerEx.c)
 *     TpTimerOutstandingCallbackCount @ 0x18002F520 (TpTimerOutstandingCallbackCount.c)
 * Callees:
 *     TppValidateCleanupGroupMember @ 0x1800148F4 (TppValidateCleanupGroupMember.c)
 *     TppRaiseInvalidParameter @ 0x180110908 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TppTimerpValidateTimer(_PEB_LDR_DATA *Ldr, __int64 a2, __int64 a3)
{
  int v3; // r11d
  int v4; // r10d
  _PEB_LDR_DATA *v5; // r9
  int v6; // eax

  LOBYTE(v3) = 0;
  v4 = a3;
  v5 = Ldr;
  if ( Ldr )
  {
    if ( !BYTE1(Ldr[4].Length) )
    {
      LOBYTE(v6) = TppValidateCleanupGroupMember((__int64)Ldr, a2);
      if ( v6 )
      {
        if ( v5->SsHandle == TppTimerpCleanupGroupMemberVFuncs )
        {
          Ldr = NtCurrentPeb()->Ldr;
          if ( Ldr->ShutdownInProgress == (_BYTE)v3 )
            return (unsigned int)(v3 + 1);
        }
      }
    }
  }
  if ( v4 || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress == (_BYTE)v3) )
    TppRaiseInvalidParameter(Ldr, a2, a3, v5);
  return 0LL;
}
