/*
 * XREFs of ??_ECGameEntry@@UEAAPEAXI@Z @ 0x180040030
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180042F64 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800438AC (--3@YAXPEAX@Z.c)
 */

CGameEntry *__fastcall CGameEntry::`vector deleting destructor'(CGameEntry *this, const struct std::nothrow_t *a2)
{
  char v3; // di
  void *v4; // rcx
  const struct std::nothrow_t *v5; // rdx

  *(_QWORD *)this = &CGameEntry::`vftable';
  v3 = (char)a2;
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
