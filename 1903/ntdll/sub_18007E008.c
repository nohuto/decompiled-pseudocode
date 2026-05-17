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
  __int64 v3; // r9
  int v4; // eax
  struct _PEB_LDR_DATA *Ldr; // rcx

  v3 = a1;
  if ( a1 )
  {
    LOBYTE(v4) = sub_180036544(a1 + 72, a2);
    if ( v4 )
    {
      if ( *(__int64 (__fastcall ***)())(v3 + 80) == off_180118868 && !NtCurrentPeb()->Ldr->ShutdownInProgress )
        return 1LL;
    }
  }
  Ldr = NtCurrentPeb()->Ldr;
  if ( !Ldr->ShutdownInProgress )
    sub_18010EFC8(Ldr, a2, a3, v3);
  return 0LL;
}
