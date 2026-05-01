/*
 * XREFs of wistd::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_50a12363169dbf5c5fb5088ef5c364e8__void_ @ 0x180197F9C
 * Callers:
 *     ?SubscribeToShellReadyWnf@CControlCenterExperienceManager@@AEAAJXZ @ 0x18019A8F4 (-SubscribeToShellReadyWnf@CControlCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

_QWORD *__fastcall wistd::function_void___cdecl_void__::function_void___cdecl_void____lambda_50a12363169dbf5c5fb5088ef5c364e8__void_(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v2; // r8
  __int64 *v3; // r9
  __int64 *v5; // rcx

  v2 = a1 + 1;
  a1[14] = 0LL;
  a1[1] = &off_18044C008;
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
