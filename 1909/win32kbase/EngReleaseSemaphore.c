/*
 * XREFs of EngReleaseSemaphore @ 0x1C0076970
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pz @ 0x1C012FF70 (McTemplateK0pz.c)
 */

void __stdcall EngReleaseSemaphore(HSEMAPHORE hsem)
{
  __int64 v1; // r8
  __int64 v3; // rcx

  if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz(hsem, &LockRelease, v1, hsem);
  if ( hsem )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)hsem);
    PsLeavePriorityRegion(v3);
  }
}
