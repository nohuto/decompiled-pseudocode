/*
 * XREFs of IoReservedQueuesInitialize @ 0x1C000A314
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C000B228 (NVMeControllerInitPart2.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C0001FDC (NVMeZeroMemory.c)
 */

char __fastcall IoReservedQueuesInitialize(__int64 a1)
{
  unsigned __int16 v1; // ax
  void **v3; // rbx
  void **v4; // rsi
  void *v5; // r8

  v1 = *(_WORD *)(a1 + 806);
  if ( v1 )
  {
    v3 = (void **)(a1 + 792);
    StorPortExtendedFunction(0LL, a1, 32 * (unsigned int)v1);
    v4 = (void **)(a1 + 784);
    StorPortExtendedFunction(0LL, a1, 32 * (unsigned int)*(unsigned __int16 *)(a1 + 806));
    v5 = *v3;
    if ( *v3 )
    {
      if ( *v4 )
      {
        NVMeZeroMemory(*v3, 32 * *(unsigned __int16 *)(a1 + 806));
        NVMeZeroMemory(*v4, 32 * *(unsigned __int16 *)(a1 + 806));
        return 1;
      }
      if ( v5 )
        StorPortExtendedFunction(1LL, a1, v5);
    }
    if ( *v4 )
      StorPortExtendedFunction(1LL, a1, *v4);
  }
  return 0;
}
