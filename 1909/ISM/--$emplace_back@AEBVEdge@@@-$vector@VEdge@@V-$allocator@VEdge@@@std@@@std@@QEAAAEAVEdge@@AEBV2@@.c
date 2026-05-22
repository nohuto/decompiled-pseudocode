/*
 * XREFs of ??$emplace_back@AEBVEdge@@@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@QEAAAEAVEdge@@AEBV2@@Z @ 0x18010142C
 * Callers:
 *     ?AddOrUpdate@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1801016E8 (-AddOrUpdate@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 *     ?AddOrUpdate@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x1801017CC (-AddOrUpdate@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x180088814 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Emplace_reallocate@AEBVEdge@@@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@QEAAPEAVEdge@@QEAV2@AEBV2@@Z @ 0x1801010BC (--$_Emplace_reallocate@AEBVEdge@@@-$vector@VEdge@@V-$allocator@VEdge@@@std@@@std@@QEAAPEAVEdge@@.c)
 */

__int64 __fastcall std::vector<Edge>::emplace_back<Edge const &>(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v5; // rax
  __int64 result; // rax

  v2 = a1[1];
  if ( a1[2] == v2 )
    return std::vector<Edge>::_Emplace_reallocate<Edge const &>(a1, a1[1], a2);
  *(_QWORD *)v2 = *(_QWORD *)a2;
  std::wstring::wstring(v2 + 8);
  v5 = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(v2 + 40) = v5;
  if ( v5 )
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 24));
  *(_DWORD *)(v2 + 48) = *(_DWORD *)(a2 + 48);
  *(_OWORD *)(v2 + 52) = *(_OWORD *)(a2 + 52);
  *(_OWORD *)(v2 + 68) = *(_OWORD *)(a2 + 68);
  *(_QWORD *)(v2 + 84) = *(_QWORD *)(a2 + 84);
  *(_DWORD *)(v2 + 92) = *(_DWORD *)(a2 + 92);
  *(_DWORD *)(v2 + 96) = *(_DWORD *)(a2 + 96);
  result = a1[1];
  a1[1] = result + 104;
  return result;
}
