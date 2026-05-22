/*
 * XREFs of ?OnRawGameControllerAdded@WGIRawInputProvider@@AEAAJPEAUIInspectable@@PEAUIRawGameController@Input@Gaming@Windows@@@Z @ 0x18006B260
 * Callers:
 *     ?StartRawGameControllerWatcher@WGIRawInputProvider@@AEAAJXZ @ 0x18006B80C (-StartRawGameControllerWatcher@WGIRawInputProvider@@AEAAJXZ.c)
 * Callees:
 *     ??0exception_ptr@std@@QEAA@AEBV01@@Z @ 0x18003C6A4 (--0exception_ptr@std@@QEAA@AEBV01@@Z.c)
 *     ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x18003C6E0 (-rethrow_exception@std@@YAXVexception_ptr@1@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameControllerInputSink@Custom@Input@Gaming@Windows@@UIGipGameControllerInputSink@5678@UIGipGameControllerInputSinkPrivate@Internal@678@UIHidGameControllerInputSink@5678@UIXusbGameControllerInputSink@5678@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18006C0E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameControllerIn.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameControllerInputSink@Custom@Input@Gaming@Windows@@UIGipGameControllerInputSink@5678@UIGipGameControllerInputSinkPrivate@Internal@678@UIHidGameControllerInputSink@5678@UIXusbGameControllerInputSink@5678@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18006C190 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameControllerInp.c)
 *     ??$_Emplace_reallocate@V?$ComPtr@VWGIController@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VWGIController@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VWGIController@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@VWGIController@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x18006C304 (--$_Emplace_reallocate@V-$ComPtr@VWGIController@@@WRL@Microsoft@@@-$vector@V-$ComPtr@VWGIControl.c)
 *     ??0WGIController@@QEAA@XZ @ 0x18006CD48 (--0WGIController@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@WGIController@@QEAAJPEAUIRawGameController@Input@Gaming@Windows@@PEAUIRawInputClient@@PEAUIMessageSession@@PEAVWGIRawInputProvider@@@Z @ 0x18006D044 (-RuntimeClassInitialize@WGIController@@QEAAJPEAUIRawGameController@Input@Gaming@Windows@@PEAUIRa.c)
 *     ?NotifyAttachedAndStart@WGIController@@QEAAJPEAUIRawInputProvider@@@Z @ 0x18006D878 (-NotifyAttachedAndStart@WGIController@@QEAAJPEAUIRawInputProvider@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18012C2B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=9 #try_helpers=1
__int64 __fastcall WGIRawInputProvider::OnRawGameControllerAdded(
        WGIRawInputProvider *this,
        struct IInspectable *a2,
        struct Windows::Gaming::Input::IRawGameController *a3)
{
  struct Windows::Gaming::Input::IRawGameController *v3; // r15
  WGIRawInputProvider *v4; // rsi
  struct _RTL_CRITICAL_SECTION *v5; // r14
  struct IMessageSession *v6; // r12
  struct IRawInputClient *v7; // r13
  WGIController *v8; // rbx
  WGIController *v9; // rax
  WGIController *v10; // rdi
  int v11; // r15d
  WGIRawInputProvider **v12; // rdx
  std::exception_ptr *v14; // rcx
  _QWORD v15[2]; // [rsp+30h] [rbp-88h] BYREF
  char *v16; // [rsp+40h] [rbp-78h] BYREF
  _QWORD v17[2]; // [rsp+50h] [rbp-68h] BYREF
  _QWORD v18[11]; // [rsp+60h] [rbp-58h] BYREF
  WGIRawInputProvider *v19; // [rsp+C0h] [rbp+8h] BYREF
  struct Windows::Gaming::Input::IRawGameController *v20; // [rsp+D0h] [rbp+18h]
  struct _RTL_CRITICAL_SECTION *v21; // [rsp+D8h] [rbp+20h] BYREF

  v20 = a3;
  v19 = this;
  v15[1] = -2LL;
  v3 = a3;
  v4 = this;
  v15[0] = this;
  LOBYTE(v21) = 0;
  __ExceptionPtrCreate(v17);
  v18[0] = v17;
  v18[1] = v15;
  v18[2] = &v21;
  if ( std::_Execute_once(
         (WGIRawInputProvider *)((char *)v4 + 152),
         (int (*)(void *, void *, void **))std::_Callback_once<std::tuple<_lambda_fdfea97a1e4915bc7c15af4fd38df93b_ &&,WGIRawInputProvider * &&,std::exception_ptr &>,std::integer_sequence<unsigned __int64,0,1>,2>,
         v18) )
  {
    __ExceptionPtrDestroy(v17);
  }
  else
  {
    if ( __ExceptionPtrToBool(v17) )
    {
      v14 = std::exception_ptr::exception_ptr((std::exception_ptr *)&v16, (const struct std::exception_ptr *)v17);
      std::rethrow_exception(v14);
    }
    std::_XGetLastError();
    v4 = v19;
    v3 = v20;
  }
  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)v4 + 112);
  v21 = (struct _RTL_CRITICAL_SECTION *)((char *)v4 + 112);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v4 + 112));
  v16 = (char *)v4 + 112;
  v6 = (struct IMessageSession *)*((_QWORD *)v4 + 5);
  v7 = (struct IRawInputClient *)*((_QWORD *)v4 + 4);
  v8 = 0LL;
  v19 = 0LL;
  v9 = (WGIController *)operator new(0x100uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v9 )
  {
    v10 = WGIController::WGIController(v9);
    v15[0] = v10;
    v17[0] = 0LL;
    v11 = WGIController::RuntimeClassInitialize(v10, v3, v7, v6, v4);
    if ( v11 >= 0 )
    {
      if ( v10 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Input::Custom::IGameControllerInputSink,Windows::Gaming::Input::Custom::IGipGameControllerInputSink,Windows::Gaming::Input::Internal::IGipGameControllerInputSinkPrivate,Windows::Gaming::Input::Custom::IHidGameControllerInputSink,Windows::Gaming::Input::Custom::IXusbGameControllerInputSink>::AddRef(v10);
      v8 = v10;
      v19 = v10;
      if ( v10 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Input::Custom::IGameControllerInputSink,Windows::Gaming::Input::Custom::IGipGameControllerInputSink,Windows::Gaming::Input::Internal::IGipGameControllerInputSinkPrivate,Windows::Gaming::Input::Custom::IHidGameControllerInputSink,Windows::Gaming::Input::Custom::IXusbGameControllerInputSink>::Release(v10);
      v11 = 0;
    }
    else if ( v10 )
    {
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Input::Custom::IGameControllerInputSink,Windows::Gaming::Input::Custom::IGipGameControllerInputSink,Windows::Gaming::Input::Internal::IGipGameControllerInputSinkPrivate,Windows::Gaming::Input::Custom::IHidGameControllerInputSink,Windows::Gaming::Input::Custom::IXusbGameControllerInputSink>::Release(v10);
    }
    if ( v11 >= 0 && (int)WGIController::NotifyAttachedAndStart(v8, v4) >= 0 )
    {
      try
      {
        v12 = (WGIRawInputProvider **)*((_QWORD *)v4 + 12);
        if ( *((WGIRawInputProvider ***)v4 + 13) == v12 )
        {
          std::vector<Microsoft::WRL::ComPtr<WGIController>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<WGIController>>(
            (char *)v4 + 88,
            v12,
            &v19);
          v8 = v19;
        }
        else
        {
          *v12 = 0LL;
          if ( v12 != &v19 )
          {
            *v12 = v8;
            v8 = 0LL;
            v19 = 0LL;
          }
          *((_QWORD *)v4 + 12) += 8LL;
        }
      }
      catch ( ... )
      {
        v8 = v19;
        v5 = v21;
      }
    }
  }
  if ( v8 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Input::Custom::IGameControllerInputSink,Windows::Gaming::Input::Custom::IGipGameControllerInputSink,Windows::Gaming::Input::Internal::IGipGameControllerInputSinkPrivate,Windows::Gaming::Input::Custom::IHidGameControllerInputSink,Windows::Gaming::Input::Custom::IXusbGameControllerInputSink>::Release(v8);
  if ( v5 )
    LeaveCriticalSection(v5);
  return 0LL;
}
