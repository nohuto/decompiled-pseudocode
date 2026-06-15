/*
 * XREFs of ?UnregisterForApplicationPolicyChanges@CSpatialAudioResourceManager@Sarm@@AEAAXPEAVCStreamResource@2@@Z @ 0x18012266C
 * Callers:
 *     ?RemoveStream@CSpatialAudioResourceManager@Sarm@@AEAAXPEAVCStreamResource@2@@Z @ 0x180121C20 (-RemoveStream@CSpatialAudioResourceManager@Sarm@@AEAAXPEAVCStreamResource@2@@Z.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x1800306C0 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A220 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050720 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     memmove_0 @ 0x18006B90F (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D1EF0 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     ?LogUnsubscribe@CSpatialAudioResourceManagerTraceLogger@@QEAAXK_NI@Z @ 0x180123750 (-LogUnsubscribe@CSpatialAudioResourceManagerTraceLogger@@QEAAXK_NI@Z.c)
 *     ?GetProcess@CStreamResource@Sarm@@QEAAJPEAPEAUIAudioProcess@@@Z @ 0x180124374 (-GetProcess@CStreamResource@Sarm@@QEAAJPEAPEAUIAudioProcess@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Sarm::CSpatialAudioResourceManager::UnregisterForApplicationPolicyChanges(
        Sarm::CSpatialAudioResourceManager *this,
        struct Sarm::CStreamResource *a2)
{
  unsigned int v4; // edx
  _DWORD *v5; // rax
  _DWORD *i; // rbx
  unsigned int v7; // r9d
  Sarm::CSpatialAudioResourceManager *v9; // rbx
  const struct _GUID *v10; // rcx
  const struct _GUID *v11; // rcx
  __int64 v12; // rax
  Sarm::CSpatialAudioResourceManager *v13; // rcx
  __int64 v14; // r9
  int v15; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IAudioProcess *v17; // [rsp+40h] [rbp+8h] BYREF
  Sarm::CSpatialAudioResourceManager *v18; // [rsp+48h] [rbp+10h] BYREF

  v4 = *((_DWORD *)a2 + 13);
  v5 = (_DWORD *)*((_QWORD *)this + 40);
  for ( i = (_DWORD *)*((_QWORD *)this + 39); i != v5 && *i != v4; i += 2 )
    ;
  if ( i == v5 )
    v7 = 0;
  else
    v7 = i[1];
  CSpatialAudioResourceManagerTraceLogger::LogUnsubscribe(this, v4, i != v5, v7);
  if ( i == *((_DWORD **)this + 40) )
    return;
  if ( i[1]-- != 1 )
    return;
  memmove_0(i, i + 2, *((_QWORD *)this + 40) - (_QWORD)(i + 2));
  *((_QWORD *)this + 40) -= 8LL;
  v9 = 0LL;
  v18 = 0LL;
  if ( InlineIsEqualGUID(&GUID_e60ae324_1652_4fcc_a7f2_36aab2a4f68b, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v9 = this;
    v12 = *(_QWORD *)this;
    v13 = this;
    goto LABEL_18;
  }
  if ( InlineIsEqualGUID(v10, &GUID_2c794bb5_12d9_433a_b0a1_e3e5c6f54b6b) )
  {
    v9 = this;
LABEL_15:
    v12 = *(_QWORD *)v9;
    v13 = v9;
LABEL_18:
    v18 = v9;
    (*(void (__fastcall **)(Sarm::CSpatialAudioResourceManager *))(v12 + 8))(v13);
    v14 = 0LL;
    goto LABEL_19;
  }
  if ( InlineIsEqualGUID(v11, v11) )
  {
    v9 = (Sarm::CSpatialAudioResourceManager *)((char *)this + 8);
    goto LABEL_15;
  }
  v14 = 2147500034LL;
LABEL_19:
  if ( (int)v14 >= 0 )
  {
    v17 = 0LL;
    wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((__int64 *)&v17);
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
