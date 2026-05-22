/*
 * XREFs of ??1?$weak_ptr@VSystemCursorService@@@std@@QEAA@XZ @ 0x180093430
 * Callers:
 *     _std::_Ref_count_obj_SystemCursorService_::_Ref_count_obj_SystemCursorService__SystemCursorController_____ptr64_unsigned_long_&___ptr64__::_1_::dtor$0 @ 0x180132976 (_std--_Ref_count_obj_SystemCursorService_--_Ref_count_obj_SystemCursorService__SystemCursorContr.c)
 *     _std::_Ref_count_obj_CustomCursorApplication_::_Ref_count_obj_CustomCursorApplication__std::shared_ptr_SystemCursorService__&___ptr64_unsigned_int_&___ptr64_BamoCustomCursorControllerClientProxy_____ptr64_&___ptr64__::_1_::dtor$2 @ 0x180132A12 (_std--_Ref_count_obj_CustomCursorApplication_--_Ref_count_obj_CustomCursorApplication__std--shar.c)
 *     _std::_Ref_count_obj_SystemCursor_::_Ref_count_obj_SystemCursor__std::shared_ptr_SystemCursorService__unsigned___int64_&___ptr64__::_1_::dtor$2 @ 0x180132C3E (_std--_Ref_count_obj_SystemCursor_--_Ref_count_obj_SystemCursor__std--shared_ptr_Sy_ea_180132C3E.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::weak_ptr<SystemCursorService>::~weak_ptr<SystemCursorService>(__int64 a1)
{
  volatile signed __int32 *v1; // rcx
  __int64 result; // rax

  v1 = *(volatile signed __int32 **)(a1 + 8);
  if ( v1 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v1 + 3, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 8LL))(v1);
  }
  return result;
}
