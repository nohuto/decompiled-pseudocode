/*
 * XREFs of ??0CDesktopThumbnailBase@@IEAA@XZ @ 0x1800AE620
 * Callers:
 *     ?Create@CDCompDesktopThumbnail@@SAJPEAPEAV1@@Z @ 0x18008F328 (-Create@CDCompDesktopThumbnail@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CVirtualDesktopThumbnail@@SAJPEAPEAV1@@Z @ 0x18008F728 (-Create@CVirtualDesktopThumbnail@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CDesktopThumbnail@@KAJPEAPEAV1@@Z @ 0x1800AE9E0 (-Create@CDesktopThumbnail@@KAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CVisual@@IEAA@XZ @ 0x180019DE0 (--0CVisual@@IEAA@XZ.c)
 */

CDesktopThumbnailBase *__fastcall CDesktopThumbnailBase::CDesktopThumbnailBase(CDesktopThumbnailBase *this)
{
  __int64 v1; // rcx
  CDesktopThumbnailBase *result; // rax

  CVisual::CVisual(this);
  *(_QWORD *)v1 = &CDesktopThumbnailBase::`vftable';
  *(_QWORD *)(v1 + 240) = 0LL;
  *(_QWORD *)(v1 + 248) = 0LL;
  *(_QWORD *)(v1 + 256) = 0LL;
  *(_DWORD *)(v1 + 264) = 0;
  result = (CDesktopThumbnailBase *)v1;
  *(_QWORD *)(v1 + 272) = -1LL;
  return result;
}
