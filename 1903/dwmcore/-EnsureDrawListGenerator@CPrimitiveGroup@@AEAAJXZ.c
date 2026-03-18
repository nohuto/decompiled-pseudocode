/*
 * XREFs of ?EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ @ 0x1800888D0
 * Callers:
 *     ?GetDrawListGeneratorNoRef@CPrimitiveGroup@@QEAAJPEAVCDrawingContext@@PEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x180016D94 (-GetDrawListGeneratorNoRef@CPrimitiveGroup@@QEAAJPEAVCDrawingContext@@PEAPEAVCPrimitiveGroupDraw.c)
 *     ?GenerateDrawList@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800CE9E0 (-GenerateDrawList@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@.c)
 *     ?GetTextureMemoryLayoutData@CPrimitiveGroup@@UEBAJAEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x1801C6610 (-GetTextureMemoryLayoutData@CPrimitiveGroup@@UEBAJAEBUD2D_SIZE_F@@AEAV-$vector@ULayoutData@CCont.c)
 * Callees:
 *     ?ProcessHeatMapChanges@CPrimitiveGroup@@AEAAXXZ @ 0x180088924 (-ProcessHeatMapChanges@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?CreateNewGenerator@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x1800897E0 (-CreateNewGenerator@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateNewGeneratorForHeatMap@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x1801C645C (-CreateNewGeneratorForHeatMap@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z.c)
 */

__int64 __fastcall CPrimitiveGroup::EnsureDrawListGenerator(CPrimitiveGroup *this)
{
  unsigned int v2; // ebx
  struct CPrimitiveGroupDrawListGenerator **v3; // rdx
  int NewGenerator; // eax
  unsigned int v5; // ecx
  int NewGeneratorForHeatMap; // eax
  unsigned int v8; // ecx

  v2 = 0;
  CPrimitiveGroup::ProcessHeatMapChanges(this);
  v3 = (struct CPrimitiveGroupDrawListGenerator **)((char *)this + 160);
  if ( !*((_QWORD *)this + 20) )
  {
    if ( *((_BYTE *)this + 577) )
    {
      NewGeneratorForHeatMap = CPrimitiveGroup::CreateNewGeneratorForHeatMap(this, v3);
      v2 = NewGeneratorForHeatMap;
      if ( NewGeneratorForHeatMap < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, NewGeneratorForHeatMap, 0x296u, 0LL);
    }
    else
    {
      NewGenerator = CPrimitiveGroup::CreateNewGenerator(this, v3);
      v2 = NewGenerator;
      if ( NewGenerator < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, NewGenerator, 0x29Au, 0LL);
    }
  }
  return v2;
}
