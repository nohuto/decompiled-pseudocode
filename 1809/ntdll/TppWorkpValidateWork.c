/*
 * XREFs of TppWorkpValidateWork @ 0x18002D3EC
 * Callers:
 *     TpReleaseWork @ 0x18002C520 (TpReleaseWork.c)
 *     TpWaitForWork @ 0x18002C690 (TpWaitForWork.c)
 * Callees:
 *     TppValidateCleanupGroupMember @ 0x1800148F4 (TppValidateCleanupGroupMember.c)
 *     TppRaiseInvalidParameter @ 0x180110908 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TppWorkpValidateWork(_PEB_LDR_DATA *Ldr, __int64 a2, __int64 a3)
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
      if ( v4->SsHandle == &TppWorkpCleanupGroupMemberVFuncs )
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
