/*
 * XREFs of ??0CCursorSizes@@QEAA@XZ @ 0x1C010E06C
 * Callers:
 *     EditionInitGlobalCursorSizes @ 0x1C010E020 (EditionInitGlobalCursorSizes.c)
 * Callees:
 *     GetCursorSizeFromIndex @ 0x1C010E0C8 (GetCursorSizeFromIndex.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

CCursorSizes *__fastcall CCursorSizes::CCursorSizes(CCursorSizes *this)
{
  unsigned int v2; // edx
  int CursorSizeFromIndex; // eax
  int v4; // edx
  _DWORD *v5; // r8

  *(_DWORD *)this = 32;
  memset((char *)this + 4, 0, 0x38uLL);
  v2 = 0;
  *((_QWORD *)this + 8) = &CPushLock::`vftable';
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  do
  {
    CursorSizeFromIndex = GetCursorSizeFromIndex(v2);
    v2 = v4 + 1;
    *v5 = CursorSizeFromIndex;
  }
  while ( v2 < 5 );
  return this;
}
