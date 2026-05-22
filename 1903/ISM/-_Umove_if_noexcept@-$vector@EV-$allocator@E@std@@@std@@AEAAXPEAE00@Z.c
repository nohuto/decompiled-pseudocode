/*
 * XREFs of ?_Umove_if_noexcept@?$vector@EV?$allocator@E@std@@@std@@AEAAXPEAE00@Z @ 0x180160B38
 * Callers:
 *     std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize__lambda_2b51424039c320f102fd798e073c89b2___ @ 0x180150100 (std--vector_unsigned_char_std--allocator_unsigned_char___--_Resize__lambda_2b51424039c320f102fd7.c)
 * Callees:
 *     ??$_Ptr_copy_cat@$$CBUPointData3D@@U1@@std@@YA?AU_Really_trivial_ptr_iterator_tag@0@AEBQEBUPointData3D@@AEBQEAU2@@Z @ 0x18000A244 (--$_Ptr_copy_cat@$$CBUPointData3D@@U1@@std@@YA-AU_Really_trivial_ptr_iterator_tag@0@AEBQEBUPoint.c)
 *     memmove_0 @ 0x180037D7B (memmove_0.c)
 */

void *__fastcall std::vector<unsigned char>::_Umove_if_noexcept(__int64 a1, void *a2, __int64 a3, void *a4)
{
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  void *Src; // [rsp+38h] [rbp+10h]
  void *v8; // [rsp+40h] [rbp+18h]

  v6 = a1;
  Src = a2;
  v8 = a4;
  std::_Ptr_copy_cat<PointData3D const,PointData3D>(&v6);
  return memmove_0(v8, Src, a3 - (_QWORD)Src);
}
