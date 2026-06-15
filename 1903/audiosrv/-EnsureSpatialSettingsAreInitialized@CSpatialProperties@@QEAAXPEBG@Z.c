/*
 * XREFs of ?EnsureSpatialSettingsAreInitialized@CSpatialProperties@@QEAAXPEBG@Z @ 0x180052FA0
 * Callers:
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHHPEAPEAVCEndpointCharacteristics@@@Z @ 0x18000E490 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHHPEAPEAVCEndpointCha.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_wil::com_ptr_t_CEndpointCharacteristics_wil::err_returncode_policy_________lambda_de3787b9043c5215ac50eb582b680ae7___ @ 0x180052F38 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_wil--com_ptr_t_CEndpoint.c)
 * Callees:
 *     _TlgWrite @ 0x18001AD10 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18001C6E0 (_TlgCreateWsz.c)
 *     BlockSpatialAudioRegistryGates @ 0x1800272F8 (BlockSpatialAudioRegistryGates.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     memset_0 @ 0x180064BFE (memset_0.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x1800665D8 (IsGetDefaultSpatialRenderingModePresent.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSpatialProperties::EnsureSpatialSettingsAreInitialized(
        LPCRITICAL_SECTION lpCriticalSection,
        LPCWSTR pwsz,
        __int64 a3,
        __int64 a4)
{
  bool v6; // bl
  int v7; // eax
  int v8; // eax
  LPCGUID v9; // r9
  LPCGUID v10; // r8
  int v11; // [rsp+38h] [rbp-69h] BYREF
  int v12; // [rsp+3Ch] [rbp-65h] BYREF
  int v13; // [rsp+40h] [rbp-61h] BYREF
  __int64 v14; // [rsp+48h] [rbp-59h]
  LPCRITICAL_SECTION v15; // [rsp+50h] [rbp-51h]
  GUID v16; // [rsp+58h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+88h] [rbp-19h] BYREF
  GUID *v19; // [rsp+98h] [rbp-9h]
  int v20; // [rsp+A0h] [rbp-1h]
  int v21; // [rsp+A4h] [rbp+3h]
  int *v22; // [rsp+A8h] [rbp+7h]
  int v23; // [rsp+B0h] [rbp+Fh]
  int v24; // [rsp+B4h] [rbp+13h]
  int *v25; // [rsp+B8h] [rbp+17h]
  int v26; // [rsp+C0h] [rbp+1Fh]
  int v27; // [rsp+C4h] [rbp+23h]
  int *v28; // [rsp+C8h] [rbp+27h]
  int v29; // [rsp+D0h] [rbp+2Fh]
  int v30; // [rsp+D4h] [rbp+33h]

  v14 = -2LL;
  v11 = 0;
  v16 = GUID_00000000_0000_0000_0000_000000000000;
  v12 = 0;
  if ( !BYTE1(lpCriticalSection[1].SpinCount) )
  {
    v6 = (unsigned __int8)IsGetDefaultSpatialRenderingModePresent(lpCriticalSection, pwsz, a3, a4)
      && (int)GetDefaultSpatialSettingsForEndpoint(pwsz, &v11, &v16, &v12) >= 0;
    EnterCriticalSection(lpCriticalSection);
    v15 = lpCriticalSection;
    if ( v6
      && !BYTE1(lpCriticalSection[1].SpinCount)
      && (*(int (__fastcall **)(_QWORD, int *))(**(_QWORD **)&lpCriticalSection[1].LockCount + 112LL))(
           *(_QWORD *)&lpCriticalSection[1].LockCount,
           &v11) < 0 )
    {
      BlockSpatialAudioRegistryGates();
      LOBYTE(lpCriticalSection[171].RecursionCount) = 1;
      memset_0(&lpCriticalSection[2].LockSemaphore, 0, 0x48uLL);
      memset_0((char *)&lpCriticalSection[4].OwningThread + 4, 0, 0x1A10uLL);
      LODWORD(lpCriticalSection[4].OwningThread) = 0;
      v7 = v11;
      LODWORD(lpCriticalSection[2].LockSemaphore) = v11;
      HIDWORD(lpCriticalSection[4].DebugInfo) = v7;
      *(GUID *)((char *)&lpCriticalSection[2].SpinCount + 4) = v16;
      v8 = v12;
      lpCriticalSection[4].RecursionCount = v12 != 0;
      LODWORD(lpCriticalSection[2].SpinCount) = v8;
      v13 = (*(__int64 (__fastcall **)(PRTL_CRITICAL_SECTION_DEBUG, HANDLE *, _QWORD, _QWORD))(*(_QWORD *)lpCriticalSection[1].DebugInfo
                                                                                             + 48LL))(
              lpCriticalSection[1].DebugInfo,
              &lpCriticalSection[2].LockSemaphore,
              0LL,
              0LL);
      if ( (unsigned int)hProvider > 4 )
      {
        TlgCreateWsz(&pDesc, pwsz);
        v19 = &v16;
        v20 = 16;
        v21 = 0;
        v22 = &v11;
        v23 = (int)v9;
        v24 = 0;
        v25 = &v12;
        v26 = (int)v9;
        v27 = 0;
        v28 = &v13;
        v29 = (int)v9;
        v30 = 0;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18017CB4E, v10, v9, 7u, &pData);
      }
    }
    BYTE1(lpCriticalSection[1].SpinCount) = 1;
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
  }
}
