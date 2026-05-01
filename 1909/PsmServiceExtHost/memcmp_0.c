/*
 * XREFs of memcmp_0 @ 0x180049286
 * Callers:
 *     ?Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z @ 0x180002534 (-Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z.c)
 *     ??R?$equal_to@U_RM_PSM_HOST_INFO@@@utl@@QEBA_NAEBU_RM_PSM_HOST_INFO@@0@Z @ 0x180009AF8 (--R-$equal_to@U_RM_PSM_HOST_INFO@@@utl@@QEBA_NAEBU_RM_PSM_HOST_INFO@@0@Z.c)
 *     ?RmHamFindHostWithFullInfo@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001AACC (-RmHamFindHostWithFullInfo@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_HAM.c)
 *     ?RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@K@Z @ 0x1800257F0 (-RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS.c)
 *     ?HampActTryStart@@YA?AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z @ 0x180028200 (-HampActTryStart@@YA-AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800288A0 (-HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18002A920 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?MemoryLimitNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KK_K@Z @ 0x18002DE70 (-MemoryLimitNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KK_K@Z.c)
 *     ?HampPkgCompareByIdentity@@YAJPEAX0@Z @ 0x180039100 (-HampPkgCompareByIdentity@@YAJPEAX0@Z.c)
 *     ?RmpPsmAppFamilyCompareForHashTable@@YAKPEAU_RTL_HASH_ENTRY@@PEAX@Z @ 0x180039474 (-RmpPsmAppFamilyCompareForHashTable@@YAKPEAU_RTL_HASH_ENTRY@@PEAX@Z.c)
 *     ?HampUserCompareByIdentity@@YAJPEAX0@Z @ 0x18003A880 (-HampUserCompareByIdentity@@YAJPEAX0@Z.c)
 *     ?HampHostDepValidateCustomProperties@@YAKPEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x18007B544 (-HampHostDepValidateCustomProperties@@YAKPEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl memcmp_0(const void *Buf1, const void *Buf2, size_t Size)
{
  return memcmp(Buf1, Buf2, Size);
}
