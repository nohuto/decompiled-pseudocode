/*
 * XREFs of _lambda_7ccf9452fd50a88876f719357fe01971_::_lambda_7ccf9452fd50a88876f719357fe01971_ @ 0x180263930
 * Callers:
 *     Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_7ccf9452fd50a88876f719357fe01971___ @ 0x18026365C (Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_7ccf9452fd50a88876f719357fe01971.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

_QWORD *__fastcall lambda_7ccf9452fd50a88876f719357fe01971_::_lambda_7ccf9452fd50a88876f719357fe01971_(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 *v4; // rcx

  *a1 = *a2;
  v4 = a1 + 1;
  *v4 = a2[1];
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v4);
  a1[2] = a2[2];
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a1 + 2);
  return a1;
}
