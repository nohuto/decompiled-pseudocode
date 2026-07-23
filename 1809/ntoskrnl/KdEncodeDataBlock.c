/*
 * XREFs of KdEncodeDataBlock @ 0x1401815D0
 * Callers:
 *     IopLiveDumpEndMirroringCallback @ 0x140579890 (IopLiveDumpEndMirroringCallback.c)
 *     KeInitSystem @ 0x1409C5988 (KeInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 KdEncodeDataBlock()
{
  __int64 v0; // r9
  __int64 *v1; // rdx
  int v2; // r8d
  __int64 result; // rax

  if ( KdpBootedNodebug )
  {
    v0 = KiWaitNever;
    v1 = (__int64 *)&KdDebuggerDataBlock;
    KdpDataBlockEncoded = 1;
    v2 = 112;
    do
    {
      result = v0 ^ __ROR8__((unsigned __int64)&KdpDataBlockEncoded ^ _byteswap_uint64(KiWaitAlways ^ *v1), v0);
      *v1++ = result;
      --v2;
    }
    while ( v2 );
  }
  return result;
}
