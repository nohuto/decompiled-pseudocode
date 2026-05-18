/*
 * XREFs of ?dtor$4@?0??_Assign_cpp_exception_ptr_from_record@?A0xe7b3fade@@YAXAEAV?$shared_ptr@$$CBU_EXCEPTION_RECORD@@@std@@AEBUEHExceptionRecord@@@Z@4HA @ 0x18013059F
 * Callers:
 *     <none>
 * Callees:
 *     j_unknown_libname_116 @ 0x18000FFC0 (j_unknown_libname_116.c)
 */

__int64 __fastcall ``anonymous namespace'::_Assign_cpp_exception_ptr_from_record'::`1'::dtor$4(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return j_unknown_libname_116();
  }
  return result;
}
