/*
 * XREFs of ?EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ @ 0x18007AC8C
 * Callers:
 *     ?GetDrawListGeneratorNoRef@CPrimitiveGroup@@QEAAJPEAVCDrawingContext@@PEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x180015740 (-GetDrawListGeneratorNoRef@CPrimitiveGroup@@QEAAJPEAVCDrawingContext@@PEAPEAVCPrimitiveGroupDraw.c)
 *     ?GenerateDrawList@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800351B0 (-GenerateDrawList@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@.c)
 *     ?GetTextureMemoryLayoutData@CPrimitiveGroup@@UEBAJAEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x1801C4E70 (-GetTextureMemoryLayoutData@CPrimitiveGroup@@UEBAJAEBUD2D_SIZE_F@@AEAV-$vector@ULayoutData@CCont.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateNewGenerator@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x180079280 (-CreateNewGenerator@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z.c)
 *     ?ProcessHeatMapChanges@CPrimitiveGroup@@AEAAXXZ @ 0x18007ACE0 (-ProcessHeatMapChanges@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?CreateNewGeneratorForHeatMap@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x1801C4CBC (-CreateNewGeneratorForHeatMap@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z.c)
 */

__int64 __fastcall CPrimitiveGroup::EnsureDrawListGenerator(CPrimitiveGroup *this)
{
  unsigned int v2; // ebx
  struct CPrimitiveGroupDrawListGenerator **v3; // rdx
  signed int NewGenerator; // eax
  __int64 v5; // rcx
  signed int NewGeneratorForHeatMap; // eax
  __int64 v8; // rcx

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
