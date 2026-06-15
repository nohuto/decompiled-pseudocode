/*
 * XREFs of ?UnregisterForApplicationPolicyChanges@CSpatialAudioResourceManager@Sarm@@AEAAXPEAVCStreamResource@2@@Z @ 0x180066F04
 * Callers:
 *     ?RemoveStream@CSpatialAudioResourceManager@Sarm@@AEAAXPEAVCStreamResource@2@@Z @ 0x180115480 (-RemoveStream@CSpatialAudioResourceManager@Sarm@@AEAAXPEAVCStreamResource@2@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003DCC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FCFC (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18003E770 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     memmove_0 @ 0x1800688AF (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800C36C0 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     ?FindAppSubscription@CSpatialAudioResourceManager@Sarm@@AEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@@std@@@std@@@std@@K@Z @ 0x180113A0C (-FindAppSubscription@CSpatialAudioResourceManager@Sarm@@AEAA-AV-$_Vector_iterator@V-$_Vector_val.c)
 *     ?LogUnsubscribe@CSpatialAudioResourceManagerTraceLogger@@QEAAXK_NI@Z @ 0x180116E00 (-LogUnsubscribe@CSpatialAudioResourceManagerTraceLogger@@QEAAXK_NI@Z.c)
 *     ?GetProcess@CStreamResource@Sarm@@QEAAJPEAPEAUIAudioProcess@@@Z @ 0x180117A24 (-GetProcess@CStreamResource@Sarm@@QEAAJPEAPEAUIAudioProcess@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Sarm::CSpatialAudioResourceManager::UnregisterForApplicationPolicyChanges(
        struct IAudioProcess **this,
        struct Sarm::CStreamResource *a2)
{
  CSpatialAudioResourceManagerTraceLogger *v4; // rcx
  struct IAudioProcess *v5; // rax
  struct IAudioProcess *v6; // rbx
  unsigned int v7; // r9d
  Sarm::CSpatialAudioResourceManager *v9; // rbx
  const struct _GUID *v10; // rcx
  const struct _GUID *v11; // rcx
  struct IAudioProcess *v12; // rax
  Sarm::CSpatialAudioResourceManager *v13; // rcx
  __int64 v14; // r9
  int v15; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  struct IAudioProcess *v17; // [rsp+50h] [rbp+20h] BYREF
  Sarm::CSpatialAudioResourceManager *v18; // [rsp+58h] [rbp+28h] BYREF

  Sarm::CSpatialAudioResourceManager::FindAppSubscription(this, &v17, *((unsigned int *)a2 + 13));
  v5 = (struct IAudioProcess *)*((_QWORD *)v4 + 40);
  v6 = v17;
  if ( v17 == v5 )
    v7 = 0;
  else
    v7 = *((_DWORD *)v17 + 1);
  CSpatialAudioResourceManagerTraceLogger::LogUnsubscribe(v4, *((_DWORD *)a2 + 13), v17 != v5, v7);
  if ( v6 == this[40] )
    return;
  if ( (*((_DWORD *)v6 + 1))-- != 1 )
    return;
  memmove_0(v6, (char *)v6 + 8, this[40] - (struct IAudioProcess *)((char *)v6 + 8));
  this[40] = (struct IAudioProcess *)((char *)this[40] - 8);
  v9 = 0LL;
  v18 = 0LL;
  if ( InlineIsEqualGUID(&GUID_e60ae324_1652_4fcc_a7f2_36aab2a4f68b, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v9 = (Sarm::CSpatialAudioResourceManager *)this;
    v12 = *this;
    v13 = (Sarm::CSpatialAudioResourceManager *)this;
    goto LABEL_14;
  }
  if ( InlineIsEqualGUID(v10, &GUID_2c794bb5_12d9_433a_b0a1_e3e5c6f54b6b) )
  {
    v9 = (Sarm::CSpatialAudioResourceManager *)this;
LABEL_11:
    v12 = *(struct IAudioProcess **)v9;
    v13 = v9;
LABEL_14:
    v18 = v9;
    (*((void (__fastcall **)(Sarm::CSpatialAudioResourceManager *))v12 + 1))(v13);
    v14 = 0LL;
    goto LABEL_15;
  }
  if ( InlineIsEqualGUID(v11, v11) )
  {
    v9 = (Sarm::CSpatialAudioResourceManager *)(this + 1);
    goto LABEL_11;
  }
  v14 = 2147500034LL;
LABEL_15:
  if ( (int)v14 >= 0 )
  {
    v17 = 0LL;
    wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset(&v17);
    if ( Sarm::CStreamResource::GetProcess(a2, &v17) >= 0 )
    {
      v15 = (*(__int64 (__fastcall **)(struct IAudioProcess *, Sarm::CSpatialAudioResourceManager *))(*(_QWORD *)v17 + 544LL))(
              v17,
              v9);
      if ( v15 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x300,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
          (const char *)(unsigned int)v15);
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v17);
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2FB,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
      (const char *)v14);
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v18);
}
