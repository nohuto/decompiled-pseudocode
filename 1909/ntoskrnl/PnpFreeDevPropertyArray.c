/*
 * XREFs of PnpFreeDevPropertyArray @ 0x1405BB33C
 * Callers:
 *     PiDqActionDataFree @ 0x1405B768C (PiDqActionDataFree.c)
 *     PiDqQueryEvaluateFilter @ 0x1405BB3D8 (PiDqQueryEvaluateFilter.c)
 *     PiSwIrpStartCreateWorker @ 0x140720DAC (PiSwIrpStartCreateWorker.c)
 *     PiSwCompleteCreate @ 0x1407222B8 (PiSwCompleteCreate.c)
 *     PiSwProcessRemove @ 0x140782BA4 (PiSwProcessRemove.c)
 *     PiSwDeviceFree @ 0x140782D8C (PiSwDeviceFree.c)
 *     PiSwInterfaceFree @ 0x14086FE3C (PiSwInterfaceFree.c)
 *     PiSwQueuedCreateInfoFree @ 0x14086FF9C (PiSwQueuedCreateInfoFree.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PnpFreeDevProperty @ 0x1405BB398 (PnpFreeDevProperty.c)
 */

void __fastcall PnpFreeDevPropertyArray(unsigned int a1, char *a2, ULONG a3)
{
  char *v5; // rbx
  __int64 v6; // rbp

  if ( a1 )
  {
    v5 = a2;
    v6 = a1;
    do
    {
      PnpFreeDevProperty(v5, a3);
      v5 += 48;
      --v6;
    }
    while ( v6 );
  }
  ExFreePoolWithTag(a2, a3);
}
