/*
 * XREFs of EtwTraceGreLockAcquireSemaphoreSharedStarveExclusive @ 0x1C00DA0A0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pz @ 0x1C00DA6C0 (McTemplateK0pz.c)
 */

__int64 __fastcall EtwTraceGreLockAcquireSemaphoreSharedStarveExclusive(int a1, __int64 a2, int a3)
{
  __int64 result; // rax

  if ( gbLockEtw )
  {
    result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
    if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      return McTemplateK0pz(a1, (unsigned int)&LockAcquireSharedStarveExclusive, a3, a2);
  }
  return result;
}
