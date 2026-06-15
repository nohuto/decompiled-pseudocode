/*
 * XREFs of ?IsMonitorMirrorEligible@CMonitorManager@@AEAA_NPEAUIMMDevice@@@Z @ 0x1800FD73C
 * Callers:
 *     ?DoHandleDefaultRenderDeviceChanged@CMonitorManager@@AEAAXPEBG@Z @ 0x1800FC230 (-DoHandleDefaultRenderDeviceChanged@CMonitorManager@@AEAAXPEBG@Z.c)
 *     ?OnAudioMirrorEnabledChange@CMonitorManager@@AEAAXXZ @ 0x1800FD8C8 (-OnAudioMirrorEnabledChange@CMonitorManager@@AEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FCFC (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall CMonitorManager::IsMonitorMirrorEligible(CMonitorManager *this, struct IMMDevice *a2)
{
  bool v2; // bl
  PROPVARIANT pvar; // [rsp+28h] [rbp-18h] BYREF
  __int64 v5; // [rsp+30h] [rbp-10h]
  __int64 v6; // [rsp+38h] [rbp-8h]
  __int64 v7; // [rsp+50h] [rbp+10h] BYREF

  v2 = 0;
  v7 = 0LL;
  if ( a2 )
  {
    pvar = 0LL;
    v5 = 0LL;
    v6 = 0LL;
    v7 = 0LL;
    if ( ((int (__fastcall *)(struct IMMDevice *, _QWORD, __int64 *))a2->lpVtbl->OpenPropertyStore)(a2, 0LL, &v7) >= 0
      && (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v7 + 40LL))(
           v7,
           &PKEY_MonitorMirrorEligible,
           &pvar) >= 0
      && (_WORD)pvar == 11 )
    {
      v2 = (_WORD)v5 == 0xFFFF;
    }
    PropVariantClear(&pvar);
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v7);
  return v2;
}
