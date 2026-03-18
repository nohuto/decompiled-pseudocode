/*
 * XREFs of NVMeHwInitialize @ 0x1C000B1C0
 * Callers:
 *     <none>
 * Callees:
 *     NVMeControllerInitPart3 @ 0x1C0006510 (NVMeControllerInitPart3.c)
 *     NVMeControllerInitPart2 @ 0x1C000DC08 (NVMeControllerInitPart2.c)
 */

char __fastcall NVMeHwInitialize(__int64 a1)
{
  char result; // al
  int v3; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_BYTE *)(a1 + 16) )
  {
    result = NVMeControllerInitPart2(a1);
    if ( result )
      return NVMeControllerInitPart3(a1, 1);
  }
  else
  {
    v3 = 0;
    StorPortNotification(4096LL, a1, NVMeHwPassiveInitialize, &v3);
    return v3;
  }
  return result;
}
