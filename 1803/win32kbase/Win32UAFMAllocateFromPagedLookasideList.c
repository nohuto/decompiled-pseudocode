/*
 * XREFs of Win32UAFMAllocateFromPagedLookasideList @ 0x1C00BD530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Win32UAFMAllocateFromPagedLookasideList(__int64 a1, __int64 a2)
{
  if ( (int)IsWin32UAFMAllocateFromPagedLookasideListImplSupported() < 0 )
    return 0LL;
  else
    return Win32UAFMAllocateFromPagedLookasideListImpl(a1, a2);
}
