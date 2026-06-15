/*
 * XREFs of ?GetLicenseStatusForEndpointId@AtmosCheck@@AEAAJPEBG0PEAU__MIDL___MIDL_itf_spatialaudiolicenseserver_0000_0000_0001@@@Z @ 0x18013EFA0
 * Callers:
 *     ?IsLicenseValidForSubtype@AtmosCheck@@AEAAXPEBG0PEAUEndpointSpecificSpatialTechInfo@1@@Z @ 0x18013F410 (-IsLicenseValidForSubtype@AtmosCheck@@AEAAXPEBG0PEAUEndpointSpecificSpatialTechInfo@1@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _TlgWrite @ 0x18001AD10 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18001C6E0 (_TlgCreateWsz.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050720 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ?CreateSpatialAudioLicenseServer@@YAJPEAPEAUISpatialAudioLicenseServer@@@Z @ 0x18013E1C4 (-CreateSpatialAudioLicenseServer@@YAJPEAPEAUISpatialAudioLicenseServer@@@Z.c)
 *     ?MapSubtypeToCommonTechIndex@AtmosCheck@@AEBAHPEBG@Z @ 0x18013F700 (-MapSubtypeToCommonTechIndex@AtmosCheck@@AEBAHPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AtmosCheck::GetLicenseStatusForEndpointId(
        AtmosCheck *this,
        const unsigned __int16 *a2,
        const GUID *a3,
        const GUID *a4)
{
  int v9; // eax
  LPCGUID v10; // r8
  LPCGUID v11; // r9
  int SpatialAudioLicenseServer; // eax
  unsigned int v13; // ebx
  const GUID *v14; // r8
  const GUID *v15; // r9
  int v16; // [rsp+40h] [rbp-69h] BYREF
  unsigned int v17; // [rsp+44h] [rbp-65h] BYREF
  struct ISpatialAudioLicenseServer *v18[3]; // [rsp+48h] [rbp-61h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-29h] BYREF
  unsigned __int16 *p_Data2; // [rsp+90h] [rbp-19h]
  int v22; // [rsp+98h] [rbp-11h]
  int v23; // [rsp+9Ch] [rbp-Dh]
  const GUID *v24; // [rsp+A0h] [rbp-9h]
  int v25; // [rsp+A8h] [rbp-1h]
  int v26; // [rsp+ACh] [rbp+3h]
  unsigned __int8 *Data4; // [rsp+B0h] [rbp+7h]
  int v28; // [rsp+B8h] [rbp+Fh]
  int v29; // [rsp+BCh] [rbp+13h]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  v18[1] = (struct ISpatialAudioLicenseServer *)-2LL;
  if ( *((_BYTE *)this + 216) )
  {
    v9 = AtmosCheck::MapSubtypeToCommonTechIndex(this, a2);
    v16 = v9;
    if ( v9 == -1 )
    {
      return 2147942487LL;
    }
    else if ( *((_BYTE *)this + 32 * v9 + 256) )
    {
      if ( (unsigned int)dword_1801B64F0 > 5 )
      {
        TlgCreateWsz(&pDesc, a2);
        p_Data2 = (unsigned __int16 *)&v16;
        v22 = 4;
        v23 = 0;
        TlgWrite((TraceLoggingHProvider)&dword_1801B64F0, &unk_18017D2A7, v10, v11, 4u, &pData);
      }
      v18[0] = 0LL;
      SpatialAudioLicenseServer = CreateSpatialAudioLicenseServer(v18);
      v13 = SpatialAudioLicenseServer;
      if ( SpatialAudioLicenseServer >= 0 )
      {
        v13 = (*(__int64 (__fastcall **)(struct ISpatialAudioLicenseServer *, _QWORD, _QWORD, const unsigned __int16 *, const GUID *, const GUID *))(*(_QWORD *)v18[0] + 32LL))(
                v18[0],
                *((_QWORD *)this + 4 * v16 + 34),
                *((_QWORD *)this + 4 * v16 + 35),
                a2,
                a3,
                a4);
        v17 = v13;
        if ( (unsigned int)dword_1801B64F0 > 5 )
        {
          pDesc.Ptr = (ULONGLONG)&v17;
          pDesc.Size = 4;
          pDesc.Reserved = 0;
          p_Data2 = &a4->Data2;
          v22 = 4;
          v23 = 0;
          v24 = a4;
          v25 = 4;
          v26 = 0;
          Data4 = a4->Data4;
          v28 = 4;
          v29 = 0;
          TlgWrite((TraceLoggingHProvider)&dword_1801B64F0, &unk_18017D039, v14, v15, 6u, &pData);
          v13 = v17;
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x830,
          (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
          (const char *)(unsigned int)SpatialAudioLicenseServer);
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v18);
      return v13;
    }
    else
    {
      return 2151641105LL;
    }
  }
  else
  {
    if ( (unsigned int)dword_1801B64F0 > 5 )
      TlgWrite((TraceLoggingHProvider)&dword_1801B64F0, &unk_18017D138, a3, a4, 2u, &pData);
    return 0LL;
  }
}
