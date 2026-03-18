/*
 * XREFs of UnlockQueue @ 0x1C00BA740
 * Callers:
 *     <none>
 * Callees:
 *     FreeQueue @ 0x1C009E49C (FreeQueue.c)
 */

__int64 __fastcall UnlockQueue(__int64 a1)
{
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 404))-- == 1 && (*(_DWORD *)(a1 + 396) & 0x4000000) != 0 )
    return FreeQueue(a1);
  return result;
}
