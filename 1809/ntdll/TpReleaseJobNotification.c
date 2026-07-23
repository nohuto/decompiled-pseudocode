/*
 * XREFs of TpReleaseJobNotification @ 0x180032900
 * Callers:
 *     <none>
 * Callees:
 *     TppCleanupGroupMemberRelease @ 0x18002F03C (TppCleanupGroupMemberRelease.c)
 *     TppJobpValidateJob @ 0x1800327B0 (TppJobpValidateJob.c)
 *     TppJobpRundownJob @ 0x180032968 (TppJobpRundownJob.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3D00 (_guard_dispatch_icall_nop.c)
 */

char __fastcall TpReleaseJobNotification(__int64 a1, __int64 a2, __int64 a3)
{
  signed __int32 v4; // eax

  v4 = TppJobpValidateJob(a1, 1LL, a3);
  if ( v4 )
  {
    LOBYTE(v4) = TppCleanupGroupMemberRelease(a1 + 72, 1LL);
    if ( v4 )
    {
      TppJobpRundownJob(a1);
      v4 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 72), 0xFFFFFFFF);
      if ( v4 == 1 )
        LOBYTE(v4) = (**(__int64 (__fastcall ***)(__int64))(a1 + 80))(a1 + 72);
    }
  }
  return v4;
}
