/*
 * XREFs of ACPIRangeFilterPICInterrupt @ 0x1C002E690
 * Callers:
 *     ACPIBusIrpQueryResources @ 0x1C0098CC0 (ACPIBusIrpQueryResources.c)
 *     ACPIBusIrpQueryResourceRequirements @ 0x1C0099070 (ACPIBusIrpQueryResourceRequirements.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIRangeFilterPICInterrupt(__int64 a1)
{
  unsigned int v1; // r10d
  __int64 v2; // rdx
  unsigned int v3; // eax
  unsigned int v4; // r8d
  __int64 v5; // rax
  unsigned int v7; // r11d
  unsigned int v8; // r9d

  if ( a1 )
  {
    v1 = 0;
    v2 = a1 + 32;
    if ( *(_DWORD *)(a1 + 28) )
    {
      while ( 1 )
      {
        v3 = *(_DWORD *)(v2 + 4);
        v4 = 0;
        if ( v3 )
          break;
LABEL_6:
        ++v1;
        v2 += 32 * v3 + 8;
        if ( v1 >= *(_DWORD *)(a1 + 28) )
          return 0LL;
      }
      while ( 1 )
      {
        v5 = 32LL * v4;
        if ( *(_BYTE *)(v5 + v2 + 9) == 2 )
        {
          v7 = *(_DWORD *)(v5 + v2 + 16);
          v8 = *(_DWORD *)(v5 + v2 + 20);
          if ( v7 == 2 )
          {
            if ( v8 != 2 )
              goto LABEL_15;
            *(_BYTE *)(v5 + v2 + 9) = 0;
          }
          else
          {
            if ( v8 != 2 )
            {
              if ( v7 >= 2 || v8 <= 2 )
                goto LABEL_5;
LABEL_15:
              *(_DWORD *)(v5 + v2 + 16) = 3;
              goto LABEL_5;
            }
            *(_DWORD *)(v5 + v2 + 20) = 1;
          }
        }
LABEL_5:
        v3 = *(_DWORD *)(v2 + 4);
        if ( ++v4 >= v3 )
          goto LABEL_6;
      }
    }
  }
  return 0LL;
}
