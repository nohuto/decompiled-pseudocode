/*
 * XREFs of EtwpCheckCurrentUserProcessAccess @ 0x1409001EC
 * Callers:
 *     EtwpIsRegEntryAllowed @ 0x140665A9C (EtwpIsRegEntryAllowed.c)
 *     EtwpNotifyGuid @ 0x1406B63E0 (EtwpNotifyGuid.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x1408FCC40 (EtwpGetPrivateSessionTraceHandle.c)
 * Callees:
 *     ObReleaseObjectSecurity @ 0x1405C6D90 (ObReleaseObjectSecurity.c)
 *     ObpGetObjectSecurity @ 0x1405C7180 (ObpGetObjectSecurity.c)
 *     EtwpAccessCheck @ 0x1405D0AFC (EtwpAccessCheck.c)
 */

__int64 __fastcall EtwpCheckCurrentUserProcessAccess(__int64 a1)
{
  unsigned int v1; // ebx
  BOOLEAN MemoryAllocated; // [rsp+38h] [rbp+10h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+40h] [rbp+18h] BYREF

  SecurityDescriptor = 0LL;
  ObpGetObjectSecurity(a1, &SecurityDescriptor, &MemoryAllocated, 0);
  v1 = EtwpAccessCheck(SecurityDescriptor, 0x1FFFFFu, 0LL);
  ObReleaseObjectSecurity(SecurityDescriptor, MemoryAllocated);
  return v1;
}
