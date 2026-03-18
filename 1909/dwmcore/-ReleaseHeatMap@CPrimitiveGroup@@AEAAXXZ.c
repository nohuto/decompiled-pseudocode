/*
 * XREFs of ?ReleaseHeatMap@CPrimitiveGroup@@AEAAXXZ @ 0x1800C6C48
 * Callers:
 *     ?ProcessHeatMapChanges@CPrimitiveGroup@@AEAAXXZ @ 0x18007ACE0 (-ProcessHeatMapChanges@CPrimitiveGroup@@AEAAXXZ.c)
 *     ??1CPrimitiveGroup@@MEAA@XZ @ 0x1800C6A70 (--1CPrimitiveGroup@@MEAA@XZ.c)
 *     ?BuildHeatMap@CPrimitiveGroup@@AEAAJXZ @ 0x1801C4310 (-BuildHeatMap@CPrimitiveGroup@@AEAAJXZ.c)
 * Callees:
 *     ??$ReleaseInterface@VIRenderTargetBitmap@@@@YAXAEAPEAVIRenderTargetBitmap@@@Z @ 0x18002AC5C (--$ReleaseInterface@VIRenderTargetBitmap@@@@YAXAEAPEAVIRenderTargetBitmap@@@Z.c)
 *     ?ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z @ 0x18007CF94 (-ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z.c)
 */

void __fastcall CPrimitiveGroup::ReleaseHeatMap(CPrimitiveGroup *this)
{
  CPrimitiveGroup::ReleasePrimitiveCaches(this, 1);
  ReleaseInterface<IRenderTargetBitmap>((__int64 *)this + 84);
  ReleaseInterface<IRenderTargetBitmap>((__int64 *)this + 85);
}
