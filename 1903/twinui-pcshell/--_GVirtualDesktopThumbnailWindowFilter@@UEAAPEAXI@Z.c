/*
 * XREFs of ??_GVirtualDesktopThumbnailWindowFilter@@UEAAPEAXI@Z @ 0x18034C620
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x180087AB0 (--3@YAXPEAX@Z.c)
 *     ??1VirtualDesktopNotificationListener@@QEAA@XZ @ 0x1802C440C (--1VirtualDesktopNotificationListener@@QEAA@XZ.c)
 */

VirtualDesktopThumbnailWindowFilter *__fastcall VirtualDesktopThumbnailWindowFilter::`scalar deleting destructor'(
        VirtualDesktopThumbnailWindowFilter *this,
        char a2)
{
  void *v4; // rcx
  unsigned __int64 v5; // rdi

  v4 = (void *)*((_QWORD *)this + 8);
  if ( v4 )
  {
    v5 = 0LL;
    if ( *((_QWORD *)this + 9) )
    {
      do
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(*((_QWORD *)this + 8) + 8 * v5++));
      while ( v5 < *((_QWORD *)this + 9) );
      v4 = (void *)*((_QWORD *)this + 8);
    }
    CoTaskMemFree(v4);
    *((_QWORD *)this + 8) = 0LL;
  }
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  VirtualDesktopNotificationListener::~VirtualDesktopNotificationListener((VirtualDesktopThumbnailWindowFilter *)((char *)this + 48));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 4);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 3);
  *((_DWORD *)this + 5) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
