/*
 * XREFs of PnpFindBestConfiguration @ 0x140751F78
 * Callers:
 *     PnpAllocateResources @ 0x140721A50 (PnpAllocateResources.c)
 *     PnpReallocateResources @ 0x140876480 (PnpReallocateResources.c)
 *     PnpRestoreResourcesInternal @ 0x140876660 (PnpRestoreResourcesInternal.c)
 *     PnpRebalance @ 0x14087B2EC (PnpRebalance.c)
 * Callees:
 *     PnpFindBestConfigurationWorker @ 0x140751FD0 (PnpFindBestConfigurationWorker.c)
 */

__int64 __fastcall PnpFindBestConfiguration(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int i; // ebx
  __int64 result; // rax

  for ( i = 0; i < 2; ++i )
  {
    result = PnpFindBestConfigurationWorker(a1, a2, a3, i);
    if ( (int)result >= 0 )
      break;
  }
  return result;
}
