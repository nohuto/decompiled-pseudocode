/*
 * XREFs of ?PopulateValues@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18003BFC8
 * Callers:
 *     ?PopulateValuesThreadProc@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18003BF50 (-PopulateValuesThreadProc@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@CAXPEAU_TP_CAL.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800032BC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180011808 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180011B98 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?JsonDocumentFromGameConfigValues@@YAJK_KK_N11KPEBGPEAPEAUHSTRING__@@@Z @ 0x180016D18 (-JsonDocumentFromGameConfigValues@@YAJK_KK_N11KPEBGPEAPEAUHSTRING__@@@Z.c)
 *     ?GetDefaultGameModeProfile@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@PEAKPEA_K1PEA_N3@Z @ 0x18003C338 (-GetDefaultGameModeProfile@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJV-$share.c)
 *     std::shared_ptr_ExecutionModel::IGameConfigStore_::_Setpd_ExecutionModel::IGameConfigStore_____ptr64__lambda_c62bb885f9f6d79a34c1c24d88aff06c___ @ 0x18003C500 (std--shared_ptr_ExecutionModel--IGameConfigStore_--_Setpd_ExecutionModel--IGameConf_ea_18003C500.c)
 *     __security_check_cookie @ 0x180042370 (__security_check_cookie.c)
 *     memset_0 @ 0x18004355E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180043EE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::PopulateValues(
        Windows::Gaming::Preview::GamesEnumeration::SystemDefaults *this)
{
  int v2; // eax
  __int64 v3; // r8
  unsigned int v4; // edi
  __int64 v5; // rdx
  __m128i v6; // xmm6
  DWORD ActiveProcessorCount; // r14d
  unsigned __int64 v8; // xmm1_8
  int *v9; // rdi
  int *v10; // r12
  int DefaultGameModeProfile; // eax
  int LargestValidResourceRequest; // r14d
  HRESULT v13; // eax
  HSTRING v14; // rdi
  __int64 v15; // rcx
  int ActivationFactory; // eax
  __int64 v17; // rdx
  __int64 v18; // r14
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v23; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v24; // [rsp+60h] [rbp-A8h] BYREF
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
  v25 = 0LL;
  v27 = 0LL;
  v2 = CreateGameConfigStoreClient(&v25);
  v4 = v2;
  if ( v2 < 0 )
  {
    v5 = 137LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\systemdefaults.cpp",
      (const char *)(unsigned int)v2);
    goto LABEL_31;
  }
  v28 = 0LL;
  LOBYTE(v3) = 0;
  std::shared_ptr_ExecutionModel::IGameConfigStore_::_Setpd_ExecutionModel::IGameConfigStore_____ptr64__lambda_c62bb885f9f6d79a34c1c24d88aff06c___(
    &v28,
    v25,
    v3);
  v6 = _mm_load_si128(&v28);
  v27 = v6;
  ActiveProcessorCount = GetActiveProcessorCount(0xFFFFu);
  LOWORD(v23) = 0;
  *(_OWORD *)&v26[1] = 0LL;
  v8 = _mm_srli_si128(v6, 8).m128i_u64[0];
  if ( v8 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    v6 = _mm_load_si128(&v28);
  }
  *(__m128i *)&v26[1] = v6;
  v9 = (int *)((char *)this + 24);
  v10 = (int *)((char *)this + 8);
  DefaultGameModeProfile = Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::GetDefaultGameModeProfile(
                             &v23,
                             &v26[1],
                             (char *)this + 8,
                             (char *)this + 16,
                             (char *)this + 24,
                             (char *)this + 28,
                             &v23);
  if ( DefaultGameModeProfile >= 0 )
  {
    if ( (_BYTE)v23 )
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
  *v10 = 36838932;
  if ( ActiveProcessorCount == 2 )
  {
    *v9 = 0;
  }
  else
  {
    *((_BYTE *)this + 28) = 1;
    if ( ActiveProcessorCount == 4 )
    {
      *v9 = 2;
    }
    else
    {
      memset_0(v32, 0, 0x28uLL);
      RmGameModeInitializeResourceRequest(v32);
      LargestValidResourceRequest = RmGameModeGetLargestValidResourceRequest(v32);
      if ( LargestValidResourceRequest >= 0 )
        *v9 = v33;
      else
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xB3,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\systemdefaults.cpp",
          (const char *)(LargestValidResourceRequest | 0x10000000u));
    }
  }
LABEL_15:
  WindowsDeleteString(*((HSTRING *)this + 4));
  *((_QWORD *)this + 4) = 0LL;
  v2 = JsonDocumentFromGameConfigValues(
         *v10,
         *((HSTRING *)this + 2),
         *v9,
         1,
         *((_BYTE *)this + 28),
         0,
         0,
         0LL,
         (HSTRING *)this + 4);
  v4 = v2;
  if ( v2 < 0 )
  {
    v5 = 198LL;
    goto LABEL_17;
  }
  v24 = 0LL;
  string = 0LL;
  v13 = WindowsCreateStringReference(L"Windows.Foundation.PropertyValue", 0x20u, &hstringHeader, &string);
  if ( v13 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v13);
    JUMPOUT(0x18003C331LL);
  }
  v14 = string;
  v15 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  ActivationFactory = RoGetActivationFactory(v14, &GUID_629bdbc8_d932_4ff4_96b9_8d96c5c1e858, &v24);
  v4 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v17 = 203LL;
LABEL_27:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\systemdefaults.cpp",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_29;
  }
  v18 = v24;
  v19 = *((_QWORD *)this + 5);
  if ( v19 )
  {
    *((_QWORD *)this + 5) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  ActivationFactory = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v18 + 144LL))(
                        v18,
                        *((_QWORD *)this + 4),
                        (char *)this + 40);
  v4 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v17 = 205LL;
    goto LABEL_27;
  }
  v4 = 0;
LABEL_29:
  v20 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
LABEL_31:
  if ( v27.m128i_i64[1] )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v27.m128i_i64[1] + 8), 0xFFFFFFFF) == 1 )
    {
      v21 = v27.m128i_i64[1];
      (**(void (__fastcall ***)(__int64))v27.m128i_i64[1])(v27.m128i_i64[1]);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v21 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v27.m128i_i64[1] + 8LL))(v27.m128i_i64[1]);
    }
  }
  return v4;
}
