/*
 * XREFs of ?IsLicenseValidForSubtype@AtmosCheck@@AEAAXPEBG0PEAUEndpointSpecificSpatialTechInfo@1@@Z @ 0x18013F410
 * Callers:
 *     ?PerformLicenseCheckHelper@AtmosCheck@@AEAAXPEBGHPEAUEndpointSpecificSpatialTechInfo@1@PEA_N@Z @ 0x18006B01C (-PerformLicenseCheckHelper@AtmosCheck@@AEAAXPEBGHPEAUEndpointSpecificSpatialTechInfo@1@PEA_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     ?GetLicenseStatusForEndpointId@AtmosCheck@@AEAAJPEBG0PEAU__MIDL___MIDL_itf_spatialaudiolicenseserver_0000_0000_0001@@@Z @ 0x18013EFA0 (-GetLicenseStatusForEndpointId@AtmosCheck@@AEAAJPEBG0PEAU__MIDL___MIDL_itf_spatialaudiolicensese.c)
 *     ?MapSubtypeToCommonTechIndex@AtmosCheck@@AEBAHPEBG@Z @ 0x18013F700 (-MapSubtypeToCommonTechIndex@AtmosCheck@@AEBAHPEBG@Z.c)
 */

void __fastcall AtmosCheck::IsLicenseValidForSubtype(
        AtmosCheck *this,
        const unsigned __int16 *a2,
        const GUID *a3,
        struct AtmosCheck::EndpointSpecificSpatialTechInfo *a4)
{
  bool v5; // bl
  int LicenseStatusForEndpointId; // eax
  int v9; // ebp
  int v10; // eax
  bool v11; // zf
  bool v12; // al
  GUID v13; // [rsp+20h] [rbp-48h] BYREF
  __int64 v14; // [rsp+30h] [rbp-38h]

  *(_QWORD *)&v13.Data1 = 1LL;
  v5 = 0;
  *(_DWORD *)v13.Data4 = 0;
  LicenseStatusForEndpointId = AtmosCheck::GetLicenseStatusForEndpointId(this, a2, a3, &v13);
  *((_DWORD *)a4 + 4) = LicenseStatusForEndpointId;
  v9 = LicenseStatusForEndpointId;
  if ( LicenseStatusForEndpointId >= 0
    || *((_BYTE *)this + 98)
    || (v10 = AtmosCheck::MapSubtypeToCommonTechIndex(this, a2), v10 != -1) && !*((_BYTE *)this + 32 * v10 + 256) )
  {
    *((_BYTE *)a4 + 1) = 1;
  }
  if ( v9 >= 0 )
  {
    v11 = v13.Data1 == 0;
    *((_DWORD *)a4 + 1) = *(_DWORD *)&v13.Data2 == 0 ? 0x80070490 : 0;
    v12 = !v11;
    v11 = *(_DWORD *)v13.Data4 == 0;
    *(_BYTE *)a4 = v12;
    v5 = !v11;
    *((_QWORD *)a4 + 1) = v14;
  }
  else
  {
    *((_DWORD *)a4 + 1) = v9;
    *(_BYTE *)a4 = 1;
    *((_QWORD *)a4 + 1) = 0LL;
  }
  *((_BYTE *)a4 + 2) = v5;
}
