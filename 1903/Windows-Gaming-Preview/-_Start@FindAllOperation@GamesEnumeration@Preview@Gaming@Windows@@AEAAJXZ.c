/*
 * XREFs of ?_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x1800099D4
 * Callers:
 *     ?RuntimeClassInitialize@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIUnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@PEAUIGameListChangedEventHandler@2345@PEAUHSTRING__@@@Z @ 0x180009610 (-RuntimeClassInitialize@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIUnif.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031DC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180003914 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 *     ?_FilterTile@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x18000A0F4 (-_FilterTile@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIUnifiedTile@Uni.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_GameConfigStoreGameListEntries@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18000D180 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_GameConfigStoreGameListEntri.c)
 *     ??$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x18000EE9C (--$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foun.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x180010C80 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180011224 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?IsUserPinnedTile@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@PEAE@Z @ 0x180011868 (-IsUserPinnedTile@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUIUnifiedTile@UnifiedTile@Shell.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180011918 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateGameConfigStoreClientIfNeeded@@YAJAEAV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@@Z @ 0x180015420 (-CreateGameConfigStoreClientIfNeeded@@YAJAEAV-$shared_ptr@UIGameConfigStore@ExecutionModel@@@std.c)
 *     ?DoWorkOnGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@$$QEAV?$function@$$A6AJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@Z@std@@@Z @ 0x18001568C (-DoWorkOnGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@$$QEAV-$function@$$A6AJU_GUID@.c)
 *     ?GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z @ 0x18003D184 (-GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z.c)
 *     ?CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z @ 0x18003D300 (-CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z.c)
 *     __security_check_cookie @ 0x1800426D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180044260 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::_Start(
        Windows::Gaming::Preview::GamesEnumeration::FindAllOperation *this,
        __int64 a2)
{
  int CallingProcessHandle; // eax
  void *v4; // rdx
  bool *v5; // r9
  unsigned int v6; // ebx
  __int64 v7; // r9
  __int64 v8; // rdx
  int v9; // eax
  int v10; // eax
  __int64 v11; // rdx
  int v12; // eax
  int v13; // eax
  __int64 v14; // rdx
  int v15; // ecx
  struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *v16; // rcx
  int v17; // eax
  unsigned int v18; // ebx
  unsigned int v19; // esi
  int v20; // eax
  struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *v21; // rcx
  int v22; // eax
  struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *v23; // rcx
  __int64 v24; // rbx
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // rcx
  int v28; // ecx
  unsigned __int8 *v29; // r8
  struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *v30; // rcx
  int v31; // eax
  unsigned int v32; // ebx
  int v33; // esi
  int IsUserPinnedTile; // eax
  wil::details::in1diag3 *v35; // rcx
  __int64 v36; // rdx
  struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *v37; // rcx
  int v38; // eax
  struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *v39; // rcx
  wil::details::in1diag3 *v40; // rcx
  wil::details_abi *v41; // rcx
  struct wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  struct wil::details_abi::ThreadLocalData *v43; // rsi
  int GameConfigStoreClientIfNeeded; // eax
  int v45; // ebx
  unsigned __int64 v46; // r9
  __int64 v47; // rdx
  struct wil::ThreadErrorContext *v48; // r8
  _QWORD *v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // rcx
  const struct DiagnosticsInfo *v54; // [rsp+28h] [rbp-E0h]
  unsigned __int16 v55[4]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v56; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v57; // [rsp+48h] [rbp-C0h] BYREF
  char *v58; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v59; // [rsp+58h] [rbp-B0h]
  __int64 v60; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v61; // [rsp+68h] [rbp-A0h]
  __int64 v62; // [rsp+70h] [rbp-98h] BYREF
  char **v63; // [rsp+78h] [rbp-90h]
  int v64; // [rsp+80h] [rbp-88h]
  struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *v65; // [rsp+88h] [rbp-80h] BYREF
  __int64 v66; // [rsp+90h] [rbp-78h]
  unsigned int v67; // [rsp+98h] [rbp-70h] BYREF
  char **v68; // [rsp+A0h] [rbp-68h]
  int v69; // [rsp+A8h] [rbp-60h]
  struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *v70; // [rsp+B0h] [rbp-58h] BYREF
  int v71; // [rsp+B8h] [rbp-50h] BYREF
  __int16 v72; // [rsp+BCh] [rbp-4Ch]
  HANDLE hObject; // [rsp+C0h] [rbp-48h] BYREF
  struct wil::details_abi::ThreadLocalData *v74; // [rsp+C8h] [rbp-40h] BYREF
  int v75; // [rsp+D0h] [rbp-38h]
  int v76; // [rsp+D4h] [rbp-34h]
  unsigned int v77[2]; // [rsp+D8h] [rbp-30h] BYREF
  const char *v78; // [rsp+E0h] [rbp-28h]
  __int64 v79; // [rsp+E8h] [rbp-20h]
  __int16 v80; // [rsp+F0h] [rbp-18h]
  __int64 v81; // [rsp+F8h] [rbp-10h]
  _QWORD v82[7]; // [rsp+108h] [rbp+0h] BYREF
  _QWORD *v83; // [rsp+140h] [rbp+38h]
  wil::details::in1diag3 *retaddr; // [rsp+180h] [rbp+78h]

  v81 = -2LL;
  hObject = 0LL;
  CallingProcessHandle = CallerIdentity::GetCallingProcessHandle(this, a2, &hObject);
  v6 = CallingProcessHandle;
  if ( CallingProcessHandle < 0 )
  {
    v7 = (unsigned int)CallingProcessHandle;
    v8 = 93LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)v7);
    goto LABEL_91;
  }
  v9 = CallerIdentity::CheckCapabilityFromProcessHandle(
         (CallerIdentity *)hObject,
         v4,
         (unsigned __int16 *)((char *)v55 + 1),
         v5);
  v6 = v9;
  if ( v9 < 0 )
  {
    v7 = (unsigned int)v9;
    v8 = 97LL;
    goto LABEL_7;
  }
  if ( !HIBYTE(v55[0]) )
  {
    v6 = -2147024891;
    v7 = 2147942405LL;
    v8 = 98LL;
    goto LABEL_7;
  }
  v60 = 0LL;
  v10 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 14) + 80LL))(*((_QWORD *)this + 14), &v60);
  v6 = v10;
  if ( v10 < 0 )
  {
    v11 = 102LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_89;
  }
  v10 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncAction *>(v60);
  v6 = v10;
  if ( v10 < 0 )
  {
    v11 = 103LL;
    goto LABEL_12;
  }
  v57 = 0LL;
  v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64 *))(**((_QWORD **)this + 14) + 56LL))(
          *((_QWORD *)this + 14),
          3LL,
          0LL,
          &v57);
  v6 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6A,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_87;
  }
  v56 = 0LL;
  v13 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v57 + 56LL))(v57, &v56);
  v6 = v13;
  if ( v13 < 0 )
  {
    v14 = 109LL;
LABEL_44:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)(unsigned int)v13);
    goto LABEL_85;
  }
  v66 = v56;
  v68 = &v58;
  v69 = 0;
  v70 = 0LL;
  v15 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v56 + 56LL))(v56, &v67);
  *(_DWORD *)v68 = v15;
  if ( v15 >= 0 && v67 )
  {
    v16 = v70;
    if ( v70 )
    {
      v70 = 0LL;
      (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *))(*(_QWORD *)v16 + 16LL))(v16);
    }
    v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile **))(*(_QWORD *)v66 + 48LL))(
            v66,
            0LL,
            &v70);
    *(_DWORD *)v68 = v17;
  }
  v18 = 0;
  v19 = v67;
  while ( *(int *)v68 >= 0 && v18 != v19 )
  {
    v20 = Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::_FilterTile(this, v70);
    if ( v20 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x72,
        (unsigned int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
        (const char *)(unsigned int)v20,
        (int)v54);
    ++v18;
    if ( *(int *)v68 >= 0 && v18 < v67 )
    {
      v21 = v70;
      if ( v70 )
      {
        v70 = 0LL;
        (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *))(*(_QWORD *)v21 + 16LL))(v21);
      }
      v22 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile **))(*(_QWORD *)v66 + 48LL))(
              v66,
              v18,
              &v70);
      *(_DWORD *)v68 = v22;
    }
  }
  v23 = v70;
  if ( v70 )
  {
    v70 = 0LL;
    (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *))(*(_QWORD *)v23 + 16LL))(v23);
  }
  if ( (int)v58 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x74,
      (unsigned int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)(unsigned int)v58,
      (int)v54);
  v24 = *((_QWORD *)this + 14);
  v25 = v57;
  if ( v57 )
  {
    v57 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  }
  v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v24 + 56LL))(v24, 0LL, 0LL, &v57);
  v6 = v13;
  if ( v13 < 0 )
  {
    v14 = 119LL;
    goto LABEL_44;
  }
  v26 = v57;
  v27 = v56;
  if ( v56 )
  {
    v56 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  }
  v13 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v26 + 56LL))(v26, &v56);
  v6 = v13;
  if ( v13 < 0 )
  {
    v14 = 120LL;
    goto LABEL_44;
  }
  v61 = v56;
  v63 = &v58;
  v64 = 0;
  v65 = 0LL;
  v28 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v56 + 56LL))(v56, &v62);
  *(_DWORD *)v63 = v28;
  if ( v28 >= 0 && (_DWORD)v62 )
  {
    v30 = v65;
    if ( v65 )
    {
      v65 = 0LL;
      (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *))(*(_QWORD *)v30 + 16LL))(v30);
    }
    v31 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile **))(*(_QWORD *)v61 + 48LL))(
            v61,
            0LL,
            &v65);
    *(_DWORD *)v63 = v31;
  }
  v32 = 0;
  v33 = v62;
  while ( *(int *)v63 >= 0 && v32 != v33 )
  {
    v59 = 0LL;
    LOBYTE(v55[0]) = 0;
    IsUserPinnedTile = Windows::Gaming::Preview::GamesEnumeration::IsUserPinnedTile(
                         v65,
                         (struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *)v55,
                         v29);
    v35 = retaddr;
    if ( IsUserPinnedTile >= 0 )
    {
      if ( !LOBYTE(v55[0]) )
        goto LABEL_59;
      IsUserPinnedTile = Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::_FilterTile(this, v65);
      v35 = retaddr;
      if ( IsUserPinnedTile >= 0 )
        goto LABEL_59;
      v36 = 129LL;
    }
    else
    {
      v36 = 126LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v35,
      (void *)v36,
      (unsigned int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)(unsigned int)IsUserPinnedTile,
      (int)v54);
LABEL_59:
    ++v32;
    if ( *(int *)v63 >= 0 && v32 < (unsigned int)v62 )
    {
      v37 = v65;
      if ( v65 )
      {
        v65 = 0LL;
        (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *))(*(_QWORD *)v37 + 16LL))(v37);
      }
      v38 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile **))(*(_QWORD *)v61 + 48LL))(
              v61,
              v32,
              &v65);
      *(_DWORD *)v63 = v38;
    }
  }
  v39 = v65;
  if ( v65 )
  {
    v65 = 0LL;
    (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *))(*(_QWORD *)v39 + 16LL))(v39);
  }
  v40 = retaddr;
  if ( (int)v58 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x84,
      (unsigned int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)(unsigned int)v58,
      (int)v54);
  *(_QWORD *)v77 = retaddr;
  v78 = "onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp";
  v79 = 0LL;
  v80 = 135;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_GameConfigStoreGameListEntries>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_GameConfigStoreGameListEntries>::GetCachedFeatureEnabledState(v40);
  LODWORD(v59) = 0;
  BYTE4(v59) = 3;
  v71 = 0;
  v72 = WORD2(v59);
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_GameConfigStoreGameListEntries>::GetFeaturePropertyCache'::`2'::data,
    11973136LL,
    &v71,
    3LL);
  LOBYTE(v41) = 1;
  ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(v41);
  v43 = ThreadLocalDataCache;
  v74 = ThreadLocalDataCache;
  if ( ThreadLocalDataCache )
  {
    v76 = *((_DWORD *)ThreadLocalDataCache + 4);
    v75 = **((_DWORD **)ThreadLocalDataCache + 1);
    *((_DWORD *)ThreadLocalDataCache + 4) = v75;
    v43 = v74;
  }
  GameConfigStoreClientIfNeeded = CreateGameConfigStoreClientIfNeeded((char *)this + 216);
  v45 = GameConfigStoreClientIfNeeded;
  if ( GameConfigStoreClientIfNeeded < 0 )
  {
    v46 = (unsigned int)GameConfigStoreClientIfNeeded;
    v47 = 137LL;
    goto LABEL_74;
  }
  v82[0] = off_180046D30;
  v82[1] = this;
  v83 = v82;
  v45 = DoWorkOnGameConfigStore(*((_QWORD *)this + 27), v82);
  if ( v83 )
  {
    v49 = v82;
    LOBYTE(v49) = v83 != v82;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v83 + 32LL))(v83, v49);
    v83 = 0LL;
  }
  if ( v45 >= 0 )
  {
    v45 = 0;
  }
  else
  {
    v46 = (unsigned int)v45;
    v47 = 145LL;
LABEL_74:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v47,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)v46);
  }
  if ( v45 < 0 )
    wil::details::ReportFeatureError(
      (wil::details *)(unsigned int)v45,
      (wil::ThreadErrorContext *)&v74,
      v48,
      (unsigned int)v77,
      v54);
  if ( v43 )
    *((_DWORD *)v43 + 4) = v76;
  v6 = 0;
LABEL_85:
  v50 = v56;
  if ( v56 )
  {
    v56 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 16LL))(v50);
  }
LABEL_87:
  v51 = v57;
  if ( v57 )
  {
    v57 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
  }
LABEL_89:
  v52 = v60;
  if ( v60 )
  {
    v60 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 16LL))(v52);
  }
LABEL_91:
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hObject);
  return v6;
}
