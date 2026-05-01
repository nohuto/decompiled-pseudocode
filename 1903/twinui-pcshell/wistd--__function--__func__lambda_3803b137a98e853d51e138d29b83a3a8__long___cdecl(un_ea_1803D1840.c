/*
 * XREFs of wistd::__function::__func__lambda_3803b137a98e853d51e138d29b83a3a8__long___cdecl(unsigned_long)_::__clone @ 0x1803D1840
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??2@YAPEAX_KPEAX@Z @ 0x1801002A4 (--2@YAPEAX_KPEAX@Z.c)
 */

__int64 __fastcall wistd::__function::__func__lambda_3803b137a98e853d51e138d29b83a3a8__long___cdecl_unsigned_long__::__clone(
        __int64 a1,
        void *a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  __int64 result; // rax

  v3 = operator new(a1, a2);
  *v3 = &off_180430120;
  v4 = v3 + 1;
  v3[1] = *(_QWORD *)(a1 + 8);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v3 + 1);
  result = *(_QWORD *)(a1 + 16);
  v4[1] = result;
  return result;
}
