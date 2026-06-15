/*
 * XREFs of ?reset@?$unique_ptr@MU?$function_deleter@P6AXPEAX@Z$1?_freea@@YAX0@Z@wil@@@wistd@@QEAAXPEAM@Z @ 0x180014BA0
 * Callers:
 *     _lambda_ce62a0462eef1ffdae6c0304eec1e9a4_::operator() @ 0x1800642F0 (_lambda_ce62a0462eef1ffdae6c0304eec1e9a4_--operator().c)
 * Callees:
 *     _freea @ 0x180015D40 (_freea.c)
 */

void __fastcall wistd::unique_ptr<float,wil::function_deleter<void (*)(void *),&void _freea(void *)>>::reset(
        void **a1,
        void *a2)
{
  void *v4; // rcx

  v4 = *a1;
  if ( a2 != v4 )
  {
    if ( v4 )
      freea(v4);
    *a1 = a2;
  }
}
