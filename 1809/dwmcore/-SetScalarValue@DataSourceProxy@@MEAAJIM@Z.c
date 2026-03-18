/*
 * XREFs of ?SetScalarValue@DataSourceProxy@@MEAAJIM@Z @ 0x180170110
 * Callers:
 *     <none>
 * Callees:
 *     ??$SetProperty@M@DataSourcePropertySet@@QEAAJIPEBMW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18016E4C4 (--$SetProperty@M@DataSourcePropertySet@@QEAAJIPEBMW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?CheckAndReportError@DataSourceProxy@@AEAAJJ@Z @ 0x18016F558 (-CheckAndReportError@DataSourceProxy@@AEAAJJ@Z.c)
 *     ?InvalidateReadersAnimationSources@DataSourceProxy@@AEAAXI@Z @ 0x18016FB28 (-InvalidateReadersAnimationSources@DataSourceProxy@@AEAAXI@Z.c)
 */

__int64 __fastcall DataSourceProxy::SetScalarValue(DataSourceProxy *this, int a2, float a3)
{
  int v5; // eax
  float v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = a3;
  v5 = DataSourcePropertySet::SetProperty<float>((__int64)this + 64, a2, &v7);
  if ( (int)DataSourceProxy::CheckAndReportError(this, v5) >= 0 )
    DataSourceProxy::InvalidateReadersAnimationSources(this, a2);
  return 0LL;
}
