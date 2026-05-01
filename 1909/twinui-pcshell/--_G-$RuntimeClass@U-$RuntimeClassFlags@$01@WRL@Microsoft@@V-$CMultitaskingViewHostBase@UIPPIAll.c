/*
 * XREFs of ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@V?$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@UIExternalDragHost@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180370B30
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18008A5F0 (--3@YAXPEAX@Z.c)
 *     ??1critical_section@wil@@QEAA@XZ @ 0x18011F294 (--1critical_section@wil@@QEAA@XZ.c)
 *     ??1MonitorEventListener@@QEAA@XZ @ 0x1802E371C (--1MonitorEventListener@@QEAA@XZ.c)
 */

char *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewHostBase<IPPIAllUpViewHost>,IExternalDragHost>::`scalar deleting destructor'(
        char *Block,
        char a2)
{
  *((_DWORD *)Block + 33) = -1073741823;
  MonitorEventListener::~MonitorEventListener((MonitorEventListener *)(Block + 96));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)Block + 11);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)Block + 10);
  wil::critical_section::~critical_section((LPCRITICAL_SECTION)(Block + 24));
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
