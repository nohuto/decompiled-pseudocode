/*
 * XREFs of ??$MakeAndInitialize@VWGIController@@V1@AEAPEAUIRawGameController@Input@Gaming@Windows@@PEAUIRawInputClient@@PEAUIMessageSession@@PEAUIGameInputServer@@PEAVWGIRawInputProvider@@@Details@WRL@Microsoft@@YAJPEAPEAVWGIController@@AEAPEAUIRawGameController@Input@Gaming@Windows@@$$QEAPEAUIRawInputClient@@$$QEAPEAUIMessageSession@@$$QEAPEAUIGameInputServer@@$$QEAPEAVWGIRawInputProvider@@@Z @ 0x1800A6E48
 * Callers:
 *     ?OnRawGameControllerAdded@WGIRawInputProvider@@AEAAJPEAUIInspectable@@PEAUIRawGameController@Input@Gaming@Windows@@@Z @ 0x1800A76D0 (-OnRawGameControllerAdded@WGIRawInputProvider@@AEAAJPEAUIInspectable@@PEAUIRawGameController@Inp.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002C8C8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameControllerInputSink@Custom@Input@Gaming@Windows@@UIGipGameControllerInputSink@5678@UIGipGameControllerInputSinkPrivate@Internal@678@UIHidGameControllerInputSink@5678@UIXusbGameControllerInputSink@5678@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800A7B40 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGam_ea_1800A7B40.c)
 *     ??0WGIController@@QEAA@XZ @ 0x1800A8890 (--0WGIController@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@WGIController@@QEAAJPEAUIRawGameController@Input@Gaming@Windows@@PEAUIRawInputClient@@PEAUIMessageSession@@PEAUIGameInputServer@@PEAVWGIRawInputProvider@@@Z @ 0x1800AB638 (-RuntimeClassInitialize@WGIController@@QEAAJPEAUIRawGameController@Input@Gaming@Windows@@PEAUIRa.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<WGIController,WGIController,Windows::Gaming::Input::IRawGameController * &,IRawInputClient *,IMessageSession *,IGameInputServer *,WGIRawInputProvider *>(
        volatile signed __int64 **a1,
        struct Windows::Gaming::Input::IRawGameController **a2,
        struct IRawInputClient **a3,
        struct IMessageSession **a4,
        struct IGameInputServer **a5,
        struct WGIRawInputProvider **a6)
{
  WGIController *v10; // rax
  int v11; // edi
  volatile signed __int64 *v12; // rbx
  signed __int64 v13; // rax
  signed __int64 v14; // rtt

  *a1 = 0LL;
  v10 = (WGIController *)operator new(0x120uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v10 )
  {
    v12 = (volatile signed __int64 *)WGIController::WGIController(v10);
    v11 = WGIController::RuntimeClassInitialize((WGIController *)v12, *a2, *a3, *a4, *a5, *a6);
    if ( v11 >= 0 )
    {
      if ( v12 )
      {
        v13 = *((_QWORD *)v12 + 7);
        while ( v13 >= 0 )
        {
          v14 = v13;
          v13 = _InterlockedCompareExchange64(v12 + 7, v13 + 1, v13);
          if ( v14 == v13 )
            goto LABEL_10;
        }
        _InterlockedIncrement((volatile signed __int32 *)(2 * v13 + 16));
      }
LABEL_10:
      *a1 = v12;
      v11 = 0;
    }
    if ( v12 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Input::Custom::IGameControllerInputSink,Windows::Gaming::Input::Custom::IGipGameControllerInputSink,Windows::Gaming::Input::Internal::IGipGameControllerInputSinkPrivate,Windows::Gaming::Input::Custom::IHidGameControllerInputSink,Windows::Gaming::Input::Custom::IXusbGameControllerInputSink>::Release(v12);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v11;
}
