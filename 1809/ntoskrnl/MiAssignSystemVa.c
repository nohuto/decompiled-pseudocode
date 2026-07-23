/*
 * XREFs of MiAssignSystemVa @ 0x1409D3CE0
 * Callers:
 *     MiAssignTopLevelRanges @ 0x1409D3A80 (MiAssignTopLevelRanges.c)
 * Callees:
 *     RtlClearBits @ 0x140017890 (RtlClearBits.c)
 *     ExGenRandom @ 0x1400627E0 (ExGenRandom.c)
 *     RtlFindClearBitsAndSet @ 0x1400D9660 (RtlFindClearBitsAndSet.c)
 */

__int64 __fastcall MiAssignSystemVa(ULONG NumberToClear, unsigned int a2)
{
  ULONG v4; // ebx
  int v5; // edi
  ULONG ClearBitsAndSet; // eax
  __int64 v7; // rsi
  unsigned __int8 v8; // al
  _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h] BYREF

  BitMapHeader.SizeOfBitMap = 256;
  BitMapHeader.Buffer = (unsigned int *)&unk_14043B4E0;
  if ( NumberToClear <= 2 )
  {
    v8 = ExGenRandom(1);
    v5 = 8;
    goto LABEL_7;
  }
  v4 = dword_14043B500;
  v5 = 16;
  while ( 1 )
  {
    ClearBitsAndSet = RtlFindClearBitsAndSet(&BitMapHeader, NumberToClear, v4);
    v7 = ClearBitsAndSet;
    if ( ClearBitsAndSet == -1 )
      break;
    if ( ClearBitsAndSet == v4 || !v5 )
    {
      dword_14043B500 = (unsigned __int8)(NumberToClear + ClearBitsAndSet + (unsigned int)ExGenRandom(1) % a2);
      return (v7 - 256) << 39;
    }
    --v5;
    RtlClearBits(&BitMapHeader, ClearBitsAndSet, NumberToClear);
    v8 = ExGenRandom(1);
LABEL_7:
    v4 = v8;
  }
  return 0LL;
}
