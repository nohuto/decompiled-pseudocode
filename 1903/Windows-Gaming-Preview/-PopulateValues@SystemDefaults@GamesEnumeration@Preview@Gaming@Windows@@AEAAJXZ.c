/*
 * XREFs of ?PopulateValues@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18003C308
 * Callers:
 *     ?PopulateValuesThreadProc@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18003C290 (-PopulateValuesThreadProc@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@CAXPEAU_TP_CAL.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031DC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1800115A0 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180011918 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?JsonDocumentFromGameConfigValues@@YAJK_KK_N11KPEBGPEAPEAUHSTRING__@@@Z @ 0x180016A64 (-JsonDocumentFromGameConfigValues@@YAJK_KK_N11KPEBGPEAPEAUHSTRING__@@@Z.c)
 *     ?GetDefaultGameModeProfile@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@PEAKPEA_K1PEA_N3@Z @ 0x18003C674 (-GetDefaultGameModeProfile@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJV-$share.c)
 *     std::shared_ptr_ExecutionModel::IGameConfigStore_::_Setpd_ExecutionModel::IGameConfigStore____lambda_c62bb885f9f6d79a34c1c24d88aff06c___ @ 0x18003C83C (std--shared_ptr_ExecutionModel--IGameConfigStore_--_Setpd_ExecutionModel--IGameConf_ea_18003C83C.c)
 *     __security_check_cookie @ 0x1800426D0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800438DE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180044260 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::PopulateValues(HSTRING *this)
{
  int GameConfigStoreClient; // eax
  __int64 v3; // r8
  unsigned int v4; // edi
  __int64 v5; // rdx
  __m128i v6; // xmm6
  DWORD ActiveProcessorCount; // esi
  unsigned __int64 v8; // xmm1_8
  bool *v9; // r15
  int *v10; // rdi
  int *v11; // r13
  int DefaultGameModeProfile; // eax
  int LargestValidResourceRequest; // esi
  HRESULT v14; // eax
  HSTRING v15; // rdi
  __int64 v16; // rcx
  int ActivationFactory; // eax
  __int64 v18; // rdx
  __int64 v19; // rsi
  HSTRING v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rbx
  _BYTE v24[16]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v26[3]; // [rsp+70h] [rbp-98h] BYREF
  __m128i v27; // [rsp+88h] [rbp-80h]
  __m128i v28; // [rsp+98h] [rbp-70h] BYREF
  __int64 v29; // [rsp+A8h] [rbp-60h]
  HSTRING_HEADER hstringHeader; // [rsp+B0h] [rbp-58h] BYREF
  HSTRING string; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v32[4]; // [rsp+D0h] [rbp-38h] BYREF
  int v33; // [rsp+D4h] [rbp-34h]
  wil::details::in1diag3 *retaddr; // [rsp+140h] [rbp+38h]

  v29 = -2LL;
  v26[0] = 0LL;
  v27 = 0LL;
  GameConfigStoreClient = CreateGameConfigStoreClient(v26);
  v4 = GameConfigStoreClient;
  if ( GameConfigStoreClient < 0 )
  {
    v5 = 137LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\systemdefaults.cpp",
      (const char *)(unsigned int)GameConfigStoreClient);
    goto LABEL_31;
  }
  v24[8] = 0;
  v28 = 0LL;
  LOBYTE(v3) = 0;
  std::shared_ptr_ExecutionModel::IGameConfigStore_::_Setpd_ExecutionModel::IGameConfigStore____lambda_c62bb885f9f6d79a34c1c24d88aff06c___(
    &v28,
    v26[0],
    v3);
  v6 = _mm_load_si128(&v28);
  v27 = v6;
  ActiveProcessorCount = GetActiveProcessorCount(0xFFFFu);
  v24[0] = 0;
  *(_OWORD *)&v26[1] = 0LL;
  v8 = _mm_srli_si128(v6, 8).m128i_u64[0];
  if ( v8 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    v6 = _mm_load_si128(&v28);
  }
  *(__m128i *)&v26[1] = v6;
  v9 = (bool *)this + 28;
  v10 = (int *)(this + 3);
  v11 = (int *)(this + 1);
  DefaultGameModeProfile = Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::GetDefaultGameModeProfile(
                             v24,
                             &v26[1],
                             this + 1,
                             this + 2,
                             this + 3,
                             (char *)this + 28,
                             v24);
  if ( DefaultGameModeProfile >= 0 )
  {
    if ( v24[0] )
      goto LABEL_15;
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x92,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\systemdefaults.cpp",
      (const char *)(unsigned int)DefaultGameModeProfile);
  }
  *v11 = 36838932;
  if ( ActiveProcessorCount == 2 )
  {
    *v10 = 0;
  }
  else
  {
    *v9 = 1;
    if ( ActiveProcessorCount == 4 )
    {
      *v10 = 2;
    }
    else
    {
      memset_0(v32, 0, 0x28uLL);
      RmGameModeInitializeResourceRequest(v32);
      LargestValidResourceRequest = RmGameModeGetLargestValidResourceRequest(v32);
      if ( LargestValidResourceRequest >= 0 )
        *v10 = v33;
      else
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xB3,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\systemdefaults.cpp",
          (const char *)(LargestValidResourceRequest | 0x10000000u));
    }
  }
LABEL_15:
  WindowsDeleteString(this[4]);
  this[4] = 0LL;
  GameConfigStoreClient = JsonDocumentFromGameConfigValues(*v11, this[2], *v10, 1, *v9, 0, 0, 0LL, this + 4);
  v4 = GameConfigStoreClient;
  if ( GameConfigStoreClient < 0 )
  {
    v5 = 198LL;
    goto LABEL_17;
  }
  v25 = 0LL;
  string = 0LL;
  v14 = WindowsCreateStringReference(L"Windows.Foundation.PropertyValue", 0x20u, &hstringHeader, &string);
  if ( v14 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v14);
    JUMPOUT(0x18003C66DLL);
  }
  v15 = string;
  v16 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  ActivationFactory = RoGetActivationFactory(v15, &GUID_629bdbc8_d932_4ff4_96b9_8d96c5c1e858, &v25);
  v4 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v18 = 203LL;
LABEL_27:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\systemdefaults.cpp",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_29;
  }
  v19 = v25;
  v20 = this[5];
  if ( v20 )
  {
    this[5] = 0LL;
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v20 + 16LL))(v20);
  }
  ActivationFactory = (*(__int64 (__fastcall **)(__int64, HSTRING, char *))(*(_QWORD *)v19 + 144LL))(
                        v19,
                        this[4],
                        (char *)this + 40);
  v4 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v18 = 205LL;
    goto LABEL_27;
  }
  v4 = 0;
LABEL_29:
  v21 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
LABEL_31:
  if ( v27.m128i_i64[1] )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v27.m128i_i64[1] + 8), 0xFFFFFFFF) == 1 )
    {
      v22 = v27.m128i_i64[1];
      (**(void (__fastcall ***)(__int64))v27.m128i_i64[1])(v27.m128i_i64[1]);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v22 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v27.m128i_i64[1] + 8LL))(v27.m128i_i64[1]);
    }
  }
  return v4;
}
