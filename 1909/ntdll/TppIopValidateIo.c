/*
 * XREFs of TppIopValidateIo @ 0x180062A10
 * Callers:
 *     TpWaitForIoCompletion @ 0x1800626E0 (TpWaitForIoCompletion.c)
 *     TpCancelAsyncIoOperation @ 0x180062750 (TpCancelAsyncIoOperation.c)
 *     TpReleaseIoCompletion @ 0x1800627C0 (TpReleaseIoCompletion.c)
 * Callees:
 *     TppValidateCleanupGroupMember @ 0x180036544 (TppValidateCleanupGroupMember.c)
 *     TppRaiseInvalidParameter @ 0x18010F0F8 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TppIopValidateIo(_PEB_LDR_DATA *Ldr, __int64 a2, __int64 a3)
{
  int v3; // r10d
  int v4; // eax
  __int64 v5; // r9

  v3 = a3;
  if ( Ldr )
  {
    LOBYTE(v4) = TppValidateCleanupGroupMember((__int64)Ldr, a2);
    if ( v4 )
    {
      if ( *(__int64 (__fastcall ***)(PVOID))(v5 + 8) == &TppIopCleanupGroupMemberVFuncs )
      {
        Ldr = NtCurrentPeb()->Ldr;
        if ( !Ldr->ShutdownInProgress )
          return 1LL;
      }
    }
  }
  if ( v3 || (Ldr = NtCurrentPeb()->Ldr, !Ldr->ShutdownInProgress) )
    TppRaiseInvalidParameter(Ldr, a2, a3);
  return 0LL;
}
