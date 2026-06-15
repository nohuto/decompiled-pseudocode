/*
 * XREFs of ?EnsureSpatialSettingsAreInitialized@CSpatialProperties@@QEAAXPEBG@Z @ 0x180058B30
 * Callers:
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHHPEAPEAVCEndpointCharacteristics@@@Z @ 0x180032420 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHHPEAPEAVCEndpointCha.c)
 *     ?PopulateEndpointCharacteristicsCache@CEndpointCharacteristicsCache@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800585A0 (-PopulateEndpointCharacteristicsCache@CEndpointCharacteristicsCache@@CAXPEAU_TP_CALLBACK_INSTANC.c)
 * Callees:
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18004148C (_TlgCreateWsz.c)
 *     BlockSpatialAudioRegistryGates @ 0x18004C7C4 (BlockSpatialAudioRegistryGates.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     memset_0 @ 0x18006158E (memset_0.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x180062F18 (IsGetDefaultSpatialRenderingModePresent.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSpatialProperties::EnsureSpatialSettingsAreInitialized(
        LPCRITICAL_SECTION lpCriticalSection,
        LPCWSTR pwsz)
{
  bool v4; // bl
  int v5; // eax
  int v6; // eax
  int v7; // r10d
  LPCGUID v8; // r8
  LPCGUID v9; // r9
  int v10; // [rsp+38h] [rbp-69h] BYREF
  int v11; // [rsp+3Ch] [rbp-65h] BYREF
  int v12; // [rsp+40h] [rbp-61h] BYREF
  __int64 v13; // [rsp+48h] [rbp-59h]
  LPCRITICAL_SECTION v14; // [rsp+50h] [rbp-51h]
  GUID v15; // [rsp+58h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+88h] [rbp-19h] BYREF
  GUID *v18; // [rsp+98h] [rbp-9h]
  int v19; // [rsp+A0h] [rbp-1h]
  int v20; // [rsp+A4h] [rbp+3h]
  int *v21; // [rsp+A8h] [rbp+7h]
  int v22; // [rsp+B0h] [rbp+Fh]
  int v23; // [rsp+B4h] [rbp+13h]
  int *v24; // [rsp+B8h] [rbp+17h]
  int v25; // [rsp+C0h] [rbp+1Fh]
  int v26; // [rsp+C4h] [rbp+23h]
  int *v27; // [rsp+C8h] [rbp+27h]
  int v28; // [rsp+D0h] [rbp+2Fh]
  int v29; // [rsp+D4h] [rbp+33h]

  v13 = -2LL;
  v10 = 0;
  v15 = GUID_00000000_0000_0000_0000_000000000000;
  v11 = 0;
  if ( !BYTE1(lpCriticalSection[1].SpinCount) )
  {
    v4 = (unsigned __int8)IsGetDefaultSpatialRenderingModePresent(lpCriticalSection)
      && (int)GetDefaultSpatialSettingsForEndpoint(pwsz, &v10, &v15, &v11) >= 0;
    EnterCriticalSection(lpCriticalSection);
    v14 = lpCriticalSection;
    if ( v4
      && !BYTE1(lpCriticalSection[1].SpinCount)
      && (*(int (__fastcall **)(_QWORD, int *))(**(_QWORD **)&lpCriticalSection[1].LockCount + 112LL))(
           *(_QWORD *)&lpCriticalSection[1].LockCount,
           &v10) < 0 )
    {
      BlockSpatialAudioRegistryGates();
      LOBYTE(lpCriticalSection[171].RecursionCount) = 1;
      memset_0(&lpCriticalSection[2].LockSemaphore, 0, 0x48uLL);
      memset_0((char *)&lpCriticalSection[4].OwningThread + 4, 0, 0x1A10uLL);
      LODWORD(lpCriticalSection[4].OwningThread) = 0;
      v5 = v10;
      LODWORD(lpCriticalSection[2].LockSemaphore) = v10;
      HIDWORD(lpCriticalSection[4].DebugInfo) = v5;
      *(GUID *)((char *)&lpCriticalSection[2].SpinCount + 4) = v15;
      v6 = v11;
      lpCriticalSection[4].RecursionCount = v11 != 0;
      LODWORD(lpCriticalSection[2].SpinCount) = v6;
      v12 = (*(__int64 (__fastcall **)(PRTL_CRITICAL_SECTION_DEBUG, HANDLE *, _QWORD, _QWORD))(*(_QWORD *)lpCriticalSection[1].DebugInfo
                                                                                             + 48LL))(
              lpCriticalSection[1].DebugInfo,
              &lpCriticalSection[2].LockSemaphore,
              0LL,
              0LL);
      if ( (unsigned int)hProvider > 4 )
      {
        TlgCreateWsz(&pDesc, pwsz);
        v18 = &v15;
        v19 = 16;
        v20 = 0;
        v21 = &v10;
        v22 = v7;
        v23 = 0;
        v24 = &v11;
        v25 = v7;
        v26 = 0;
        v27 = &v12;
        v28 = v7;
        v29 = 0;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1801778F7, v8, v9, 7u, &pData);
      }
    }
    BYTE1(lpCriticalSection[1].SpinCount) = 1;
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
  }
}
