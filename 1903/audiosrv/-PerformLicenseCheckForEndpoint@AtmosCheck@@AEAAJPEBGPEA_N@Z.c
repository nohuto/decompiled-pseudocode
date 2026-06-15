/*
 * XREFs of ?PerformLicenseCheckForEndpoint@AtmosCheck@@AEAAJPEBGPEA_N@Z @ 0x18006ACF0
 * Callers:
 *     _lambda_7d6fb6ca628c3c64296120b05a8db9c8_::operator() @ 0x18006A448 (_lambda_7d6fb6ca628c3c64296120b05a8db9c8_--operator().c)
 *     ?PerformLicenseCheckForAllEndpoints@AtmosCheck@@AEAAJPEA_N@Z @ 0x18013F864 (-PerformLicenseCheckForAllEndpoints@AtmosCheck@@AEAAJPEA_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180019940 (--3@YAXPEAX@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A220 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeEndpointSpecificSpatialTechInfo@AtmosCheck@@CAXPEAUEndpointSpecificSpatialTechInfo@1@@Z @ 0x180053AF0 (-InitializeEndpointSpecificSpatialTechInfo@AtmosCheck@@CAXPEAUEndpointSpecificSpatialTechInfo@1@.c)
 *     ??$make_unique_nothrow@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wil@@YA?AV?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@_K@Z @ 0x180053B18 (--$make_unique_nothrow@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wil@@YA-AV-$unique_p.c)
 *     ?PerformLicenseCheckHelper@AtmosCheck@@AEAAXPEBGHPEAUEndpointSpecificSpatialTechInfo@1@PEA_N@Z @ 0x18006B01C (-PerformLicenseCheckHelper@AtmosCheck@@AEAAXPEBGHPEAUEndpointSpecificSpatialTechInfo@1@PEA_N@Z.c)
 *     ?UpdateEndpointUnderLock@AtmosCheck@@AEAAJPEBGAEAV?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@Z @ 0x18006B410 (-UpdateEndpointUnderLock@AtmosCheck@@AEAAJPEBGAEAV-$unique_ptr@$$BY0A@UEndpointSpecificSpatialTe.c)
 *     ?BeginAppSvcCall@AtmosCheck@@AEAAJXZ @ 0x18013DFF0 (-BeginAppSvcCall@AtmosCheck@@AEAAJXZ.c)
 *     ?EndAppSvcCall@AtmosCheck@@AEAAJXZ @ 0x18013E38C (-EndAppSvcCall@AtmosCheck@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AtmosCheck::PerformLicenseCheckForEndpoint(AtmosCheck *this, const unsigned __int16 *a2, bool *a3)
{
  int v6; // eax
  struct AtmosCheck::EndpointSpecificSpatialTechInfo *v7; // rbx
  unsigned int v8; // edi
  int updated; // eax
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct AtmosCheck::EndpointSpecificSpatialTechInfo *v13; // [rsp+60h] [rbp+8h] BYREF

  *a3 = 0;
  v6 = AtmosCheck::BeginAppSvcCall(this);
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x591,
      (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
      (const char *)(unsigned int)v6);
  wil::make_unique_nothrow<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>(&v13);
  v7 = v13;
  if ( v13 )
  {
    AtmosCheck::InitializeEndpointSpecificSpatialTechInfo(v13);
    AtmosCheck::PerformLicenseCheckHelper(this, a2, 0, v7, a3);
    AtmosCheck::PerformLicenseCheckHelper(this, a2, 1, v7, a3);
    AtmosCheck::PerformLicenseCheckHelper(this, a2, 2, v7, a3);
    AtmosCheck::PerformLicenseCheckHelper(this, a2, 3, v7, a3);
    AtmosCheck::PerformLicenseCheckHelper(this, a2, 4, v7, a3);
    AtmosCheck::PerformLicenseCheckHelper(this, a2, 5, v7, a3);
    updated = AtmosCheck::UpdateEndpointUnderLock(this, a2, &v13);
    v8 = updated;
    if ( updated >= 0 )
      v8 = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5A9,
        (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
        (const char *)(unsigned int)updated);
    v7 = v13;
  }
  else
  {
    v8 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x599,
      (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
      (const char *)0x8007000ELL);
  }
  if ( v7 )
    operator delete(v7);
  v10 = AtmosCheck::EndAppSvcCall(this);
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x595,
      (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
      (const char *)(unsigned int)v10);
  return v8;
}
