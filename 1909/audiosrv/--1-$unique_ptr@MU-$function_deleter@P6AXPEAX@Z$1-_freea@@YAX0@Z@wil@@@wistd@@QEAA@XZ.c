/*
 * XREFs of ??1?$unique_ptr@MU?$function_deleter@P6AXPEAX@Z$1?_freea@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x1800CC844
 * Callers:
 *     __lambda_c68382dcc9c1d77abb9bed51bdc308c6_::operator()_::_1_::dtor$0 @ 0x180070500 (__lambda_c68382dcc9c1d77abb9bed51bdc308c6_--operator()_--_1_--dtor$0.c)
 *     _CAudioStream::GetChannelPeakValues_::_1_::dtor$1 @ 0x1800D9E94 (_CAudioStream--GetChannelPeakValues_--_1_--dtor$1.c)
 *     _CAudioStream::GetPeakValue_::_1_::dtor$1 @ 0x1800DA160 (_CAudioStream--GetPeakValue_--_1_--dtor$1.c)
 * Callees:
 *     _freea @ 0x1800D20D4 (_freea.c)
 */

void __fastcall wistd::unique_ptr<float,wil::function_deleter<void (*)(void *),&void _freea(void *)>>::~unique_ptr<float,wil::function_deleter<void (*)(void *),&void _freea(void *)>>(
        void **a1)
{
  void *v1; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    freea(v1);
}
