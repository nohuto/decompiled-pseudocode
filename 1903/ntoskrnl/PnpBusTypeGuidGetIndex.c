/*
 * XREFs of PnpBusTypeGuidGetIndex @ 0x14071B0EC
 * Callers:
 *     PnpQueryBusInformation @ 0x14071B014 (PnpQueryBusInformation.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14003E460 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14003F810 (KeReleaseGuardedMutex.c)
 *     RtlCompareMemory @ 0x1401CC1F0 (RtlCompareMemory.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpBusTypeGuidGetIndex(__int128 *Source1)
{
  unsigned int v2; // ebx
  char *v3; // rdx
  __int128 v5; // xmm0
  __int64 v6; // r8
  PVOID PoolWithTag; // rax
  void *v8; // rsi
  PVOID v9; // rdi

  ExAcquireFastMutex(&PnpBusTypeGuidLock);
  v2 = 0;
  if ( !PnpBusTypeGuidCount )
    goto LABEL_7;
  do
  {
    v3 = (char *)PnpBusTypeGuidArray + 16 * v2;
    if ( Source1 == (__int128 *)v3 )
      break;
    if ( RtlCompareMemory(Source1, v3, 0x10uLL) == 16 )
      break;
    ++v2;
  }
  while ( v2 < PnpBusTypeGuidCount );
  if ( v2 == PnpBusTypeGuidCount )
  {
LABEL_7:
    if ( v2 == PnpBusTypeGuidCountMax )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 16LL * (v2 + 1), 0x75737050u);
      v8 = PoolWithTag;
      if ( PoolWithTag )
      {
        v9 = PnpBusTypeGuidArray;
        memmove(PoolWithTag, PnpBusTypeGuidArray, 16LL * (unsigned int)PnpBusTypeGuidCount);
        ++PnpBusTypeGuidCountMax;
        if ( v9 )
          ExFreePoolWithTag(v9, 0);
        PnpBusTypeGuidArray = v8;
      }
      else
      {
        v2 = -1;
      }
    }
    if ( v2 != -1 )
    {
      v5 = *Source1;
      v6 = 2LL * (unsigned int)PnpBusTypeGuidCount++;
      *(_OWORD *)((char *)PnpBusTypeGuidArray + 8 * v6) = v5;
    }
  }
  KeReleaseGuardedMutex(&PnpBusTypeGuidLock);
  return (unsigned __int16)v2;
}
