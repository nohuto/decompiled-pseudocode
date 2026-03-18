/*
 * XREFs of ?SetColorValue@DataSourceProxy@@MEAAJIMMMM@Z @ 0x1801983E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$SetProperty@U_D3DCOLORVALUE@@@DataSourcePropertySet@@QEAAJIPEBU_D3DCOLORVALUE@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1801976B4 (--$SetProperty@U_D3DCOLORVALUE@@@DataSourcePropertySet@@QEAAJIPEBU_D3DCOLORVALUE@@W4DCOMPOSITION.c)
 *     ?CheckAndReportError@DataSourceProxy@@AEAAJJ@Z @ 0x180197C88 (-CheckAndReportError@DataSourceProxy@@AEAAJJ@Z.c)
 *     ?InvalidateReadersAnimationSources@DataSourceProxy@@AEAAXI@Z @ 0x180197FA8 (-InvalidateReadersAnimationSources@DataSourceProxy@@AEAAXI@Z.c)
 */

__int64 __fastcall DataSourceProxy::SetColorValue(
        DataSourceProxy *this,
        int a2,
        float a3,
        float a4,
        unsigned int a5,
        float a6)
{
  int v8; // eax
  float v10[6]; // [rsp+20h] [rbp-18h] BYREF

  v10[3] = a6;
  v10[0] = a3;
  *(_QWORD *)&v10[1] = __PAIR64__(a5, LODWORD(a4));
  v8 = DataSourcePropertySet::SetProperty<_D3DCOLORVALUE>((_QWORD *)this + 8, a2, v10);
  if ( (int)DataSourceProxy::CheckAndReportError(this, v8) >= 0 )
    DataSourceProxy::InvalidateReadersAnimationSources(this, a2);
  return 0LL;
}
