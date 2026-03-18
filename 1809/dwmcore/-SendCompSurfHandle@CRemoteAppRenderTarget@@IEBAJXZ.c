/*
 * XREFs of ?SendCompSurfHandle@CRemoteAppRenderTarget@@IEBAJXZ @ 0x180160354
 * Callers:
 *     ?EnsureRenderTarget@CRemoteAppRenderTarget@@IEAAJXZ @ 0x18015F568 (-EnsureRenderTarget@CRemoteAppRenderTarget@@IEAAJXZ.c)
 *     ?SetFullRender@CRemoteAppRenderTarget@@UEAAXXZ @ 0x1801603E0 (-SetFullRender@CRemoteAppRenderTarget@@UEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     ?SendRemotingMetaData@CDisplayManager@@QEAAJAEBU_DWMIndirectMetaData@@@Z @ 0x1801E0FA4 (-SendRemotingMetaData@CDisplayManager@@QEAAJAEBU_DWMIndirectMetaData@@@Z.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::SendCompSurfHandle(CRemoteAppRenderTarget *this)
{
  __int64 v1; // rsi
  unsigned int v2; // ebx
  CDisplayManager *v4; // rcx
  int v5; // eax
  __int64 v6; // rcx
  int v8; // [rsp+30h] [rbp-38h] BYREF
  __int64 v9; // [rsp+38h] [rbp-30h]
  __int64 v10; // [rsp+40h] [rbp-28h]

  v1 = *((_QWORD *)this + 23);
  v2 = 0;
  if ( v1 )
  {
    memset_0(&v8, 0, 0x30uLL);
    v9 = *((_QWORD *)this + 35);
    v8 = 6;
    v10 = v1;
    v5 = CDisplayManager::SendRemotingMetaData(v4, (const struct _DWMIndirectMetaData *)&v8);
    v2 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x129u);
  }
  return v2;
}
