/*
 * XREFs of ?RegisterForApplicationPolicyChanges@CSpatialAudioResourceManager@Sarm@@AEAAJPEAVCStreamResource@2@@Z @ 0x180066C70
 * Callers:
 *     ?AddStream@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL_STREAM_PROPERTIES@@PEAVCEndpointResourcePool@2@@Z @ 0x18011349C (-AddStream@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FCFC (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18003E770 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800C36C0 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     ??$_Emplace_reallocate@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@@?$vector@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@V?$allocator@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@@std@@@std@@QEAAPEAUAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@QEAU234@$$QEAU234@@Z @ 0x180112920 (--$_Emplace_reallocate@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@@-$vector.c)
 *     ?FindAppSubscription@CSpatialAudioResourceManager@Sarm@@AEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@@std@@@std@@@std@@K@Z @ 0x180113A0C (-FindAppSubscription@CSpatialAudioResourceManager@Sarm@@AEAA-AV-$_Vector_iterator@V-$_Vector_val.c)
 *     ?LogSubscribe@CSpatialAudioResourceManagerTraceLogger@@QEAAXK_NI@Z @ 0x180116B18 (-LogSubscribe@CSpatialAudioResourceManagerTraceLogger@@QEAAXK_NI@Z.c)
 *     ?GetProcess@CStreamResource@Sarm@@QEAAJPEAPEAUIAudioProcess@@@Z @ 0x180117A24 (-GetProcess@CStreamResource@Sarm@@QEAAJPEAPEAUIAudioProcess@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Sarm::CSpatialAudioResourceManager::RegisterForApplicationPolicyChanges(
        Sarm::CSpatialAudioResourceManager **this,
        struct Sarm::CStreamResource *a2)
{
  unsigned int v4; // r14d
  CSpatialAudioResourceManagerTraceLogger *v5; // rcx
  Sarm::CSpatialAudioResourceManager *v6; // rax
  Sarm::CSpatialAudioResourceManager *v7; // rbx
  unsigned int v8; // r9d
  const char *v9; // r9
  const struct _GUID *v10; // rcx
  const struct _GUID *v11; // rcx
  Sarm::CSpatialAudioResourceManager *v12; // rcx
  Sarm::CSpatialAudioResourceManager *v13; // rax
  int v14; // ebx
  __int64 result; // rax
  int Process; // eax
  unsigned int v17; // ebx
  int v18; // eax
  unsigned int v19; // ebx
  __int64 *v20; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  Sarm::CSpatialAudioResourceManager *v22; // [rsp+60h] [rbp+8h] BYREF
  struct IAudioProcess *v23; // [rsp+68h] [rbp+10h] BYREF
  __int64 v24; // [rsp+70h] [rbp+18h] BYREF

  v4 = *((_DWORD *)a2 + 13);
  Sarm::CSpatialAudioResourceManager::FindAppSubscription(this, &v22, v4);
  v6 = (Sarm::CSpatialAudioResourceManager *)*((_QWORD *)v5 + 40);
  v7 = v22;
  if ( v22 == v6 )
    v8 = 0;
  else
    v8 = *((_DWORD *)v22 + 1);
  CSpatialAudioResourceManagerTraceLogger::LogSubscribe(v5, v4, v22 != v6, v8);
  try
  {
    if ( this[40] != v7 )
    {
      ++*((_DWORD *)v7 + 1);
      return 0LL;
    }
    v22 = 0LL;
    if ( InlineIsEqualGUID(&GUID_e60ae324_1652_4fcc_a7f2_36aab2a4f68b, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      v22 = (Sarm::CSpatialAudioResourceManager *)this;
      v13 = *this;
      v12 = (Sarm::CSpatialAudioResourceManager *)this;
    }
    else
    {
      if ( InlineIsEqualGUID(v10, &GUID_2c794bb5_12d9_433a_b0a1_e3e5c6f54b6b) )
      {
        v12 = (Sarm::CSpatialAudioResourceManager *)this;
      }
      else
      {
        if ( !InlineIsEqualGUID(v11, v11) )
        {
          v14 = -2147467262;
LABEL_15:
          if ( v14 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              722LL,
              (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
              (const char *)(unsigned int)v14);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v22);
            return (unsigned int)v14;
          }
          v23 = 0LL;
          wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset(&v23);
          Process = Sarm::CStreamResource::GetProcess(a2, &v23);
          v17 = Process;
          if ( Process < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              725LL,
              (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
              (const char *)(unsigned int)Process);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v23);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v22);
            return v17;
          }
          v18 = (*(__int64 (__fastcall **)(struct IAudioProcess *, Sarm::CSpatialAudioResourceManager *))(*(_QWORD *)v23 + 536LL))(
                  v23,
                  v22);
          v19 = v18;
          if ( v18 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              727LL,
              (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
              (const char *)(unsigned int)v18);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v23);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v22);
            return v19;
          }
          v24 = v4 | 0x100000000LL;
          v20 = (__int64 *)this[40];
          if ( this[41] == (Sarm::CSpatialAudioResourceManager *)v20 )
          {
            std::vector<Sarm::CSpatialAudioResourceManager::AppPolicyChangeSubscription>::_Emplace_reallocate<Sarm::CSpatialAudioResourceManager::AppPolicyChangeSubscription>(
              this + 39,
              v20,
              &v24);
          }
          else
          {
            *v20 = v24;
            this[40] = (Sarm::CSpatialAudioResourceManager *)((char *)this[40] + 8);
          }
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v23);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v22);
          return 0LL;
        }
        v12 = (Sarm::CSpatialAudioResourceManager *)(this + 1);
      }
      v22 = v12;
      v13 = *(Sarm::CSpatialAudioResourceManager **)v12;
    }
    (*((void (__fastcall **)(Sarm::CSpatialAudioResourceManager *))v13 + 1))(v12);
    v14 = 0;
    goto LABEL_15;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x2E4,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudior"
                                         "esourcemanager.cpp",
                           v9);
  }
  return result;
}
