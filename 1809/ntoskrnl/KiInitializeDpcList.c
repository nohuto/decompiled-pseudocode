/*
 * XREFs of KiInitializeDpcList @ 0x14013BB4C
 * Callers:
 *     KiInitPrcb @ 0x140571414 (KiInitPrcb.c)
 *     KiInitializeProcessor @ 0x14057402C (KiInitializeProcessor.c)
 * Callees:
 *     <none>
 */

void __fastcall KiInitializeDpcList(_QWORD *a1)
{
  *a1 = 0LL;
  a1[1] = a1;
}
