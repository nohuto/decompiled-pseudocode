/*
 * XREFs of WakeDIT @ 0x1C01089A4
 * Callers:
 *     RequestInputSinkInfoFromPoint @ 0x1C00042E4 (RequestInputSinkInfoFromPoint.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C0030D50 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     EditionInitiateMouseEventProcessing @ 0x1C0108940 (EditionInitiateMouseEventProcessing.c)
 *     EditionWakeInputThreadForPnp @ 0x1C0159290 (EditionWakeInputThreadForPnp.c)
 *     EditionExtensibility_WakeMITForInterceptCallout @ 0x1C01C8E40 (EditionExtensibility_WakeMITForInterceptCallout.c)
 *     ?xxxRouteSyntheticTouchpadToMT@@YAHIUtagPOINT@@0_K@Z @ 0x1C02264B4 (-xxxRouteSyntheticTouchpadToMT@@YAHIUtagPOINT@@0_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WakeDIT(unsigned int a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( gbDIT )
  {
    _m_prefetchw(&gdwDITWakeReason);
    if ( (_InterlockedOr(&gdwDITWakeReason, a1) & a1) == 0 )
      ZwSetEvent(ghDITEvent, 0LL);
    return 1LL;
  }
  else
  {
    _InterlockedOr((volatile signed __int32 *)&gdwDitIgnoredWakeReasons, a1);
  }
  return result;
}
