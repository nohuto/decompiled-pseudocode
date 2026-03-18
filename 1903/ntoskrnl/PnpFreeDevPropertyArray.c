/*
 * XREFs of PnpFreeDevPropertyArray @ 0x1405BAF5C
 * Callers:
 *     PiDqActionDataFree @ 0x1405B72AC (PiDqActionDataFree.c)
 *     PiDqQueryEvaluateFilter @ 0x1405BAFF8 (PiDqQueryEvaluateFilter.c)
 *     PiSwIrpStartCreateWorker @ 0x14071EF0C (PiSwIrpStartCreateWorker.c)
 *     PiSwCompleteCreate @ 0x140720418 (PiSwCompleteCreate.c)
 *     PiSwProcessRemove @ 0x14078083C (PiSwProcessRemove.c)
 *     PiSwDeviceFree @ 0x140780A24 (PiSwDeviceFree.c)
 *     PiSwInterfaceFree @ 0x14087073C (PiSwInterfaceFree.c)
 *     PiSwQueuedCreateInfoFree @ 0x14087089C (PiSwQueuedCreateInfoFree.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PnpFreeDevProperty @ 0x1405BAFB8 (PnpFreeDevProperty.c)
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
