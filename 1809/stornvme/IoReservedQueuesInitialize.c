/*
 * XREFs of IoReservedQueuesInitialize @ 0x1C000CDB0
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C000DC08 (NVMeControllerInitPart2.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C00051D0 (NVMeZeroMemory.c)
 */

char __fastcall IoReservedQueuesInitialize(__int64 a1)
{
  unsigned __int16 v1; // ax
  void **v3; // rbx
  void **v4; // rsi
  __int64 v5; // r9
  void *v6; // r8

  v1 = *(_WORD *)(a1 + 798);
  if ( v1 )
  {
    v3 = (void **)(a1 + 784);
    StorPortExtendedFunction(0LL, a1, 32 * (unsigned int)v1, 1701672526LL);
    v4 = (void **)(a1 + 776);
    StorPortExtendedFunction(0LL, a1, 32 * (unsigned int)*(unsigned __int16 *)(a1 + 798), 1701672526LL);
    v6 = *v3;
    if ( *v3 )
    {
      if ( *v4 )
      {
        NVMeZeroMemory(*v3, 32 * *(unsigned __int16 *)(a1 + 798));
        NVMeZeroMemory(*v4, 32 * *(unsigned __int16 *)(a1 + 798));
        return 1;
      }
      if ( v6 )
        StorPortExtendedFunction(1LL, a1, v6, v5);
    }
    if ( *v4 )
      StorPortExtendedFunction(1LL, a1, *v4, v5);
  }
  return 0;
}
