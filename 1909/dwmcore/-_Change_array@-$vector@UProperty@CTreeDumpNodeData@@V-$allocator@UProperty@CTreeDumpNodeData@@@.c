/*
 * XREFs of ?_Change_array@?$vector@UProperty@CTreeDumpNodeData@@V?$allocator@UProperty@CTreeDumpNodeData@@@std@@@std@@AEAAXQEAUProperty@CTreeDumpNodeData@@_K1@Z @ 0x1801741F4
 * Callers:
 *     ??$_Emplace_reallocate@UProperty@CTreeDumpNodeData@@@?$vector@UProperty@CTreeDumpNodeData@@V?$allocator@UProperty@CTreeDumpNodeData@@@std@@@std@@QEAAPEAUProperty@CTreeDumpNodeData@@QEAU23@$$QEAU23@@Z @ 0x180172F4C (--$_Emplace_reallocate@UProperty@CTreeDumpNodeData@@@-$vector@UProperty@CTreeDumpNodeData@@V-$al.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C3EC4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXXZ @ 0x1800D3924 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAXXZ.c)
 */

void __fastcall std::vector<CTreeDumpNodeData::Property>::_Change_array(char **a1, char *a2, __int64 a3, __int64 a4)
{
  char *v4; // rbx
  char *v9; // r15

  v4 = *a1;
  if ( *a1 )
  {
    v9 = a1[1];
    if ( v4 != v9 )
    {
      do
      {
        std::string::_Tidy_deallocate((__int64)(v4 + 32));
        std::string::_Tidy_deallocate((__int64)v4);
        v4 += 64;
      }
      while ( v4 != v9 );
      v4 = *a1;
    }
    std::_Deallocate<16,0>(v4, (a1[2] - v4) & 0xFFFFFFFFFFFFFFC0uLL);
  }
  a1[1] = &a2[64 * a3];
  a1[2] = &a2[64 * a4];
  *a1 = a2;
}
