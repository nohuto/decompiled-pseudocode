/*
 * XREFs of ?RuntimeClassInitialize@SpatialGraphDriverClient@Holographic@Internal@Windows@@QEAAJPEAUHSTRING__@@USpatialGraphSettings@234@PEAW4SpatialGraphDriverProblem_SubStatusCode@@@Z @ 0x180111BB4
 * Callers:
 *     ?CreateSpatialGraphDriverClient@@YAJPEAUHSTRING__@@PEAPEAUISpatialGraphDriverClient@Holographic@Internal@Windows@@@Z @ 0x1801181F0 (-CreateSpatialGraphDriverClient@@YAJPEAUHSTRING__@@PEAPEAUISpatialGraphDriverClient@Holographic@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000AC0C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x180109F10 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     ?DriverCompatibilityDetermined_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@UHOLOGRAPHIC_DEVICE_SUPPORTED_DDI_LEVELS@@1_N@Z @ 0x18010CA08 (-DriverCompatibilityDetermined_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@UHOLOGRAPH.c)
 *     ?GetSupportedDDILevelsInternal@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJPEAUHOLOGRAPHIC_DEVICE_SUPPORTED_DDI_LEVELS@@@Z @ 0x1801159BC (-GetSupportedDDILevelsInternal@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJPEAUH.c)
 *     ?Create@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@SAJAEBU_GUID@@PEAUHSTRING__@@W4HandleWrapperDesiredAccess@234@_NPEAXPEAV?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@Z @ 0x1801162B8 (-Create@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@SAJAEBU_GUID@@PEAUHSTRING_.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::RuntimeClassInitialize(
        Windows::Internal::Holographic::SpatialGraphDriverClient *a1,
        __int64 a2,
        char a3,
        int *a4)
{
  _BYTE *v6; // r14
  _BYTE *v7; // rcx
  int v8; // eax
  unsigned int v9; // esi
  const char *v10; // r9
  __int64 result; // rax
  int SupportedDDILevelsInternal; // eax
  int v13; // eax
  __int64 v14; // rax
  _DWORD *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  _DWORD *v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v22; // [rsp+60h] [rbp+8h] BYREF

  *((_BYTE *)a1 + 96) = a3;
  if ( a4 )
    *a4 = 3;
  v6 = (char *)a1 + 104;
  v7 = (char *)a1 + 80;
  try
  {
    v8 = Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::Create(v7, a2, 0LL);
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
                                   a1,
                                   (struct HOLOGRAPHIC_DEVICE_SUPPORTED_DDI_LEVELS *)&v22);
    if ( SupportedDDILevelsInternal < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xE1,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
        (const char *)(unsigned int)SupportedDDILevelsInternal);
    if ( !HIDWORD(v22) )
    {
      v13 = 1;
LABEL_12:
      if ( a4 )
        *a4 = v13;
      v15 = (_DWORD *)*((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
      if ( v15 && *v15 )
      {
        HolographicDriverClientTrace::Instance();
        HolographicDriverClientTrace::DriverCompatibilityDetermined_(v16, 1, 0x800000001LL, v22, 0);
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF6,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
        (const char *)0x80070032LL);
      return 2147942450LL;
    }
    v14 = v22;
    if ( (unsigned int)v22 > 8 )
    {
      v13 = 2;
      goto LABEL_12;
    }
    if ( a4 )
      *a4 = 4;
    v17 = *(_QWORD *)v6;
    *(_QWORD *)(v17 + 160) = v14;
    *(_BYTE *)(v17 + 168) = 1;
    v18 = (_DWORD *)*((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
    if ( v18 && *v18 )
    {
      HolographicDriverClientTrace::Instance();
      HolographicDriverClientTrace::DriverCompatibilityDetermined_(v19, 1, 0x800000001LL, v22, 1);
    }
    v20 = *(_QWORD *)v6;
    *((_BYTE *)a1 + 121) = *(_DWORD *)(*(_QWORD *)v6 + 164LL) >= 4u;
    *((_BYTE *)a1 + 122) = *(_DWORD *)(v20 + 164) >= 2u;
    *((_BYTE *)a1 + 123) = *(_DWORD *)(v20 + 164) >= 3u;
    *((_BYTE *)a1 + 124) = *(_DWORD *)(v20 + 164) >= 8u;
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
