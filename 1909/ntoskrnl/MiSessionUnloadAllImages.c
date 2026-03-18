/*
 * XREFs of MiSessionUnloadAllImages @ 0x1407291A0
 * Callers:
 *     MiDereferenceSessionFinal @ 0x140728ECC (MiDereferenceSessionFinal.c)
 * Callees:
 *     MiSessionLookupImage @ 0x1400176C0 (MiSessionLookupImage.c)
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     MmReleaseLoadLock @ 0x1406A5B10 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406A5B70 (MmAcquireLoadLock.c)
 *     MmUnloadSystemImage @ 0x1407490E0 (MmUnloadSystemImage.c)
 */

_QWORD *MiSessionUnloadAllImages()
{
  struct _KTHREAD *Lock; // rax
  PVOID *v1; // rbx
  __int64 v2; // r8
  struct _KTHREAD *v3; // rax
  unsigned __int64 v4; // rdx

  Lock = MmAcquireLoadLock();
  v1 = (PVOID *)PsLoadedModuleList;
  v2 = (__int64)Lock;
  while ( v1 != &PsLoadedModuleList )
  {
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)v1[6]) == 1 && MiSessionLookupImage(v4) )
    {
      MmReleaseLoadLock(v2);
      MmUnloadSystemImage((ULONG_PTR)v1);
      v3 = MmAcquireLoadLock();
      v1 = (PVOID *)PsLoadedModuleList;
      v2 = (__int64)v3;
    }
    else
    {
      v1 = (PVOID *)*v1;
    }
  }
  return MmReleaseLoadLock(v2);
}
