/*
 * XREFs of HvlpDiscoverTopologyComplete @ 0x140A3959C
 * Callers:
 *     HvlPhase2Initialize @ 0x14019D5EC (HvlPhase2Initialize.c)
 * Callees:
 *     HvlpDiscoverTopologyWorker @ 0x1408513EC (HvlpDiscoverTopologyWorker.c)
 */

int *HvlpDiscoverTopologyComplete()
{
  int *result; // rax
  unsigned int v1; // edi
  unsigned int v2; // edx
  int *v3; // rbx
  unsigned int v4; // r8d
  unsigned int v5; // ebp
  unsigned int v6; // r14d
  bool v7; // zf
  char v8; // r10
  char v9; // r11
  _DWORD *v10; // r9
  char v11; // cl
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (int *)&retaddr;
  v1 = 0;
  if ( (_DWORD)HvlpLogicalProcessorCount )
  {
    v2 = dword_14050B168;
    v3 = &dword_1405798E8;
    v4 = dword_14050B16C;
    do
    {
      if ( v3[4] == -1 )
      {
        result = (int *)HvlpDiscoverTopologyWorker();
        v2 = dword_14050B168;
        v4 = dword_14050B16C;
      }
      v5 = v3[2];
      v6 = v3[3];
      if ( v5 > v2 )
        v2 = v3[2];
      dword_14050B168 = v2;
      if ( v6 > v4 )
        v4 = v6;
      v7 = *((_BYTE *)v3 + 104) == 0;
      dword_14050B16C = v4;
      if ( !v7 )
      {
        v8 = 1;
        result = HvlpLogicalProcessorRegions;
        v9 = 1;
        if ( HvlpLogicalProcessorRegions == v3 - 2 )
          goto LABEL_19;
        v10 = &unk_1405798F0;
        do
        {
          if ( *((_BYTE *)v10 + 96) )
          {
            v11 = 0;
            if ( *v10 != v5 )
              v11 = v8;
            v8 = v11;
            if ( v10[1] == v6 )
              v9 = 0;
          }
          v10 += 30;
          result = v10 - 4;
        }
        while ( v10 - 4 != v3 - 2 );
        if ( v8 )
LABEL_19:
          ++HvlpPackageCount;
        if ( v9 )
          ++HvlpCoreCount;
      }
      ++v1;
      v3 += 30;
    }
    while ( v1 < (unsigned int)HvlpLogicalProcessorCount );
  }
  return result;
}
