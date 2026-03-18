/*
 * XREFs of VfIsVerifierExtensionEnabled @ 0x14030993C
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x14056B53C (PopMarkComponentsBootPhase.c)
 *     VfNotifyOfHibernate @ 0x14092BDCC (VfNotifyOfHibernate.c)
 * Callees:
 *     <none>
 */

__int64 VfIsVerifierExtensionEnabled()
{
  return (unsigned int)XdvEnabled;
}
