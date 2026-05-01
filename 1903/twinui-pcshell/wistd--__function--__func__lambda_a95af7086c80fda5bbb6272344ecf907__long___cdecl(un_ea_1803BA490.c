/*
 * XREFs of wistd::__function::__func__lambda_a95af7086c80fda5bbb6272344ecf907__long___cdecl(unsigned_long)_::__clone @ 0x1803BA490
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??2@YAPEAX_KPEAX@Z @ 0x1801002A4 (--2@YAPEAX_KPEAX@Z.c)
 */

__int64 __fastcall wistd::__function::__func__lambda_a95af7086c80fda5bbb6272344ecf907__long___cdecl_unsigned_long__::__clone(
        __int64 a1,
        void *a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  __int64 result; // rax

  v3 = operator new(a1, a2);
  *v3 = &off_1804300C8;
  v4 = v3 + 1;
  v3[1] = *(_QWORD *)(a1 + 8);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v3 + 1);
  result = *(_QWORD *)(a1 + 16);
  v4[1] = result;
  return result;
}
