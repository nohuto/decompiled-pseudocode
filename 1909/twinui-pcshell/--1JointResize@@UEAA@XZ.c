/*
 * XREFs of ??1JointResize@@UEAA@XZ @ 0x1803EE9BC
 * Callers:
 *     ??_GJointResize@@UEAAPEAXI@Z @ 0x1803EED00 (--_GJointResize@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1SmartCookie@@QEAA@XZ @ 0x180126C40 (--1SmartCookie@@QEAA@XZ.c)
 *     ??1JointResize@JointResizeTelemetry@@QEAA@XZ @ 0x1803EEA88 (--1JointResize@JointResizeTelemetry@@QEAA@XZ.c)
 */

void __fastcall JointResize::~JointResize(JointResize *this)
{
  JointResizeTelemetry::JointResize::~JointResize((JointResize *)((char *)this + 440));
  SmartCookie::~SmartCookie((JointResize *)((char *)this + 296));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 27);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 26);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 25);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 24);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 23);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 22);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 21);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 20);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 19);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 18);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 17);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 16);
  *((_DWORD *)this + 31) = -1073741823;
  CImmersiveShellComponentWithSite::~CImmersiveShellComponentWithSite(this);
}
