/*
 * XREFs of std::_Func_impl_no_alloc__lambda_f167818d7963a6aecc3c3c61dfbcf93a__void_::_Copy @ 0x1802737C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

_QWORD *__fastcall std::_Func_impl_no_alloc__lambda_f167818d7963a6aecc3c3c61dfbcf93a__void_::_Copy(
        _QWORD *a1,
        _QWORD *a2)
{
  *a2 = off_18044DF98;
  a2[1] = a1[1];
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a2 + 1);
  a2[2] = a1[2];
  a2[3] = a1[3];
  return a2;
}
