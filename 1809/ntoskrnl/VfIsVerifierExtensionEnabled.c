/*
 * XREFs of VfIsVerifierExtensionEnabled @ 0x140309C2C
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x14056C53C (PopMarkComponentsBootPhase.c)
 *     VfNotifyOfHibernate @ 0x14092CDCC (VfNotifyOfHibernate.c)
 * Callees:
 *     <none>
 */

__int64 VfIsVerifierExtensionEnabled()
{
  return (unsigned int)XdvEnabled;
}
