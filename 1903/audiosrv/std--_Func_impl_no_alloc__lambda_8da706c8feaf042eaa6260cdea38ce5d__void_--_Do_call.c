/*
 * XREFs of std::_Func_impl_no_alloc__lambda_8da706c8feaf042eaa6260cdea38ce5d__void_::_Do_call @ 0x18011D000
 * Callers:
 *     <none>
 * Callees:
 *     ReconsiderSpatialOnComboEndpoints @ 0x180005568 (ReconsiderSpatialOnComboEndpoints.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_8da706c8feaf042eaa6260cdea38ce5d__void_::_Do_call(__int64 a1)
{
  ReconsiderSpatialOnComboEndpoints(*(_DWORD *)(a1 + 8), *(_QWORD *)(a1 + 16));
  CoTaskMemFree(*(LPVOID *)(a1 + 16));
}
