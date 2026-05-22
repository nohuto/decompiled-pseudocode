/*
 * XREFs of ?OpenHardwareKey@SpatialInteractionDevices@@YAJPEB_WPEAPEAUHKEY__@@@Z @ 0x1800D8670
 * Callers:
 *     ?OpenBestMatchingControllerKey@SpatialInteractionDevices@@YAJPEB_WGGGW4Handedness@1@PEAPEAUHKEY__@@PEA_N@Z @ 0x1800D84D4 (-OpenBestMatchingControllerKey@SpatialInteractionDevices@@YAJPEB_WGGGW4Handedness@1@PEAPEAUHKEY_.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x18006F254 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ?Initialize@DevicePropertyHelper@DevicePropertyHelpers@@QEAAJXZ @ 0x18009D194 (-Initialize@DevicePropertyHelper@DevicePropertyHelpers@@QEAAJXZ.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@QEB_W@Z @ 0x1800D7778 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@QEB_W@Z.c)
 */

__int64 __fastcall SpatialInteractionDevices::OpenHardwareKey(SpatialInteractionDevices *this, HKEY *a2, HKEY *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  unsigned __int64 v6; // r9
  __int64 v7; // rdx
  DEVINST v8; // ecx
  CONFIGRET v9; // eax
  signed int v10; // eax
  DEVNODE v12; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v13[4]; // [rsp+38h] [rbp-40h] BYREF
  DEVINST dnDevNode; // [rsp+58h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  *a2 = 0LL;
  v12 = 0;
  std::wstring::wstring(v13, (__int64)this);
  dnDevNode = 0;
  v4 = DevicePropertyHelpers::DevicePropertyHelper::Initialize(&v12);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v8 = dnDevNode;
    *a2 = 0LL;
    v9 = CM_Open_DevNode_Key(v8, 0x20019u, 0, 1u, a2, 0);
    if ( !v9 )
      goto LABEL_9;
    v10 = CM_MapCrToWin32Err(v9, 0x507u);
    v5 = v10;
    if ( v10 > 0 )
      v5 = (unsigned __int16)v10 | 0x80070000;
    if ( (v5 & 0x80000000) == 0 )
    {
LABEL_9:
      v5 = 0;
      goto LABEL_10;
    }
    v6 = v5;
    v7 = 77LL;
  }
  else
  {
    v6 = (unsigned int)v4;
    v7 = 76LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\inc\\spatialinteractiondevice.h",
    (const char *)v6);
LABEL_10:
  std::wstring::_Tidy_deallocate((__int64)v13);
  return v5;
}
