/*
 * XREFs of RtlQueryProcessPlaceholderCompatibilityMode @ 0x1408D5D50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CHAR RtlQueryProcessPlaceholderCompatibilityMode(void)
{
  unsigned __int64 v0; // rax

  v0 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[0];
  if ( v0 )
    return *(_BYTE *)(v0 + 1968);
  else
    return -3;
}
