/*
 * XREFs of PnpFreeDevPropertyArray @ 0x140596490
 * Callers:
 *     PiDqActionDataFree @ 0x1405925B4 (PiDqActionDataFree.c)
 *     PiDqQueryEvaluateFilter @ 0x14059652C (PiDqQueryEvaluateFilter.c)
 *     PiSwIrpStartCreateWorker @ 0x1406D80F8 (PiSwIrpStartCreateWorker.c)
 *     PiSwCompleteCreate @ 0x1406D930C (PiSwCompleteCreate.c)
 *     PiSwProcessRemove @ 0x1406D9DEC (PiSwProcessRemove.c)
 *     PiSwDeviceFree @ 0x1406D9EA8 (PiSwDeviceFree.c)
 *     PiSwInterfaceFree @ 0x140836FC0 (PiSwInterfaceFree.c)
 *     PiSwQueuedCreateInfoFree @ 0x140837120 (PiSwQueuedCreateInfoFree.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PnpFreeDevProperty @ 0x1405964EC (PnpFreeDevProperty.c)
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
