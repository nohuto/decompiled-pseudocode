/*
 * XREFs of KdDecodeDataBlock @ 0x14028BD64
 * Callers:
 *     KeBugCheck2 @ 0x140291380 (KeBugCheck2.c)
 *     IopLiveDumpEndMirroringCallback @ 0x140579890 (IopLiveDumpEndMirroringCallback.c)
 * Callees:
 *     KdCopyDataBlock @ 0x14028BCA8 (KdCopyDataBlock.c)
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
