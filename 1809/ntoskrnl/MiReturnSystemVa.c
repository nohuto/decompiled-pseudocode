/*
 * XREFs of MiReturnSystemVa @ 0x14002840C
 * Callers:
 *     MiReleaseSystemCacheView @ 0x1400795A0 (MiReleaseSystemCacheView.c)
 *     MmFreePoolMemory @ 0x14007BD48 (MmFreePoolMemory.c)
 *     MiObtainSystemCacheView @ 0x1400AD160 (MiObtainSystemCacheView.c)
 *     MiExpandPtes @ 0x1400F6494 (MiExpandPtes.c)
 *     MiReturnSystemPtes @ 0x140100CB8 (MiReturnSystemPtes.c)
 *     MiExpandNonPagedPool @ 0x1401627E8 (MiExpandNonPagedPool.c)
 *     MiExpandPagedPool @ 0x1401642EC (MiExpandPagedPool.c)
 *     MiDeleteBootRange @ 0x140181240 (MiDeleteBootRange.c)
 *     MiGetPageTablesForLargeMap @ 0x140183864 (MiGetPageTablesForLargeMap.c)
 *     MiExpandSpecialPool @ 0x1402AC64C (MiExpandSpecialPool.c)
 *     MiRemoveSpecialPoolRange @ 0x1402ACAC0 (MiRemoveSpecialPoolRange.c)
 *     MiReleaseLargePteMappings @ 0x1402C3B8C (MiReleaseLargePteMappings.c)
 *     MiUnmapLargePages @ 0x1402C5D94 (MiUnmapLargePages.c)
 *     MiReserveDriverPtes @ 0x140684A6C (MiReserveDriverPtes.c)
 *     MiReleaseDriverPtes @ 0x14070F2DC (MiReleaseDriverPtes.c)
 *     MiFreeBootDriverPage @ 0x1409B93FC (MiFreeBootDriverPage.c)
 *     MiMapBBTMemory @ 0x1409BB008 (MiMapBBTMemory.c)
 * Callees:
 *     MiDeleteSystemPageTables @ 0x140027FD4 (MiDeleteSystemPageTables.c)
 *     MiMakeSystemRangeAvailable @ 0x1400280B0 (MiMakeSystemRangeAvailable.c)
 *     MiGetAnyMultiplexedVm @ 0x140028884 (MiGetAnyMultiplexedVm.c)
 *     MiGetSessionVm @ 0x1400E94DC (MiGetSessionVm.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

__int64 __fastcall MiReturnSystemVa(unsigned __int64 a1, unsigned __int64 a2, signed int a3)
{
  unsigned __int64 v4; // rdi
  __int64 result; // rax
  unsigned __int64 v6; // rdx
  ULONG_PTR v7; // rdi
  ULONG_PTR v8; // rsi
  __int64 AnyMultiplexedVm; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // r8d
  unsigned int v13; // r9d
  __int64 v14; // r10
  __int64 v15; // rcx

  v4 = (((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x97FFFFFF001LL) & 0xFFFFFFFFFFFFF000uLL;
  result = 0xFFFFF68000000000uLL;
  v6 = (((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 0xFFFFFFFFFFFFF000uLL;
  if ( v4 < v6 )
  {
    v7 = (__int64)(v4 << 25) >> 16;
    v8 = ((__int64)(v6 << 25) >> 16) - v7;
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(5LL);
    if ( a3 == v12 )
    {
      AnyMultiplexedVm = MiGetSessionVm(v11);
      goto LABEL_4;
    }
    if ( a3 <= 5 )
    {
LABEL_4:
      MiDeleteSystemPageTables(AnyMultiplexedVm, a3, v7, v10 - 1, v12, v14);
      return MiMakeSystemRangeAvailable(v7, v8, a3);
    }
    if ( a3 <= 7 )
    {
      v15 = v13;
      goto LABEL_9;
    }
    if ( a3 != 9 )
    {
      if ( a3 == 12 )
      {
        v15 = v12;
        goto LABEL_9;
      }
      if ( a3 == 8 )
      {
        v15 = 0LL;
        goto LABEL_9;
      }
      if ( a3 != 14 )
      {
        if ( a3 != 15 )
          goto LABEL_4;
        v15 = 4LL;
        goto LABEL_9;
      }
    }
    v15 = 3LL;
LABEL_9:
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(v15);
    goto LABEL_4;
  }
  return result;
}
