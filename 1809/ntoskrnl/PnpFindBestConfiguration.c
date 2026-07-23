/*
 * XREFs of PnpFindBestConfiguration @ 0x14072F37C
 * Callers:
 *     PnpAllocateResources @ 0x1406FC05C (PnpAllocateResources.c)
 *     PnpReallocateResources @ 0x14083C5B4 (PnpReallocateResources.c)
 *     PnpRestoreResourcesInternal @ 0x14083C784 (PnpRestoreResourcesInternal.c)
 *     PnpRebalance @ 0x140840B08 (PnpRebalance.c)
 * Callees:
 *     PnpFindBestConfigurationWorker @ 0x14072F3D4 (PnpFindBestConfigurationWorker.c)
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
