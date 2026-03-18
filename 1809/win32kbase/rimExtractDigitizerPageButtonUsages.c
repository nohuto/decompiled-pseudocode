/*
 * XREFs of rimExtractDigitizerPageButtonUsages @ 0x1C0129BD8
 * Callers:
 *     rimExtractPointerDeviceUsages @ 0x1C012A314 (rimExtractPointerDeviceUsages.c)
 * Callees:
 *     DbgPrintRIM @ 0x1C00517C4 (DbgPrintRIM.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     rimHidP_GetUsages @ 0x1C011C970 (rimHidP_GetUsages.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimExtractDigitizerPageButtonUsages(
        __int64 a1,
        struct _HIDP_PREPARSED_DATA *a2,
        char *a3,
        unsigned int a4,
        __int64 a5)
{
  void *v5; // r15
  unsigned int v6; // edi
  __int64 v7; // rbx
  unsigned int v9; // eax
  int Usages; // esi
  int v14; // eax

  v5 = *(void **)(a1 + 760);
  v6 = 0;
  v7 = a5;
  v9 = *(_DWORD *)(a1 + 976);
  LODWORD(a5) = v9;
  if ( !v5 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    v9 = a5;
  }
  memset(v5, 0, 2LL * v9);
  Usages = rimHidP_GetUsages(
             HidP_Input,
             0xDu,
             *(_WORD *)(v7 + 58),
             (unsigned __int16 *)v5,
             (unsigned int *)&a5,
             a2,
             a3,
             a4);
  if ( Usages >= 0 && (_DWORD)a5 )
  {
    do
    {
      if ( v6 >= 6 )
        return (unsigned int)Usages;
      switch ( *((_WORD *)v5 + v6) )
      {
        case 0x32:
          *(_DWORD *)(v7 + 76) |= 0x1000002u;
          break;
        case 0x3C:
          *(_DWORD *)(v7 + 160) |= 2u;
          break;
        case 0x42:
          goto LABEL_20;
        case 0x44:
          *(_DWORD *)(v7 + 160) |= 1u;
          break;
        case 0x45:
          *(_DWORD *)(v7 + 160) |= 6u;
LABEL_20:
          v14 = *(_DWORD *)(v7 + 76) | 0x1000006;
          *(_DWORD *)(v7 + 76) = v14;
          if ( *(_DWORD *)(a1 + 24) != 7 )
            *(_DWORD *)(v7 + 76) = v14 | 0x10;
          break;
        case 0x47:
          *(_DWORD *)(v7 + 76) |= 0x4000u;
          break;
        case 0x64:
          *(_DWORD *)(v7 + 76) |= 0x1000000u;
          break;
        case 0xFE:
          *(_DWORD *)(v7 + 208) = 1;
          DbgPrintRIM("Found TESTSYNCFLAG\n");
          break;
        case 0xFF:
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
