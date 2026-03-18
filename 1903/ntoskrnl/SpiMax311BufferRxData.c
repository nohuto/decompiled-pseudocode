/*
 * XREFs of SpiMax311BufferRxData @ 0x14034EF04
 * Callers:
 *     SpiMax311PutByte @ 0x14034F020 (SpiMax311PutByte.c)
 *     SpiMax311RxReady @ 0x14034F0B0 (SpiMax311RxReady.c)
 *     SpiMax311TxEmpty @ 0x14034F260 (SpiMax311TxEmpty.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SpiMax311BufferRxData(__int16 a1)
{
  __int64 result; // rax
  int v2; // edx

  result = (unsigned int)qword_14050E370;
  v2 = ((_WORD)qword_14050E370 + 1) & 0x3FF;
  if ( v2 != HIDWORD(qword_14050E370) )
  {
    word_14050E37A[(unsigned int)qword_14050E370] = a1;
    LODWORD(qword_14050E370) = v2;
  }
  return result;
}
