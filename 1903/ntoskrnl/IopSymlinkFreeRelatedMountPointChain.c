/*
 * XREFs of IopSymlinkFreeRelatedMountPointChain @ 0x1406CF2A4
 * Callers:
 *     IopSymlinkPropagateToExtensionIfNeeded @ 0x140602F60 (IopSymlinkPropagateToExtensionIfNeeded.c)
 *     IopSymlinkUpdateECP @ 0x1406CE888 (IopSymlinkUpdateECP.c)
 *     IopSymlinkRememberJunction @ 0x1406CEA0C (IopSymlinkRememberJunction.c)
 *     IopSymlinkCleanupECP @ 0x1406CF290 (IopSymlinkCleanupECP.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
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
