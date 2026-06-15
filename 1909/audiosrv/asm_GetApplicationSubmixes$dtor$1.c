/*
 * XREFs of asm_GetApplicationSubmixes$dtor$1 @ 0x1800FED5C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall asm_GetApplicationSubmixes_dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection((struct _RTL_CRITICAL_SECTION **)(a2 + 48));
}
