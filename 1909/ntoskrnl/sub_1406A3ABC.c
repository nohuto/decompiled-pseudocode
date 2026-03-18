/*
 * XREFs of sub_1406A3ABC @ 0x1406A3ABC
 * Callers:
 *     ExpTimeRefreshWork @ 0x14059D9D0 (ExpTimeRefreshWork.c)
 *     ExUpdateLicenseDataInternal @ 0x1406A2590 (ExUpdateLicenseDataInternal.c)
 *     ExSetLicenseTamperState @ 0x14090BBC0 (ExSetLicenseTamperState.c)
 * Callees:
 *     ExNotifyCallback @ 0x1400F2CE0 (ExNotifyCallback.c)
 */

void sub_1406A3ABC()
{
  if ( CallbackObject )
    ExNotifyCallback(CallbackObject, 0LL, 0LL);
}
