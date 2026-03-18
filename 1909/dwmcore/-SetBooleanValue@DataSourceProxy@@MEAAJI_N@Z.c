/*
 * XREFs of ?SetBooleanValue@DataSourceProxy@@MEAAJI_N@Z @ 0x180196AD0
 * Callers:
 *     <none>
 * Callees:
 *     ??$SetProperty@_N@DataSourcePropertySet@@QEAAJIPEB_NW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180195EDC (--$SetProperty@_N@DataSourcePropertySet@@QEAAJIPEB_NW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?CheckAndReportError@DataSourceProxy@@AEAAJJ@Z @ 0x1801963C8 (-CheckAndReportError@DataSourceProxy@@AEAAJJ@Z.c)
 *     ?InvalidateReadersAnimationSources@DataSourceProxy@@AEAAXI@Z @ 0x1801966E8 (-InvalidateReadersAnimationSources@DataSourceProxy@@AEAAXI@Z.c)
 */

__int64 __fastcall DataSourceProxy::SetBooleanValue(DataSourceProxy *this, int a2, char a3)
{
  int v4; // eax
  char v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = a3;
  v4 = DataSourcePropertySet::SetProperty<bool>((_QWORD *)this + 8, a2, &v6);
  if ( (int)DataSourceProxy::CheckAndReportError(this, v4) >= 0 )
    DataSourceProxy::InvalidateReadersAnimationSources(this);
  return 0LL;
}
