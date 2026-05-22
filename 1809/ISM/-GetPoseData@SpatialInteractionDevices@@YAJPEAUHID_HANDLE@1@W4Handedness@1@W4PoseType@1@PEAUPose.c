/*
 * XREFs of ?GetPoseData@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@W4Handedness@1@W4PoseType@1@PEAUPoseData@1@PEA_N@Z @ 0x1800A2D4C
 * Callers:
 *     ?EndInitialize@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x1801253B0 (-EndInitialize@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000AC0C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OpenBestMatchingControllerKey@SpatialInteractionDevices@@YAJPEB_WGGGW4Handedness@1@PEAPEAUHKEY__@@PEA_N@Z @ 0x1800A2530 (-OpenBestMatchingControllerKey@SpatialInteractionDevices@@YAJPEB_WGGGW4Handedness@1@PEAPEAUHKEY_.c)
 *     _anonymous_namespace_::OpenPosesFallbackRootKey @ 0x1800A28D4 (_anonymous_namespace_--OpenPosesFallbackRootKey.c)
 *     _anonymous_namespace_::MakePoseValid @ 0x1800A2B50 (_anonymous_namespace_--MakePoseValid.c)
 *     _anonymous_namespace_::ReadPoseDataFromRegistry @ 0x1800A2C20 (_anonymous_namespace_--ReadPoseDataFromRegistry.c)
 *     _anonymous_namespace_::GetPoseSubKey @ 0x1800A2CFC (_anonymous_namespace_--GetPoseSubKey.c)
 *     SpatialInteractionDevices::AdjustOrientationAndScale @ 0x1800A67B4 (SpatialInteractionDevices--AdjustOrientationAndScale.c)
 *     SpatialInteractionDevices::ParseFeatureScaled_DirectX::XMFLOAT3_3_ @ 0x1800A7194 (SpatialInteractionDevices--ParseFeatureScaled_DirectX--XMFLOAT3_3_.c)
 *     SpatialInteractionDevices::ParseFeatureScaled_DirectX::XMFLOAT4_4_ @ 0x1800A7328 (SpatialInteractionDevices--ParseFeatureScaled_DirectX--XMFLOAT4_4_.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpatialInteractionDevices::GetPoseData(
        unsigned __int16 *a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        HKEY phkResult)
{
  HKEY v8; // r15
  _QWORD *v9; // rcx
  int v10; // eax
  char v11; // r12
  int v12; // r8d
  HKEY v13; // rbx
  const WCHAR *PoseSubKey; // rax
  bool v15; // al
  int v16; // ebx
  _BYTE *v17; // rsi
  int v18; // r8d
  void *v19; // rdx
  bool v20; // al
  const wchar_t *v21; // rax
  int v22; // eax
  HKEY v23; // rbx
  char v24; // al
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  HKEY hKey; // [rsp+80h] [rbp+30h] BYREF

  v8 = phkResult;
  *(_BYTE *)phkResult = 0;
  hKey = 0LL;
  v9 = a1 + 4;
  if ( v9[3] >= 8uLL )
    v9 = (_QWORD *)*v9;
  v10 = SpatialInteractionDevices::OpenBestMatchingControllerKey(v9, a1[22], a1[23], a1[24], a2, &hKey, &phkResult);
  v11 = 1;
  if ( v10 >= 0 )
  {
    phkResult = 0LL;
    v13 = hKey;
    PoseSubKey = anonymous_namespace_::GetPoseSubKey((char *)a3);
    if ( !RegOpenKeyExW(v13, PoseSubKey, 0, 0x20019u, &phkResult) )
    {
      anonymous_namespace_::ReadPoseDataFromRegistry(phkResult, a4);
      v15 = *(_BYTE *)(a4 + 29) || *(_BYTE *)(a4 + 28);
      *(_BYTE *)v8 = v15;
    }
    if ( phkResult )
      RegCloseKey(phkResult);
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x86,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractiondevice.cpp",
      (const char *)(unsigned int)v10);
  }
  if ( *(_BYTE *)v8 )
    goto LABEL_37;
  if ( a3 )
  {
    if ( a3 != 1 )
    {
      v16 = -2147024809;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x506,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
        (const char *)0x80070057LL);
      goto LABEL_38;
    }
    v17 = (_BYTE *)(a4 + 28);
    v16 = SpatialInteractionDevices::ParseFeatureScaled_DirectX::XMFLOAT3_3_(
            (_DWORD)a1,
            (unsigned int)&unk_180144E00,
            v12,
            a4,
            a4 + 28);
    if ( v16 < 0 )
      goto LABEL_21;
    v19 = &unk_180144E30;
    goto LABEL_19;
  }
  v17 = (_BYTE *)(a4 + 28);
  v16 = SpatialInteractionDevices::ParseFeatureScaled_DirectX::XMFLOAT3_3_(
          (_DWORD)a1,
          (unsigned int)&unk_180144D90,
          v12,
          a4,
          a4 + 28);
  if ( v16 >= 0 )
  {
    v19 = &unk_180144DC0;
LABEL_19:
    v16 = SpatialInteractionDevices::ParseFeatureScaled_DirectX::XMFLOAT4_4_(
            (_DWORD)a1,
            (_DWORD)v19,
            v18,
            (int)a4 + 12,
            a4 + 29);
    if ( v16 >= 0 )
    {
      SpatialInteractionDevices::AdjustOrientationAndScale(a4);
      v16 = 0;
    }
  }
LABEL_21:
  if ( v16 < 0 )
    goto LABEL_38;
  v20 = *(_BYTE *)(a4 + 29) || *v17;
  *(_BYTE *)v8 = v20;
  if ( !v20 )
  {
    phkResult = 0LL;
    v21 = anonymous_namespace_::GetPoseSubKey((char *)a3);
    v22 = anonymous_namespace_::OpenPosesFallbackRootKey(a1[22], a1[23], a1[24], (__int64)v21, &phkResult);
    v23 = phkResult;
    if ( v22 < 0 )
    {
      *v17 = 0;
      *(_BYTE *)(a4 + 29) = 0;
      v24 = 0;
    }
    else
    {
      anonymous_namespace_::ReadPoseDataFromRegistry(phkResult, a4);
      v24 = *(_BYTE *)(a4 + 29);
    }
    if ( !v24 && !*v17 )
      v11 = 0;
    *(_BYTE *)v8 = v11;
    if ( v23 )
      RegCloseKey(v23);
  }
LABEL_37:
  anonymous_namespace_::MakePoseValid(a4);
  v16 = 0;
LABEL_38:
  if ( hKey )
    RegCloseKey(hKey);
  return (unsigned int)v16;
}
