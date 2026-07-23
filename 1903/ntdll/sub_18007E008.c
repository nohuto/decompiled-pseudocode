/*
 * XREFs of sub_18007E008 @ 0x18007E008
 * Callers:
 *     TpWaitForJobNotification @ 0x18007DE70 (TpWaitForJobNotification.c)
 *     TpReleaseJobNotification @ 0x18007DEB0 (TpReleaseJobNotification.c)
 * Callees:
 *     sub_180036544 @ 0x180036544 (sub_180036544.c)
 *     sub_18010EFC8 @ 0x18010EFC8 (sub_18010EFC8.c)
 */

__int64 __fastcall sub_18007E008(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  __int64 v4; // r9
  PPEB_LDR_DATA Ldr; // rcx

  if ( a1 )
  {
    LOBYTE(v3) = sub_180036544(a1 + 72, a2);
    if ( v3 )
    {
      if ( *(__int64 (__fastcall ***)())(v4 + 80) == off_180118868 && !NtCurrentPeb()->Ldr->ShutdownInProgress )
        return 1LL;
    }
  }
  Ldr = NtCurrentPeb()->Ldr;
  if ( !Ldr->ShutdownInProgress )
    sub_18010EFC8(Ldr, a2, a3);
  return 0LL;
}
