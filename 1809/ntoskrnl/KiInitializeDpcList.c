/*
 * XREFs of KiInitializeDpcList @ 0x14013BA2C
 * Callers:
 *     KiInitPrcb @ 0x140570414 (KiInitPrcb.c)
 *     KiInitializeProcessor @ 0x14057302C (KiInitializeProcessor.c)
 * Callees:
 *     <none>
 */

void __fastcall KiInitializeDpcList(_QWORD *a1)
{
  *a1 = 0LL;
  a1[1] = a1;
}
