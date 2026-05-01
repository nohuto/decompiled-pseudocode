/*
 * XREFs of ??1?$unique_ptr@EU?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x180249AF8
 * Callers:
 *     __lambda_4670f1fe28d3ae663a52e8c2dbdc3392_::operator()_::_1_::dtor$0 @ 0x18024A69C (__lambda_4670f1fe28d3ae663a52e8c2dbdc3392_--operator()_--_1_--dtor$0.c)
 *     _DeserializePropertySet_::_1_::dtor$0 @ 0x1802A4EEE (_DeserializePropertySet_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall wistd::unique_ptr<unsigned char,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<unsigned char,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(
        void **a1)
{
  void *v1; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    CoTaskMemFree(v1);
}
