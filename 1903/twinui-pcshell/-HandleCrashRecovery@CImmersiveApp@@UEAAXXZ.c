/*
 * XREFs of ?HandleCrashRecovery@CImmersiveApp@@UEAAXXZ @ 0x180145470
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CImmersiveApp::HandleCrashRecovery(CImmersiveApp *this, __int64 a2)
{
  unsigned __int64 i; // rdi
  __int64 v4; // rcx

  for ( i = 0LL; i < *((_QWORD *)this + 45); ++i )
  {
    LOBYTE(a2) = i == 0;
    v4 = *(_QWORD *)(*((_QWORD *)this + 44) + 8 * i);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 176LL))(v4, a2);
  }
  CImmersiveApp::CloakType::RecoverFromPresentationLayer(
    (CImmersiveApp *)((char *)this + 520),
    *((struct IApplicationPresentationLayer **)this + 42));
}
