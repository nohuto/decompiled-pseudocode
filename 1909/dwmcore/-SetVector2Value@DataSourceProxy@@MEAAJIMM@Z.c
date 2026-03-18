/*
 * XREFs of ?SetVector2Value@DataSourceProxy@@MEAAJIMM@Z @ 0x180196D10
 * Callers:
 *     <none>
 * Callees:
 *     ??$SetProperty@UD2DVector2@@@DataSourcePropertySet@@QEAAJIPEBUD2DVector2@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180195A68 (--$SetProperty@UD2DVector2@@@DataSourcePropertySet@@QEAAJIPEBUD2DVector2@@W4DCOMPOSITION_EXPRESS.c)
 *     ?CheckAndReportError@DataSourceProxy@@AEAAJJ@Z @ 0x1801963C8 (-CheckAndReportError@DataSourceProxy@@AEAAJJ@Z.c)
 *     ?InvalidateReadersAnimationSources@DataSourceProxy@@AEAAXI@Z @ 0x1801966E8 (-InvalidateReadersAnimationSources@DataSourceProxy@@AEAAXI@Z.c)
 */

__int64 __fastcall DataSourceProxy::SetVector2Value(DataSourceProxy *this, int a2, float a3, float a4)
{
  int v5; // eax
  unsigned __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = __PAIR64__(LODWORD(a4), LODWORD(a3));
  v5 = DataSourcePropertySet::SetProperty<D2DVector2>((_QWORD *)this + 8, a2, &v7);
  if ( (int)DataSourceProxy::CheckAndReportError(this, v5) >= 0 )
    DataSourceProxy::InvalidateReadersAnimationSources(this);
  return 0LL;
}
