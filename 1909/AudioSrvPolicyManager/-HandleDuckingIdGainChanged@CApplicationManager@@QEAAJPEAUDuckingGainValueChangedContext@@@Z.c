/*
 * XREFs of ?HandleDuckingIdGainChanged@CApplicationManager@@QEAAJPEAUDuckingGainValueChangedContext@@@Z @ 0x18001D750
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x18001BAE4 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800359C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CApplicationManager::HandleDuckingIdGainChanged(
        CApplicationManager *this,
        struct DuckingGainValueChangedContext *a2)
{
  return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)g_StreamClassPolicyManager + 40LL))(
           g_StreamClassPolicyManager,
           *((unsigned int *)a2 + 2),
           *(_QWORD *)a2);
}
