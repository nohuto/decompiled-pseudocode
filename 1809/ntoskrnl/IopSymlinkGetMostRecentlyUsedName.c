/*
 * XREFs of IopSymlinkGetMostRecentlyUsedName @ 0x14012583C
 * Callers:
 *     IopParseDevice @ 0x14063CD00 (IopParseDevice.c)
 *     IopSymlinkRememberJunction @ 0x1406ABE78 (IopSymlinkRememberJunction.c)
 *     IopSymlinkProcessReparse @ 0x1406AC230 (IopSymlinkProcessReparse.c)
 *     IopGraftName @ 0x1406AC28C (IopGraftName.c)
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
