/*
 * XREFs of ??$_Move_backward_unchecked@PEAW4_Button@@PEAW41@@std@@YAPEAW4_Button@@PEAW41@00@Z @ 0x1800B2200
 * Callers:
 *     ??$_Insertion_sort_unchecked@PEAEU?$less@X@std@@@std@@YAPEAEPEAEQEAEU?$less@X@0@@Z @ 0x1800B1E64 (--$_Insertion_sort_unchecked@PEAEU-$less@X@std@@@std@@YAPEAEPEAEQEAEU-$less@X@0@@Z.c)
 *     ??$_Insertion_sort_unchecked@PEAW4_Button@@U?$less@X@std@@@std@@YAPEAW4_Button@@PEAW41@QEAW41@U?$less@X@0@@Z @ 0x1800FC6D8 (--$_Insertion_sort_unchecked@PEAW4_Button@@U-$less@X@std@@@std@@YAPEAW4_Button@@PEAW41@QEAW41@U-.c)
 * Callees:
 *     ??$_Ptr_copy_cat@$$CBUPointData3D@@U1@@std@@YA?AU_Really_trivial_ptr_iterator_tag@0@AEBQEBUPointData3D@@AEBQEAU2@@Z @ 0x18000A244 (--$_Ptr_copy_cat@$$CBUPointData3D@@U1@@std@@YA-AU_Really_trivial_ptr_iterator_tag@0@AEBQEBUPoint.c)
 *     memmove_0 @ 0x180037D7B (memmove_0.c)
 */

void *__fastcall std::_Move_backward_unchecked<enum _Button *,enum _Button *>(const void *a1, __int64 a2, __int64 a3)
{
  char v6; // [rsp+38h] [rbp+10h] BYREF
  __int64 v7; // [rsp+40h] [rbp+18h]

  v7 = a3;
  std::_Ptr_copy_cat<PointData3D const,PointData3D>(&v6);
  return memmove_0((void *)(v7 - (a2 - (_QWORD)a1)), a1, a2 - (_QWORD)a1);
}
