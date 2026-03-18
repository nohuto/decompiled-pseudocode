/*
 * XREFs of KiInitializeDpcList @ 0x14013D650
 * Callers:
 *     KiInitializeProcessor @ 0x14059FC60 (KiInitializeProcessor.c)
 *     KiInitPrcb @ 0x1405A05EC (KiInitPrcb.c)
 * Callees:
 *     <none>
 */

void __fastcall KiInitializeDpcList(_QWORD *a1)
{
  *a1 = 0LL;
  a1[1] = a1;
}
