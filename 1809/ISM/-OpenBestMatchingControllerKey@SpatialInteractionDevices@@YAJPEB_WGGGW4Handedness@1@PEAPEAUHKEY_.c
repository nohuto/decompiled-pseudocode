/*
 * XREFs of ?OpenBestMatchingControllerKey@SpatialInteractionDevices@@YAJPEB_WGGGW4Handedness@1@PEAPEAUHKEY__@@PEA_N@Z @ 0x1800A2530
 * Callers:
 *     ?GetPoseData@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@W4Handedness@1@W4PoseType@1@PEAUPoseData@1@PEA_N@Z @ 0x1800A2D4C (-GetPoseData@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@W4Handedness@1@W4PoseType@1@PEAUPose.c)
 *     ?ReadHapticsEngineParameters@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAXPEA_N0@Z @ 0x1801282CC (-ReadHapticsEngineParameters@SpatialInteractionSourceController@SpatialInteractions@Internal@Win.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1800278A4 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?Initialize@DevicePropertyHelper@DevicePropertyHelpers@@QEAAJXZ @ 0x18005F088 (-Initialize@DevicePropertyHelper@DevicePropertyHelpers@@QEAAJXZ.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@QEB_W@Z @ 0x1800A3268 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@QEB_W@Z.c)
 *     ??$swprintf_s@$0EA@@@YAHAEAY0EA@_WPEB_WZZ @ 0x1800A32E8 (--$swprintf_s@$0EA@@@YAHAEAY0EA@_WPEB_WZZ.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpatialInteractionDevices::OpenBestMatchingControllerKey(
        void *a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        int a5,
        PHKEY phkResult,
        _BYTE *a7)
{
  int v10; // eax
  signed int v11; // ebx
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  CONFIGRET v14; // eax
  signed int v15; // eax
  const wchar_t *v16; // rbx
  HKEY v17; // rcx
  HKEY v18; // rax
  PHKEY phkDevice; // [rsp+20h] [rbp-E0h]
  HKEY hKey[2]; // [rsp+30h] [rbp-D0h] BYREF
  DEVNODE v22; // [rsp+40h] [rbp-C0h] BYREF
  _WORD v23[8]; // [rsp+48h] [rbp-B8h] BYREF
  __m128i si128; // [rsp+58h] [rbp-A8h]
  DEVINST dnDevNode; // [rsp+68h] [rbp-98h]
  WCHAR SubKey[64]; // [rsp+70h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+48h]

  hKey[1] = HKEY_DYN_DATA|0x7FFFFFF8LL;
  *phkResult = 0LL;
  *a7 = 0;
  hKey[0] = 0LL;
  v22 = 0;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v23[0] = 0;
  std::wstring::assign(v23, a1);
  dnDevNode = 0;
  v10 = DevicePropertyHelpers::DevicePropertyHelper::Initialize(&v22);
  v11 = v10;
  if ( v10 < 0 )
  {
    v12 = (unsigned int)v10;
    v13 = 76LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\inc\\spatialinteractiondevice.h",
      (const char *)v12);
    goto LABEL_10;
  }
  hKey[0] = 0LL;
  v14 = CM_Open_DevNode_Key(dnDevNode, 0x20019u, 0, 1u, hKey, 0);
  if ( v14 )
  {
    v15 = CM_MapCrToWin32Err(v14, 0x507u);
    v11 = (unsigned __int16)v15 | 0x80070000;
    if ( v15 <= 0 )
      v11 = v15;
    if ( v11 < 0 )
    {
      v12 = (unsigned int)v11;
      v13 = 77LL;
      goto LABEL_3;
    }
  }
  v11 = 0;
LABEL_10:
  std::wstring::~wstring((__int64)v23);
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x65,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\inc\\spatialinteractiondevice.h",
      (const char *)(unsigned int)v11);
LABEL_20:
    v17 = hKey[0];
    goto LABEL_22;
  }
  if ( a5 == 1 )
  {
    v16 = L"Left";
  }
  else if ( a5 == 2 )
  {
    v16 = L"Right";
  }
  else
  {
    v16 = L"Unspecified";
  }
  memset_0(SubKey, 0, sizeof(SubKey));
  LODWORD(phkDevice) = a4;
  swprintf_s<64>(SubKey, L"%04x_%04x_%04x_%ws", a2, a3, phkDevice, v16);
  if ( !RegOpenKeyExW(hKey[0], SubKey, 0, 0x20019u, phkResult)
    || (swprintf_s<64>(SubKey, L"%04x_%04x_%ws", a2, a3, v16), !RegOpenKeyExW(hKey[0], SubKey, 0, 0x20019u, phkResult)) )
  {
    v11 = 0;
    *a7 = 1;
    goto LABEL_20;
  }
  v18 = hKey[0];
  v17 = 0LL;
  hKey[0] = 0LL;
  *phkResult = v18;
  v11 = 0;
LABEL_22:
  if ( v17 )
    RegCloseKey(v17);
  return (unsigned int)v11;
}
