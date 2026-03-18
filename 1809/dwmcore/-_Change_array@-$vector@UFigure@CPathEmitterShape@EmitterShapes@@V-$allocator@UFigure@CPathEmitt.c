/*
 * XREFs of ?_Change_array@?$vector@UFigure@CPathEmitterShape@EmitterShapes@@V?$allocator@UFigure@CPathEmitterShape@EmitterShapes@@@std@@@std@@AEAAXQEAUFigure@CPathEmitterShape@EmitterShapes@@_K1@Z @ 0x1801DCC44
 * Callers:
 *     ??$_Emplace_reallocate@AEBUFigure@CPathEmitterShape@EmitterShapes@@@?$vector@UFigure@CPathEmitterShape@EmitterShapes@@V?$allocator@UFigure@CPathEmitterShape@EmitterShapes@@@std@@@std@@QEAAPEAUFigure@CPathEmitterShape@EmitterShapes@@QEAU234@AEBU234@@Z @ 0x1801DBDAC (--$_Emplace_reallocate@AEBUFigure@CPathEmitterShape@EmitterShapes@@@-$vector@UFigure@CPathEmitte.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180063B7C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@PEAVCDataSourceReader@@V?$allocator@PEAVCDataSourceReader@@@std@@@std@@AEAAXXZ @ 0x180154A6C (-_Tidy@-$vector@PEAVCDataSourceReader@@V-$allocator@PEAVCDataSourceReader@@@std@@@std@@AEAAXXZ.c)
 *     ?_Tidy@?$vector@MV?$allocator@M@std@@@std@@AEAAXXZ @ 0x180175DA8 (-_Tidy@-$vector@MV-$allocator@M@std@@@std@@AEAAXXZ.c)
 */

char *__fastcall std::vector<EmitterShapes::CPathEmitterShape::Figure>::_Change_array(
        char **a1,
        char *a2,
        __int64 a3,
        __int64 a4)
{
  char *v4; // rbx
  char *v9; // rbp
  char *result; // rax

  v4 = *a1;
  if ( *a1 )
  {
    v9 = a1[1];
    if ( v4 != v9 )
    {
      do
      {
        std::vector<float>::_Tidy((__int64)(v4 + 24));
        std::vector<CDataSourceReader *>::_Tidy((__int64)v4);
        v4 += 56;
      }
      while ( v4 != v9 );
      v4 = *a1;
    }
    std::_Deallocate<16,0>(v4, 56 * ((a1[2] - v4) / 56));
  }
  *a1 = a2;
  a1[1] = &a2[56 * a3];
  result = &a2[56 * a4];
  a1[2] = result;
  return result;
}
