/*
 * XREFs of Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_7ccf9452fd50a88876f719357fe01971___ @ 0x18026365C
 * Callers:
 *     ?RunCallback@XamlExplorerHostWindow@@UEAAXPEAUIXamlExplorerHostWindowCreatedCallback@@@Z @ 0x180264230 (-RunCallback@XamlExplorerHostWindow@@UEAAXPEAUIXamlExplorerHostWindowCreatedCallback@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z @ 0x18025BFD8 (--0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z.c)
 *     _lambda_7ccf9452fd50a88876f719357fe01971_::_lambda_7ccf9452fd50a88876f719357fe01971_ @ 0x180263930 (_lambda_7ccf9452fd50a88876f719357fe01971_--_lambda_7ccf9452fd50a88876f719357fe01971_.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_7ccf9452fd50a88876f719357fe01971___(
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
    v5 = lambda_7ccf9452fd50a88876f719357fe01971_::_lambda_7ccf9452fd50a88876f719357fe01971_(v7, a2);
    *v4 = &off_180508638;
    lambda_7ccf9452fd50a88876f719357fe01971_::_lambda_7ccf9452fd50a88876f719357fe01971_(a1 + 6, v5);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(v5 + 16));
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(v5 + 8));
  }
  a1[37] = v4;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a2 + 16));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a2 + 8));
  return a1;
}
