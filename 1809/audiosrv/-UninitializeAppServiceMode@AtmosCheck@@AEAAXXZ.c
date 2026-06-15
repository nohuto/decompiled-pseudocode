/*
 * XREFs of ?UninitializeAppServiceMode@AtmosCheck@@AEAAXXZ @ 0x18013C1EC
 * Callers:
 *     ?Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z @ 0x1800546E4 (-Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z.c)
 *     ?RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z @ 0x180068220 (-RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z.c)
 *     ?Uninitialize@AtmosCheck@@QEAAXXZ @ 0x18013C0AC (-Uninitialize@AtmosCheck@@QEAAXXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003DCC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?CancelDeviceIdRecheckTimer@AtmosCheck@@AEAAXXZ @ 0x18013802C (-CancelDeviceIdRecheckTimer@AtmosCheck@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall AtmosCheck::UninitializeAppServiceMode(AtmosCheck *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  __int64 v3; // rcx
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v3 = *((_QWORD *)this + 24);
  if ( v3 && *((_BYTE *)this + 185) )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, AtmosCheck *))(*(_QWORD *)v3 + 56LL))(v3, this);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x7FA,
        (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
        (const char *)(unsigned int)v4);
    *((_BYTE *)this + 185) = 0;
  }
  AtmosCheck::CancelDeviceIdRecheckTimer(this);
  if ( v2 )
    LeaveCriticalSection(v2);
}
