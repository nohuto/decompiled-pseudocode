/*
 * XREFs of sub_18007E4A0 @ 0x18007E4A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_18007E4A0(__int64 a1, _QWORD *a2)
{
  _QWORD *result; // rax

  *a2 = &std::_Func_impl_no_alloc<_lambda_eef877ff8e4210708f03cbe7b0d4e7f1_,void,std::shared_ptr<Spectre::Engine::Component> const &>::`vftable';
  a2[1] = 0LL;
  a2[2] = 0LL;
  a2[1] = *(_QWORD *)(a1 + 8);
  a2[2] = *(_QWORD *)(a1 + 16);
  result = a2;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  return result;
}
