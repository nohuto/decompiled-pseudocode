/*
 * XREFs of InbvDriverInitialize @ 0x1409D7F70
 * Callers:
 *     KiInitializeBootStructures @ 0x140570E10 (KiInitializeBootStructures.c)
 *     Phase1InitializationDiscard @ 0x1409B4E10 (Phase1InitializationDiscard.c)
 *     InitBootProcessor @ 0x1409B5EDC (InitBootProcessor.c)
 * Callees:
 *     InbvSetFunction @ 0x14018E524 (InbvSetFunction.c)
 *     InbvDetermineFunction @ 0x14018E594 (InbvDetermineFunction.c)
 *     _strupr @ 0x140194D10 (_strupr.c)
 *     strstr @ 0x140195000 (strstr.c)
 *     BvgaDriverInitialize @ 0x1409D8020 (BvgaDriverInitialize.c)
 *     BgkInitialize @ 0x1409FC8E0 (BgkInitialize.c)
 */

char __fastcall InbvDriverInitialize(unsigned int a1, __int64 a2, unsigned int a3)
{
  char v6; // bl
  int v7; // ecx
  char *v8; // rcx
  char *v9; // rax

  v6 = 1;
  if ( (unsigned int)InbvDetermineFunction(a2) != 2 )
  {
    if ( (int)BgkInitialize(a2, a1) < 0 )
    {
      v6 = 0;
      v7 = 3;
      BvgaDisplayState = 0;
    }
    else
    {
      BvgaDisplayState = 2;
      v7 = 4;
    }
    InbvSetFunction(v7);
  }
  v8 = *(char **)(a2 + 216);
  if ( !v8 )
    return BvgaDriverInitialize(a1, a2, a3);
  v9 = strupr(v8);
  if ( !strstr(v9, "NOVGA") )
    return BvgaDriverInitialize(a1, a2, a3);
  return v6;
}
