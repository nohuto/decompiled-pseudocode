/*
 * XREFs of MiAssignSystemVa @ 0x1409F0830
 * Callers:
 *     MiAssignTopLevelRanges @ 0x1409F05B0 (MiAssignTopLevelRanges.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x140085750 (RtlFindClearBitsAndSet.c)
 *     ExGenRandom @ 0x14009C340 (ExGenRandom.c)
 *     RtlClearBits @ 0x1400CF210 (RtlClearBits.c)
 */

__int64 __fastcall MiAssignSystemVa(ULONG NumberToFind, unsigned int a2)
{
  ULONG v4; // ebx
  int v5; // edi
  unsigned __int8 v6; // al
  ULONG ClearBitsAndSet; // eax
  __int64 v8; // rsi
  _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h] BYREF

  *(&BitMapHeader.SizeOfBitMap + 1) = 0;
  BitMapHeader.SizeOfBitMap = 256;
  BitMapHeader.Buffer = (unsigned int *)&unk_140465AD0;
  if ( NumberToFind <= 2 )
  {
    v6 = ExGenRandom(1);
    v5 = 8;
    goto LABEL_5;
  }
  v4 = dword_140465AF0;
  v5 = 16;
  while ( 1 )
  {
    ClearBitsAndSet = RtlFindClearBitsAndSet(&BitMapHeader, NumberToFind, v4);
    v8 = ClearBitsAndSet;
    if ( ClearBitsAndSet == -1 )
      break;
    if ( ClearBitsAndSet == v4 || !v5 )
    {
      dword_140465AF0 = (unsigned __int8)(NumberToFind + ClearBitsAndSet + (unsigned int)ExGenRandom(1) % a2);
      return (v8 - 256) << 39;
    }
    --v5;
    RtlClearBits(&BitMapHeader, ClearBitsAndSet, NumberToFind);
    v6 = ExGenRandom(1);
LABEL_5:
    v4 = v6;
  }
  return 0LL;
}
