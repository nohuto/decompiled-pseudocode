/*
 * XREFs of ??1?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAA@XZ @ 0x18001EDD8
 * Callers:
 *     __lambda_363ecfaa426a2d345ca41bd67db72fc0_::operator()_::_1_::dtor$6 @ 0x180044913 (__lambda_363ecfaa426a2d345ca41bd67db72fc0_--operator()_--_1_--dtor$6.c)
 *     __lambda_363ecfaa426a2d345ca41bd67db72fc0_::operator()_::_1_::dtor$7 @ 0x180044929 (__lambda_363ecfaa426a2d345ca41bd67db72fc0_--operator()_--_1_--dtor$7.c)
 * Callees:
 *     <none>
 */

void __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::~NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>(
        __int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    CoTaskMemFree(v2);
    *(_QWORD *)a1 = 0LL;
  }
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
}
