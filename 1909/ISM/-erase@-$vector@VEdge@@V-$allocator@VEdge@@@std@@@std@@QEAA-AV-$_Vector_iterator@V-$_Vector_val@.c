/*
 * XREFs of ?erase@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VEdge@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VEdge@@@std@@@std@@@2@@Z @ 0x1801027C4
 * Callers:
 *     ?Remove@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1801022D4 (-Remove@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 *     ?Remove@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x1801023B0 (-Remove@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800672AC (-InternalRelease@-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x18006F254 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ??$_Move_unchecked1@PEAVEdge@@PEAV1@@std@@YAPEAVEdge@@PEAV1@00U_General_ptr_iterator_tag@0@@Z @ 0x1801012BC (--$_Move_unchecked1@PEAVEdge@@PEAV1@@std@@YAPEAVEdge@@PEAV1@00U_General_ptr_iterator_tag@0@@Z.c)
 */

__int64 *__fastcall std::vector<Edge>::erase(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v6; // rdi
  __int64 *result; // rax

  std::_Move_unchecked1<Edge *,Edge *>(a3 + 104, *(_QWORD *)(a1 + 8), a3);
  v6 = *(_QWORD *)(a1 + 8);
  Microsoft::WRL::ComPtr<EdgyControllerClientProxy>::InternalRelease((__int64 *)(v6 - 64));
  std::wstring::_Tidy_deallocate(v6 - 96);
  *(_QWORD *)(a1 + 8) -= 104LL;
  result = a2;
  *a2 = a3;
  return result;
}
