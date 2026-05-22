/*
 * XREFs of ?OnRawGameControllerRemoved@WGIRawInputProvider@@AEAAJPEAUIInspectable@@PEAUIRawGameController@Input@Gaming@Windows@@@Z @ 0x1800A7890
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalUnlock@SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18002A874 (-InternalUnlock@SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?erase@?$vector@V?$ComPtr@VWGIController@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VWGIController@@@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@VWGIController@@@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@VWGIController@@@WRL@Microsoft@@@std@@@std@@@2@@Z @ 0x1800A8248 (-erase@-$vector@V-$ComPtr@VWGIController@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VWGIController@.c)
 *     ?NotifyRemovedAndStop@WGIController@@QEAAJXZ @ 0x1800AAF68 (-NotifyRemovedAndStop@WGIController@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall WGIRawInputProvider::OnRawGameControllerRemoved(
        struct _RTL_CRITICAL_SECTION *this,
        struct IInspectable *a2,
        struct Windows::Gaming::Input::IRawGameController *a3)
{
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  HANDLE *p_OwningThread; // rsi
  WGIController **i; // rbx
  struct _RTL_CRITICAL_SECTION *v8; // rdi
  _BYTE v10[32]; // [rsp+28h] [rbp-20h] BYREF
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+50h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+68h] [rbp+20h] BYREF

  v5 = this + 3;
  EnterCriticalSection(this + 3);
  v12 = v5;
  p_OwningThread = &this[2].OwningThread;
  for ( i = (WGIController **)this[2].OwningThread; i != this[2].LockSemaphore; ++i )
  {
    if ( *((struct Windows::Gaming::Input::IRawGameController **)*i + 9) == a3 )
    {
      v8 = this + 9;
      EnterCriticalSection(v8);
      v11 = v8;
      Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::InternalUnlock(&v11);
      WGIController::NotifyRemovedAndStop(*i);
      std::vector<Microsoft::WRL::ComPtr<WGIController>>::erase(p_OwningThread, v10, i);
      Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::InternalUnlock(&v11);
      break;
    }
  }
  Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::InternalUnlock(&v12);
  return 0LL;
}
