/*
 * XREFs of EtwTraceGreLockAcquireSemaphoreSharedStarveExclusive @ 0x1C00B7EF0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pz @ 0x1C012FF70 (McTemplateK0pz.c)
 */

__int64 __fastcall EtwTraceGreLockAcquireSemaphoreSharedStarveExclusive(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( gbLockEtw )
  {
    if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      return McTemplateK0pz(a1, &LockAcquireSharedStarveExclusive, a3, a2);
  }
  return result;
}
