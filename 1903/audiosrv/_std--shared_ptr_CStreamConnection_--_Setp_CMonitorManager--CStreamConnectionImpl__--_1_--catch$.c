/*
 * XREFs of _std::shared_ptr_CStreamConnection_::_Setp_CMonitorManager::CStreamConnectionImpl__::_1_::catch$1 @ 0x18010733D
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18006B8EB (_CxxThrowException_0.c)
 *     ??_GCStreamConnectionImpl@CMonitorManager@@QEAAPEAXI@Z @ 0x180107CB4 (--_GCStreamConnectionImpl@CMonitorManager@@QEAAPEAXI@Z.c)
 */

void __fastcall __noreturn std::shared_ptr_CStreamConnection_::_Setp_CMonitorManager::CStreamConnectionImpl__::_1_::catch_1(
        __int64 a1,
        __int64 a2)
{
  CMonitorManager::CStreamConnectionImpl *v2; // rcx

  v2 = *(CMonitorManager::CStreamConnectionImpl **)(a2 + 72);
  if ( v2 )
    CMonitorManager::CStreamConnectionImpl::`scalar deleting destructor'(v2, a2);
  throw;
}
