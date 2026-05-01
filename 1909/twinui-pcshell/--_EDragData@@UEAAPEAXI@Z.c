/*
 * XREFs of ??_EDragData@@UEAAPEAXI@Z @ 0x1803EA060
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18008A5F0 (--3@YAXPEAX@Z.c)
 *     ??1OWNERSHIP_CHANGE_INFO@@QEAA@XZ @ 0x1800A9B50 (--1OWNERSHIP_CHANGE_INFO@@QEAA@XZ.c)
 */

DragData *__fastcall DragData::`vector deleting destructor'(DragData *this, char a2)
{
  void *v4; // rcx

  v4 = (void *)*((_QWORD *)this + 17);
  if ( v4 )
  {
    CoTaskMemFree(v4);
    *((_QWORD *)this + 17) = 0LL;
  }
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 6);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 5);
  *((_DWORD *)this + 9) = -1073741823;
  OWNERSHIP_CHANGE_INFO::~OWNERSHIP_CHANGE_INFO(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
