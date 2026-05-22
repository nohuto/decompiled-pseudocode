/*
 * XREFs of ?GetPoseData@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@W4Handedness@1@W4PoseType@1@PEAUPoseData@1@PEA_N@Z @ 0x1800D8088
 * Callers:
 *     ?GetPosesOffsets@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAJXZ @ 0x180165E7C (-GetPosesOffsets@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAJX.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800563B0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _anonymous_namespace_::GetPoseSubKey @ 0x1800D8270 (_anonymous_namespace_--GetPoseSubKey.c)
 *     _anonymous_namespace_::MakePoseValid @ 0x1800D8474 (_anonymous_namespace_--MakePoseValid.c)
 *     ?OpenBestMatchingControllerKey@SpatialInteractionDevices@@YAJPEB_WGGGW4Handedness@1@PEAPEAUHKEY__@@PEA_N@Z @ 0x1800D84D4 (-OpenBestMatchingControllerKey@SpatialInteractionDevices@@YAJPEB_WGGGW4Handedness@1@PEAPEAUHKEY_.c)
 *     _anonymous_namespace_::OpenPosesFallbackRootKey @ 0x1800D8758 (_anonymous_namespace_--OpenPosesFallbackRootKey.c)
 *     ?ReadPoseDataFromRegistry@SpatialInteractionDevices@@YAJPEAUHKEY__@@PEAUPoseData@1@@Z @ 0x1800D8B48 (-ReadPoseDataFromRegistry@SpatialInteractionDevices@@YAJPEAUHKEY__@@PEAUPoseData@1@@Z.c)
 *     ?GetPoseOffset@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@W4PoseType@1@PEAUPoseData@1@@Z @ 0x1800DC4BC (-GetPoseOffset@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@W4PoseType@1@PEAUPoseData@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpatialInteractionDevices::GetPoseData(
        unsigned __int16 *a1,
        int a2,
        unsigned int a3,
        HKEY a4,
        HKEY phkResult)
{
  HKEY v8; // rsi
  _QWORD *v9; // rcx
  int v10; // eax
  char v11; // r14
  HKEY v12; // rbx
  const WCHAR *PoseSubKey; // rax
  struct SpatialInteractionDevices::PoseData *v14; // r8
  char v15; // al
  int PoseOffset; // ebx
  char v17; // al
  int v18; // eax
  int v19; // eax
  struct SpatialInteractionDevices::PoseData *v20; // r8
  HKEY v21; // rbx
  char v22; // al
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
    v12 = hKey;
    PoseSubKey = (const WCHAR *)anonymous_namespace_::GetPoseSubKey((char *)a3);
    if ( !RegOpenKeyExW(v12, PoseSubKey, 0, 0x20019u, &phkResult) )
    {
      SpatialInteractionDevices::ReadPoseDataFromRegistry((SpatialInteractionDevices *)phkResult, a4, v14);
      if ( *((_BYTE *)a4 + 29) || (v15 = 0, *((_BYTE *)a4 + 28)) )
        v15 = 1;
      *(_BYTE *)v8 = v15;
    }
    if ( phkResult )
      RegCloseKey(phkResult);
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      138LL,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractiondevice.cpp",
      (const char *)(unsigned int)v10);
  }
  if ( !*(_BYTE *)v8 )
  {
    PoseOffset = SpatialInteractionDevices::GetPoseOffset(a1, a3, a4);
    if ( PoseOffset < 0 )
      goto LABEL_27;
    if ( *((_BYTE *)a4 + 29) || (v17 = 0, *((_BYTE *)a4 + 28)) )
      v17 = 1;
    *(_BYTE *)v8 = v17;
    if ( !v17 )
    {
      phkResult = 0LL;
      v18 = anonymous_namespace_::GetPoseSubKey((char *)a3);
      v19 = anonymous_namespace_::OpenPosesFallbackRootKey(a1[22], a1[23], a1[24], v18, (__int64)&phkResult);
      v21 = phkResult;
      if ( v19 < 0 )
      {
        *((_WORD *)a4 + 14) = 0;
        v22 = 0;
      }
      else
      {
        SpatialInteractionDevices::ReadPoseDataFromRegistry((SpatialInteractionDevices *)phkResult, a4, v20);
        v22 = *((_BYTE *)a4 + 29);
      }
      if ( !v22 && !*((_BYTE *)a4 + 28) )
        v11 = 0;
      *(_BYTE *)v8 = v11;
      if ( v21 )
        RegCloseKey(v21);
    }
  }
  anonymous_namespace_::MakePoseValid(a4);
  PoseOffset = 0;
LABEL_27:
  if ( hKey )
    RegCloseKey(hKey);
  return (unsigned int)PoseOffset;
}
