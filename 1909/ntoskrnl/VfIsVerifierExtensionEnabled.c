/*
 * XREFs of VfIsVerifierExtensionEnabled @ 0x140327004
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x14059D210 (PopMarkComponentsBootPhase.c)
 *     VfNotifyOfHibernate @ 0x14096A63C (VfNotifyOfHibernate.c)
 * Callees:
 *     <none>
 */

__int64 VfIsVerifierExtensionEnabled()
{
  return (unsigned int)XdvEnabled;
}
