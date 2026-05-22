/*
 * XREFs of ?CreateSpatialGraphDriverClient@@YAJPEAUHSTRING__@@PEAPEAUISpatialGraphDriverClient@Holographic@Internal@Windows@@@Z @ 0x180154660
 * Callers:
 *     ?OnDisplayChanged@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@PEAUIHolographicDisplay@Holographic@Graphics@4@_N@Z @ 0x1800E33DC (-OnDisplayChanged@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VSpatialGraphDriverClient@Holographic@Internal@Windows@@UISpatialGraphDriverClient@234@AEAPEAUHSTRING__@@USpatialGraphSettings@234@@Details@WRL@Microsoft@@YAJPEAPEAUISpatialGraphDriverClient@Holographic@Internal@Windows@@AEAPEAUHSTRING__@@$$QEAUSpatialGraphSettings@456@@Z @ 0x18014AF74 (--$MakeAndInitialize@VSpatialGraphDriverClient@Holographic@Internal@Windows@@UISpatialGraphDrive.c)
 *     SpatialGraphDriverClientHelpers::DefaultSpatialGraphSettings @ 0x1801546BC (SpatialGraphDriverClientHelpers--DefaultSpatialGraphSettings.c)
 */

__int64 __fastcall CreateSpatialGraphDriverClient(
        HSTRING a1,
        struct Windows::Internal::Holographic::ISpatialGraphDriverClient **a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HSTRING v7; // [rsp+30h] [rbp+8h] BYREF
  char v8; // [rsp+40h] [rbp+18h] BYREF

  v7 = a1;
  v8 = SpatialGraphDriverClientHelpers::DefaultSpatialGraphSettings(a1);
  v3 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::Holographic::SpatialGraphDriverClient,Windows::Internal::Holographic::ISpatialGraphDriverClient,HSTRING__ * &,Windows::Internal::Holographic::SpatialGraphSettings>(
         a2,
         &v7,
         &v8);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x8FA,
    (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
