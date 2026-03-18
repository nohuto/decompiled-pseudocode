/*
 * XREFs of Win32AllocateFromPagedLookasideList @ 0x1C0035990
 * Callers:
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C0020FD0 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     GreCombineRgn @ 0x1C0023180 (GreCombineRgn.c)
 *     AllocQueue @ 0x1C00359C0 (AllocQueue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Win32AllocateFromPagedLookasideList(__int64 a1)
{
  if ( (int)IsWin32AllocateFromPagedLookasideListImplSupported() < 0 )
    return 0LL;
  else
    return Win32AllocateFromPagedLookasideListImpl(a1);
}
