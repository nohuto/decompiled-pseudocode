/*
 * XREFs of ?RmpGameModeAllocateState@@YAJPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180044324
 * Callers:
 *     ?RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180043494 (-RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     ?RmpCpuSetManagerCreateClientContext@@YAJPEAU_RM_CPU_SET_MANAGER@@KPEAPEAU_RM_CPU_SET_CLIENT_CONTEXT@@@Z @ 0x180044378 (-RmpCpuSetManagerCreateClientContext@@YAJPEAU_RM_CPU_SET_MANAGER@@KPEAPEAU_RM_CPU_SET_CLIENT_CON.c)
 */

__int64 __fastcall RmpGameModeAllocateState(struct _RM_CPU_SET_CLIENT_CONTEXT **a1)
{
  DWORD CurrentProcessId; // eax
  __int64 result; // rax

  CurrentProcessId = GetCurrentProcessId();
  result = RmpCpuSetManagerCreateClientContext(
             (struct _RM_CPU_SET_CLIENT_CONTEXT *)((char *)*a1 + 680),
             CurrentProcessId,
             a1 + 5);
  if ( (int)result >= 0 )
    return TpAllocWork(a1 + 8, RmpGameModePolicyWorker, a1, 0LL);
  return result;
}
