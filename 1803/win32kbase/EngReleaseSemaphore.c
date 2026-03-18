/*
 * XREFs of EngReleaseSemaphore @ 0x1C005CF30
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pz @ 0x1C00DA6C0 (McTemplateK0pz.c)
 */

void __stdcall EngReleaseSemaphore(HSEMAPHORE hsem)
{
  int v1; // r8d
  __int64 v3; // rcx

  if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz((_DWORD)hsem, (unsigned int)&LockRelease, v1, (__int64)hsem);
  if ( hsem )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)hsem);
    PsLeavePriorityRegion(v3);
  }
}
