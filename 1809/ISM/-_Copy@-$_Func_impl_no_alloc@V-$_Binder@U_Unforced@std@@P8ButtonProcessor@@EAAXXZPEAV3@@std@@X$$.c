/*
 * XREFs of ?_Copy@?$_Func_impl_no_alloc@V?$_Binder@U_Unforced@std@@P8ButtonProcessor@@EAAXXZPEAV3@@std@@X$$V@std@@EEBAPEAV?$_Func_base@X$$V@2@PEAX@Z @ 0x1800EB800
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,void (ButtonProcessor::*)(void),ButtonProcessor *>,void,>::_Copy(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a2 = &std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,void (ButtonProcessor::*)(void),ButtonProcessor *>,void,>::`vftable';
  result = a2;
  *(_OWORD *)(a2 + 8) = *(_OWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 24) = *(_QWORD *)(a1 + 24);
  return result;
}
