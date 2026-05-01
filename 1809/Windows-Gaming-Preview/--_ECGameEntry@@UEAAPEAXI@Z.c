/*
 * XREFs of ??_ECGameEntry@@UEAAPEAXI@Z @ 0x18003FB10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180042A84 (--3@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18004339C (--3@YAXPEAX@Z.c)
 */

CGameEntry *__fastcall CGameEntry::`vector deleting destructor'(CGameEntry *this, unsigned __int64 a2)
{
  char v3; // di
  void *v4; // rcx
  unsigned __int64 v5; // rdx

  *(_QWORD *)this = &CGameEntry::`vftable';
  v3 = a2;
  v4 = (void *)*((_QWORD *)this + 9);
  if ( v4 )
    operator delete(v4, a2);
  operator delete(*((void **)this + 8), a2);
  operator delete(*((void **)this + 7), v5);
  *((_DWORD *)this + 3) = -1073741823;
  if ( (v3 & 1) != 0 )
    operator delete(this);
  return this;
}
