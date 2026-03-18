/*
 * XREFs of Win32UAFMAllocPagedLookasideList @ 0x1C00F4810
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Win32UAFMAllocPagedLookasideList(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5)
{
  if ( (int)IsWin32UAFMAllocPagedLookasideListImplSupported() < 0 )
    return 0LL;
  else
    return Win32UAFMAllocPagedLookasideListImpl(a1, a2, a3, a4, a5);
}
