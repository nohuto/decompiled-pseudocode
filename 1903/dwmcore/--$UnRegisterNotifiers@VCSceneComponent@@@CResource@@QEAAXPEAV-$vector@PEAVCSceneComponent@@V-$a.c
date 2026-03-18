/*
 * XREFs of ??$UnRegisterNotifiers@VCSceneComponent@@@CResource@@QEAAXPEAV?$vector@PEAVCSceneComponent@@V?$allocator@PEAVCSceneComponent@@@std@@@std@@@Z @ 0x18019C4A0
 * Callers:
 *     ??1?$CTransform3DGroupGeneratedT@VCTransform3DGroup@@VCTransform3D@@@@MEAA@XZ @ 0x18019E05C (--1-$CTransform3DGroupGeneratedT@VCTransform3DGroup@@VCTransform3D@@@@MEAA@XZ.c)
 *     ?SetOrAppendChildren@?$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@AEAAJAEBV?$span@PEAVCSceneNode@@$0?0@gsl@@_N@Z @ 0x1801A2314 (-SetOrAppendChildren@-$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@AEAAJAEBV-$span@PEAVCS.c)
 *     ?SetOrAppendChildren@?$CTransform3DGroupGeneratedT@VCTransform3DGroup@@VCTransform3D@@@@AEAAJAEBV?$span@PEAVCTransform3D@@$0?0@gsl@@_N@Z @ 0x1801A23BC (-SetOrAppendChildren@-$CTransform3DGroupGeneratedT@VCTransform3DGroup@@VCTransform3D@@@@AEAAJAEB.c)
 *     ?SetOrAppendComponents@?$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@AEAAJAEBV?$span@PEAVCSceneComponent@@$0?0@gsl@@_N@Z @ 0x1801A2478 (-SetOrAppendComponents@-$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@AEAAJAEBV-$span@PEAV.c)
 *     ??1?$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@MEAA@XZ @ 0x1801F94CC (--1-$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@MEAA@XZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800B9DD4 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CResource::UnRegisterNotifiers<CSceneComponent>(CResource *this, __int64 a2)
{
  struct CResource **v2; // rbx
  __int64 v3; // rdi
  unsigned __int64 v6; // rsi

  v2 = *(struct CResource ***)a2;
  v3 = 0LL;
  v6 = (unsigned __int64)(*(_QWORD *)(a2 + 8) - *(_QWORD *)a2 + 7LL) >> 3;
  if ( *(_QWORD *)a2 > *(_QWORD *)(a2 + 8) )
    v6 = 0LL;
  if ( v6 )
  {
    do
    {
      CResource::UnRegisterNotifierInternal(this, *v2);
      ++v3;
      ++v2;
    }
    while ( v3 != v6 );
    v2 = *(struct CResource ***)a2;
  }
  *(_QWORD *)(a2 + 8) = v2;
}
