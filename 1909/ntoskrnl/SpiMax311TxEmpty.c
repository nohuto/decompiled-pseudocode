/*
 * XREFs of SpiMax311TxEmpty @ 0x14034ECC0
 * Callers:
 *     SpiMax311PutByte @ 0x14034EA80 (SpiMax311PutByte.c)
 * Callees:
 *     SpiMax311BufferRxData @ 0x14034E964 (SpiMax311BufferRxData.c)
 *     SpiSend16 @ 0x14034ECF8 (SpiSend16.c)
 */

bool __fastcall SpiMax311TxEmpty(__int64 a1)
{
  __int16 v2; // cx

  while ( 1 )
  {
    v2 = SpiSend16(a1, 0LL);
    if ( v2 >= 0 )
      break;
    SpiMax311BufferRxData(v2);
  }
  return (v2 & 0x4000) != 0;
}
