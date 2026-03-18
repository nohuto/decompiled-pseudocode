/*
 * XREFs of KiConfigureProcessorBlock @ 0x14059F5F4
 * Callers:
 *     KiInitializeKernel @ 0x1405A1240 (KiInitializeKernel.c)
 *     KiInitializeDynamicProcessorDpc @ 0x1405AB150 (KiInitializeDynamicProcessorDpc.c)
 *     KeStartAllProcessors @ 0x1409EDD08 (KeStartAllProcessors.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall KiConfigureProcessorBlock(__int64 a1)
{
  __int64 v1; // r10
  unsigned int v2; // ecx
  unsigned int v3; // r11d
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // rax
  unsigned int v6; // edx
  unsigned __int64 v7; // r8
  unsigned __int16 v8; // bx
  unsigned __int64 result; // rax
  __int64 v10; // rdx
  __int64 *v11; // r8
  __int64 v12; // r10
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rcx

  v1 = *(_QWORD *)(a1 + 192);
  v2 = KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a1 + 36)];
  v3 = v2 >> 6;
  v4 = *(_QWORD *)(v1 + 136) | (1LL << (v2 & 0x3F));
  _BitScanForward64(&v5, v4);
  v6 = v2 >> 6 << 6;
  *(_QWORD *)(v1 + 136) = v4;
  _BitScanReverse64(&v7, v4);
  *(_DWORD *)(v1 + 172) = KiProcessorNumberToIndexMappingTable[v6 + (unsigned int)v5];
  v8 = *(_WORD *)(v1 + 146);
  *(_DWORD *)(v1 + 176) = KiProcessorNumberToIndexMappingTable[v6 + (unsigned int)v7];
  LOWORD(v5) = *(_WORD *)(v1 + 172);
  *(_WORD *)(v1 + 108) = v5;
  *(_WORD *)(v1 + 110) = v5;
  result = v4 - 1;
  if ( ((v4 - 1) & v4) == 0 )
  {
    result = (unsigned __int16)KeNumberNodes;
    v10 = 0LL;
    if ( KeNumberNodes )
    {
      v11 = KeNodeBlock;
      v12 = (unsigned __int16)KeNumberNodes;
      do
      {
        v13 = *v11;
        result = *(unsigned __int16 *)(*v11 + 144);
        if ( (_DWORD)result == v3 )
        {
          v14 = *v11;
          if ( v10 )
            v14 = v10;
          v10 = v14;
          v15 = *(unsigned int *)(v14 + 128);
          result = v8;
          _bittestandset64(&v15, v8);
          *(_DWORD *)(v13 + 128) = v15;
        }
        ++v11;
        --v12;
      }
      while ( v12 );
    }
  }
  return result;
}
