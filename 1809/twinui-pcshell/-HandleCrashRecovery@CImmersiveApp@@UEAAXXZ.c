/*
 * XREFs of ?HandleCrashRecovery@CImmersiveApp@@UEAAXXZ @ 0x18011CB20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CImmersiveApp::HandleCrashRecovery(CImmersiveApp *this, __int64 a2)
{
  unsigned __int64 i; // rdi
  __int64 v4; // rcx

  for ( i = 0LL; i < *((_QWORD *)this + 41); ++i )
  {
    LOBYTE(a2) = i == 0;
    v4 = *(_QWORD *)(*((_QWORD *)this + 40) + 8 * i);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 176LL))(v4, a2);
  }
  CImmersiveApp::CloakType::RecoverFromPresentationLayer(
    (CImmersiveApp *)((char *)this + 488),
    *((struct IApplicationPresentationLayer **)this + 38));
}
