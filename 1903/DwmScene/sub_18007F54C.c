/*
 * XREFs of sub_18007F54C @ 0x18007F54C
 * Callers:
 *     sub_180079100 @ 0x180079100 (sub_180079100.c)
 * Callees:
 *     _Thrd_id @ 0x1801274CC (_Thrd_id.c)
 *     _Thrd_join @ 0x180127508 (_Thrd_join.c)
 *     ?_Throw_Cpp_error@std@@YAXH@Z @ 0x180127550 (-_Throw_Cpp_error@std@@YAXH@Z.c)
 */

void __fastcall sub_18007F54C(_Thrd_t *a1)
{
  _Thrd_t v2; // [rsp+20h] [rbp-18h] BYREF

  if ( !a1->_Id )
  {
    std::_Throw_Cpp_error(1);
    if ( !a1->_Id )
      std::_Throw_Cpp_error(1);
  }
  if ( a1->_Id == Thrd_id() )
    std::_Throw_Cpp_error(5);
  v2 = *a1;
  if ( Thrd_join(&v2, 0LL) )
    std::_Throw_Cpp_error(2);
  a1->_Hnd = 0LL;
  a1->_Id = 0;
}
