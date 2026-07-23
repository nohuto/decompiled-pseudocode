/*
 * XREFs of SpiMax311InitializePort @ 0x14032D950
 * Callers:
 *     <none>
 * Callees:
 *     SpiMax311SetBaud @ 0x14032DA80 (SpiMax311SetBaud.c)
 */

char __fastcall SpiMax311InitializePort(__int64 a1, __int64 a2)
{
  *(_WORD *)(a2 + 12) = 0;
  qword_1404E1CC0 = 0LL;
  word_1404E1CC8 = *(_WORD *)(*(_QWORD *)a2 + 20LL);
  SpiMax311SetBaud(a2, *(unsigned int *)(a2 + 8));
  return 1;
}
