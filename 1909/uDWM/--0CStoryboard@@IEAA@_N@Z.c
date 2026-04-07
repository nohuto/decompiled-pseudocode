/*
 * XREFs of ??0CStoryboard@@IEAA@_N@Z @ 0x18003B7FC
 * Callers:
 *     ??0CFlyoutPopup@@IEAA@XZ @ 0x180001794 (--0CFlyoutPopup@@IEAA@XZ.c)
 *     ?Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z @ 0x18002ECF4 (-Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z.c)
 *     ??0CSlide@@IEAA@XZ @ 0x18003B7C8 (--0CSlide@@IEAA@XZ.c)
 *     ??0CFade@@IEAA@XZ @ 0x18004DBF4 (--0CFade@@IEAA@XZ.c)
 *     ??0CCrossFade@@QEAA@XZ @ 0x1800A6EA4 (--0CCrossFade@@QEAA@XZ.c)
 *     ??0CGroupingStoryboard@@QEAA@_N@Z @ 0x1800A6F00 (--0CGroupingStoryboard@@QEAA@_N@Z.c)
 *     ??0CVirtualDesktopSwitch@@QEAA@XZ @ 0x1800A6FB4 (--0CVirtualDesktopSwitch@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

CStoryboard *__fastcall CStoryboard::CStoryboard(CStoryboard *this, char a2)
{
  *((_DWORD *)this + 7) = -1;
  *(_QWORD *)this = &CFade::`vftable'{for `CBaseObject'};
  *((_DWORD *)this + 2) = 1;
  *((_QWORD *)this + 2) = &CSlide::`vftable'{for `IAnimationListener'};
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 16) = -1;
  *((_DWORD *)this + 18) = -1;
  *((GUID *)this + 3) = GUID_NULL;
  *((_BYTE *)this + 68) = a2;
  *((_BYTE *)this + 76) = 0;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 28) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  return this;
}
