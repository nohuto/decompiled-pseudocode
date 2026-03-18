/*
 * XREFs of IopSymlinkGetMostRecentlyUsedName @ 0x140127214
 * Callers:
 *     IopParseDevice @ 0x1406018D0 (IopParseDevice.c)
 *     IopSymlinkRememberJunction @ 0x1406CD7AC (IopSymlinkRememberJunction.c)
 *     IopSymlinkProcessReparse @ 0x1406CDBFC (IopSymlinkProcessReparse.c)
 *     IopGraftName @ 0x1406CDC58 (IopGraftName.c)
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
