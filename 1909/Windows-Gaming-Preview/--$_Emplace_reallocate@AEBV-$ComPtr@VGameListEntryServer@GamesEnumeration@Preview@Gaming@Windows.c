/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x18000C744
 * Callers:
 *     ?_FilterTile@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x18000A0F4 (-_FilterTile@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIUnifiedTile@Uni.c)
 *     ?_FilterGameConfig@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@Z @ 0x18000AA24 (-_FilterGameConfig@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV.c)
 * Callees:
 *     ?_Xlength@?$vector@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@std@@@std@@CAXXZ @ 0x18000D04C (-_Xlength@-$vector@V-$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@UIGameListEntry_Private@5678@VCFTMCrossProcServer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800114A0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGame_ea_1800114A0.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@UIGameListEntry_Private@5678@VCFTMCrossProcServer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180011890 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGam_ea_180011890.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180042F64 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180043320 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer> const &>(
        unsigned __int64 *a1,
        _QWORD *a2,
        __int64 *a3)
{
  _QWORD *v4; // rbx
  __int64 v6; // r13
  __int64 v7; // rax
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  size_t v12; // rdx
  size_t v13; // rcx
  void *v14; // rax
  unsigned __int64 v15; // rdi
  void *v16; // rax
  __int64 *v17; // r15
  __int64 v18; // rcx
  _QWORD *v19; // rdx
  _QWORD *v20; // rcx
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // r8
  __int64 v23; // r8
  __int64 *v24; // rbx
  __int64 *v25; // r15
  __int64 v26; // rcx
  const struct std::nothrow_t *v27; // rdx
  __int64 v28; // rcx
  __int64 result; // rax
  __int64 v30; // rcx
  __int64 v31; // [rsp+20h] [rbp-48h]
  __int64 v32; // [rsp+28h] [rbp-40h]
  _QWORD *v33; // [rsp+30h] [rbp-38h]
  unsigned __int64 v34; // [rsp+78h] [rbp+10h]
  unsigned __int64 v35; // [rsp+88h] [rbp+20h]

  v4 = a2;
  v6 = (__int64)((__int64)a2 - *a1) >> 3;
  v7 = (__int64)(a1[1] - *a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>::_Xlength();
  v8 = v7 + 1;
  v31 = v7 + 1;
  v9 = (__int64)(a1[2] - *a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  else
  {
    v11 = v7 + 1;
  }
  v35 = v11;
  v32 = 8 * v11;
  v12 = 8 * v11;
  if ( v11 > 0x1FFFFFFFFFFFFFFFLL )
    v12 = -1LL;
  if ( v12 < 0x1000 )
  {
    if ( v12 )
    {
      v16 = operator new(v12);
      v15 = (unsigned __int64)v16;
    }
    else
    {
      v15 = 0LL;
    }
  }
  else
  {
    v13 = v12 + 39;
    if ( v12 + 39 < v12 )
      v13 = -1LL;
    v14 = operator new(v13);
    if ( !v14 )
    {
      ((void (*)(void))_o__invalid_parameter_noinfo_noreturn)();
      __debugbreak();
    }
    v15 = ((unsigned __int64)v14 + 39) & 0xFFFFFFFFFFFFFFE0uLL;
    *(_QWORD *)(v15 - 8) = v14;
  }
  v17 = (__int64 *)(v15 + 8 * v6);
  v33 = v17 + 1;
  try
  {
    v18 = *a3;
    *v17 = *a3;
    if ( v18 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::AddRef(v18);
    v34 = v15 + 8 * v6;
    v19 = (_QWORD *)a1[1];
    v20 = (_QWORD *)*a1;
    if ( v4 == v19 )
    {
      if ( v20 != v19 )
      {
        v21 = v15 - (_QWORD)v20;
        do
        {
          *(_QWORD *)((char *)v20 + v21) = 0LL;
          if ( (_QWORD *)((char *)v20 + v21) != v20 )
          {
            *(_QWORD *)((char *)v20 + v21) = *v20;
            *v20 = 0LL;
          }
          ++v20;
        }
        while ( v20 != v19 );
      }
    }
    else
    {
      if ( v20 != v4 )
      {
        v22 = v15 - (_QWORD)v20;
        do
        {
          *(_QWORD *)((char *)v20 + v22) = 0LL;
          if ( (_QWORD *)((char *)v20 + v22) != v20 )
          {
            *(_QWORD *)((char *)v20 + v22) = *v20;
            *v20 = 0LL;
          }
          ++v20;
        }
        while ( v20 != v4 );
        v19 = (_QWORD *)a1[1];
      }
      v34 = v15;
      if ( v4 != v19 )
      {
        v23 = v15 - (_QWORD)v4 + 8 * (v6 + 1);
        do
        {
          v20 = (_QWORD *)((char *)v4 + v23);
          *(_QWORD *)((char *)v4 + v23) = 0LL;
          if ( (_QWORD *)((char *)v4 + v23) != v4 )
          {
            *v20 = *v4;
            *v4 = 0LL;
          }
          ++v4;
        }
        while ( v4 != v19 );
      }
    }
    v24 = (__int64 *)*a1;
    if ( *a1 )
    {
      v25 = (__int64 *)a1[1];
      if ( v24 != v25 )
      {
        do
        {
          v26 = *v24;
          if ( *v24 )
          {
            *v24 = 0LL;
            Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(v26);
          }
          ++v24;
        }
        while ( v24 != v25 );
        v24 = (__int64 *)*a1;
      }
      v27 = (const struct std::nothrow_t *)((a1[2] - (_QWORD)v24) & 0xFFFFFFFFFFFFFFF8uLL);
      if ( (unsigned __int64)v27 >= 0x1000 )
      {
        v27 = (const struct std::nothrow_t *)((char *)v27 + 39);
        v28 = *(v24 - 1);
        if ( (unsigned __int64)v24 - v28 - 8 > 0x1F )
        {
          _o__invalid_parameter_noinfo_noreturn(v28, v27);
          __debugbreak();
        }
        v24 = (__int64 *)*(v24 - 1);
      }
      operator delete(v24, v27);
    }
    *a1 = v15;
    a1[1] = v15 + 8 * v31;
    a1[2] = v15 + v32;
    result = *a1 + 8 * v6;
  }
  catch ( ... )
  {
    std::vector<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>::_Destroy(
      v20,
      v34,
      v33);
    std::allocator<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>::deallocate(
      v30,
      v15,
      v35);
    throw;
  }
  return result;
}
