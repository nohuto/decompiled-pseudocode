/*
 * XREFs of ObReleaseObjectSecurity @ 0x1405C93E0
 * Callers:
 *     SepSetProcessTrustLabelAceForToken @ 0x1401B6D70 (SepSetProcessTrustLabelAceForToken.c)
 *     ObCheckObjectAccess @ 0x1405958F0 (ObCheckObjectAccess.c)
 *     ObCheckCreateObjectAccess @ 0x1405C83B0 (ObCheckCreateObjectAccess.c)
 *     ObpInsertOrLocateNamedObject @ 0x1405C85A8 (ObpInsertOrLocateNamedObject.c)
 *     ObpCheckObjectReference @ 0x1405C9050 (ObpCheckObjectReference.c)
 *     MiAllowImageMap @ 0x1405F48B8 (MiAllowImageMap.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1406ACB24 (PspAllocateAndQueryNotificationChannel.c)
 *     PopBootStatAccessCheck @ 0x140753390 (PopBootStatAccessCheck.c)
 *     ObpCheckTraverseAccess @ 0x140861944 (ObpCheckTraverseAccess.c)
 *     PspCheckJobAccessState @ 0x140889988 (PspCheckJobAccessState.c)
 *     EtwpCheckCurrentUserProcessAccess @ 0x1408C2FE0 (EtwpCheckCurrentUserProcessAccess.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     ObDereferenceSecurityDescriptor @ 0x1405C9410 (ObDereferenceSecurityDescriptor.c)
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
