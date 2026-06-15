/*
 * XREFs of ?PerformLicenseCheckForSpatialAudioSubtype@AtmosCheck@@AEAAJPEBG0PEA_N@Z @ 0x18006AEB8
 * Callers:
 *     ?RefreshLicenseStatus@AtmosCheck@@QEAAJPEBG@Z @ 0x18013FDB8 (-RefreshLicenseStatus@AtmosCheck@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180019940 (--3@YAXPEAX@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A220 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeEndpointSpecificSpatialTechInfo@AtmosCheck@@CAXPEAUEndpointSpecificSpatialTechInfo@1@@Z @ 0x180053AF0 (-InitializeEndpointSpecificSpatialTechInfo@AtmosCheck@@CAXPEAUEndpointSpecificSpatialTechInfo@1@.c)
 *     ??$make_unique_nothrow@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wil@@YA?AV?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@_K@Z @ 0x180053B18 (--$make_unique_nothrow@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wil@@YA-AV-$unique_p.c)
 *     ?PerformLicenseCheckHelper@AtmosCheck@@AEAAXPEBGHPEAUEndpointSpecificSpatialTechInfo@1@PEA_N@Z @ 0x18006B01C (-PerformLicenseCheckHelper@AtmosCheck@@AEAAXPEBGHPEAUEndpointSpecificSpatialTechInfo@1@PEA_N@Z.c)
 *     ?UpdateEndpointUnderLock@AtmosCheck@@AEAAJPEBGHPEBUEndpointSpecificSpatialTechInfo@1@@Z @ 0x18006B4CC (-UpdateEndpointUnderLock@AtmosCheck@@AEAAJPEBGHPEBUEndpointSpecificSpatialTechInfo@1@@Z.c)
 *     ?BeginAppSvcCall@AtmosCheck@@AEAAJXZ @ 0x18013DFF0 (-BeginAppSvcCall@AtmosCheck@@AEAAJXZ.c)
 *     ?EndAppSvcCall@AtmosCheck@@AEAAJXZ @ 0x18013E38C (-EndAppSvcCall@AtmosCheck@@AEAAJXZ.c)
 *     ?MapSubtypeToCommonTechIndex@AtmosCheck@@AEBAHPEBG@Z @ 0x18013F700 (-MapSubtypeToCommonTechIndex@AtmosCheck@@AEBAHPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AtmosCheck::PerformLicenseCheckForSpatialAudioSubtype(
        AtmosCheck *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        bool *a4)
{
  int v8; // eax
  struct AtmosCheck::EndpointSpecificSpatialTechInfo *v9; // rbx
  unsigned int v10; // edi
  __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // edi
  int updated; // eax
  int v15; // eax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  struct AtmosCheck::EndpointSpecificSpatialTechInfo *v18; // [rsp+70h] [rbp+8h] BYREF

  *a4 = 0;
  v8 = AtmosCheck::BeginAppSvcCall(this);
  if ( v8 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x5BC,
      (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
      (const char *)(unsigned int)v8);
  wil::make_unique_nothrow<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>(&v18);
  v9 = v18;
  if ( !v18 )
  {
    v10 = -2147024882;
    v11 = 2147942414LL;
    v12 = 1476LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
      (const char *)v11);
    goto LABEL_12;
  }
  AtmosCheck::InitializeEndpointSpecificSpatialTechInfo(v18);
  v13 = AtmosCheck::MapSubtypeToCommonTechIndex(this, a3);
  if ( v13 == -1 )
  {
    v10 = -2147024809;
    v11 = 2147942487LL;
    v12 = 1482LL;
    goto LABEL_10;
  }
  AtmosCheck::PerformLicenseCheckHelper(this, a2, v13, v9, a4);
  if ( *a4 )
  {
    updated = AtmosCheck::UpdateEndpointUnderLock(this, a2, v13, v9);
    v10 = updated;
    if ( updated < 0 )
    {
      v11 = (unsigned int)updated;
      v12 = 1491LL;
      goto LABEL_10;
    }
  }
  v10 = 0;
LABEL_12:
  if ( v9 )
    operator delete(v9);
  v15 = AtmosCheck::EndAppSvcCall(this);
  if ( v15 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x5C0,
      (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
      (const char *)(unsigned int)v15);
  return v10;
}
