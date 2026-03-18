/*
 * XREFs of ??0CCursorSizes@@QEAA@XZ @ 0x1C011B0FC
 * Callers:
 *     EditionInitGlobalCursorSizes @ 0x1C011B0B0 (EditionInitGlobalCursorSizes.c)
 * Callees:
 *     ?RefreshSizes@CCursorSizes@@QEAAXXZ @ 0x1C013C800 (-RefreshSizes@CCursorSizes@@QEAAXXZ.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

CCursorSizes *__fastcall CCursorSizes::CCursorSizes(CCursorSizes *this)
{
  *(_DWORD *)this = 32;
  *((_DWORD *)this + 1) = 32;
  memset((char *)this + 8, 0, 0x38uLL);
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 8) = &CPushLock::`vftable';
  CCursorSizes::RefreshSizes(this);
  return this;
}
