/*
 * XREFs of ?ReleaseFont@CTextCache@@AEAAXXZ @ 0x1800402C8
 * Callers:
 *     ?SetFont@CTextCache@@QEAAJAEBUtagLOGFONTW@@@Z @ 0x180024D9C (-SetFont@CTextCache@@QEAAJAEBUtagLOGFONTW@@@Z.c)
 *     ??1CTextCache@@UEAA@XZ @ 0x18008C58C (--1CTextCache@@UEAA@XZ.c)
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
