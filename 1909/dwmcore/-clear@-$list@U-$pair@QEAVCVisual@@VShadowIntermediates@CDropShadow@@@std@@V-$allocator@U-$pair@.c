/*
 * XREFs of ?clear@?$list@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@V?$allocator@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@2@@std@@QEAAXXZ @ 0x1800DCD18
 * Callers:
 *     ??1CDropShadow@@UEAA@XZ @ 0x1800DCC20 (--1CDropShadow@@UEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C3EC4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1ShadowIntermediates@CDropShadow@@QEAA@XZ @ 0x1800DCCD8 (--1ShadowIntermediates@CDropShadow@@QEAA@XZ.c)
 */

void __fastcall std::list<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>::clear(__int64 a1)
{
  struct CResource **v2; // rsi
  struct CResource *v3; // rbx

  v2 = **(struct CResource ****)a1;
  **(_QWORD **)a1 = *(_QWORD *)a1;
  *(_QWORD *)(*(_QWORD *)a1 + 8LL) = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( v2 != *(struct CResource ***)a1 )
  {
    do
    {
      v3 = *v2;
      CDropShadow::ShadowIntermediates::~ShadowIntermediates(v2 + 3);
      std::_Deallocate<16,0>(v2, 0x58uLL);
      v2 = (struct CResource **)v3;
    }
    while ( v3 != *(struct CResource **)a1 );
  }
}
