/*
 * XREFs of sub_18007F65C @ 0x18007F65C
 * Callers:
 *     sub_180079210 @ 0x180079210 (sub_180079210.c)
 * Callees:
 *     _Thrd_id @ 0x1801275DC (_Thrd_id.c)
 *     _Thrd_join @ 0x180127618 (_Thrd_join.c)
 *     ?_Throw_Cpp_error@std@@YAXH@Z @ 0x180127660 (-_Throw_Cpp_error@std@@YAXH@Z.c)
 */

void __fastcall sub_18007F65C(_Thrd_t *a1)
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
