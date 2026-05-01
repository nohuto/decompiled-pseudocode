/*
 * XREFs of Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_ce1757ecd12cf6f9278b9e6ca5e18ec8___ @ 0x1802BC2C4
 * Callers:
 *     ?ChangeVisibility@XamlExplorerHostWindow@@AEAAX_N@Z @ 0x1802BCA50 (-ChangeVisibility@XamlExplorerHostWindow@@AEAAX_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z @ 0x1802B4450 (--0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z.c)
 *     _lambda_ce1757ecd12cf6f9278b9e6ca5e18ec8_::_lambda_ce1757ecd12cf6f9278b9e6ca5e18ec8_ @ 0x1802BC42C (_lambda_ce1757ecd12cf6f9278b9e6ca5e18ec8_--_lambda_ce1757ecd12cf6f9278b9e6ca5e18ec8_.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_ce1757ecd12cf6f9278b9e6ca5e18ec8___(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v4; // rdi
  __int64 v5; // rbx
  _BYTE v7[48]; // [rsp+28h] [rbp-30h] BYREF

  Platform::Delegate::Delegate(a1 + 2);
  *a1 = &Windows::UI::Core::DispatchedHandler::`vftable'{for `__abi_IUnknown'};
  a1[1] = &Windows::UI::Core::DispatchedHandler::`vftable'{for `Platform::Object'};
  a1[2] = &Windows::UI::Core::DispatchedHandler::`vftable';
  __abi_FTMWeakRefData::__abi_FTMWeakRefData((__int64)(a1 + 3));
  v4 = a1 + 5;
  a1[37] = a1 + 5;
  if ( a1 != (_QWORD *)-40LL )
  {
    v5 = lambda_ce1757ecd12cf6f9278b9e6ca5e18ec8_::_lambda_ce1757ecd12cf6f9278b9e6ca5e18ec8_(v7, a2);
    *v4 = &off_180592790;
    lambda_ce1757ecd12cf6f9278b9e6ca5e18ec8_::_lambda_ce1757ecd12cf6f9278b9e6ca5e18ec8_(a1 + 6, v5);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(v5 + 16));
  }
  a1[37] = v4;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a2 + 16));
  return a1;
}
