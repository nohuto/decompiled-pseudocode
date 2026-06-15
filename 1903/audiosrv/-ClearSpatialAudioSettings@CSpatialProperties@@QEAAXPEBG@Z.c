/*
 * XREFs of ?ClearSpatialAudioSettings@CSpatialProperties@@QEAAXPEBG@Z @ 0x18012DDD4
 * Callers:
 *     ?SetSpatialAudioSettings@CEndpointCharacteristics@@QEAAJPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@@Z @ 0x1800031EC (-SetSpatialAudioSettings@CEndpointCharacteristics@@QEAAJPEBUSpatialAudioSettings@@PEBUtWAVEFORMA.c)
 *     ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180005060 (-UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?SetSpatialAudioSettings@CEndpointCharacteristics@@AEAAX_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180034CFC (-SetSpatialAudioSettings@CEndpointCharacteristics@@AEAAX_NW4__MIDL___MIDL_itf_audioengineendpoin.c)
 *     ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAXPEBG_NPEAUIPropertyStore@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x180035448 (-SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAXPEBG_NPEAUIPropertyStore@@PEBUtWAVEFOR.c)
 * Callees:
 *     _TlgWrite @ 0x18001AD10 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18001C6E0 (_TlgCreateWsz.c)
 *     BlockSpatialAudioRegistryGates @ 0x1800272F8 (BlockSpatialAudioRegistryGates.c)
 *     ?InitSpatialTechList@CSpatialProperties@@AEAAJXZ @ 0x18003540C (-InitSpatialTechList@CSpatialProperties@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     memset_0 @ 0x180064BFE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSpatialProperties::ClearSpatialAudioSettings(struct _RTL_CRITICAL_SECTION *this, LPCWSTR pwsz)
{
  LPCGUID v4; // r8
  LPCGUID v5; // r9
  int RecursionCount_low; // [rsp+38h] [rbp-39h] BYREF
  int v7; // [rsp+3Ch] [rbp-35h] BYREF
  _QWORD v8[3]; // [rsp+40h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+78h] [rbp+7h] BYREF
  _QWORD *v11; // [rsp+88h] [rbp+17h]
  __int64 v12; // [rsp+90h] [rbp+1Fh]
  int *p_RecursionCount_low; // [rsp+98h] [rbp+27h]
  __int64 v14; // [rsp+A0h] [rbp+2Fh]

  v8[1] = -2LL;
  EnterCriticalSection(this);
  v8[2] = this;
  if ( (unsigned int)hProvider > 4 )
  {
    TlgCreateWsz(&pDesc, pwsz);
    v8[0] = this[1].DebugInfo;
    v11 = v8;
    v12 = 8LL;
    RecursionCount_low = LOBYTE(this[171].RecursionCount);
    p_RecursionCount_low = &RecursionCount_low;
    v14 = 4LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18017CBCD, v4, v5, 5u, &pData);
  }
  if ( this[1].DebugInfo )
  {
    if ( !LOBYTE(this[171].RecursionCount)
      || (*(int (__fastcall **)(_QWORD))(**(_QWORD **)&this[1].LockCount + 24LL))(*(_QWORD *)&this[1].LockCount) < 0
      || (RecursionCount_low = 0,
          LODWORD(v8[0]) = 0,
          v7 = 0,
          (*(int (__fastcall **)(_QWORD, int *))(**(_QWORD **)&this[1].LockCount + 112LL))(
            *(_QWORD *)&this[1].LockCount,
            &v7) < 0)
      || v7
      || (*(int (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)&this[1].LockCount + 128LL))(
           *(_QWORD *)&this[1].LockCount,
           v8) < 0
      || LODWORD(v8[0])
      || (*(int (__fastcall **)(_QWORD, int *))(**(_QWORD **)&this[1].LockCount + 184LL))(
           *(_QWORD *)&this[1].LockCount,
           &RecursionCount_low) < 0
      || RecursionCount_low )
    {
      LODWORD(this[2].DebugInfo) = 0;
      memset_0(&this[2].LockSemaphore, 0, 0x48uLL);
      this[4].LockCount = BlockSpatialAudioRegistryGates();
      LODWORD(this[4].OwningThread) = 0;
      memset_0((char *)&this[4].OwningThread + 4, 0, 0x1A10uLL);
      (*(void (__fastcall **)(PRTL_CRITICAL_SECTION_DEBUG, HANDLE *, _QWORD, _QWORD))(*(_QWORD *)this[1].DebugInfo + 48LL))(
        this[1].DebugInfo,
        &this[2].LockSemaphore,
        0LL,
        0LL);
      LOBYTE(this[171].RecursionCount) = 1;
      CSpatialProperties::InitSpatialTechList((CSpatialProperties *)this);
    }
  }
  if ( this )
    LeaveCriticalSection(this);
}
