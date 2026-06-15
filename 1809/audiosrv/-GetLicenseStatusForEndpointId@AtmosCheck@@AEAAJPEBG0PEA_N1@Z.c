/*
 * XREFs of ?GetLicenseStatusForEndpointId@AtmosCheck@@AEAAJPEBG0PEA_N1@Z @ 0x180139408
 * Callers:
 *     ?IsLicenseValidForSubtype@AtmosCheck@@AEAAXPEBG0PEAJPEA_N@Z @ 0x18013A46C (-IsLicenseValidForSubtype@AtmosCheck@@AEAAXPEBG0PEAJPEA_N@Z.c)
 *     ?UpdateLicenseStatus@AtmosCheck@@AEAAXPEBG0PEAJPEA_N@Z @ 0x18013C780 (-UpdateLicenseStatus@AtmosCheck@@AEAAXPEBG0PEAJPEA_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FCFC (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800255F0 (_TlgKeywordOn.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?_TlgCreateAuto@@YAXPEAU_EVENT_DATA_DESCRIPTOR@@PEBG@Z @ 0x1800AEEF0 (-_TlgCreateAuto@@YAXPEAU_EVENT_DATA_DESCRIPTOR@@PEBG@Z.c)
 *     ?CreateSpatialAudioLicenseServer@@YAJPEAPEAUISpatialAudioLicenseServer@@@Z @ 0x1801384C8 (-CreateSpatialAudioLicenseServer@@YAJPEAPEAUISpatialAudioLicenseServer@@@Z.c)
 *     ?MapSubtypeToCommonTechIndex@AtmosCheck@@AEBAHPEBG@Z @ 0x18013A6CC (-MapSubtypeToCommonTechIndex@AtmosCheck@@AEBAHPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AtmosCheck::GetLicenseStatusForEndpointId(
        AtmosCheck *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        bool *a4,
        bool *a5)
{
  const GUID *v9; // r8
  const GUID *v10; // r9
  int v12; // eax
  __int64 cData; // r10
  LPCGUID v14; // r8
  LPCGUID v15; // r9
  int SpatialAudioLicenseServer; // eax
  unsigned int v17; // edi
  const GUID *v18; // r8
  const GUID *v19; // r9
  int v20; // [rsp+40h] [rbp-61h] BYREF
  int v21; // [rsp+44h] [rbp-5Dh] BYREF
  int v22; // [rsp+48h] [rbp-59h] BYREF
  unsigned int v23; // [rsp+4Ch] [rbp-55h] BYREF
  struct ISpatialAudioLicenseServer *v24[2]; // [rsp+50h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-21h] BYREF
  bool *v27; // [rsp+90h] [rbp-11h]
  __int64 v28; // [rsp+98h] [rbp-9h]
  int *v29; // [rsp+A0h] [rbp-1h]
  __int64 v30; // [rsp+A8h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+57h]

  v24[1] = (struct ISpatialAudioLicenseServer *)-2LL;
  *a4 = 0;
  if ( *((_BYTE *)this + 184) )
  {
    v12 = AtmosCheck::MapSubtypeToCommonTechIndex(this, a2);
    v21 = v12;
    if ( v12 == -1 || !*((_BYTE *)this + 32 * v12 + 208) )
    {
      return 2147942487LL;
    }
    else
    {
      if ( (unsigned int)dword_1801B1580 > 5 && TlgKeywordOn((TraceLoggingHProvider)&dword_1801B1580, 0LL) )
      {
        _TlgCreateAuto(&pDesc, a2);
        v27 = (bool *)&v21;
        v28 = cData;
        TlgWrite((TraceLoggingHProvider)&dword_1801B1580, &unk_180178443, v14, v15, cData, &pData);
      }
      v24[0] = 0LL;
      SpatialAudioLicenseServer = CreateSpatialAudioLicenseServer(v24);
      v17 = SpatialAudioLicenseServer;
      if ( SpatialAudioLicenseServer >= 0 )
      {
        v22 = 0;
        v20 = 0;
        v17 = (*(__int64 (__fastcall **)(struct ISpatialAudioLicenseServer *, _QWORD, _QWORD, const unsigned __int16 *, const unsigned __int16 *, int *, int *))(*(_QWORD *)v24[0] + 32LL))(
                v24[0],
                *((_QWORD *)this + 4 * v21 + 28),
                *((_QWORD *)this + 4 * v21 + 29),
                a2,
                a3,
                &v22,
                &v20);
        v23 = v17;
        *a4 = v22 != 0;
        if ( a5 )
          *a5 = v20 != 0;
        if ( (unsigned int)dword_1801B1580 > 5 && TlgKeywordOn((TraceLoggingHProvider)&dword_1801B1580, 0LL) )
        {
          pDesc.Ptr = (ULONGLONG)&v23;
          *(_QWORD *)&pDesc.Size = 4LL;
          v27 = a4;
          v28 = 1LL;
          v29 = &v20;
          v30 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1801B1580, &unk_1801780DB, v18, v19, 5u, &pData);
          v17 = v23;
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          1851LL,
          (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
          (const char *)(unsigned int)SpatialAudioLicenseServer);
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v24);
      return v17;
    }
  }
  else
  {
    if ( (unsigned int)dword_1801B1580 > 5 )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1801B1580, 0LL) )
        TlgWrite((TraceLoggingHProvider)&dword_1801B1580, &unk_18017808B, v9, v10, 2u, &pData);
    }
    return 0LL;
  }
}
