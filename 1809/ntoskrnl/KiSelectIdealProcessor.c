/*
 * XREFs of KiSelectIdealProcessor @ 0x1400D56E8
 * Callers:
 *     KeStartThread @ 0x1400D3A34 (KeStartThread.c)
 *     KeSelectIdealProcessor @ 0x1400D8A34 (KeSelectIdealProcessor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiSelectIdealProcessor(__int64 a1, int a2, __int64 a3)
{
  unsigned int v3; // r10d
  __int64 v4; // r9
  unsigned int v5; // r11d
  unsigned int v6; // ebx

  v3 = *(_DWORD *)(a1 + 164);
  LODWORD(v4) = a2;
  v5 = *(_DWORD *)(a1 + 168);
  if ( v3 == v5 )
    return v3;
  v6 = *(unsigned __int8 *)(a1 + 150);
  do
  {
    v4 = v6 + (unsigned int)v4;
    if ( (unsigned int)v4 > v5 )
      v4 = v3 + ((unsigned int)v4 - v3 + 1) % v6;
  }
  while ( ((unsigned int)(*(_QWORD *)a3 >> (KiProcessorIndexToNumberMappingTable[v4] & 0x3F)) & ((unsigned int)KiProcessorIndexToNumberMappingTable[v4] >> 6 == *(unsigned __int16 *)(a3 + 8))) == 0 );
  return (unsigned int)v4;
}
