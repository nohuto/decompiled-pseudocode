/*
 * XREFs of ?IsProcessMuted@CStreamResource@Sarm@@QEAA_NXZ @ 0x180117DBC
 * Callers:
 *     ?HandleAppVolumePolicyChange@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x1801141B8 (-HandleAppVolumePolicyChange@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FCFC (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800C36C0 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     ?GetProcess@CStreamResource@Sarm@@QEAAJPEAPEAUIAudioProcess@@@Z @ 0x180117A24 (-GetProcess@CStreamResource@Sarm@@QEAAJPEAPEAUIAudioProcess@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall Sarm::CStreamResource::IsProcessMuted(Sarm::CStreamResource *this)
{
  bool v2; // di
  __int64 v3; // r8
  const char *v4; // r9
  struct IAudioProcess *v6; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  v6 = 0LL;
  wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((__int64 *)&v6);
  if ( (int)Sarm::CStreamResource::GetProcess(this, &v6, v3, v4) >= 0 )
    v2 = (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v6 + 120LL))(v6) == 1;
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v6);
  return v2;
}
