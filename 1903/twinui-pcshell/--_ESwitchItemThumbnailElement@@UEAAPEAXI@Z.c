/*
 * XREFs of ??_ESwitchItemThumbnailElement@@UEAAPEAXI@Z @ 0x1803624D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x180087AB0 (--3@YAXPEAX@Z.c)
 *     ??1CShrinkButtonElement@@QEAA@XZ @ 0x18035E2B8 (--1CShrinkButtonElement@@QEAA@XZ.c)
 */

SwitchItemThumbnailElement *__fastcall SwitchItemThumbnailElement::`vector deleting destructor'(
        SwitchItemThumbnailElement *this,
        char a2)
{
  __int64 *v4; // rcx

  v4 = (__int64 *)((char *)this + 600);
  if ( *v4 )
    *(_QWORD *)(*v4 + 16) = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v4);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 74);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 73);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 72);
  *((_DWORD *)this + 73) = -1073741823;
  CShrinkButtonElement::~CShrinkButtonElement(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
