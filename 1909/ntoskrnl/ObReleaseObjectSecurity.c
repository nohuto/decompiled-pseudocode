/*
 * XREFs of ObReleaseObjectSecurity @ 0x1405C7290
 * Callers:
 *     ObCheckCreateObjectAccess @ 0x1405C6000 (ObCheckCreateObjectAccess.c)
 *     ObpInsertOrLocateNamedObject @ 0x1405C6208 (ObpInsertOrLocateNamedObject.c)
 *     ObpCheckObjectReference @ 0x1405C7008 (ObpCheckObjectReference.c)
 *     MiAllowImageMap @ 0x1405EB884 (MiAllowImageMap.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1406173EC (PspAllocateAndQueryNotificationChannel.c)
 *     ObCheckObjectAccess @ 0x1406BE820 (ObCheckObjectAccess.c)
 *     PopBootStatAccessCheck @ 0x14077CA2C (PopBootStatAccessCheck.c)
 *     ObpCheckTraverseAccess @ 0x14089DC00 (ObpCheckTraverseAccess.c)
 *     PspCheckJobAccessState @ 0x1408C718C (PspCheckJobAccessState.c)
 *     EtwpCheckCurrentUserProcessAccess @ 0x1408FFB4C (EtwpCheckCurrentUserProcessAccess.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObDereferenceSecurityDescriptor @ 0x1405C7520 (ObDereferenceSecurityDescriptor.c)
 */

void __stdcall ObReleaseObjectSecurity(PSECURITY_DESCRIPTOR SecurityDescriptor, BOOLEAN MemoryAllocated)
{
  if ( SecurityDescriptor )
  {
    if ( MemoryAllocated )
      ExFreePoolWithTag(SecurityDescriptor, 0);
    else
      ObDereferenceSecurityDescriptor(SecurityDescriptor, 1LL);
  }
}
