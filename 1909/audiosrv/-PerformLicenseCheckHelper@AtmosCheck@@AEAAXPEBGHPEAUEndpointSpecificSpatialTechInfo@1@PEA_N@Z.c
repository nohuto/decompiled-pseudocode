/*
 * XREFs of ?PerformLicenseCheckHelper@AtmosCheck@@AEAAXPEBGHPEAUEndpointSpecificSpatialTechInfo@1@PEA_N@Z @ 0x18006C07C
 * Callers:
 *     ?PerformLicenseCheckForEndpoint@AtmosCheck@@AEAAJPEBGPEA_N@Z @ 0x18006BD50 (-PerformLicenseCheckForEndpoint@AtmosCheck@@AEAAJPEBGPEA_N@Z.c)
 *     ?PerformLicenseCheckForSpatialAudioSubtype@AtmosCheck@@AEAAJPEBG0PEA_N@Z @ 0x18006BF18 (-PerformLicenseCheckForSpatialAudioSubtype@AtmosCheck@@AEAAJPEBG0PEA_N@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18001DFF0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     ?QueryLicenseForSpatialSubtypeAndEndpoint@AtmosCheck@@AEAAJPEBGHPEA_N@Z @ 0x18006C150 (-QueryLicenseForSpatialSubtypeAndEndpoint@AtmosCheck@@AEAAJPEBGHPEA_N@Z.c)
 *     ?IsLicenseValidForSubtype@AtmosCheck@@AEAAXPEBG0PEAUEndpointSpecificSpatialTechInfo@1@@Z @ 0x18013EF60 (-IsLicenseValidForSubtype@AtmosCheck@@AEAAXPEBG0PEAUEndpointSpecificSpatialTechInfo@1@@Z.c)
 */

void __fastcall AtmosCheck::PerformLicenseCheckHelper(
        AtmosCheck *this,
        const unsigned __int16 *a2,
        const GUID *a3,
        const GUID *a4,
        bool *a5)
{
  __int64 v7; // rdi
  int v9; // eax
  __int64 v10; // rdx
  struct AtmosCheck::EndpointSpecificSpatialTechInfo *v11; // rdi
  int v12; // ebx
  bool v13; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-60h] BYREF

  v7 = (int)a3;
  if ( *((_BYTE *)this + 600) )
  {
    if ( (unsigned int)dword_1801B54F0 > 5 )
      TlgWrite((TraceLoggingHProvider)&dword_1801B54F0, &unk_18017C0CE, a3, a4, 2u, &pData);
  }
  else
  {
    v13 = 0;
    v9 = AtmosCheck::QueryLicenseForSpatialSubtypeAndEndpoint(this, a2, (int)a3, &v13);
    v10 = 32 * v7;
    v11 = (struct AtmosCheck::EndpointSpecificSpatialTechInfo *)((char *)a4 + 24 * v7);
    v12 = v9;
    AtmosCheck::IsLicenseValidForSubtype(this, *(const unsigned __int16 **)((char *)this + v10 + 264), a2, v11);
    if ( v12 != *((_DWORD *)v11 + 1) || v13 != *((_BYTE *)v11 + 1) )
      *a5 = 1;
  }
}
