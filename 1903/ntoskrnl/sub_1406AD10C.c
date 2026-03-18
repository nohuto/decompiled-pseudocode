/*
 * XREFs of sub_1406AD10C @ 0x1406AD10C
 * Callers:
 *     ExpTimeRefreshWork @ 0x14059D9F0 (ExpTimeRefreshWork.c)
 *     ExUpdateLicenseDataInternal @ 0x1406ABBE0 (ExUpdateLicenseDataInternal.c)
 *     ExSetLicenseTamperState @ 0x14090C160 (ExSetLicenseTamperState.c)
 * Callees:
 *     ExNotifyCallback @ 0x1400FA670 (ExNotifyCallback.c)
 */

void sub_1406AD10C()
{
  if ( CallbackObject )
    ExNotifyCallback(CallbackObject, 0LL, 0LL);
}
