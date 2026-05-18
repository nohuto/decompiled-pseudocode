/*
 * XREFs of ?dtor$6@?0??_Assign_cpp_exception_ptr_from_record@?A0xe7b3fade@@YAXAEAV?$shared_ptr@$$CBU_EXCEPTION_RECORD@@@std@@AEBUEHExceptionRecord@@@Z@4HA @ 0x180127E29
 * Callers:
 *     <none>
 * Callees:
 *     unknown_libname_110 @ 0x18000D740 (unknown_libname_110.c)
 */

void __fastcall ``anonymous namespace'::_Assign_cpp_exception_ptr_from_record'::`1'::dtor$6(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 4) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~4u;
    unknown_libname_110((_QWORD *)(a2 + 56));
  }
}
