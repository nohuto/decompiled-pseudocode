/*
 * XREFs of GreDeleteFastMutex @ 0x1C0077A20
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1C00C4240 (MultiUserNtGreCleanup.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 */

__int64 __fastcall GreDeleteFastMutex(__int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    return Win32FreePool(a1);
  return result;
}
