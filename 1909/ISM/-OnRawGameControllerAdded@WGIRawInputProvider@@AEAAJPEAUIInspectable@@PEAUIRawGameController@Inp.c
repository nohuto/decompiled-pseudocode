/*
 * XREFs of ?OnRawGameControllerAdded@WGIRawInputProvider@@AEAAJPEAUIInspectable@@PEAUIRawGameController@Input@Gaming@Windows@@@Z @ 0x1800A7540
 * Callers:
 *     ?StartRawGameControllerWatcher@WGIRawInputProvider@@AEAAJXZ @ 0x180026948 (-StartRawGameControllerWatcher@WGIRawInputProvider@@AEAAJXZ.c)
 * Callees:
 *     ?InternalUnlock@SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18002A3F4 (-InternalUnlock@SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ??$MakeAndInitialize@VWGIController@@V1@AEAPEAUIRawGameController@Input@Gaming@Windows@@PEAUIRawInputClient@@PEAUIMessageSession@@PEAUIGameInputServer@@PEAVWGIRawInputProvider@@@Details@WRL@Microsoft@@YAJPEAPEAVWGIController@@AEAPEAUIRawGameController@Input@Gaming@Windows@@$$QEAPEAUIRawInputClient@@$$QEAPEAUIMessageSession@@$$QEAPEAUIGameInputServer@@$$QEAPEAVWGIRawInputProvider@@@Z @ 0x1800A6C88 (--$MakeAndInitialize@VWGIController@@V1@AEAPEAUIRawGameController@Input@Gaming@Windows@@PEAUIRaw.c)
 *     ??$_Emplace_reallocate@V?$ComPtr@VWGIController@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VWGIController@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VWGIController@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@VWGIController@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x1800A6E54 (--$_Emplace_reallocate@V-$ComPtr@VWGIController@@@WRL@Microsoft@@@-$vector@V-$ComPtr@VWGIControl.c)
 *     std::call_once__lambda_fdfea97a1e4915bc7c15af4fd38df93b__WGIRawInputProvider___ @ 0x1800A7028 (std--call_once__lambda_fdfea97a1e4915bc7c15af4fd38df93b__WGIRawInputProvider___.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameControllerInputSink@Custom@Input@Gaming@Windows@@UIGipGameControllerInputSink@5678@UIGipGameControllerInputSinkPrivate@Internal@678@UIHidGameControllerInputSink@5678@UIXusbGameControllerInputSink@5678@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800A79B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGam_ea_1800A79B0.c)
 *     ?NotifyAttachedAndStart@WGIController@@QEAAJPEAUIRawInputProvider@@@Z @ 0x1800A9B8C (-NotifyAttachedAndStart@WGIController@@QEAAJPEAUIRawInputProvider@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall WGIRawInputProvider::OnRawGameControllerAdded(
        WGIRawInputProvider *this,
        struct IInspectable *a2,
        struct Windows::Gaming::Input::IRawGameController *a3)
{
  WGIController *v3; // rdi
  WGIController *v4; // rbx
  char *v5; // rdx
  WGIRawInputProvider *v7; // [rsp+30h] [rbp-48h] BYREF
  struct WGIRawInputProvider *v8; // [rsp+38h] [rbp-40h] BYREF
  struct IGameInputServer *v9; // [rsp+40h] [rbp-38h] BYREF
  struct IMessageSession *v10; // [rsp+48h] [rbp-30h] BYREF
  struct IRawInputClient *v11; // [rsp+50h] [rbp-28h] BYREF
  struct _RTL_CRITICAL_SECTION *v12[4]; // [rsp+58h] [rbp-20h] BYREF
  WGIController *v13; // [rsp+80h] [rbp+8h] BYREF
  struct Windows::Gaming::Input::IRawGameController *v14; // [rsp+90h] [rbp+18h] BYREF
  char v15; // [rsp+98h] [rbp+20h] BYREF

  v14 = a3;
  v13 = this;
  v12[1] = (struct _RTL_CRITICAL_SECTION *)-2LL;
  try
  {
    v3 = this;
    v7 = this;
    v15 = 0;
    std::call_once__lambda_fdfea97a1e4915bc7c15af4fd38df93b__WGIRawInputProvider___(
      (WGIRawInputProvider *)((char *)this + 160),
      (__int64)&v15,
      (__int64)&v7);
  }
  catch ( ... )
  {
    v3 = v13;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)v3 + 3);
  v12[0] = (struct _RTL_CRITICAL_SECTION *)((char *)v3 + 120);
  v13 = 0LL;
  v8 = v3;
  v9 = (struct IGameInputServer *)*((_QWORD *)v3 + 6);
  v10 = (struct IMessageSession *)*((_QWORD *)v3 + 5);
  v11 = (struct IRawInputClient *)*((_QWORD *)v3 + 4);
  if ( (int)Microsoft::WRL::Details::MakeAndInitialize<WGIController,WGIController,Windows::Gaming::Input::IRawGameController * &,IRawInputClient *,IMessageSession *,IGameInputServer *,WGIRawInputProvider *>(
              (volatile signed __int64 **)&v13,
              &v14,
              &v11,
              &v10,
              &v9,
              &v8) < 0 )
  {
LABEL_10:
    v4 = v13;
  }
  else
  {
    _InterlockedExchange((volatile __int32 *)v13 + 43, *((_DWORD *)v3 + 101));
    v4 = v13;
    if ( (int)WGIController::NotifyAttachedAndStart(v13, v3) >= 0 )
    {
      try
      {
        v5 = (char *)*((_QWORD *)v3 + 13);
        if ( *((char **)v3 + 14) == v5 )
        {
          std::vector<Microsoft::WRL::ComPtr<WGIController>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<WGIController>>(
            (char **)v3 + 12,
            v5,
            (char *)&v13);
          v4 = v13;
        }
        else
        {
          *(_QWORD *)v5 = 0LL;
          if ( v5 != (char *)&v13 )
          {
            *(_QWORD *)v5 = v4;
            v4 = 0LL;
            v13 = 0LL;
          }
          *((_QWORD *)v3 + 13) += 8LL;
        }
      }
      catch ( ... )
      {
        goto LABEL_10;
      }
    }
  }
  if ( v4 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Input::Custom::IGameControllerInputSink,Windows::Gaming::Input::Custom::IGipGameControllerInputSink,Windows::Gaming::Input::Internal::IGipGameControllerInputSinkPrivate,Windows::Gaming::Input::Custom::IHidGameControllerInputSink,Windows::Gaming::Input::Custom::IXusbGameControllerInputSink>::Release(v4);
  Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::InternalUnlock(v12);
  return 0LL;
}
