/*
 * XREFs of KdDecodeDataBlock @ 0x1402A1C00
 * Callers:
 *     KeBugCheck2 @ 0x1402A7B60 (KeBugCheck2.c)
 *     IopLiveDumpEndMirroringCallback @ 0x1405A8730 (IopLiveDumpEndMirroringCallback.c)
 * Callees:
 *     KdCopyDataBlock @ 0x1402A1B44 (KdCopyDataBlock.c)
 */

__int64 KdDecodeDataBlock()
{
  __int64 result; // rax

  if ( KdpDataBlockEncoded )
  {
    result = KdCopyDataBlock(&KdDebuggerDataBlock);
    KdpDataBlockEncoded = 0;
  }
  return result;
}
