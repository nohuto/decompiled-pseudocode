/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x18000C788
 * Callers:
 *     ?_FilterTile@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x18000A0F4 (-_FilterTile@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIUnifiedTile@Uni.c)
 *     ?_FilterGameConfig@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@Z @ 0x18000AA50 (-_FilterGameConfig@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV.c)
 * Callees:
 *     ?_Xlength@?$vector@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@std@@@std@@CAXXZ @ 0x18000D00C (-_Xlength@-$vector@V-$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@UIGameListEntry_Private@5678@VCFTMCrossProcServer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800116A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGam_ea_1800116A0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180042DE4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800431A0 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer> const &>(
        unsigned __int64 *a1,
        _QWORD *a2,
        __int64 *a3)
{
  _QWORD *v4; // rbx
  __int64 v6; // r12
  __int64 v7; // rax
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  size_t v12; // rdx
  size_t v13; // rcx
  void *v14; // rax
  unsigned __int64 v15; // rsi
  void *v16; // rax
  __int64 *v17; // r8
  __int64 v18; // rdx
  signed __int64 v19; // rax
  signed __int64 v20; // rtt
  _QWORD *v21; // rdx
  _QWORD *v22; // rcx
  unsigned __int64 v23; // r9
  unsigned __int64 v24; // r8
  __int64 v25; // r8
  __int64 *v26; // rbx
  __int64 *v27; // r15
  __int64 v28; // rcx
  const struct std::nothrow_t *v29; // rdx
  __int64 v30; // rcx
  __int64 result; // rax
  __int64 v32; // rcx
  __int64 v33; // [rsp+20h] [rbp-48h]
  _QWORD *v34; // [rsp+28h] [rbp-40h]
  unsigned __int64 v35; // [rsp+78h] [rbp+10h]
  unsigned __int64 v36; // [rsp+88h] [rbp+20h]

  v4 = a2;
  v6 = (__int64)((__int64)a2 - *a1) >> 3;
  v7 = (__int64)(a1[1] - *a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>::_Xlength();
  v8 = v7 + 1;
  v9 = (__int64)(a1[2] - *a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v9 + v10;
    if ( v9 + v10 < v8 )
      v11 = v8;
  }
  else
  {
    v11 = v7 + 1;
  }
  v36 = v11;
  v33 = 8 * v11;
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
  v34 = v17 + 1;
  try
  {
    v18 = *a3;
    *v17 = *a3;
    if ( v18 )
    {
      v19 = *(_QWORD *)(v18 + 136);
      while ( v19 >= 0 )
      {
        v20 = v19;
        v19 = _InterlockedCompareExchange64((volatile signed __int64 *)(v18 + 136), v19 + 1, v19);
        if ( v20 == v19 )
          goto LABEL_23;
      }
      _InterlockedIncrement((volatile signed __int32 *)(2 * v19 + 16));
    }
LABEL_23:
    v35 = v15 + 8 * v6;
    v21 = (_QWORD *)a1[1];
    v22 = (_QWORD *)*a1;
    if ( v4 == v21 )
    {
      if ( v22 != v21 )
      {
        v23 = v15 - (_QWORD)v22;
        do
        {
          *(_QWORD *)((char *)v22 + v23) = 0LL;
          if ( (_QWORD *)((char *)v22 + v23) != v22 )
          {
            *(_QWORD *)((char *)v22 + v23) = *v22;
            *v22 = 0LL;
          }
          ++v22;
        }
        while ( v22 != v21 );
      }
    }
    else
    {
      if ( v22 != v4 )
      {
        v24 = v15 - (_QWORD)v22;
        do
        {
          *(_QWORD *)((char *)v22 + v24) = 0LL;
          if ( (_QWORD *)((char *)v22 + v24) != v22 )
          {
            *(_QWORD *)((char *)v22 + v24) = *v22;
            *v22 = 0LL;
          }
          ++v22;
        }
        while ( v22 != v4 );
        v21 = (_QWORD *)a1[1];
      }
      v35 = v15;
      if ( v4 != v21 )
      {
        v25 = v15 - (_QWORD)v4 + 8 * (v6 + 1);
        do
        {
          v22 = (_QWORD *)((char *)v4 + v25);
          *(_QWORD *)((char *)v4 + v25) = 0LL;
          if ( (_QWORD *)((char *)v4 + v25) != v4 )
          {
            *v22 = *v4;
            *v4 = 0LL;
          }
          ++v4;
        }
        while ( v4 != v21 );
      }
    }
    v26 = (__int64 *)*a1;
    if ( *a1 )
    {
      v27 = (__int64 *)a1[1];
      if ( v26 != v27 )
      {
        do
        {
          v28 = *v26;
          if ( *v26 )
          {
            *v26 = 0LL;
            Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(v28);
          }
          ++v26;
        }
        while ( v26 != v27 );
        v26 = (__int64 *)*a1;
      }
      v29 = (const struct std::nothrow_t *)((a1[2] - (_QWORD)v26) & 0xFFFFFFFFFFFFFFF8uLL);
      if ( (unsigned __int64)v29 >= 0x1000 )
      {
        v29 = (const struct std::nothrow_t *)((char *)v29 + 39);
        v30 = *(v26 - 1);
        if ( (unsigned __int64)v26 - v30 - 8 > 0x1F )
        {
          _o__invalid_parameter_noinfo_noreturn(v30, v29);
          __debugbreak();
        }
        v26 = (__int64 *)*(v26 - 1);
      }
      operator delete(v26, v29);
    }
    *a1 = v15;
    a1[1] = v15 + 8 * v8;
    a1[2] = v15 + v33;
    result = *a1 + 8 * v6;
  }
  catch ( ... )
  {
    std::vector<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>::_Destroy(
      v22,
      v35,
      v34);
    std::allocator<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>::deallocate(
      v32,
      v15,
      v36);
    throw;
  }
  return result;
}
