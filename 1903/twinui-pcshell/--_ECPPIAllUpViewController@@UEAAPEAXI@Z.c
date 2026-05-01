/*
 * XREFs of ??_ECPPIAllUpViewController@@UEAAPEAXI@Z @ 0x18035F9B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x180087AB0 (--3@YAXPEAX@Z.c)
 *     ??1CMultitaskingViewControllerBase@@QEAA@XZ @ 0x1803586E4 (--1CMultitaskingViewControllerBase@@QEAA@XZ.c)
 */

CPPIAllUpViewController *__fastcall CPPIAllUpViewController::`vector deleting destructor'(
        CPPIAllUpViewController *this,
        char a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 16);
  *((_DWORD *)this + 31) = -1073741823;
  CMultitaskingViewControllerBase::~CMultitaskingViewControllerBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
