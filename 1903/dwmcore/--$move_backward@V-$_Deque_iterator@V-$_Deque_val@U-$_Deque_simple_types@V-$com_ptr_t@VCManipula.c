/*
 * XREFs of ??$move_backward@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@0@V10@00@Z @ 0x18021E4C4
 * Callers:
 *     ?erase@?$deque@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@0@Z @ 0x18021FE48 (-erase@-$deque@V-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$co.c)
 * Callees:
 *     ??0?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@std@@QEAA@AEBV01@@Z @ 0x180019924 (--0-$_Deque_const_iterator@V-$_Deque_val@U-$_Deque_simple_types@V-$ComPtr@VCEffectCompilationTas.c)
 *     ??$_Move_backward_unchecked1@V?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@0@V10@00U_General_ptr_iterator_tag@0@@Z @ 0x18021E104 (--$_Move_backward_unchecked1@V-$_Deque_unchecked_iterator@V-$_Deque_val@U-$_Deque_s_ea_18021E104.c)
 */

_QWORD *__fastcall std::move_backward<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>>,std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>>>(
        _QWORD *a1,
        __int64 **a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r10
  __int64 v7; // rax
  __int64 v8; // rax
  _QWORD v10[2]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v11[2]; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v12[2]; // [rsp+50h] [rbp-20h] BYREF
  __int128 v13; // [rsp+60h] [rbp-10h] BYREF

  v4 = 0LL;
  if ( *a2 )
    v7 = **a2;
  else
    v7 = 0LL;
  v12[0] = v7;
  v12[1] = a2[2];
  if ( *(_QWORD *)a3 )
    v8 = **(_QWORD **)a3;
  else
    v8 = 0LL;
  v11[0] = v8;
  v11[1] = *(_QWORD *)(a3 + 16);
  if ( *(_QWORD *)a4 )
    v4 = **(_QWORD **)a4;
  v10[1] = *(_QWORD *)(a4 + 16);
  v10[0] = v4;
  std::_Move_backward_unchecked1<std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>>,std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>>>(
    &v13,
    (__int64)v12,
    v11,
    v10);
  *(_QWORD *)(a4 + 16) = *((_QWORD *)&v13 + 1);
  std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>(
    a1,
    a4);
  return a1;
}
