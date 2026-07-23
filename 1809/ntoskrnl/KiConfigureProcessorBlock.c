/*
 * XREFs of KiConfigureProcessorBlock @ 0x140573988
 * Callers:
 *     KiInitializeKernel @ 0x140572310 (KiInitializeKernel.c)
 *     KiInitializeDynamicProcessorDpc @ 0x14057C260 (KiInitializeDynamicProcessorDpc.c)
 *     KeStartAllProcessors @ 0x1409B6DAC (KeStartAllProcessors.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall KiConfigureProcessorBlock(__int64 a1)
{
  __int64 v1; // r11
  unsigned int v2; // ecx
  unsigned int v3; // ebx
  unsigned __int64 v4; // r10
  unsigned __int64 v5; // rax
  unsigned int v6; // r8d
  unsigned __int64 v7; // r9
  int v8; // edx
  unsigned __int64 result; // rax
  unsigned __int16 v10; // r11
  __int64 v11; // rdx
  __int64 *v12; // r8
  __int64 v13; // r10
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rcx

  v1 = *(_QWORD *)(a1 + 192);
  v2 = KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a1 + 36)];
  v3 = v2 >> 6;
  v4 = *(_QWORD *)(v1 + 136) | (1LL << (v2 & 0x3F));
  _BitScanForward64(&v5, v4);
  v6 = v2 >> 6 << 6;
  *(_QWORD *)(v1 + 136) = v4;
  _BitScanReverse64(&v7, v4);
  v8 = KiProcessorNumberToIndexMappingTable[v6 + (unsigned int)v5];
  *(_DWORD *)(v1 + 164) = v8;
  *(_DWORD *)(v1 + 168) = KiProcessorNumberToIndexMappingTable[v6 + (unsigned int)v7];
  result = v4 - 1;
  *(_DWORD *)(v1 + 100) = v8;
  v10 = *(_WORD *)(v1 + 146);
  if ( ((v4 - 1) & v4) == 0 )
  {
    result = (unsigned __int16)KeNumberNodes;
    v11 = 0LL;
    if ( KeNumberNodes )
    {
      v12 = KeNodeBlock;
      v13 = (unsigned __int16)KeNumberNodes;
      do
      {
        v14 = *v12;
        result = *(unsigned __int16 *)(*v12 + 144);
        if ( (_DWORD)result == v3 )
        {
          v15 = *v12;
          if ( v11 )
            v15 = v11;
          v11 = v15;
          v16 = *(unsigned int *)(v15 + 128);
          result = v10;
          _bittestandset64(&v16, v10);
          *(_DWORD *)(v14 + 128) = v16;
        }
        ++v12;
        --v13;
      }
      while ( v13 );
    }
  }
  return result;
}
