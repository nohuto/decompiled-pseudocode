/*
 * XREFs of ??$_UIntegral_to_buff@DI@std@@YAPEADPEADI@Z @ 0x1801738D4
 * Callers:
 *     ?DumpBitmapRealization@CDebugTreeDumper@@AEAAJPEAVIBitmapRealization@@PEAX@Z @ 0x180173C88 (-DumpBitmapRealization@CDebugTreeDumper@@AEAAJPEAVIBitmapRealization@@PEAX@Z.c)
 *     ??$AddProperty@_N@CVisualTreeDumpContext@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z @ 0x1801C0838 (--$AddProperty@_N@CVisualTreeDumpContext@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V-$allo.c)
 *     ?DebugDump@CEffectBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x1801C9B60 (-DebugDump@CEffectBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_UIntegral_to_buff<char,unsigned int>(__int64 a1, unsigned int a2)
{
  do
  {
    *(_BYTE *)--a1 = a2 % 0xA + 48;
    a2 /= 0xAu;
  }
  while ( a2 );
  return a1;
}
