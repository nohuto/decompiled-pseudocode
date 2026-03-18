/*
 * XREFs of BvgaBitBlt @ 0x1402929E0
 * Callers:
 *     <none>
 * Callees:
 *     BvgaAcquireLock @ 0x140292960 (BvgaAcquireLock.c)
 *     BvgaReleaseLock @ 0x140292C20 (BvgaReleaseLock.c)
 */

__int64 __fastcall BvgaBitBlt(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 result; // rax

  if ( BvgaBootDriverInstalled )
  {
    if ( !BvgaDisplayState )
    {
      BvgaAcquireLock();
      VidBitBlt(a1, a2, a3);
      return BvgaReleaseLock();
    }
  }
  return result;
}
