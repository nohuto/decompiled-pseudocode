/*
 * XREFs of sub_1405A33DC @ 0x1405A33DC
 * Callers:
 *     ExpTimeRefreshWork @ 0x14056F0E0 (ExpTimeRefreshWork.c)
 *     ExUpdateLicenseDataInternal @ 0x1405A1AD0 (ExUpdateLicenseDataInternal.c)
 *     ExSetLicenseTamperState @ 0x1408CFE10 (ExSetLicenseTamperState.c)
 * Callees:
 *     ExNotifyCallback @ 0x14008E480 (ExNotifyCallback.c)
 */

void sub_1405A33DC()
{
  if ( CallbackObject )
    ExNotifyCallback(CallbackObject, 0LL, 0LL);
}
