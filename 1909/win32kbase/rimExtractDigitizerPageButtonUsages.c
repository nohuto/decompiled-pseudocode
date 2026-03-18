/*
 * XREFs of rimExtractDigitizerPageButtonUsages @ 0x1C0154618
 * Callers:
 *     rimExtractPointerDeviceUsages @ 0x1C0154E08 (rimExtractPointerDeviceUsages.c)
 * Callees:
 *     ?DbgPrintWarning@@YAXPEADZZ @ 0x1C005CC40 (-DbgPrintWarning@@YAXPEADZZ.c)
 *     memset @ 0x1C00BF640 (memset.c)
 *     rimHidP_GetUsages @ 0x1C0142DE8 (rimHidP_GetUsages.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimExtractDigitizerPageButtonUsages(
        __int64 a1,
        struct _HIDP_PREPARSED_DATA *a2,
        char *a3,
        unsigned int a4,
        __int64 a5)
{
  void *v5; // r15
  __int64 v7; // rbx
  unsigned int v9; // eax
  __int64 v12; // rcx
  int Usages; // ebp
  bool v14; // si
  __int64 i; // rdi
  int v16; // eax

  v5 = *(void **)(a1 + 768);
  v7 = a5;
  v9 = *(_DWORD *)(a1 + 984);
  LODWORD(a5) = v9;
  if ( !v5 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    v9 = a5;
  }
  memset(v5, 0, 2LL * v9);
  Usages = rimHidP_GetUsages(v12, 0xDu, *(_WORD *)(v7 + 58), (unsigned __int16 *)v5, (unsigned int *)&a5, a2, a3, a4);
  if ( Usages >= 0 )
  {
    v14 = (unsigned int)(*(_DWORD *)(a1 + 24) - 5) <= 1;
    for ( i = 0LL; (unsigned int)i < (unsigned int)a5; i = (unsigned int)(i + 1) )
    {
      if ( (unsigned int)i >= 6 )
        return (unsigned int)Usages;
      switch ( *((_WORD *)v5 + i) )
      {
        case 0x32:
          *(_DWORD *)(v7 + 76) |= 0x1000002u;
          break;
        case 0x3C:
          if ( v14 )
            *(_DWORD *)(v7 + 160) |= 2u;
          continue;
        case 0x42:
          goto LABEL_21;
        case 0x44:
          if ( v14 )
            *(_DWORD *)(v7 + 160) |= 1u;
          continue;
        case 0x45:
          if ( v14 )
          {
            *(_DWORD *)(v7 + 160) |= 6u;
LABEL_21:
            v16 = *(_DWORD *)(v7 + 76) | 0x1000006;
            *(_DWORD *)(v7 + 76) = v16;
            if ( *(_DWORD *)(a1 + 24) != 7 )
              *(_DWORD *)(v7 + 76) = v16 | 0x10;
          }
          break;
        case 0x47:
          *(_DWORD *)(v7 + 76) |= 0x4000u;
          break;
        case 0x64:
          *(_DWORD *)(v7 + 76) |= 0x1000000u;
          break;
        case 0xFE:
          *(_DWORD *)(v7 + 208) = 1;
          DbgPrintWarning("Found TESTSYNCFLAG\n");
          break;
        case 0xFF:
          *(_DWORD *)(v7 + 212) = 1;
          DbgPrintWarning("Found TESTINJECTFLAG\n");
          break;
      }
    }
  }
  return (unsigned int)Usages;
}
