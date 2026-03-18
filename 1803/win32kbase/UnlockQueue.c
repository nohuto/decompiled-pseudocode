/*
 * XREFs of UnlockQueue @ 0x1C0075E10
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreeToPagedLookasideList @ 0x1C0044A20 (Win32FreeToPagedLookasideList.c)
 */

__int64 __fastcall UnlockQueue(__int64 a1)
{
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 396))-- == 1 && (*(_DWORD *)(a1 + 388) & 0x4000000) != 0 )
    return Win32FreeToPagedLookasideList((__int64)QLookaside, a1);
  return result;
}
