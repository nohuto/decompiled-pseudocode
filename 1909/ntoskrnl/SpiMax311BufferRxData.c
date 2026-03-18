/*
 * XREFs of SpiMax311BufferRxData @ 0x14034E964
 * Callers:
 *     SpiMax311PutByte @ 0x14034EA80 (SpiMax311PutByte.c)
 *     SpiMax311RxReady @ 0x14034EB10 (SpiMax311RxReady.c)
 *     SpiMax311TxEmpty @ 0x14034ECC0 (SpiMax311TxEmpty.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SpiMax311BufferRxData(__int16 a1)
{
  __int64 result; // rax
  int v2; // edx

  result = (unsigned int)qword_14050E0B0;
  v2 = ((_WORD)qword_14050E0B0 + 1) & 0x3FF;
  if ( v2 != HIDWORD(qword_14050E0B0) )
  {
    word_14050E0BA[(unsigned int)qword_14050E0B0] = a1;
    LODWORD(qword_14050E0B0) = v2;
  }
  return result;
}
