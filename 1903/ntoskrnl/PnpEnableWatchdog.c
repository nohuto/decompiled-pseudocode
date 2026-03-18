/*
 * XREFs of PnpEnableWatchdog @ 0x14009AF5C
 * Callers:
 *     PnpDeviceEventWorker @ 0x14066C710 (PnpDeviceEventWorker.c)
 *     PnpDeviceCompletionRequestCreate @ 0x1407025DC (PnpDeviceCompletionRequestCreate.c)
 *     PnpDelayedRemoveWorker @ 0x14072F630 (PnpDelayedRemoveWorker.c)
 * Callees:
 *     PnpInitWatchdog @ 0x14009AFE0 (PnpInitWatchdog.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall PnpEnableWatchdog(_QWORD *a1, unsigned int a2)
{
  PVOID result; // rax
  __int64 v5; // rdx
  PVOID v6; // rbx

  result = ExAllocatePoolWithTag(NonPagedPoolNx, 0x110uLL, 0x57647050u);
  v6 = result;
  if ( result )
    result = memset(result, 0, 0x110uLL);
  switch ( a2 )
  {
    case 1u:
      a1[13] = v6;
      break;
    case 2u:
      a1[8] = v6;
      break;
    case 3u:
      a1[3] = v6;
      break;
  }
  if ( v6 )
    return (PVOID)PnpInitWatchdog(v6, v5, a1, a2);
  return result;
}
