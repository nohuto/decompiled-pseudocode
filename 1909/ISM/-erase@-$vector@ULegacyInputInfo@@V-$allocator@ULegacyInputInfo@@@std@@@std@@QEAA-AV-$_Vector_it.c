/*
 * XREFs of ?erase@?$vector@ULegacyInputInfo@@V?$allocator@ULegacyInputInfo@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULegacyInputInfo@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@ULegacyInputInfo@@@std@@@std@@@2@@Z @ 0x180094D58
 * Callers:
 *     ?RemoveDeviceImpl@MPCRawInputProvider@@AEAAXK@Z @ 0x180094A34 (-RemoveDeviceImpl@MPCRawInputProvider@@AEAAXK@Z.c)
 * Callees:
 *     ??$_Ptr_copy_cat@$$CBUPointData3D@@U1@@std@@YA?AU_Really_trivial_ptr_iterator_tag@0@AEBQEBUPointData3D@@AEBQEAU2@@Z @ 0x18000A2B4 (--$_Ptr_copy_cat@$$CBUPointData3D@@U1@@std@@YA-AU_Really_trivial_ptr_iterator_tag@0@AEBQEBUPoint.c)
 *     memmove_0 @ 0x18003788B (memmove_0.c)
 */

_QWORD *__fastcall std::vector<LegacyInputInfo>::erase(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rdi
  _QWORD *result; // rax
  char v8; // [rsp+40h] [rbp+8h] BYREF
  void *Src; // [rsp+48h] [rbp+10h]
  void *v10; // [rsp+50h] [rbp+18h]

  v3 = *(_QWORD *)(a1 + 8);
  Src = (void *)(a3 + 2032);
  v10 = (void *)a3;
  std::_Ptr_copy_cat<PointData3D const,PointData3D>(&v8);
  memmove_0(v10, Src, v3 - (_QWORD)Src);
  *(_QWORD *)(a1 + 8) -= 2032LL;
  result = a2;
  *a2 = a3;
  return result;
}
