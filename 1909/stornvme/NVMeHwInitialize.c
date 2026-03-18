/*
 * XREFs of NVMeHwInitialize @ 0x1C0008470
 * Callers:
 *     <none>
 * Callees:
 *     NVMeControllerInitPart2 @ 0x1C000B078 (NVMeControllerInitPart2.c)
 */

char __fastcall NVMeHwInitialize(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 16) )
    return NVMeControllerInitPart2(a1);
  StorPortNotification(4096LL, a1, NVMeHwPassiveInitialize);
  return 0;
}
