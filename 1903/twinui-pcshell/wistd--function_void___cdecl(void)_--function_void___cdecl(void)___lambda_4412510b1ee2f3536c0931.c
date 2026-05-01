/*
 * XREFs of wistd::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_4412510b1ee2f3536c0931b5e6247432__void_ @ 0x180173E8C
 * Callers:
 *     ?SubscribeToShellReadyWnf@CActionCenterExperienceManager@@AEAAJXZ @ 0x18017882C (-SubscribeToShellReadyWnf@CActionCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

_QWORD *__fastcall wistd::function_void___cdecl_void__::function_void___cdecl_void____lambda_4412510b1ee2f3536c0931b5e6247432__void_(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v2; // r8
  __int64 *v3; // r9
  __int64 *v5; // rcx

  v2 = a1 + 1;
  a1[14] = 0LL;
  a1[1] = &off_18042D0D8;
  v3 = a1 + 3;
  v5 = a2 + 1;
  v2[1] = *a2;
  *v3 = 0LL;
  if ( v3 != a2 + 1 )
  {
    *v3 = *v5;
    *v5 = 0LL;
  }
  a1[14] = v2;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v5);
  return a1;
}
