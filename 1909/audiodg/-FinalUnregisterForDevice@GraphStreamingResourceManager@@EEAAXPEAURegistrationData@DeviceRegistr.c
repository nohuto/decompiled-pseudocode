/*
 * XREFs of ?FinalUnregisterForDevice@GraphStreamingResourceManager@@EEAAXPEAURegistrationData@DeviceRegistrations@1@@Z @ 0x14002C9B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 */

void __fastcall GraphStreamingResourceManager::FinalUnregisterForDevice(
        GraphStreamingResourceManager *this,
        struct GraphStreamingResourceManager::DeviceRegistrations::RegistrationData *a2)
{
  if ( *((_QWORD *)a2 + 1) )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 35) + 72LL))(*((_QWORD *)this + 35));
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)a2 + 16LL))(*(_QWORD *)a2);
  *(_QWORD *)a2 = 0LL;
  *((_QWORD *)a2 + 1) = 0LL;
}
