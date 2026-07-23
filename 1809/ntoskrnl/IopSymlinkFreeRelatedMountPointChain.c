/*
 * XREFs of IopSymlinkFreeRelatedMountPointChain @ 0x1406AD0B4
 * Callers:
 *     IopSymlinkPropagateToExtensionIfNeeded @ 0x14063AFB0 (IopSymlinkPropagateToExtensionIfNeeded.c)
 *     IopSymlinkUpdateECP @ 0x1406ACF50 (IopSymlinkUpdateECP.c)
 *     IopSymlinkCleanupECP @ 0x1406AD0A0 (IopSymlinkCleanupECP.c)
 *     IopSymlinkRememberJunction @ 0x1406AD0F8 (IopSymlinkRememberJunction.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall IopSymlinkFreeRelatedMountPointChain(__int64 a1)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rbx

  v2 = *(_QWORD **)(a1 + 8);
  if ( v2 )
  {
    do
    {
      v3 = (_QWORD *)v2[1];
      ExFreePoolWithTag(v2, 0x69536F49u);
      v2 = v3;
    }
    while ( v3 );
  }
  *(_QWORD *)(a1 + 8) = 0LL;
}
