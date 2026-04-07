/*
 * XREFs of ?ReleaseFont@CTextCache@@AEAAXXZ @ 0x180086810
 * Callers:
 *     ?SetFont@CTextCache@@QEAAJAEBUtagLOGFONTW@@@Z @ 0x18000F854 (-SetFont@CTextCache@@QEAAJAEBUtagLOGFONTW@@@Z.c)
 *     ??1CTextCache@@UEAA@XZ @ 0x180086774 (--1CTextCache@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CTextCache::ReleaseFont(CTextCache *this)
{
  SelectObject(*((HDC *)this + 13), *((HGDIOBJ *)this + 15));
  DeleteObject(*((HGDIOBJ *)this + 14));
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
}
