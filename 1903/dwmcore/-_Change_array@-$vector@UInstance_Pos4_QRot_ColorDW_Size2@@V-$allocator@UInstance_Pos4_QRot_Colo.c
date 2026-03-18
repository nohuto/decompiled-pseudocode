/*
 * XREFs of ?_Change_array@?$vector@UInstance_Pos4_QRot_ColorDW_Size2@@V?$allocator@UInstance_Pos4_QRot_ColorDW_Size2@@@std@@@std@@AEAAXQEAUInstance_Pos4_QRot_ColorDW_Size2@@_K1@Z @ 0x1801A30E8
 * Callers:
 *     std::vector_Instance_Pos4_QRot_ColorDW_Size2_std::allocator_Instance_Pos4_QRot_ColorDW_Size2___::_Resize__lambda_8dfb7c59ebd300cc893a48a945ad3f00___ @ 0x18019C83C (std--vector_Instance_Pos4_QRot_ColorDW_Size2_std--allocator_Instance_Pos4_QRot_ColorDW_Size2___-.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C42A4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<Instance_Pos4_QRot_ColorDW_Size2>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, 48 * ((*(_QWORD *)(a1 + 16) - (_QWORD)v6) / 48LL));
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 48 * a3;
  result = a2 + 48 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
