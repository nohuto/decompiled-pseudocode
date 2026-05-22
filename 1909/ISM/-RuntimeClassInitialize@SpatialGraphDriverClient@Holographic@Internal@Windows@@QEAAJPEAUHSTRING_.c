/*
 * XREFs of ?RuntimeClassInitialize@SpatialGraphDriverClient@Holographic@Internal@Windows@@QEAAJPEAUHSTRING__@@USpatialGraphSettings@234@PEAW4SpatialGraphDriverProblem_SubStatusCode@@@Z @ 0x18015CF58
 * Callers:
 *     ??$MakeAndInitialize@VSpatialGraphDriverClient@Holographic@Internal@Windows@@UISpatialGraphDriverClient@234@AEAPEAUHSTRING__@@USpatialGraphSettings@234@@Details@WRL@Microsoft@@YAJPEAPEAUISpatialGraphDriverClient@Holographic@Internal@Windows@@AEAPEAUHSTRING__@@$$QEAUSpatialGraphSettings@456@@Z @ 0x18014AF64 (--$MakeAndInitialize@VSpatialGraphDriverClient@Holographic@Internal@Windows@@UISpatialGraphDrive.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800563B0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$DriverCompatibilityDetermined@W4TraceDriverType@@AEBUHOLOGRAPHIC_DEVICE_SUPPORTED_DDI_LEVELS@@AEAU2@_N@HolographicDriverClientTrace@@SAX$$QEAW4TraceDriverType@@AEBUHOLOGRAPHIC_DEVICE_SUPPORTED_DDI_LEVELS@@AEAU2@$$QEA_N@Z @ 0x18014A108 (--$DriverCompatibilityDetermined@W4TraceDriverType@@AEBUHOLOGRAPHIC_DEVICE_SUPPORTED_DDI_LEVELS@.c)
 *     ?Create@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@SAJAEBU_GUID@@PEAUHSTRING__@@W4HandleWrapperDesiredAccess@234@_NPEAXPEAV?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@Z @ 0x180153AE8 (-Create@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@SAJAEBU_GUID@@PEAUHSTRING_.c)
 *     ?GetSupportedDDILevelsInternal@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJPEAUHOLOGRAPHIC_DEVICE_SUPPORTED_DDI_LEVELS@@@Z @ 0x1801582D0 (-GetSupportedDDILevelsInternal@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJPEAUH.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::RuntimeClassInitialize(
        __int64 a1,
        HSTRING a2,
        char a3,
        int *a4)
{
  _QWORD *v6; // r14
  __int128 *v7; // rcx
  int v8; // eax
  unsigned int v9; // esi
  const char *v10; // r9
  __int64 result; // rax
  int SupportedDDILevelsInternal; // eax
  unsigned __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v19; // [rsp+60h] [rbp+8h] BYREF
  int v20; // [rsp+70h] [rbp+18h] BYREF
  __int64 v21; // [rsp+78h] [rbp+20h] BYREF

  *(_BYTE *)(a1 + 96) = a3;
  if ( a4 )
    *a4 = 3;
  v6 = (_QWORD *)(a1 + 104);
  v7 = (__int128 *)(a1 + 80);
  try
  {
    v8 = Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::Create(v7, a2, 0, 1, 0LL, v6);
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xDD,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
        (const char *)(unsigned int)v8);
      return v9;
    }
    SupportedDDILevelsInternal = Windows::Internal::Holographic::SpatialGraphDriverClient::GetSupportedDDILevelsInternal(
                                   (Windows::Internal::Holographic::HolographicDriverHandleWrapper **)a1,
                                   (struct HOLOGRAPHIC_DEVICE_SUPPORTED_DDI_LEVELS *)&v21);
    if ( SupportedDDILevelsInternal < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        225LL,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
        (const char *)(unsigned int)SupportedDDILevelsInternal);
    if ( !HIDWORD(v21) )
    {
      v14 = 1;
LABEL_12:
      if ( a4 )
        *a4 = v14;
      LOBYTE(v20) = 0;
      v19 = 1;
      HolographicDriverClientTrace::DriverCompatibilityDetermined<enum TraceDriverType,HOLOGRAPHIC_DEVICE_SUPPORTED_DDI_LEVELS const &,HOLOGRAPHIC_DEVICE_SUPPORTED_DDI_LEVELS &,bool>(
        &v19,
        v13,
        &v21,
        (char *)&v20);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF6,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
        (const char *)0x80070032LL);
      return 2147942450LL;
    }
    v15 = v21;
    if ( (unsigned int)v21 > 8 )
    {
      v14 = 2;
      goto LABEL_12;
    }
    if ( a4 )
      *a4 = 4;
    v16 = *v6;
    *(_QWORD *)(v16 + 160) = v15;
    *(_BYTE *)(v16 + 168) = 1;
    LOBYTE(v20) = 1;
    v19 = 1;
    HolographicDriverClientTrace::DriverCompatibilityDetermined<enum TraceDriverType,HOLOGRAPHIC_DEVICE_SUPPORTED_DDI_LEVELS const &,HOLOGRAPHIC_DEVICE_SUPPORTED_DDI_LEVELS &,bool>(
      &v19,
      v13,
      &v21,
      (char *)&v20);
    v17 = *v6;
    *(_BYTE *)(a1 + 121) = *(_DWORD *)(*v6 + 164LL) >= 4u;
    *(_BYTE *)(a1 + 122) = *(_DWORD *)(v17 + 164) >= 2u;
    *(_BYTE *)(a1 + 123) = *(_DWORD *)(v17 + 164) >= 3u;
    *(_BYTE *)(a1 + 124) = *(_DWORD *)(v17 + 164) >= 8u;
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xFF,
                           (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
                           v10);
  }
  return result;
}
