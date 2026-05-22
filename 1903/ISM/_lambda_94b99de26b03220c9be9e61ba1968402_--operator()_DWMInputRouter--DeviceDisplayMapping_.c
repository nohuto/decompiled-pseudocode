/*
 * XREFs of _lambda_94b99de26b03220c9be9e61ba1968402_::operator()_DWMInputRouter::DeviceDisplayMapping_ @ 0x1800C1940
 * Callers:
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_DWMInputRouter::DeviceDisplayMapping_______lambda_94b99de26b03220c9be9e61ba1968402___ @ 0x1800C1FE8 (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_DWMInputRouter--DeviceD.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall lambda_94b99de26b03220c9be9e61ba1968402_::operator()_DWMInputRouter::DeviceDisplayMapping_(
        int *a1,
        __int64 a2)
{
  int v2; // eax
  __int64 v3; // rcx
  bool v4; // bl

  v2 = *a1;
  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(_DWORD *)a2 == v2;
  if ( v3 )
  {
    *(_QWORD *)(a2 + 8) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return v4;
}
