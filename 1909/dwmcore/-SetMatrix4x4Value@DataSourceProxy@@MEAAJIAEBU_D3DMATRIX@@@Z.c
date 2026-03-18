/*
 * XREFs of ?SetMatrix4x4Value@DataSourceProxy@@MEAAJIAEBU_D3DMATRIX@@@Z @ 0x180196BE0
 * Callers:
 *     <none>
 * Callees:
 *     ??$SetProperty@UD2DMatrix@@@DataSourcePropertySet@@QEAAJIPEBUD2DMatrix@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1801958A0 (--$SetProperty@UD2DMatrix@@@DataSourcePropertySet@@QEAAJIPEBUD2DMatrix@@W4DCOMPOSITION_EXPRESSIO.c)
 *     ?CheckAndReportError@DataSourceProxy@@AEAAJJ@Z @ 0x1801963C8 (-CheckAndReportError@DataSourceProxy@@AEAAJJ@Z.c)
 *     ?InvalidateReadersAnimationSources@DataSourceProxy@@AEAAXI@Z @ 0x1801966E8 (-InvalidateReadersAnimationSources@DataSourceProxy@@AEAAXI@Z.c)
 */

__int64 __fastcall DataSourceProxy::SetMatrix4x4Value(DataSourceProxy *this, int a2, const struct _D3DMATRIX *a3)
{
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  int v7; // eax
  _OWORD v9[4]; // [rsp+20h] [rbp-48h] BYREF

  v4 = *(_OWORD *)&a3->_21;
  v9[0] = *(_OWORD *)&a3->_11;
  v5 = *(_OWORD *)&a3->_31;
  v9[1] = v4;
  v6 = *(_OWORD *)&a3->_41;
  v9[2] = v5;
  v9[3] = v6;
  v7 = DataSourcePropertySet::SetProperty<D2DMatrix>((_QWORD *)this + 8, a2, v9);
  if ( (int)DataSourceProxy::CheckAndReportError(this, v7) >= 0 )
    DataSourceProxy::InvalidateReadersAnimationSources(this);
  return 0LL;
}
