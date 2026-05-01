/*
 * XREFs of ??_EVirtualDesktopItemCollection@@UEAAPEAXI@Z @ 0x1803546D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x180087AB0 (--3@YAXPEAX@Z.c)
 *     ??1VirtualDesktopNotificationListener@@QEAA@XZ @ 0x1802C440C (--1VirtualDesktopNotificationListener@@QEAA@XZ.c)
 *     ??1ObservableObjectArray@@QEAA@XZ @ 0x180352C50 (--1ObservableObjectArray@@QEAA@XZ.c)
 */

VirtualDesktopItemCollection *__fastcall VirtualDesktopItemCollection::`vector deleting destructor'(
        VirtualDesktopItemCollection *this,
        char a2)
{
  VirtualDesktopNotificationListener::~VirtualDesktopNotificationListener((VirtualDesktopItemCollection *)((char *)this + 176));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 21);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 20);
  *((_DWORD *)this + 39) = -1073741823;
  ObservableObjectArray::~ObservableObjectArray(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
