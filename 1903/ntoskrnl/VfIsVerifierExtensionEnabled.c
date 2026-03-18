/*
 * XREFs of VfIsVerifierExtensionEnabled @ 0x1403275B4
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x14059D990 (PopMarkComponentsBootPhase.c)
 *     VfNotifyOfHibernate @ 0x14096A63C (VfNotifyOfHibernate.c)
 * Callees:
 *     <none>
 */

__int64 VfIsVerifierExtensionEnabled()
{
  return (unsigned int)XdvEnabled;
}
