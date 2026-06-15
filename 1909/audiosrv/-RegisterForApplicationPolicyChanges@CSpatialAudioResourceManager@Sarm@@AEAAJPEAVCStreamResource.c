/*
 * XREFs of ?RegisterForApplicationPolicyChanges@CSpatialAudioResourceManager@Sarm@@AEAAJPEAVCStreamResource@2@@Z @ 0x180120EE8
 * Callers:
 *     ?AddStream@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL_STREAM_PROPERTIES@@PEAVCEndpointResourcePool@2@@Z @ 0x18011F59C (-AddStream@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800034B4 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180033550 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D1AA0 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     ??$_Emplace_reallocate@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@@?$vector@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@V?$allocator@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@@std@@@std@@QEAAPEAUAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@QEAU234@$$QEAU234@@Z @ 0x18011E910 (--$_Emplace_reallocate@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@@-$vector.c)
 *     ?LogSubscribe@CSpatialAudioResourceManagerTraceLogger@@QEAAXK_NI@Z @ 0x180123008 (-LogSubscribe@CSpatialAudioResourceManagerTraceLogger@@QEAAXK_NI@Z.c)
 *     ?GetProcess@CStreamResource@Sarm@@QEAAJPEAPEAUIAudioProcess@@@Z @ 0x180123F04 (-GetProcess@CStreamResource@Sarm@@QEAAJPEAPEAUIAudioProcess@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Sarm::CSpatialAudioResourceManager::RegisterForApplicationPolicyChanges(
        Sarm::CSpatialAudioResourceManager *this,
        struct Sarm::CStreamResource *a2)
{
  Sarm::CSpatialAudioResourceManager *v3; // rbx
  unsigned int v4; // r15d
  _DWORD *v5; // rax
  char *v6; // rsi
  _DWORD *i; // rdi
  unsigned int v8; // r9d
  const char *v9; // r9
  const struct _GUID *v10; // rcx
  const struct _GUID *v11; // rcx
  int v12; // ebx
  __int64 result; // rax
  int Process; // eax
  unsigned int v15; // ebx
  int v16; // eax
  unsigned int v17; // ebx
  __int64 *v18; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  Sarm::CSpatialAudioResourceManager *v20; // [rsp+70h] [rbp+8h] BYREF
  struct IAudioProcess *v21; // [rsp+78h] [rbp+10h] BYREF
  __int64 v22; // [rsp+80h] [rbp+18h] BYREF

  v3 = this;
  v4 = *((_DWORD *)a2 + 13);
  v5 = (_DWORD *)*((_QWORD *)this + 40);
  v6 = (char *)this + 312;
  for ( i = (_DWORD *)*((_QWORD *)this + 39); i != v5 && *i != v4; i += 2 )
    ;
  if ( i == v5 )
    v8 = 0;
  else
    v8 = i[1];
  CSpatialAudioResourceManagerTraceLogger::LogSubscribe(this, v4, i != v5, v8);
  try
  {
    if ( *((_DWORD **)v3 + 40) != i )
    {
      ++i[1];
      return 0LL;
    }
    v20 = 0LL;
    if ( !InlineIsEqualGUID(&GUID_e60ae324_1652_4fcc_a7f2_36aab2a4f68b, &GUID_00000000_0000_0000_c000_000000000046)
      && !InlineIsEqualGUID(v10, &GUID_2c794bb5_12d9_433a_b0a1_e3e5c6f54b6b) )
    {
      if ( !InlineIsEqualGUID(v11, v11) )
      {
        v12 = -2147467262;
        goto LABEL_15;
      }
      v3 = (Sarm::CSpatialAudioResourceManager *)((char *)v3 + 8);
    }
    v20 = v3;
    (*(void (__fastcall **)(Sarm::CSpatialAudioResourceManager *))(*(_QWORD *)v3 + 8LL))(v3);
    v12 = 0;
LABEL_15:
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2D2,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
        (const char *)(unsigned int)v12);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v20);
      return (unsigned int)v12;
    }
    v21 = 0LL;
    wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((__int64 *)&v21);
    Process = Sarm::CStreamResource::GetProcess(a2, &v21);
    v15 = Process;
    if ( Process < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2D5,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
        (const char *)(unsigned int)Process);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v21);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v20);
      return v15;
    }
    v16 = (*(__int64 (__fastcall **)(struct IAudioProcess *, Sarm::CSpatialAudioResourceManager *))(*(_QWORD *)v21
                                                                                                  + 536LL))(
            v21,
            v20);
    v17 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2D7,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
        (const char *)(unsigned int)v16);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v21);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v20);
      return v17;
    }
    v22 = v4 | 0x100000000LL;
    v18 = (__int64 *)*((_QWORD *)v6 + 1);
    if ( *((__int64 **)v6 + 2) == v18 )
    {
      std::vector<Sarm::CSpatialAudioResourceManager::AppPolicyChangeSubscription>::_Emplace_reallocate<Sarm::CSpatialAudioResourceManager::AppPolicyChangeSubscription>(
        (char **)v6,
        (unsigned __int64)v18,
        &v22);
    }
    else
    {
      *v18 = v22;
      *((_QWORD *)v6 + 1) += 8LL;
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v21);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v20);
    return 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x2E4,
                           (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
                           v9);
  }
  return result;
}
