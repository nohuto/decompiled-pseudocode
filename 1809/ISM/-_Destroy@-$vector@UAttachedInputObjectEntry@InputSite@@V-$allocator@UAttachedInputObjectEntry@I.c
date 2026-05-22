/*
 * XREFs of ?_Destroy@?$vector@UAttachedInputObjectEntry@InputSite@@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@AEAAXPEAUAttachedInputObjectEntry@InputSite@@0@Z @ 0x18001FDD0
 * Callers:
 *     _std::vector_InputSite::AttachedInputObjectEntry_std::allocator_InputSite::AttachedInputObjectEntry___::_Emplace_reallocate_InputSite::AttachedInputObjectEntry__::_1_::catch$8 @ 0x18012EB11 (_std--vector_InputSite--AttachedInputObjectEntry_std--allocator_InputSite--AttachedInputObjectEn.c)
 *     _std::vector_DWMInputRouter::DeviceDisplayMapping_std::allocator_DWMInputRouter::DeviceDisplayMapping___::_Emplace_reallocate_DWMInputRouter::DeviceDisplayMapping__::_1_::catch$8 @ 0x18013244F (_std--vector_DWMInputRouter--DeviceDisplayMapping_std--allocator_DWMInputRouter--DeviceDisplayMa.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall std::vector<InputSite::AttachedInputObjectEntry>::_Destroy(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 *v4; // rbx
  __int64 v5; // rcx
  __int64 *result; // rax

  if ( a2 != a3 )
  {
    v4 = a2 + 1;
    do
    {
      v5 = *v4;
      if ( *v4 )
      {
        *v4 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      }
      v4 += 2;
      result = v4 - 1;
    }
    while ( v4 - 1 != a3 );
  }
  return result;
}
