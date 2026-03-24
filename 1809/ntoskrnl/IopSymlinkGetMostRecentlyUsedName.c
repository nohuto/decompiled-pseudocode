/*
 * XREFs of IopSymlinkGetMostRecentlyUsedName @ 0x14012585C
 * Callers:
 *     IopParseDevice @ 0x14063CCE0 (IopParseDevice.c)
 *     IopSymlinkRememberJunction @ 0x1406ABE58 (IopSymlinkRememberJunction.c)
 *     IopSymlinkProcessReparse @ 0x1406AC210 (IopSymlinkProcessReparse.c)
 *     IopGraftName @ 0x1406AC26C (IopGraftName.c)
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
