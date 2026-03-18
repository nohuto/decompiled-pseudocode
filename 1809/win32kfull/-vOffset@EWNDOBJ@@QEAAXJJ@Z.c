/*
 * XREFs of ?vOffset@EWNDOBJ@@QEAAXJJ@Z @ 0x1C026B0C0
 * Callers:
 *     ??0UNDODESKTOPCOORD@@QEAA@PEAVEWNDOBJ@@PEAU_SPRITESTATE@@@Z @ 0x1C026197C (--0UNDODESKTOPCOORD@@QEAA@PEAVEWNDOBJ@@PEAU_SPRITESTATE@@@Z.c)
 *     ??1UNDODESKTOPCOORD@@QEAA@XZ @ 0x1C0261AF4 (--1UNDODESKTOPCOORD@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall EWNDOBJ::vOffset(EWNDOBJ *this, LONG a2, LONG a3)
{
  LONG x; // ecx
  LONG y; // eax
  struct _POINTL v6; // [rsp+48h] [rbp+20h] BYREF

  if ( a2 || a3 )
  {
    v6.x = a2;
    v6.y = a3;
    RGNOBJ::bOffset((EWNDOBJ *)((char *)this + 56), &v6);
    x = v6.x;
    y = v6.y;
    *((_DWORD *)this + 1) += v6.x;
    *((_DWORD *)this + 3) += x;
    *((_DWORD *)this + 2) += y;
    *((_DWORD *)this + 4) += y;
    *((_DWORD *)this + 8) += x;
    *((_DWORD *)this + 10) += x;
    *((_DWORD *)this + 9) += y;
    *((_DWORD *)this + 11) += y;
  }
}
