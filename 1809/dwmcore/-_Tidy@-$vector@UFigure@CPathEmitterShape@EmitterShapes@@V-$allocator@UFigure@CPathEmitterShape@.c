/*
 * XREFs of ?_Tidy@?$vector@UFigure@CPathEmitterShape@EmitterShapes@@V?$allocator@UFigure@CPathEmitterShape@EmitterShapes@@@std@@@std@@AEAAXXZ @ 0x1801DCCFC
 * Callers:
 *     ??_ECPathEmitterShape@EmitterShapes@@UEAAPEAXI@Z @ 0x1801DC210 (--_ECPathEmitterShape@EmitterShapes@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180063B7C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@PEAVCDataSourceReader@@V?$allocator@PEAVCDataSourceReader@@@std@@@std@@AEAAXXZ @ 0x180154A6C (-_Tidy@-$vector@PEAVCDataSourceReader@@V-$allocator@PEAVCDataSourceReader@@@std@@@std@@AEAAXXZ.c)
 *     ?_Tidy@?$vector@MV?$allocator@M@std@@@std@@AEAAXXZ @ 0x180175DA8 (-_Tidy@-$vector@MV-$allocator@M@std@@@std@@AEAAXXZ.c)
 */

void __fastcall std::vector<EmitterShapes::CPathEmitterShape::Figure>::_Tidy(char **a1)
{
  char *v1; // rbx
  char *v3; // rsi

  v1 = *a1;
  if ( *a1 )
  {
    v3 = a1[1];
    if ( v1 != v3 )
    {
      do
      {
        std::vector<float>::_Tidy((__int64)(v1 + 24));
        std::vector<CDataSourceReader *>::_Tidy((__int64)v1);
        v1 += 56;
      }
      while ( v1 != v3 );
      v1 = *a1;
    }
    std::_Deallocate<16,0>(v1, 56 * ((a1[2] - v1) / 56));
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
}
