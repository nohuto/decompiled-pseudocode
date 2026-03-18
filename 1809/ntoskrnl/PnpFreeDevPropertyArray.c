/*
 * XREFs of PnpFreeDevPropertyArray @ 0x140595490
 * Callers:
 *     PiDqActionDataFree @ 0x1405915B4 (PiDqActionDataFree.c)
 *     PiDqQueryEvaluateFilter @ 0x14059552C (PiDqQueryEvaluateFilter.c)
 *     PiSwIrpStartCreateWorker @ 0x1406D6E78 (PiSwIrpStartCreateWorker.c)
 *     PiSwCompleteCreate @ 0x1406D808C (PiSwCompleteCreate.c)
 *     PiSwProcessRemove @ 0x1406D8B6C (PiSwProcessRemove.c)
 *     PiSwDeviceFree @ 0x1406D8C28 (PiSwDeviceFree.c)
 *     PiSwInterfaceFree @ 0x140835D80 (PiSwInterfaceFree.c)
 *     PiSwQueuedCreateInfoFree @ 0x140835EE0 (PiSwQueuedCreateInfoFree.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     PnpFreeDevProperty @ 0x1405954EC (PnpFreeDevProperty.c)
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
