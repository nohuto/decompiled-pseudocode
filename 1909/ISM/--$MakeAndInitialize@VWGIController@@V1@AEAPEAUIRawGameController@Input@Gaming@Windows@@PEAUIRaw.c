/*
 * XREFs of ??$MakeAndInitialize@VWGIController@@V1@AEAPEAUIRawGameController@Input@Gaming@Windows@@PEAUIRawInputClient@@PEAUIMessageSession@@PEAUIGameInputServer@@PEAVWGIRawInputProvider@@@Details@WRL@Microsoft@@YAJPEAPEAVWGIController@@AEAPEAUIRawGameController@Input@Gaming@Windows@@$$QEAPEAUIRawInputClient@@$$QEAPEAUIMessageSession@@$$QEAPEAUIGameInputServer@@$$QEAPEAVWGIRawInputProvider@@@Z @ 0x1800A6C88
 * Callers:
 *     ?OnRawGameControllerAdded@WGIRawInputProvider@@AEAAJPEAUIInspectable@@PEAUIRawGameController@Input@Gaming@Windows@@@Z @ 0x1800A7540 (-OnRawGameControllerAdded@WGIRawInputProvider@@AEAAJPEAUIInspectable@@PEAUIRawGameController@Inp.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002C548 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x18008DC74 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameControllerInputSink@Custom@Input@Gaming@Windows@@UIGipGameControllerInputSink@5678@UIGipGameControllerInputSinkPrivate@Internal@678@UIHidGameControllerInputSink@5678@UIXusbGameControllerInputSink@5678@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800A79B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGam_ea_1800A79B0.c)
 *     ??0WGIController@@QEAA@XZ @ 0x1800A8720 (--0WGIController@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@WGIController@@QEAAJPEAUIRawGameController@Input@Gaming@Windows@@PEAUIRawInputClient@@PEAUIMessageSession@@PEAUIGameInputServer@@PEAVWGIRawInputProvider@@@Z @ 0x1800AB508 (-RuntimeClassInitialize@WGIController@@QEAAJPEAUIRawGameController@Input@Gaming@Windows@@PEAUIRa.c)
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
  volatile int *v13; // rdx
  signed __int64 v14; // rax
  signed __int64 v15; // rtt

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
        v14 = *((_QWORD *)v12 + 7);
        while ( v14 >= 0 )
        {
          if ( (_DWORD)v14 != 0x7FFFFFFF )
          {
            v15 = v14;
            v14 = _InterlockedCompareExchange64(v12 + 7, v14 + 1, v14);
            if ( v15 != v14 )
              continue;
          }
          goto LABEL_11;
        }
        Microsoft::WRL::Details::StrongReference::IncrementStrongReference(
          (Microsoft::WRL::Details *)(2 * v14 + 16),
          v13);
      }
LABEL_11:
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
