/*
 * XREFs of ??_ECPPIAllUpViewHost@@UEAAPEAXI@Z @ 0x1803513C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x180087AB0 (--3@YAXPEAX@Z.c)
 *     ??1critical_section@wil@@QEAA@XZ @ 0x180100274 (--1critical_section@wil@@QEAA@XZ.c)
 *     ??1MonitorEventListener@@QEAA@XZ @ 0x1802C41EC (--1MonitorEventListener@@QEAA@XZ.c)
 */

CPPIAllUpViewHost *__fastcall CPPIAllUpViewHost::`vector deleting destructor'(CPPIAllUpViewHost *this, char a2)
{
  __int64 *v4; // rcx

  v4 = (__int64 *)((char *)this + 168);
  if ( *v4 )
    *(_QWORD *)(*v4 + 16) = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v4);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 20);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 19);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 18);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 17);
  *((_DWORD *)this + 33) = -1073741823;
  MonitorEventListener::~MonitorEventListener((CPPIAllUpViewHost *)((char *)this + 96));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 11);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 10);
  wil::critical_section::~critical_section((LPCRITICAL_SECTION)((char *)this + 24));
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
