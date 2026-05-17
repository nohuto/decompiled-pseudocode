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
  _PEB_LDR_DATA *v4; // r9
  int v5; // eax

  v3 = a3;
  v4 = Ldr;
  if ( Ldr )
  {
    LOBYTE(v5) = TppValidateCleanupGroupMember((__int64)Ldr, a2);
    if ( v5 )
    {
      if ( v4->SsHandle == TppIopCleanupGroupMemberVFuncs )
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
