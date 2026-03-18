/*
 * XREFs of PnpCopyResourceList @ 0x14083AA24
 * Callers:
 *     PiUpdateDeviceResourceLists @ 0x140841658 (PiUpdateDeviceResourceLists.c)
 * Callees:
 *     memmove @ 0x1401D1440 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     PnpDetermineResourceListSize @ 0x1406FBAAC (PnpDetermineResourceListSize.c)
 */

PVOID __fastcall PnpCopyResourceList(_DWORD *Src)
{
  unsigned int v2; // eax
  unsigned int v3; // esi
  PVOID PoolWithTag; // rax
  PVOID v5; // rbx

  v2 = PnpDetermineResourceListSize(Src);
  if ( !v2 )
    return 0LL;
  v3 = v2;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v2, 0x75737050u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  memmove(PoolWithTag, Src, v3);
  return v5;
}
