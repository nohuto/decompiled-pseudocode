/*
 * XREFs of rimExtractDigitizerPageButtonUsages @ 0x1C0101414
 * Callers:
 *     rimExtractPointerDeviceUsages @ 0x1C0101B7C (rimExtractPointerDeviceUsages.c)
 * Callees:
 *     memset @ 0x1C0079EC0 (memset.c)
 *     DbgPrintRIM @ 0x1C00DDAEC (DbgPrintRIM.c)
 *     rimHidP_GetUsages @ 0x1C00F0E7C (rimHidP_GetUsages.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimExtractDigitizerPageButtonUsages(
        __int64 a1,
        struct _HIDP_PREPARSED_DATA *a2,
        char *a3,
        unsigned int a4,
        __int64 a5)
{
  unsigned __int16 *v5; // r12
  unsigned int v6; // edi
  __int64 v7; // rbx
  unsigned int v9; // eax
  __int64 v13; // rdx
  int Usages; // ebp
  int v15; // eax

  v5 = *(unsigned __int16 **)(a1 + 728);
  v6 = 0;
  v7 = a5;
  v9 = *(_DWORD *)(a1 + 944);
  LODWORD(a5) = v9;
  if ( !v5 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
    v9 = a5;
  }
  memset(v5, 0, 2LL * v9);
  Usages = rimHidP_GetUsages(HidP_Input, 0xDu, *(_WORD *)(v7 + 58), v5, (unsigned int *)&a5, a2, a3, a4);
  if ( Usages >= 0 && (_DWORD)a5 )
  {
    do
    {
      if ( v6 >= 6 )
        return (unsigned int)Usages;
      switch ( v5[v6] )
      {
        case 0x32u:
          *(_DWORD *)(v7 + 76) |= 0x1000002u;
          break;
        case 0x3Cu:
          if ( (unsigned int)(*(_DWORD *)(a1 + 24) - 5) > 1 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM((unsigned int)v5[v6] - 60, v13);
          *(_DWORD *)(v7 + 160) |= 2u;
          break;
        case 0x42u:
          goto LABEL_20;
        case 0x44u:
          *(_DWORD *)(v7 + 160) |= 1u;
          break;
        case 0x45u:
          *(_DWORD *)(v7 + 160) |= 6u;
LABEL_20:
          v15 = *(_DWORD *)(v7 + 76) | 0x1000006;
          *(_DWORD *)(v7 + 76) = v15;
          if ( *(_DWORD *)(a1 + 24) != 7 )
            *(_DWORD *)(v7 + 76) = v15 | 0x10;
          break;
        case 0x47u:
          *(_DWORD *)(v7 + 76) |= 0x4000u;
          break;
        case 0x64u:
          *(_DWORD *)(v7 + 76) |= 0x1000000u;
          break;
        case 0xFEu:
          *(_DWORD *)(v7 + 208) = 1;
          DbgPrintRIM("Found TESTSYNCFLAG\n");
          break;
        case 0xFFu:
          *(_DWORD *)(v7 + 212) = 1;
          DbgPrintRIM("Found TESTINJECTFLAG\n");
          break;
      }
      ++v6;
    }
    while ( v6 < (unsigned int)a5 );
  }
  return (unsigned int)Usages;
}
