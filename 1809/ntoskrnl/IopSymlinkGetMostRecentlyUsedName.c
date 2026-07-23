/*
 * XREFs of IopSymlinkGetMostRecentlyUsedName @ 0x14012592C
 * Callers:
 *     IopParseDevice @ 0x14063DD00 (IopParseDevice.c)
 *     IopSymlinkRememberJunction @ 0x1406AD0F8 (IopSymlinkRememberJunction.c)
 *     IopSymlinkProcessReparse @ 0x1406AD4B0 (IopSymlinkProcessReparse.c)
 *     IopGraftName @ 0x1406AD50C (IopGraftName.c)
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
