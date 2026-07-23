/*
 * XREFs of KseShimDatabaseBootInitialize @ 0x1409AFFF4
 * Callers:
 *     KseInitialize @ 0x1409B0930 (KseInitialize.c)
 * Callees:
 *     KsepPoolAllocatePaged @ 0x1400F4D5C (KsepPoolAllocatePaged.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     KsepDebugPrint @ 0x14029FE34 (KsepDebugPrint.c)
 *     KsepLogError @ 0x1402A00D4 (KsepLogError.c)
 *     RtlAssert @ 0x1402EFA50 (RtlAssert.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     SdbInitDatabaseInMemory @ 0x1405A31DC (SdbInitDatabaseInMemory.c)
 */

__int64 __fastcall KseShimDatabaseBootInitialize(void *Src, size_t Size)
{
  unsigned int v2; // ebx
  size_t v3; // rsi
  PVOID Paged; // rax
  __int64 v6; // rdi
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax

  v2 = 0;
  v3 = (unsigned int)Size;
  if ( KsepShimDbDuringBoot )
  {
    v8 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v8 + 1] = -1073740768;
    KsepHistoryErrors[2 * v8] = 589945;
    if ( (KsepDebugFlag & 4) != 0 )
      RtlAssert("KsepShimDbDuringBoot == FALSE", "minkernel\\ntos\\kshim\\ksesdb.c", 0x79u, 0LL);
  }
  if ( KsepShimDbHandle )
  {
    v9 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v9 + 1] = -1073740768;
    KsepHistoryErrors[2 * v9] = 589946;
    if ( (KsepDebugFlag & 4) != 0 )
      RtlAssert("KsepShimDbHandle == NULL", "minkernel\\ntos\\kshim\\ksesdb.c", 0x7Au, 0LL);
  }
  if ( KsepShimDbAddress )
  {
    v10 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v10 + 1] = -1073740768;
    KsepHistoryErrors[2 * v10] = 589947;
    if ( (KsepDebugFlag & 4) != 0 )
      RtlAssert("KsepShimDbAddress == NULL", "minkernel\\ntos\\kshim\\ksesdb.c", 0x7Bu, 0LL);
  }
  KsepShimDbLock = 0LL;
  KsepShimDbDuringBoot = 1;
  KsepShimDbHandle = 0LL;
  KsepShimDbAddress = 0LL;
  if ( !Src || !(_DWORD)v3 )
    return (unsigned int)-1073741823;
  Paged = KsepPoolAllocatePaged(v3);
  KsepShimDbAddress = Paged;
  v6 = (__int64)Paged;
  if ( Paged )
  {
    memmove(Paged, Src, v3);
    KsepShimDbHandle = (PVOID)SdbInitDatabaseInMemory(v6, v3);
    if ( KsepShimDbHandle )
    {
      ++KsepShimDbRefCount;
      return v2;
    }
    v12 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v12 + 1] = -1073741823;
    KsepHistoryErrors[2 * v12] = 589999;
    if ( (KsepDebugFlag & 2) != 0 )
      KsepDebugPrint(1LL, "KSE: SdbInitDatabaseInMemory failed during boot!\n");
    KsepLogError(1, "KSE: SdbInitDatabaseInMemory failed during boot!\n");
    if ( KsepShimDbAddress )
    {
      ExFreePoolWithTag(KsepShimDbAddress, 0x6145534Bu);
      _InterlockedAdd(&dword_14041BC24, 1u);
    }
    KsepShimDbAddress = 0LL;
    return (unsigned int)-1073741823;
  }
  v11 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
  KsepHistoryErrors[2 * v11 + 1] = -1073741823;
  KsepHistoryErrors[2 * v11] = 589982;
  if ( (KsepDebugFlag & 2) != 0 )
    KsepDebugPrint(0LL, "KSE: Failed to allocate memory for shim database during boot!\n");
  KsepLogError(0, "KSE: Failed to allocate memory for shim database during boot!\n");
  return (unsigned int)-1073741670;
}
