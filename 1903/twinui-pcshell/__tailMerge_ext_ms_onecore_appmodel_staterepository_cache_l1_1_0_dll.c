/*
 * XREFs of __tailMerge_ext_ms_onecore_appmodel_staterepository_cache_l1_1_0_dll @ 0x18008B63E
 * Callers:
 *     __imp_load_SRCacheManager_Open @ 0x18008B6BD (__imp_load_SRCacheManager_Open.c)
 *     __imp_load_SRCacheContext_GetField_UInt32 @ 0x18008B6CF (__imp_load_SRCacheContext_GetField_UInt32.c)
 *     __imp_load_SRCache_Free @ 0x18008B6E1 (__imp_load_SRCache_Free.c)
 *     __imp_load_SRCacheContext_Close @ 0x18008B6F3 (__imp_load_SRCacheContext_Close.c)
 *     __imp_load_SRCacheManager_Close @ 0x18008B705 (__imp_load_SRCacheManager_Close.c)
 *     __imp_load_SRCache_AllocStringBuffer @ 0x18008B717 (__imp_load_SRCache_AllocStringBuffer.c)
 *     __imp_load_SRCacheContext_Open @ 0x18008B729 (__imp_load_SRCacheContext_Open.c)
 *     __imp_load_SRCacheContext_EnumerateData @ 0x18008B73B (__imp_load_SRCacheContext_EnumerateData.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180083200 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_ext_ms_onecore_appmodel_staterepository_cache_l1_1_0_dll(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_ext_ms_onecore_appmodel_staterepository_cache_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
