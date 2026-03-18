/*
 * XREFs of IopSymlinkGetMostRecentlyUsedName @ 0x140126714
 * Callers:
 *     IopParseDevice @ 0x1405FFEA0 (IopParseDevice.c)
 *     IopSymlinkRememberJunction @ 0x1406CEA0C (IopSymlinkRememberJunction.c)
 *     IopSymlinkProcessReparse @ 0x1406CEE5C (IopSymlinkProcessReparse.c)
 *     IopGraftName @ 0x1406CEEB8 (IopGraftName.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopSymlinkGetMostRecentlyUsedName(__int64 a1)
{
  __int64 i; // rax

  for ( i = *(_QWORD *)(a1 + 8); i; i = *(_QWORD *)(i + 8) )
    a1 = i;
  return a1;
}
