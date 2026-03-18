/*
 * XREFs of ?clear@?$list@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@V?$allocator@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@2@@std@@QEAAXXZ @ 0x1800E4080
 * Callers:
 *     ??1CDropShadow@@UEAA@XZ @ 0x1800E35E0 (--1CDropShadow@@UEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180063B7C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1ShadowIntermediates@CDropShadow@@QEAA@XZ @ 0x1800E40C8 (--1ShadowIntermediates@CDropShadow@@QEAA@XZ.c)
 */

void __fastcall std::list<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>::clear(__int64 a1)
{
  _QWORD *v2; // rsi
  _QWORD *v3; // rbx

  v2 = **(_QWORD ***)a1;
  **(_QWORD **)a1 = *(_QWORD *)a1;
  *(_QWORD *)(*(_QWORD *)a1 + 8LL) = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( v2 != *(_QWORD **)a1 )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      CDropShadow::ShadowIntermediates::~ShadowIntermediates((CDropShadow::ShadowIntermediates *)(v2 + 3));
      std::_Deallocate<16,0>(v2, 0x58uLL);
      v2 = v3;
    }
    while ( v3 != *(_QWORD **)a1 );
  }
}
