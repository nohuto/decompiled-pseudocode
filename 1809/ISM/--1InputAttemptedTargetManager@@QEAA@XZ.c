/*
 * XREFs of ??1InputAttemptedTargetManager@@QEAA@XZ @ 0x18002A168
 * Callers:
 *     _InputDeliveryServer::InputDeliveryServer_::_1_::dtor$2 @ 0x18012EFF6 (_InputDeliveryServer--InputDeliveryServer_--_1_--dtor$2.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall InputAttemptedTargetManager::~InputAttemptedTargetManager(InputAttemptedTargetManager *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 3);
  if ( v2 )
  {
    *((_QWORD *)this + 3) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  std::vector<Microsoft::WRL::ComPtr<InputSiteElementProxy>>::~vector<Microsoft::WRL::ComPtr<InputSiteElementProxy>>((__int64)this);
}
