/*
 * XREFs of _lambda_ce1757ecd12cf6f9278b9e6ca5e18ec8_::_lambda_ce1757ecd12cf6f9278b9e6ca5e18ec8_ @ 0x1802639AC
 * Callers:
 *     Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_ce1757ecd12cf6f9278b9e6ca5e18ec8___ @ 0x180263844 (Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_ce1757ecd12cf6f9278b9e6ca5e18ec8.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall lambda_ce1757ecd12cf6f9278b9e6ca5e18ec8_::_lambda_ce1757ecd12cf6f9278b9e6ca5e18ec8_(
        __int64 a1,
        __int64 a2)
{
  __int64 *v3; // rcx

  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_BYTE *)(a1 + 8) = *(_BYTE *)(a2 + 8);
  v3 = (__int64 *)(a1 + 16);
  *v3 = *(_QWORD *)(a2 + 16);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v3);
  return a1;
}
