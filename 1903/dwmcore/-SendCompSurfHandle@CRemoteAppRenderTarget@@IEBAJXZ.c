/*
 * XREFs of ?SendCompSurfHandle@CRemoteAppRenderTarget@@IEBAJXZ @ 0x1801A665C
 * Callers:
 *     ?EnsureRenderTarget@CRemoteAppRenderTarget@@IEAAJXZ @ 0x1801A57DC (-EnsureRenderTarget@CRemoteAppRenderTarget@@IEAAJXZ.c)
 *     ?SetFullRender@CRemoteAppRenderTarget@@UEAAXXZ @ 0x1801A66E0 (-SetFullRender@CRemoteAppRenderTarget@@UEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SendRemotingMetaData@CDisplayManager@@QEAAJAEBU_DWMIndirectMetaData@@@Z @ 0x18015A698 (-SendRemotingMetaData@CDisplayManager@@QEAAJAEBU_DWMIndirectMetaData@@@Z.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::SendCompSurfHandle(CRemoteAppRenderTarget *this)
{
  __int64 v1; // rdx
  unsigned int v2; // ebx
  __int64 v3; // rax
  signed int v4; // eax
  __int64 v5; // rcx
  _DWORD v7[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v8; // [rsp+38h] [rbp-30h]
  __int64 v9; // [rsp+40h] [rbp-28h]
  __int128 v10; // [rsp+48h] [rbp-20h]
  __int64 v11; // [rsp+58h] [rbp-10h]

  v1 = *((_QWORD *)this + 23);
  v2 = 0;
  if ( v1 )
  {
    v7[1] = 0;
    v11 = 0LL;
    v10 = 0LL;
    v7[0] = 6;
    v3 = *((_QWORD *)this + 35);
    v9 = v1;
    v8 = v3;
    v4 = CDisplayManager::SendRemotingMetaData(this, (const struct _DWMIndirectMetaData *)v7);
    v2 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x129u, 0LL);
  }
  return v2;
}
