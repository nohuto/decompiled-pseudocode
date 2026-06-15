/*
 * XREFs of ?SetMonitorMirrorEligibleProperty@CMonitorManager@@AEAAJPEBG@Z @ 0x18010D090
 * Callers:
 *     ?UpdateRoutedEndpointId@CMonitorManager@@AEAAXPEA_N@Z @ 0x18010D628 (-UpdateRoutedEndpointId@CMonitorManager@@AEAAXPEA_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050720 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CMonitorManager::SetMonitorMirrorEligibleProperty(CMonitorManager *this, const unsigned __int16 *a2)
{
  __int64 v2; // rcx
  int v3; // ebx
  __int64 v4; // rbx
  __int64 v5; // rcx
  PROPVARIANT pvar; // [rsp+28h] [rbp-18h] BYREF
  __int64 v8; // [rsp+30h] [rbp-10h]
  __int64 v9; // [rsp+38h] [rbp-8h]
  __int64 v10; // [rsp+50h] [rbp+10h] BYREF
  __int64 v11; // [rsp+60h] [rbp+20h] BYREF

  v10 = 0LL;
  pvar = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v2 = *((_QWORD *)this + 8);
  v11 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, const unsigned __int16 *, __int64 *))(*(_QWORD *)v2 + 40LL))(v2, a2, &v11);
  if ( v3 >= 0 )
  {
    v4 = v11;
    v5 = v10;
    v10 = 0LL;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    v3 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v4 + 32LL))(v4, 1LL, &v10);
    if ( v3 >= 0 )
    {
      LOWORD(pvar) = 11;
      LOWORD(v8) = -1;
      v3 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v10 + 48LL))(
             v10,
             &PKEY_MonitorMirrorEligible,
             &pvar);
    }
  }
  PropVariantClear(&pvar);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v10);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v11);
  return (unsigned int)v3;
}
