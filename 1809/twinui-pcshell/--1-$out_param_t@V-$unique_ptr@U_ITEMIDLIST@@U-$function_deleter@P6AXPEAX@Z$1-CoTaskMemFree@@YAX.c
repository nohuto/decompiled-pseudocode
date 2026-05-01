/*
 * XREFs of ??1?$out_param_t@V?$unique_ptr@U_ITEMIDLIST@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x1801D5544
 * Callers:
 *     __lambda_03333eb1695976eafbeaf663887af01a_::operator()_::_1_::dtor$1 @ 0x1801D61C4 (__lambda_03333eb1695976eafbeaf663887af01a_--operator()_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::out_param_t<wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(
        void ***a1)
{
  void **v1; // rbx
  void **v2; // rdi
  void **v3; // rcx

  if ( *((_BYTE *)a1 + 16) )
  {
    v1 = a1[1];
    v2 = *a1;
    v3 = (void **)**a1;
    if ( v1 != v3 )
    {
      if ( v3 )
        CoTaskMemFree(v3);
      *v2 = v1;
    }
  }
}
