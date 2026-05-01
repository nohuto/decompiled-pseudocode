/*
 * XREFs of ?HampHostStartProcessPresenceChange@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000D104
 * Callers:
 *     ?HampHostQueryHostGenerationForProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAXPEA_K@Z @ 0x18000978C (-HampHostQueryHostGenerationForProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAXPEA_K@Z.c)
 *     ?HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KKPEA_K@Z @ 0x18000CE6C (-HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KKPEA_K@Z.c)
 *     ?HampHostCheckNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000EBC8 (-HampHostCheckNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18000FDD0 (-HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     CempLockSleepConditionVariableExclusive @ 0x18002FB60 (CempLockSleepConditionVariableExclusive.c)
 */

void __fastcall HampHostStartProcessPresenceChange(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  __int64 i; // rax

  for ( i = *((_QWORD *)a1 + 79); (i & 0x1000000000000LL) != 0; i = *((_QWORD *)a1 + 79) )
    CempLockSleepConditionVariableExclusive(a1, (char *)a1 + 656, 0LL);
  *((_QWORD *)a1 + 79) = i | 0x1000000000000LL;
}
