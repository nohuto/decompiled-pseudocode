/*
 * XREFs of ??$_Move_backward_unchecked1@V?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@0@V10@00U_General_ptr_iterator_tag@0@@Z @ 0x1801E46FC
 * Callers:
 *     ??$move_backward@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@0@V10@00@Z @ 0x1801E4A8C (--$move_backward@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@V-$com_ptr_t@VCManipula.c)
 * Callees:
 *     ?attach@?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAVCManipulation@@@Z @ 0x1801A7778 (-attach@-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAVCManipulation@@@Z.c)
 */

_OWORD *__fastcall std::_Move_backward_unchecked1<std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>>,std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>>>(
        _OWORD *a1,
        __int64 a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 v8; // r10
  __int64 v9; // rdx
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // rax
  __int64 v12; // r10
  __int64 v13; // r9
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rdx
  _OWORD *result; // rax

  while ( 1 )
  {
    v8 = a3[1];
    if ( *(_QWORD *)(a2 + 8) == v8 )
      break;
    v9 = *a3;
    v10 = v8 - 1;
    a3[1] = v10;
    v11 = v10;
    v12 = v10 & 1;
    v13 = *(_QWORD *)(*(_QWORD *)(v9 + 8) + 8 * ((v11 >> 1) & (*(_QWORD *)(v9 + 16) - 1LL)));
    v14 = a4[1] - 1;
    v15 = *a4;
    a4[1] = v14;
    v16 = v14 & 1;
    v17 = *(_QWORD *)(*(_QWORD *)(v15 + 8) + 8 * ((v14 >> 1) & (*(_QWORD *)(v15 + 16) - 1LL)));
    v18 = *(_QWORD *)(v13 + 8 * v12);
    *(_QWORD *)(v13 + 8 * v12) = 0LL;
    wil::com_ptr_t<CManipulation,wil::err_returncode_policy>::attach((__int64 *)(v17 + 8 * v16), v18);
  }
  result = a1;
  *a1 = *(_OWORD *)a4;
  return result;
}
