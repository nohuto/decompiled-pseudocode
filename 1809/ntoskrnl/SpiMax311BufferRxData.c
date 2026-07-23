/*
 * XREFs of SpiMax311BufferRxData @ 0x14032D874
 * Callers:
 *     SpiMax311PutByte @ 0x14032D990 (SpiMax311PutByte.c)
 *     SpiMax311RxReady @ 0x14032DA20 (SpiMax311RxReady.c)
 *     SpiMax311TxEmpty @ 0x14032DBD0 (SpiMax311TxEmpty.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SpiMax311BufferRxData(__int16 a1)
{
  __int64 result; // rax
  int v2; // edx

  result = (unsigned int)qword_1404E1CC0;
  v2 = ((_WORD)qword_1404E1CC0 + 1) & 0x3FF;
  if ( v2 != HIDWORD(qword_1404E1CC0) )
  {
    word_1404E1CCA[(unsigned int)qword_1404E1CC0] = a1;
    LODWORD(qword_1404E1CC0) = v2;
  }
  return result;
}
