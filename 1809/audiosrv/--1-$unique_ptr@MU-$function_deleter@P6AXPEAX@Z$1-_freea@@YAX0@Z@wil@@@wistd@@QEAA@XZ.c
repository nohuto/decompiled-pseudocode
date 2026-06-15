/*
 * XREFs of ??1?$unique_ptr@MU?$function_deleter@P6AXPEAX@Z$1?_freea@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x1800BE4A8
 * Callers:
 *     __lambda_ce62a0462eef1ffdae6c0304eec1e9a4_::operator()_::_1_::dtor$0 @ 0x180064654 (__lambda_ce62a0462eef1ffdae6c0304eec1e9a4_--operator()_--_1_--dtor$0.c)
 * Callees:
 *     _freea @ 0x180015D40 (_freea.c)
 */

void __fastcall wistd::unique_ptr<float,wil::function_deleter<void (*)(void *),&void _freea(void *)>>::~unique_ptr<float,wil::function_deleter<void (*)(void *),&void _freea(void *)>>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    freea(v1);
}
