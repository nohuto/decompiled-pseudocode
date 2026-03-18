/*
 * XREFs of ??$_Move_backward_unchecked1@V?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@0@V10@00U_General_ptr_iterator_tag@0@@Z @ 0x18021E104
 * Callers:
 *     ??$move_backward@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@0@V10@00@Z @ 0x18021E4C4 (--$move_backward@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@V-$com_ptr_t@VCManipula.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

_OWORD *__fastcall std::_Move_backward_unchecked1<std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>>,std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>>>(
        _OWORD *a1,
        __int64 a2,
        __int64 *a3,
        _QWORD *a4)
{
  __int64 v4; // rbp
  unsigned __int64 v6; // rdi
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r10
  __int64 v12; // r9
  unsigned __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rcx
  _OWORD *result; // rax

  v4 = *(_QWORD *)(a2 + 8);
  v6 = a3[1];
  while ( v4 != v6 )
  {
    v9 = *a3;
    --v6;
    v10 = a4[1] - 1LL;
    a3[1] = v6;
    v11 = v6 & 1;
    a4[1] = v10;
    v12 = *(_QWORD *)(*(_QWORD *)(v9 + 8) + 8 * ((v6 >> 1) & (*(_QWORD *)(v9 + 16) - 1LL)));
    v13 = v10;
    v14 = v10 & 1;
    v15 = *(_QWORD *)(*(_QWORD *)(*a4 + 8LL) + 8 * ((v13 >> 1) & (*(_QWORD *)(*a4 + 16LL) - 1LL)));
    v16 = *(_QWORD *)(v12 + 8 * v11);
    *(_QWORD *)(v12 + 8 * v11) = 0LL;
    v17 = *(_QWORD *)(v15 + 8 * v14);
    *(_QWORD *)(v15 + 8 * v14) = v16;
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  result = a1;
  *a1 = *(_OWORD *)a4;
  return result;
}
