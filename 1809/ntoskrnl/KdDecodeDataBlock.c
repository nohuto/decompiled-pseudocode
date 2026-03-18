/*
 * XREFs of KdDecodeDataBlock @ 0x14028BA74
 * Callers:
 *     KeBugCheck2 @ 0x140291090 (KeBugCheck2.c)
 *     IopLiveDumpEndMirroringCallback @ 0x140578890 (IopLiveDumpEndMirroringCallback.c)
 * Callees:
 *     KdCopyDataBlock @ 0x14028B9B8 (KdCopyDataBlock.c)
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
